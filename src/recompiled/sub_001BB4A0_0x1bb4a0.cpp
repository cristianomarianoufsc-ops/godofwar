#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB4A0
// Address: 0x1bb4a0 - 0x1bb608
void sub_001BB4A0_0x1bb4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB4A0_0x1bb4a0");
#endif

    ctx->pc = 0x1bb4a0u;

    // 0x1bb4a0: 0x3c0f002a  lui         $t7, 0x2A
    ctx->pc = 0x1bb4a0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)42 << 16));
    // 0x1bb4a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bb4a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bb4a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1bb4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1bb4ac: 0x8de3cc40  lw          $v1, -0x33C0($t7)
    ctx->pc = 0x1bb4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954048)));
    // 0x1bb4b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bb4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bb4b4: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x1bb4b4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bb4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bb4bc: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x1bb4bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4c0: 0x7fb20000  sq          $s2, 0x0($sp)
    ctx->pc = 0x1bb4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 18));
    // 0x1bb4c4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bb4c4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bb4c8: 0x8c48cc44  lw          $t0, -0x33BC($v0)
    ctx->pc = 0x1bb4c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954052)));
    // 0x1bb4cc: 0x18600044  blez        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x1BB4CCu;
    {
        const bool branch_taken_0x1bb4cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BB4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4CCu;
            // 0x1bb4d0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4cc) {
            ctx->pc = 0x1BB5E0u;
            goto label_1bb5e0;
        }
    }
    ctx->pc = 0x1BB4D4u;
    // 0x1bb4d4: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x1bb4d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
label_1bb4d8:
    // 0x1bb4d8: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1bb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1bb4dc: 0x25835a68  addiu       $v1, $t4, 0x5A68
    ctx->pc = 0x1bb4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23144));
    // 0x1bb4e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb4e4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1bb4e4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bb4e8: 0x104e0006  beq         $v0, $t6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4E8u;
    {
        const bool branch_taken_0x1bb4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 14));
        ctx->pc = 0x1BB4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4E8u;
            // 0x1bb4ec: 0x3c09002a  lui         $t1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4e8) {
            ctx->pc = 0x1BB504u;
            goto label_1bb504;
        }
    }
    ctx->pc = 0x1BB4F0u;
    // 0x1bb4f0: 0x504d0005  beql        $v0, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BB4F0u;
    {
        const bool branch_taken_0x1bb4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x1bb4f0) {
            ctx->pc = 0x1BB4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4F0u;
            // 0x1bb4f4: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BB508u;
            goto label_1bb508;
        }
    }
    ctx->pc = 0x1BB4F8u;
    // 0x1bb4f8: 0x1446002d  bne         $v0, $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x1BB4F8u;
    {
        const bool branch_taken_0x1bb4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1BB4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4F8u;
            // 0x1bb4fc: 0x25040001  addiu       $a0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4f8) {
            ctx->pc = 0x1BB5B0u;
            goto label_1bb5b0;
        }
    }
    ctx->pc = 0x1BB500u;
    // 0x1bb500: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1bb500u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
label_1bb504:
    // 0x1bb504: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1bb504u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_1bb508:
    // 0x1bb508: 0x8d22cc48  lw          $v0, -0x33B8($t1)
    ctx->pc = 0x1bb508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954056)));
    // 0x1bb50c: 0x11020021  beq         $t0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BB50Cu;
    {
        const bool branch_taken_0x1bb50c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB50Cu;
            // 0x1bb510: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb50c) {
            ctx->pc = 0x1BB594u;
            goto label_1bb594;
        }
    }
    ctx->pc = 0x1BB514u;
    // 0x1bb514: 0x0  nop
    ctx->pc = 0x1bb514u;
    // NOP
label_1bb518:
    // 0x1bb518: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1bb51c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb520: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1bb520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bb524: 0x24e30020  addiu       $v1, $a3, 0x20
    ctx->pc = 0x1bb524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x1bb528: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1bb528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1bb52c: 0x72940  sll         $a1, $a3, 5
    ctx->pc = 0x1bb52cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1bb530: 0x33943  sra         $a3, $v1, 5
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bb534: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x1bb534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1bb538: 0x25835a68  addiu       $v1, $t4, 0x5A68
    ctx->pc = 0x1bb538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), 23144));
    // 0x1bb53c: 0x823823  subu        $a3, $a0, $v0
    ctx->pc = 0x1bb53cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1bb540: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1bb540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1bb544: 0x71140  sll         $v0, $a3, 5
    ctx->pc = 0x1bb544u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x1bb548: 0x8d24cc48  lw          $a0, -0x33B8($t1)
    ctx->pc = 0x1bb548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954056)));
    // 0x1bb54c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bb54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bb550: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1bb550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1bb554: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1bb554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1bb558: 0x6850000f  ldl         $s0, 0xF($v0)
    ctx->pc = 0x1bb558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1bb55c: 0x6c500008  ldr         $s0, 0x8($v0)
    ctx->pc = 0x1bb55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1bb560: 0x68510017  ldl         $s1, 0x17($v0)
    ctx->pc = 0x1bb560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem << shift)); }
    // 0x1bb564: 0x6c510010  ldr         $s1, 0x10($v0)
    ctx->pc = 0x1bb564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 17, (GPR_U64(ctx, 17) & keepMask) | (mem >> shift)); }
    // 0x1bb568: 0x6852001f  ldl         $s2, 0x1F($v0)
    ctx->pc = 0x1bb568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x1bb56c: 0x6c520018  ldr         $s2, 0x18($v0)
    ctx->pc = 0x1bb56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x1bb570: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x1bb570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb574: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x1bb574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb578: 0xb0b0000f  sdl         $s0, 0xF($a1)
    ctx->pc = 0x1bb578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb57c: 0xb4b00008  sdr         $s0, 0x8($a1)
    ctx->pc = 0x1bb57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb580: 0xb0b10017  sdl         $s1, 0x17($a1)
    ctx->pc = 0x1bb580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb584: 0xb4b10010  sdr         $s1, 0x10($a1)
    ctx->pc = 0x1bb584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 17); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb588: 0xb0b2001f  sdl         $s2, 0x1F($a1)
    ctx->pc = 0x1bb588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bb58c: 0x14e4ffe2  bne         $a3, $a0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1BB58Cu;
    {
        const bool branch_taken_0x1bb58c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x1BB590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB58Cu;
            // 0x1bb590: 0xb4b20018  sdr         $s2, 0x18($a1) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb58c) {
            ctx->pc = 0x1BB518u;
            runtime->cooperativeGuestYield();
            goto label_1bb518;
        }
    }
    ctx->pc = 0x1BB594u;
label_1bb594:
    // 0x1bb594: 0x8d23cc48  lw          $v1, -0x33B8($t1)
    ctx->pc = 0x1bb594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294954056)));
    // 0x1bb598: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1bb598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1bb59c: 0x441000b  bgez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BB59Cu;
    {
        const bool branch_taken_0x1bb59c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1BB5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB59Cu;
            // 0x1bb5a0: 0xad22cc48  sw          $v0, -0x33B8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294954056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb59c) {
            ctx->pc = 0x1BB5CCu;
            goto label_1bb5cc;
        }
    }
    ctx->pc = 0x1BB5A4u;
    // 0x1bb5a4: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1bb5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1bb5a8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB5A8u;
    {
        const bool branch_taken_0x1bb5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5A8u;
            // 0x1bb5ac: 0xad22cc48  sw          $v0, -0x33B8($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4294954056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5a8) {
            ctx->pc = 0x1BB5CCu;
            goto label_1bb5cc;
        }
    }
    ctx->pc = 0x1BB5B0u;
label_1bb5b0:
    // 0x1bb5b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bb5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1bb5b4: 0x25030020  addiu       $v1, $t0, 0x20
    ctx->pc = 0x1bb5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1bb5b8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1bb5b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1bb5bc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x1bb5bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1bb5c0: 0x34143  sra         $t0, $v1, 5
    ctx->pc = 0x1bb5c0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 5));
    // 0x1bb5c4: 0x81140  sll         $v0, $t0, 5
    ctx->pc = 0x1bb5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1bb5c8: 0x824023  subu        $t0, $a0, $v0
    ctx->pc = 0x1bb5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1bb5cc:
    // 0x1bb5cc: 0x8de2cc40  lw          $v0, -0x33C0($t7)
    ctx->pc = 0x1bb5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294954048)));
    // 0x1bb5d0: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1bb5d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1bb5d4: 0x162102a  slt         $v0, $t3, $v0
    ctx->pc = 0x1bb5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1bb5d8: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1BB5D8u;
    {
        const bool branch_taken_0x1bb5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BB5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5D8u;
            // 0x1bb5dc: 0x3c0c0033  lui         $t4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb5d8) {
            ctx->pc = 0x1BB4D8u;
            runtime->cooperativeGuestYield();
            goto label_1bb4d8;
        }
    }
    ctx->pc = 0x1BB5E0u;
label_1bb5e0:
    // 0x1bb5e0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1bb5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1bb5e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1bb5e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bb5e8: 0x8c62cc40  lw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bb5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954048)));
    // 0x1bb5ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bb5ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bb5f0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x1bb5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1bb5f4: 0x7bb20000  lq          $s2, 0x0($sp)
    ctx->pc = 0x1bb5f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb5f8: 0xac62cc40  sw          $v0, -0x33C0($v1)
    ctx->pc = 0x1bb5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954048), GPR_U32(ctx, 2));
    // 0x1bb5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB5FCu;
            // 0x1bb600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BB4D8u: goto label_1bb4d8;
            case 0x1BB504u: goto label_1bb504;
            case 0x1BB508u: goto label_1bb508;
            case 0x1BB518u: goto label_1bb518;
            case 0x1BB594u: goto label_1bb594;
            case 0x1BB5B0u: goto label_1bb5b0;
            case 0x1BB5CCu: goto label_1bb5cc;
            case 0x1BB5E0u: goto label_1bb5e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BB604u;
    // 0x1bb604: 0x0  nop
    ctx->pc = 0x1bb604u;
    // NOP
}
