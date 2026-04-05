#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001534E0
// Address: 0x1534e0 - 0x153720
void sub_001534E0_0x1534e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001534E0_0x1534e0");
#endif

    ctx->pc = 0x1534e0u;

    // 0x1534e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1534e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1534e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1534e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1534e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1534e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1534ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1534ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1534f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1534f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534f4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1534f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1534f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1534f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1534fc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1534fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x153500: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x153500u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153504: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x153504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x153508: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x153508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x15350c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15350cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x153510: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x153510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153514: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x153514u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x153518: 0xfe400000  sd          $zero, 0x0($s2)
    ctx->pc = 0x153518u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 0));
    // 0x15351c: 0x0  nop
    ctx->pc = 0x15351cu;
    // NOP
label_153520:
    // 0x153520: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x153520u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153524: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x153524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_153528:
    // 0x153528: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x153528u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x15352c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x153530: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x153530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153534: 0x0  nop
    ctx->pc = 0x153534u;
    // NOP
    // 0x153538: 0x0  nop
    ctx->pc = 0x153538u;
    // NOP
    // 0x15353c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15353Cu;
    {
        const bool branch_taken_0x15353c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x153540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15353Cu;
            // 0x153540: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15353c) {
            ctx->pc = 0x153528u;
            runtime->cooperativeGuestYield();
            goto label_153528;
        }
    }
    ctx->pc = 0x153544u;
    // 0x153544: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x153544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x153548: 0x14c5fff5  bne         $a2, $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x153548u;
    {
        const bool branch_taken_0x153548 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x15354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153548u;
            // 0x15354c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153548) {
            ctx->pc = 0x153520u;
            runtime->cooperativeGuestYield();
            goto label_153520;
        }
    }
    ctx->pc = 0x153550u;
    // 0x153550: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x153550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x153554: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x153554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153558: 0xfe420000  sd          $v0, 0x0($s2)
    ctx->pc = 0x153558u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 2));
    // 0x15355c: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x15355cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x153560: 0xfe420008  sd          $v0, 0x8($s2)
    ctx->pc = 0x153560u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8), GPR_U64(ctx, 2));
    // 0x153564: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x153564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x153568: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x153568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x15356c: 0x6a62001b  ldl         $v0, 0x1B($s3)
    ctx->pc = 0x15356cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153570: 0x6e620014  ldr         $v0, 0x14($s3)
    ctx->pc = 0x153570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153574: 0x6a630023  ldl         $v1, 0x23($s3)
    ctx->pc = 0x153574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x153578: 0x6e63001c  ldr         $v1, 0x1C($s3)
    ctx->pc = 0x153578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15357c: 0xb242001b  sdl         $v0, 0x1B($s2)
    ctx->pc = 0x15357cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153580: 0xb6420014  sdr         $v0, 0x14($s2)
    ctx->pc = 0x153580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153584: 0xb2430023  sdl         $v1, 0x23($s2)
    ctx->pc = 0x153584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153588: 0xb643001c  sdr         $v1, 0x1C($s2)
    ctx->pc = 0x153588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15358c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x15358cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153590: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x153590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x153594: 0x8e660038  lw          $a2, 0x38($s3)
    ctx->pc = 0x153594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153598: 0xe6400024  swc1        $f0, 0x24($s2)
    ctx->pc = 0x153598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 36), bits); }
    // 0x15359c: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x15359cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1535a0: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x1535a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x1535a4: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x1535a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x1535a8: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x1535A8u;
    {
        const bool branch_taken_0x1535a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535A8u;
            // 0x1535ac: 0xe641002c  swc1        $f1, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535a8) {
            ctx->pc = 0x1536A0u;
            goto label_1536a0;
        }
    }
    ctx->pc = 0x1535B0u;
    // 0x1535b0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1535b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1535b4: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x1535b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x1535b8: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1535B8u;
    {
        const bool branch_taken_0x1535b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535B8u;
            // 0x1535bc: 0x2687020c  addiu       $a3, $s4, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535b8) {
            ctx->pc = 0x1536A0u;
            goto label_1536a0;
        }
    }
    ctx->pc = 0x1535C0u;
    // 0x1535c0: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x1535c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1535c4: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
    ctx->pc = 0x1535C4u;
    {
        const bool branch_taken_0x1535c4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1535C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535C4u;
            // 0x1535c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535c4) {
            ctx->pc = 0x1535F0u;
            goto label_1535f0;
        }
    }
    ctx->pc = 0x1535CCu;
    // 0x1535cc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x1535ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1535d0:
    // 0x1535d0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1535d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1535d4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1535d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1535d8: 0x1066000a  beq         $v1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1535D8u;
    {
        const bool branch_taken_0x1535d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1535DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535D8u;
            // 0x1535dc: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535d8) {
            ctx->pc = 0x153604u;
            goto label_153604;
        }
    }
    ctx->pc = 0x1535E0u;
    // 0x1535e0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1535e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1535e4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1535e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1535e8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1535E8u;
    {
        const bool branch_taken_0x1535e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1535ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535E8u;
            // 0x1535ec: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535e8) {
            ctx->pc = 0x1535D0u;
            runtime->cooperativeGuestYield();
            goto label_1535d0;
        }
    }
    ctx->pc = 0x1535F0u;
label_1535f0:
    // 0x1535f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1535f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1535f4:
    // 0x1535f4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1535F4u;
    {
        const bool branch_taken_0x1535f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1535f4) {
            ctx->pc = 0x1535F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1535F4u;
            // 0x1535f8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15360Cu;
            goto label_15360c;
        }
    }
    ctx->pc = 0x1535FCu;
    // 0x1535fc: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1535FCu;
    {
        const bool branch_taken_0x1535fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1535FCu;
            // 0x153600: 0xae420038  sw          $v0, 0x38($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1535fc) {
            ctx->pc = 0x1536A4u;
            goto label_1536a4;
        }
    }
    ctx->pc = 0x153604u;
label_153604:
    // 0x153604: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x153604u;
    {
        const bool branch_taken_0x153604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153604u;
            // 0x153608: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153604) {
            ctx->pc = 0x1535F4u;
            runtime->cooperativeGuestYield();
            goto label_1535f4;
        }
    }
    ctx->pc = 0x15360Cu;
label_15360c:
    // 0x15360c: 0x8e650038  lw          $a1, 0x38($s3)
    ctx->pc = 0x15360cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153610: 0x8c43e864  lw          $v1, -0x179C($v0)
    ctx->pc = 0x153610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961252)));
    // 0x153614: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x153614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x153618: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x153618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x15361c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x15361cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x153620: 0x40f809  jalr        $v0
    ctx->pc = 0x153620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153628u);
        ctx->pc = 0x153624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153620u;
            // 0x153624: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153628u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153520u: goto label_153520;
            case 0x153528u: goto label_153528;
            case 0x1535D0u: goto label_1535d0;
            case 0x1535F0u: goto label_1535f0;
            case 0x1535F4u: goto label_1535f4;
            case 0x153604u: goto label_153604;
            case 0x15360Cu: goto label_15360c;
            case 0x1536A0u: goto label_1536a0;
            case 0x1536A4u: goto label_1536a4;
            case 0x1536A8u: goto label_1536a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153628u; }
            if (ctx->pc != 0x153628u) { return; }
        }
        }
    }
    ctx->pc = 0x153628u;
    // 0x153628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x153628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15362c: 0x8e700038  lw          $s0, 0x38($s3)
    ctx->pc = 0x15362cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153630: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x153630u;
    SET_GPR_U32(ctx, 31, 0x153638u);
    ctx->pc = 0x153634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153630u;
            // 0x153634: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153638u; }
        if (ctx->pc != 0x153638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153638u; }
        if (ctx->pc != 0x153638u) { return; }
    }
    ctx->pc = 0x153638u;
    // 0x153638: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x153638u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15363c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15363cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153640: 0xc059978  jal         func_1665E0
    ctx->pc = 0x153640u;
    SET_GPR_U32(ctx, 31, 0x153648u);
    ctx->pc = 0x153644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153640u;
            // 0x153644: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1665E0u;
    if (runtime->hasFunction(0x1665E0u)) {
        auto targetFn = runtime->lookupFunction(0x1665E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153648u; }
        if (ctx->pc != 0x153648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001665E0_0x1665e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153648u; }
        if (ctx->pc != 0x153648u) { return; }
    }
    ctx->pc = 0x153648u;
    // 0x153648: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x153648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x15364c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15364cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153650: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x153650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153654: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x153654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x153658: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x153658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x15365c: 0x40f809  jalr        $v0
    ctx->pc = 0x15365Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x153664u);
        ctx->pc = 0x153660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15365Cu;
            // 0x153660: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x153664u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153520u: goto label_153520;
            case 0x153528u: goto label_153528;
            case 0x1535D0u: goto label_1535d0;
            case 0x1535F0u: goto label_1535f0;
            case 0x1535F4u: goto label_1535f4;
            case 0x153604u: goto label_153604;
            case 0x15360Cu: goto label_15360c;
            case 0x1536A0u: goto label_1536a0;
            case 0x1536A4u: goto label_1536a4;
            case 0x1536A8u: goto label_1536a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x153664u; }
            if (ctx->pc != 0x153664u) { return; }
        }
        }
    }
    ctx->pc = 0x153664u;
    // 0x153664: 0xae500038  sw          $s0, 0x38($s2)
    ctx->pc = 0x153664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 16));
    // 0x153668: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x153668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x15366c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x15366cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x153670: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x153670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x153674: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x153674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x153678: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x15367c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15367cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x153680: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x153680u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x153684: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x153684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x153688: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x153688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x15368c: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x15368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x153690: 0xb0660213  sdl         $a2, 0x213($v1)
    ctx->pc = 0x153690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 531); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153694: 0xb466020c  sdr         $a2, 0x20C($v1)
    ctx->pc = 0x153694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 524); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153698: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x153698u;
    {
        const bool branch_taken_0x153698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15369Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153698u;
            // 0x15369c: 0xae40004c  sw          $zero, 0x4C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153698) {
            ctx->pc = 0x1536A8u;
            goto label_1536a8;
        }
    }
    ctx->pc = 0x1536A0u;
label_1536a0:
    // 0x1536a0: 0xae460038  sw          $a2, 0x38($s2)
    ctx->pc = 0x1536a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 6));
label_1536a4:
    // 0x1536a4: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x1536a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_1536a8:
    // 0x1536a8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1536a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1536ac: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x1536acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x1536b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1536b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1536b4: 0xde640040  ld          $a0, 0x40($s3)
    ctx->pc = 0x1536b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x1536b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1536b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1536bc: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x1536bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1536c0: 0xfe440040  sd          $a0, 0x40($s2)
    ctx->pc = 0x1536c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 4));
    // 0x1536c4: 0xae430054  sw          $v1, 0x54($s2)
    ctx->pc = 0x1536c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 3));
    // 0x1536c8: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x1536c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x1536cc: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x1536ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x1536d0: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x1536d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x1536d4: 0xae430058  sw          $v1, 0x58($s2)
    ctx->pc = 0x1536d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 3));
    // 0x1536d8: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x1536d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x1536dc: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x1536dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x1536e0: 0xae400098  sw          $zero, 0x98($s2)
    ctx->pc = 0x1536e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 0));
    // 0x1536e4: 0xae43005c  sw          $v1, 0x5C($s2)
    ctx->pc = 0x1536e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 3));
    // 0x1536e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1536e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1536ec: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x1536ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x1536f0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1536f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1536f4: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x1536f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x1536f8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1536f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1536fc: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x1536fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
    // 0x153700: 0xae4500a8  sw          $a1, 0xA8($s2)
    ctx->pc = 0x153700u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 5));
    // 0x153704: 0xae430064  sw          $v1, 0x64($s2)
    ctx->pc = 0x153704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 3));
    // 0x153708: 0xae4500ac  sw          $a1, 0xAC($s2)
    ctx->pc = 0x153708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 5));
    // 0x15370c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15370cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153710: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x153710u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153714: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x153714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x153718: 0x3e00008  jr          $ra
    ctx->pc = 0x153718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153718u;
            // 0x15371c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153520u: goto label_153520;
            case 0x153528u: goto label_153528;
            case 0x1535D0u: goto label_1535d0;
            case 0x1535F0u: goto label_1535f0;
            case 0x1535F4u: goto label_1535f4;
            case 0x153604u: goto label_153604;
            case 0x15360Cu: goto label_15360c;
            case 0x1536A0u: goto label_1536a0;
            case 0x1536A4u: goto label_1536a4;
            case 0x1536A8u: goto label_1536a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153720u;
}
