#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017F448
// Address: 0x17f448 - 0x17fa40
void sub_0017F448_0x17f448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F448_0x17f448");
#endif

    ctx->pc = 0x17f448u;

    // 0x17f448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17f448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f44c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17f450: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17f450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17f454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f458: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17f458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17f45c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17f45cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f464: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x17f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17f468: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x17f468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17f46c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x17f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x17f470: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17F470u;
    {
        const bool branch_taken_0x17f470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F470u;
            // 0x17f474: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f470) {
            ctx->pc = 0x17F480u;
            goto label_17f480;
        }
    }
    ctx->pc = 0x17F478u;
    // 0x17f478: 0xc08e68c  jal         func_239A30
    ctx->pc = 0x17F478u;
    SET_GPR_U32(ctx, 31, 0x17F480u);
    ctx->pc = 0x239A30u;
    if (runtime->hasFunction(0x239A30u)) {
        auto targetFn = runtime->lookupFunction(0x239A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F480u; }
        if (ctx->pc != 0x17F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239a30_0x239af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F480u; }
        if (ctx->pc != 0x17F480u) { return; }
    }
    ctx->pc = 0x17F480u;
label_17f480:
    // 0x17f480: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x17f480u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17f484: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x17f484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17f48c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17F48Cu;
    {
        const bool branch_taken_0x17f48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F48Cu;
            // 0x17f490: 0xa6220020  sh          $v0, 0x20($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f48c) {
            ctx->pc = 0x17F4B0u;
            goto label_17f4b0;
        }
    }
    ctx->pc = 0x17F494u;
    // 0x17f494: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f498: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17f498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17f49c: 0x8c44c79c  lw          $a0, -0x3864($v0)
    ctx->pc = 0x17f49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952860)));
    // 0x17f4a0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F4A0u;
    SET_GPR_U32(ctx, 31, 0x17F4A8u);
    ctx->pc = 0x17F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4A0u;
            // 0x17f4a4: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4A8u; }
        if (ctx->pc != 0x17F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4A8u; }
        if (ctx->pc != 0x17F4A8u) { return; }
    }
    ctx->pc = 0x17F4A8u;
    // 0x17f4a8: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x17f4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x17f4ac: 0x0  nop
    ctx->pc = 0x17f4acu;
    // NOP
label_17f4b0:
    // 0x17f4b0: 0x96240020  lhu         $a0, 0x20($s1)
    ctx->pc = 0x17f4b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17f4b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x17f4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17f4b8: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F4B8u;
    {
        const bool branch_taken_0x17f4b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4B8u;
            // 0x17f4bc: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4b8) {
            ctx->pc = 0x17F518u;
            goto label_17f518;
        }
    }
    ctx->pc = 0x17F4C0u;
    // 0x17f4c0: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f4c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f4c4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x17f4c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x17f4c8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F4C8u;
    {
        const bool branch_taken_0x17f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4C8u;
            // 0x17f4cc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4c8) {
            ctx->pc = 0x17F518u;
            goto label_17f518;
        }
    }
    ctx->pc = 0x17F4D0u;
    // 0x17f4d0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F4D0u;
    SET_GPR_U32(ctx, 31, 0x17F4D8u);
    ctx->pc = 0x17F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4D0u;
            // 0x17f4d4: 0x8c44c7a0  lw          $a0, -0x3860($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4D8u; }
        if (ctx->pc != 0x17F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4D8u; }
        if (ctx->pc != 0x17F4D8u) { return; }
    }
    ctx->pc = 0x17F4D8u;
    // 0x17f4d8: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f4dc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17f4e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f4e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4e4: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x17f4e4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f4e8: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x17f4e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17f4ec: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x17f4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17f4f0: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x17f4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f4f4: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x17f4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f4f8: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x17f4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f4fc: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x17f4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f500: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x17f500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f504: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x17f504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f508: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f50c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17f50cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f510: 0x1000013a  b           . + 4 + (0x13A << 2)
    ctx->pc = 0x17F510u;
    {
        const bool branch_taken_0x17f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F510u;
            // 0x17f514: 0x8c44c79c  lw          $a0, -0x3864($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952860)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f510) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F518u;
label_17f518:
    // 0x17f518: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17f51c: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x17F51Cu;
    {
        const bool branch_taken_0x17f51c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F51Cu;
            // 0x17f520: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f51c) {
            ctx->pc = 0x17F59Cu;
            goto label_17f59c;
        }
    }
    ctx->pc = 0x17F524u;
    // 0x17f524: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f528: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x17f528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17f52c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x17F52Cu;
    {
        const bool branch_taken_0x17f52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F52Cu;
            // 0x17f530: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f52c) {
            ctx->pc = 0x17F59Cu;
            goto label_17f59c;
        }
    }
    ctx->pc = 0x17F534u;
    // 0x17f534: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F534u;
    SET_GPR_U32(ctx, 31, 0x17F53Cu);
    ctx->pc = 0x17F538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F534u;
            // 0x17f538: 0x8c44c7a4  lw          $a0, -0x385C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F53Cu; }
        if (ctx->pc != 0x17F53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F53Cu; }
        if (ctx->pc != 0x17F53Cu) { return; }
    }
    ctx->pc = 0x17F53Cu;
    // 0x17f53c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f540: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x17f540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17f544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f548: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x17f548u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f54c: 0x68870007  ldl         $a3, 0x7($a0)
    ctx->pc = 0x17f54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f550: 0x6c870000  ldr         $a3, 0x0($a0)
    ctx->pc = 0x17f550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f554: 0x6888000f  ldl         $t0, 0xF($a0)
    ctx->pc = 0x17f554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f558: 0x6c880008  ldr         $t0, 0x8($a0)
    ctx->pc = 0x17f558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f55c: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x17f55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17f560: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x17f560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17f564: 0x6883001f  ldl         $v1, 0x1F($a0)
    ctx->pc = 0x17f564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f568: 0x6c830018  ldr         $v1, 0x18($a0)
    ctx->pc = 0x17f568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f56c: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x17f56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f570: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x17f570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f574: 0xb208000f  sdl         $t0, 0xF($s0)
    ctx->pc = 0x17f574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f578: 0xb6080008  sdr         $t0, 0x8($s0)
    ctx->pc = 0x17f578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f57c: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x17f57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f580: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x17f580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f584: 0xb203001f  sdl         $v1, 0x1F($s0)
    ctx->pc = 0x17f584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f588: 0xb6030018  sdr         $v1, 0x18($s0)
    ctx->pc = 0x17f588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f58c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f590: 0x8c44c7a0  lw          $a0, -0x3860($v0)
    ctx->pc = 0x17f590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952864)));
    // 0x17f594: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x17F594u;
    {
        const bool branch_taken_0x17f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F594u;
            // 0x17f598: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f594) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F59Cu;
label_17f59c:
    // 0x17f59c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x17f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17f5a0: 0x1462002f  bne         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x17F5A0u;
    {
        const bool branch_taken_0x17f5a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5A0u;
            // 0x17f5a4: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5a0) {
            ctx->pc = 0x17F660u;
            goto label_17f660;
        }
    }
    ctx->pc = 0x17F5A8u;
    // 0x17f5a8: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f5a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f5ac: 0x2c420020  sltiu       $v0, $v0, 0x20
    ctx->pc = 0x17f5acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x17f5b0: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x17F5B0u;
    {
        const bool branch_taken_0x17f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5B0u;
            // 0x17f5b4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f5b0) {
            ctx->pc = 0x17F660u;
            goto label_17f660;
        }
    }
    ctx->pc = 0x17F5B8u;
    // 0x17f5b8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F5B8u;
    SET_GPR_U32(ctx, 31, 0x17F5C0u);
    ctx->pc = 0x17F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F5B8u;
            // 0x17f5bc: 0x8c44c7a8  lw          $a0, -0x3858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952872)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5C0u; }
        if (ctx->pc != 0x17F5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F5C0u; }
        if (ctx->pc != 0x17F5C0u) { return; }
    }
    ctx->pc = 0x17F5C0u;
    // 0x17f5c0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f5c4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x17f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17f5c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f5c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f5cc: 0xa6230022  sh          $v1, 0x22($s1)
    ctx->pc = 0x17f5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x17f5d0: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x17f5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17f5d4: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x17f5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17f5d8: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f5dc: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f5e0: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f5e4: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f5e8: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f5ec: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f5f0: 0xb2050007  sdl         $a1, 0x7($s0)
    ctx->pc = 0x17f5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f5f4: 0xb6050000  sdr         $a1, 0x0($s0)
    ctx->pc = 0x17f5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f5f8: 0xb206000f  sdl         $a2, 0xF($s0)
    ctx->pc = 0x17f5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f5fc: 0xb6060008  sdr         $a2, 0x8($s0)
    ctx->pc = 0x17f5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f600: 0xb2070017  sdl         $a3, 0x17($s0)
    ctx->pc = 0x17f600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f604: 0xb6070010  sdr         $a3, 0x10($s0)
    ctx->pc = 0x17f604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f608: 0xb208001f  sdl         $t0, 0x1F($s0)
    ctx->pc = 0x17f608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f60c: 0xb6080018  sdr         $t0, 0x18($s0)
    ctx->pc = 0x17f60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f610: 0x68850027  ldl         $a1, 0x27($a0)
    ctx->pc = 0x17f610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17f614: 0x6c850020  ldr         $a1, 0x20($a0)
    ctx->pc = 0x17f614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17f618: 0x6886002f  ldl         $a2, 0x2F($a0)
    ctx->pc = 0x17f618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f61c: 0x6c860028  ldr         $a2, 0x28($a0)
    ctx->pc = 0x17f61cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f620: 0x68870037  ldl         $a3, 0x37($a0)
    ctx->pc = 0x17f620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f624: 0x6c870030  ldr         $a3, 0x30($a0)
    ctx->pc = 0x17f624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f628: 0x6888003f  ldl         $t0, 0x3F($a0)
    ctx->pc = 0x17f628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f62c: 0x6c880038  ldr         $t0, 0x38($a0)
    ctx->pc = 0x17f62cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f630: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x17f630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f634: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x17f634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f638: 0xb206002f  sdl         $a2, 0x2F($s0)
    ctx->pc = 0x17f638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f63c: 0xb6060028  sdr         $a2, 0x28($s0)
    ctx->pc = 0x17f63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f640: 0xb2070037  sdl         $a3, 0x37($s0)
    ctx->pc = 0x17f640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f644: 0xb6070030  sdr         $a3, 0x30($s0)
    ctx->pc = 0x17f644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f648: 0xb208003f  sdl         $t0, 0x3F($s0)
    ctx->pc = 0x17f648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f64c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f650: 0xb6080038  sdr         $t0, 0x38($s0)
    ctx->pc = 0x17f650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f654: 0x8c44c7a4  lw          $a0, -0x385C($v0)
    ctx->pc = 0x17f654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952868)));
    // 0x17f658: 0x100000e8  b           . + 4 + (0xE8 << 2)
    ctx->pc = 0x17F658u;
    {
        const bool branch_taken_0x17f658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F658u;
            // 0x17f65c: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f658) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F660u;
label_17f660:
    // 0x17f660: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x17f660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x17f664: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17F664u;
    {
        const bool branch_taken_0x17f664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F664u;
            // 0x17f668: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f664) {
            ctx->pc = 0x17F73Cu;
            goto label_17f73c;
        }
    }
    ctx->pc = 0x17F66Cu;
    // 0x17f66c: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f66cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f670: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x17f670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x17f674: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17F674u;
    {
        const bool branch_taken_0x17f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F674u;
            // 0x17f678: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f674) {
            ctx->pc = 0x17F73Cu;
            goto label_17f73c;
        }
    }
    ctx->pc = 0x17F67Cu;
    // 0x17f67c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F67Cu;
    SET_GPR_U32(ctx, 31, 0x17F684u);
    ctx->pc = 0x17F680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F67Cu;
            // 0x17f680: 0x8c44c7ac  lw          $a0, -0x3854($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952876)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F684u; }
        if (ctx->pc != 0x17F684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F684u; }
        if (ctx->pc != 0x17F684u) { return; }
    }
    ctx->pc = 0x17F684u;
    // 0x17f684: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f688: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f68c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x17f68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x17f690: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f694: 0x901025  or          $v0, $a0, $s0
    ctx->pc = 0x17f694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x17f698: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f69c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F69Cu;
    {
        const bool branch_taken_0x17f69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F69Cu;
            // 0x17f6a0: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f69c) {
            ctx->pc = 0x17F6FCu;
            goto label_17f6fc;
        }
    }
    ctx->pc = 0x17F6A4u;
    // 0x17f6a4: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x17f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_17f6a8:
    // 0x17f6a8: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x17f6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f6ac: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x17f6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f6b0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f6b4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f6b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f6b8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f6bc: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f6c0: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f6c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f6c4: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f6c8: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x17f6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6cc: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x17f6ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6d0: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x17f6d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6d4: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x17f6d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6d8: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x17f6d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6dc: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x17f6dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6e0: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x17f6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6e4: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x17f6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f6e8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f6ec: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17F6ECu;
    {
        const bool branch_taken_0x17f6ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6ECu;
            // 0x17f6f0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6ec) {
            ctx->pc = 0x17F6A8u;
            runtime->cooperativeGuestYield();
            goto label_17f6a8;
        }
    }
    ctx->pc = 0x17F6F4u;
    // 0x17f6f4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F6F4u;
    {
        const bool branch_taken_0x17f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F6F4u;
            // 0x17f6f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f6f4) {
            ctx->pc = 0x17F730u;
            goto label_17f730;
        }
    }
    ctx->pc = 0x17F6FCu;
label_17f6fc:
    // 0x17f6fc: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x17f6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
label_17f700:
    // 0x17f700: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x17f700u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f704: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x17f704u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f708: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x17f708u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f70c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x17f70cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f710: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17f710u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17f714: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x17f714u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x17f718: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x17f718u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x17f71c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x17f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x17f720: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f724: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F724u;
    {
        const bool branch_taken_0x17f724 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F724u;
            // 0x17f728: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f724) {
            ctx->pc = 0x17F700u;
            runtime->cooperativeGuestYield();
            goto label_17f700;
        }
    }
    ctx->pc = 0x17F72Cu;
    // 0x17f72c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17f730:
    // 0x17f730: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17f730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f734: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x17F734u;
    {
        const bool branch_taken_0x17f734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F734u;
            // 0x17f738: 0x8c44c7a8  lw          $a0, -0x3858($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952872)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f734) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F73Cu;
label_17f73c:
    // 0x17f73c: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x17f73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x17f740: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17F740u;
    {
        const bool branch_taken_0x17f740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F740u;
            // 0x17f744: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f740) {
            ctx->pc = 0x17F818u;
            goto label_17f818;
        }
    }
    ctx->pc = 0x17F748u;
    // 0x17f748: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f74c: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x17f74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x17f750: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17F750u;
    {
        const bool branch_taken_0x17f750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F750u;
            // 0x17f754: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f750) {
            ctx->pc = 0x17F818u;
            goto label_17f818;
        }
    }
    ctx->pc = 0x17F758u;
    // 0x17f758: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F758u;
    SET_GPR_U32(ctx, 31, 0x17F760u);
    ctx->pc = 0x17F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F758u;
            // 0x17f75c: 0x8c44c7b0  lw          $a0, -0x3850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F760u; }
        if (ctx->pc != 0x17F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F760u; }
        if (ctx->pc != 0x17F760u) { return; }
    }
    ctx->pc = 0x17F760u;
    // 0x17f760: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f764: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f768: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17f768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x17f76c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f770: 0x901025  or          $v0, $a0, $s0
    ctx->pc = 0x17f770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x17f774: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f778: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F778u;
    {
        const bool branch_taken_0x17f778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F778u;
            // 0x17f77c: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f778) {
            ctx->pc = 0x17F7D8u;
            goto label_17f7d8;
        }
    }
    ctx->pc = 0x17F780u;
    // 0x17f780: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x17f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_17f784:
    // 0x17f784: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x17f784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f788: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x17f788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f78c: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f78cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f790: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f794: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f798: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f79c: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f7a0: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f7a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f7a4: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x17f7a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7a8: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x17f7a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7ac: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x17f7acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7b0: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x17f7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7b4: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x17f7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7b8: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x17f7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7bc: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x17f7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7c0: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x17f7c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f7c4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f7c8: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17F7C8u;
    {
        const bool branch_taken_0x17f7c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7C8u;
            // 0x17f7cc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7c8) {
            ctx->pc = 0x17F784u;
            runtime->cooperativeGuestYield();
            goto label_17f784;
        }
    }
    ctx->pc = 0x17F7D0u;
    // 0x17f7d0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F7D0u;
    {
        const bool branch_taken_0x17f7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F7D0u;
            // 0x17f7d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f7d0) {
            ctx->pc = 0x17F80Cu;
            goto label_17f80c;
        }
    }
    ctx->pc = 0x17F7D8u;
label_17f7d8:
    // 0x17f7d8: 0x24820100  addiu       $v0, $a0, 0x100
    ctx->pc = 0x17f7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_17f7dc:
    // 0x17f7dc: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x17f7dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f7e0: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x17f7e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f7e4: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x17f7e4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f7e8: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x17f7e8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f7ec: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17f7f0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x17f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x17f7f4: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x17f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x17f7f8: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x17f7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x17f7fc: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f800: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F800u;
    {
        const bool branch_taken_0x17f800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F800u;
            // 0x17f804: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f800) {
            ctx->pc = 0x17F7DCu;
            runtime->cooperativeGuestYield();
            goto label_17f7dc;
        }
    }
    ctx->pc = 0x17F808u;
    // 0x17f808: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17f80c:
    // 0x17f80c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17f80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f810: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x17F810u;
    {
        const bool branch_taken_0x17f810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F810u;
            // 0x17f814: 0x8c44c7ac  lw          $a0, -0x3854($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952876)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f810) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F818u;
label_17f818:
    // 0x17f818: 0x24020081  addiu       $v0, $zero, 0x81
    ctx->pc = 0x17f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x17f81c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x17F81Cu;
    {
        const bool branch_taken_0x17f81c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F81Cu;
            // 0x17f820: 0x3083ffff  andi        $v1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f81c) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F824u;
    // 0x17f824: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f828: 0x2c42010e  sltiu       $v0, $v0, 0x10E
    ctx->pc = 0x17f828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)270) ? 1 : 0);
    // 0x17f82c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x17F82Cu;
    {
        const bool branch_taken_0x17f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F82Cu;
            // 0x17f830: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f82c) {
            ctx->pc = 0x17F8F4u;
            goto label_17f8f4;
        }
    }
    ctx->pc = 0x17F834u;
    // 0x17f834: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F834u;
    SET_GPR_U32(ctx, 31, 0x17F83Cu);
    ctx->pc = 0x17F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F834u;
            // 0x17f838: 0x8c44c7b4  lw          $a0, -0x384C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F83Cu; }
        if (ctx->pc != 0x17F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F83Cu; }
        if (ctx->pc != 0x17F83Cu) { return; }
    }
    ctx->pc = 0x17F83Cu;
    // 0x17f83c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f83cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f840: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f844: 0x2403010e  addiu       $v1, $zero, 0x10E
    ctx->pc = 0x17f844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 270));
    // 0x17f848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f84c: 0x901025  or          $v0, $a0, $s0
    ctx->pc = 0x17f84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x17f850: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f854: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F854u;
    {
        const bool branch_taken_0x17f854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F854u;
            // 0x17f858: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f854) {
            ctx->pc = 0x17F8B4u;
            goto label_17f8b4;
        }
    }
    ctx->pc = 0x17F85Cu;
    // 0x17f85c: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x17f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
label_17f860:
    // 0x17f860: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x17f860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f864: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x17f864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f868: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f86c: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f86cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f870: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f874: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f878: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f87c: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f880: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x17f880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f884: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x17f884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f888: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x17f888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f88c: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x17f88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f890: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x17f890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f894: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x17f894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f898: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x17f898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f89c: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x17f89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f8a0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f8a4: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17F8A4u;
    {
        const bool branch_taken_0x17f8a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8A4u;
            // 0x17f8a8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8a4) {
            ctx->pc = 0x17F860u;
            runtime->cooperativeGuestYield();
            goto label_17f860;
        }
    }
    ctx->pc = 0x17F8ACu;
    // 0x17f8ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F8ACu;
    {
        const bool branch_taken_0x17f8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8ACu;
            // 0x17f8b0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8ac) {
            ctx->pc = 0x17F8E8u;
            goto label_17f8e8;
        }
    }
    ctx->pc = 0x17F8B4u;
label_17f8b4:
    // 0x17f8b4: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x17f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
label_17f8b8:
    // 0x17f8b8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x17f8b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f8bc: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x17f8bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f8c0: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x17f8c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f8c4: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x17f8c4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f8c8: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17f8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17f8cc: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x17f8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x17f8d0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x17f8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x17f8d4: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x17f8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x17f8d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f8dc: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F8DCu;
    {
        const bool branch_taken_0x17f8dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8DCu;
            // 0x17f8e0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8dc) {
            ctx->pc = 0x17F8B8u;
            runtime->cooperativeGuestYield();
            goto label_17f8b8;
        }
    }
    ctx->pc = 0x17F8E4u;
    // 0x17f8e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_17f8e8:
    // 0x17f8e8: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f8ec: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x17F8ECu;
    {
        const bool branch_taken_0x17f8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8ECu;
            // 0x17f8f0: 0x8c44c7b0  lw          $a0, -0x3850($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952880)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8ec) {
            ctx->pc = 0x17F9FCu;
            goto label_17f9fc;
        }
    }
    ctx->pc = 0x17F8F4u;
label_17f8f4:
    // 0x17f8f4: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x17f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x17f8f8: 0x54620044  bnel        $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x17F8F8u;
    {
        const bool branch_taken_0x17f8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x17f8f8) {
            ctx->pc = 0x17F8FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17F8F8u;
            // 0x17f8fc: 0x96220020  lhu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17FA0Cu;
            goto label_17fa0c;
        }
    }
    ctx->pc = 0x17F900u;
    // 0x17f900: 0x96220022  lhu         $v0, 0x22($s1)
    ctx->pc = 0x17f900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x17f904: 0x2c42028a  sltiu       $v0, $v0, 0x28A
    ctx->pc = 0x17f904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)650) ? 1 : 0);
    // 0x17f908: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x17F908u;
    {
        const bool branch_taken_0x17f908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F908u;
            // 0x17f90c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f908) {
            ctx->pc = 0x17FA08u;
            goto label_17fa08;
        }
    }
    ctx->pc = 0x17F910u;
    // 0x17f910: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x17F910u;
    SET_GPR_U32(ctx, 31, 0x17F918u);
    ctx->pc = 0x17F914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F910u;
            // 0x17f914: 0x8c44c7b8  lw          $a0, -0x3848($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952888)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F918u; }
        if (ctx->pc != 0x17F918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F918u; }
        if (ctx->pc != 0x17F918u) { return; }
    }
    ctx->pc = 0x17F918u;
    // 0x17f918: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x17f918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f91c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17f91cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f920: 0x2403028a  addiu       $v1, $zero, 0x28A
    ctx->pc = 0x17f920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 650));
    // 0x17f924: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f928: 0x901025  or          $v0, $a0, $s0
    ctx->pc = 0x17f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x17f92c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x17f92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x17f930: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17F930u;
    {
        const bool branch_taken_0x17f930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F930u;
            // 0x17f934: 0xa6230022  sh          $v1, 0x22($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f930) {
            ctx->pc = 0x17F990u;
            goto label_17f990;
        }
    }
    ctx->pc = 0x17F938u;
    // 0x17f938: 0x24820420  addiu       $v0, $a0, 0x420
    ctx->pc = 0x17f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
label_17f93c:
    // 0x17f93c: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x17f93cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f940: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x17f940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f944: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x17f944u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f948: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x17f948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f94c: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x17f94cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17f950: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x17f950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17f954: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x17f954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x17f958: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x17f958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x17f95c: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x17f95cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f960: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x17f960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f964: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x17f964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f968: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x17f968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f96c: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x17f96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f970: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x17f970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f974: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x17f974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f978: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x17f978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f97c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f980: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17F980u;
    {
        const bool branch_taken_0x17f980 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F980u;
            // 0x17f984: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f980) {
            ctx->pc = 0x17F93Cu;
            runtime->cooperativeGuestYield();
            goto label_17f93c;
        }
    }
    ctx->pc = 0x17F988u;
    // 0x17f988: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17F988u;
    {
        const bool branch_taken_0x17f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f988) {
            ctx->pc = 0x17F9C0u;
            goto label_17f9c0;
        }
    }
    ctx->pc = 0x17F990u;
label_17f990:
    // 0x17f990: 0x24820420  addiu       $v0, $a0, 0x420
    ctx->pc = 0x17f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1056));
label_17f994:
    // 0x17f994: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x17f994u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17f998: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x17f998u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f99c: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x17f99cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17f9a0: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x17f9a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x17f9a4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x17f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x17f9a8: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x17f9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x17f9ac: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x17f9acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x17f9b0: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x17f9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x17f9b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x17f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x17f9b8: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17F9B8u;
    {
        const bool branch_taken_0x17f9b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F9B8u;
            // 0x17f9bc: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f9b8) {
            ctx->pc = 0x17F994u;
            runtime->cooperativeGuestYield();
            goto label_17f994;
        }
    }
    ctx->pc = 0x17F9C0u;
label_17f9c0:
    // 0x17f9c0: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x17f9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17f9c4: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x17f9c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17f9c8: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x17f9c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17f9cc: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x17f9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17f9d0: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x17f9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17f9d4: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x17f9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17f9d8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x17f9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9dc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x17f9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9e0: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x17f9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9e4: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x17f9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9e8: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x17f9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9ec: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x17f9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f9f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17f9f4: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x17f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17f9f8: 0x8c44c7b4  lw          $a0, -0x384C($v0)
    ctx->pc = 0x17f9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952884)));
label_17f9fc:
    // 0x17f9fc: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17F9FCu;
    SET_GPR_U32(ctx, 31, 0x17FA04u);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA04u; }
        if (ctx->pc != 0x17FA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17FA04u; }
        if (ctx->pc != 0x17FA04u) { return; }
    }
    ctx->pc = 0x17FA04u;
    // 0x17fa04: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x17fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_17fa08:
    // 0x17fa08: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x17fa08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_17fa0c:
    // 0x17fa0c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x17fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x17fa10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17fa14: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x17fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
    // 0x17fa18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17fa1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17fa1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17fa20: 0xac52fffc  sw          $s2, -0x4($v0)
    ctx->pc = 0x17fa20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 18));
    // 0x17fa24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17fa24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17fa28: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17fa28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17fa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17fa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17fa30: 0x3e00008  jr          $ra
    ctx->pc = 0x17FA30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17FA30u;
            // 0x17fa34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F480u: goto label_17f480;
            case 0x17F4B0u: goto label_17f4b0;
            case 0x17F518u: goto label_17f518;
            case 0x17F59Cu: goto label_17f59c;
            case 0x17F660u: goto label_17f660;
            case 0x17F6A8u: goto label_17f6a8;
            case 0x17F6FCu: goto label_17f6fc;
            case 0x17F700u: goto label_17f700;
            case 0x17F730u: goto label_17f730;
            case 0x17F73Cu: goto label_17f73c;
            case 0x17F784u: goto label_17f784;
            case 0x17F7D8u: goto label_17f7d8;
            case 0x17F7DCu: goto label_17f7dc;
            case 0x17F80Cu: goto label_17f80c;
            case 0x17F818u: goto label_17f818;
            case 0x17F860u: goto label_17f860;
            case 0x17F8B4u: goto label_17f8b4;
            case 0x17F8B8u: goto label_17f8b8;
            case 0x17F8E8u: goto label_17f8e8;
            case 0x17F8F4u: goto label_17f8f4;
            case 0x17F93Cu: goto label_17f93c;
            case 0x17F990u: goto label_17f990;
            case 0x17F994u: goto label_17f994;
            case 0x17F9C0u: goto label_17f9c0;
            case 0x17F9FCu: goto label_17f9fc;
            case 0x17FA08u: goto label_17fa08;
            case 0x17FA0Cu: goto label_17fa0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17FA38u;
    // 0x17fa38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17fa3c: 0x0  nop
    ctx->pc = 0x17fa3cu;
    // NOP
}
