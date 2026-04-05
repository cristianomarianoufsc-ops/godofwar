#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00149FA0
// Address: 0x149fa0 - 0x14a290
void sub_00149FA0_0x149fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149FA0_0x149fa0");
#endif

    ctx->pc = 0x149fa0u;

    // 0x149fa0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x149fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x149fa4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x149fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x149fa8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x149fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x149fac: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x149facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x149fb0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x149fb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149fb4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x149fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x149fb8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x149fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x149fbc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x149fbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x149fc0: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x149FC0u;
    {
        const bool branch_taken_0x149fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FC0u;
            // 0x149fc4: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fc0) {
            ctx->pc = 0x14A270u;
            goto label_14a270;
        }
    }
    ctx->pc = 0x149FC8u;
    // 0x149fc8: 0x85050006  lh          $a1, 0x6($t0)
    ctx->pc = 0x149fc8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x149fcc: 0x10a000a8  beqz        $a1, . + 4 + (0xA8 << 2)
    ctx->pc = 0x149FCCu;
    {
        const bool branch_taken_0x149fcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x149FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FCCu;
            // 0x149fd0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fcc) {
            ctx->pc = 0x14A270u;
            goto label_14a270;
        }
    }
    ctx->pc = 0x149FD4u;
    // 0x149fd4: 0x85230d28  lh          $v1, 0xD28($t1)
    ctx->pc = 0x149fd4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 3368)));
    // 0x149fd8: 0x8c4ce8d0  lw          $t4, -0x1730($v0)
    ctx->pc = 0x149fd8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961360)));
    // 0x149fdc: 0x25240d28  addiu       $a0, $t1, 0xD28
    ctx->pc = 0x149fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 3368));
    // 0x149fe0: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x149fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x149fe4: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x149FE4u;
    {
        const bool branch_taken_0x149fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FE4u;
            // 0x149fe8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149fe4) {
            ctx->pc = 0x14A018u;
            goto label_14a018;
        }
    }
    ctx->pc = 0x149FECu;
    // 0x149fec: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x149fecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x149ff0: 0x85020002  lh          $v0, 0x2($t0)
    ctx->pc = 0x149ff0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x149ff4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x149FF4u;
    {
        const bool branch_taken_0x149ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x149FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149FF4u;
            // 0x149ff8: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ff4) {
            ctx->pc = 0x14A01Cu;
            goto label_14a01c;
        }
    }
    ctx->pc = 0x149FFCu;
    // 0x149ffc: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x149ffcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a000: 0x85020004  lh          $v0, 0x4($t0)
    ctx->pc = 0x14a000u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x14a004: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14A004u;
    {
        const bool branch_taken_0x14a004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14A008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A004u;
            // 0x14a008: 0x38c20001  xori        $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a004) {
            ctx->pc = 0x14A01Cu;
            goto label_14a01c;
        }
    }
    ctx->pc = 0x14A00Cu;
    // 0x14a00c: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x14a00cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x14a010: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x14a010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x14a014: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x14a014u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14a018:
    // 0x14a018: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x14a018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
label_14a01c:
    // 0x14a01c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x14A01Cu;
    {
        const bool branch_taken_0x14a01c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A01Cu;
            // 0x14a020: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a01c) {
            ctx->pc = 0x14A0B0u;
            goto label_14a0b0;
        }
    }
    ctx->pc = 0x14A024u;
    // 0x14a024: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14a028: 0x8c461058  lw          $a2, 0x1058($v0)
    ctx->pc = 0x14a028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4184)));
    // 0x14a02c: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x14a02cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14a030: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x14a030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x14a034: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x14a034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x14a038: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a03c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a040: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14a040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14a044: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14a044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14a048: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14a048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14a04c: 0x8ca31060  lw          $v1, 0x1060($a1)
    ctx->pc = 0x14a04cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4192)));
    // 0x14a050: 0x8c44105c  lw          $a0, 0x105C($v0)
    ctx->pc = 0x14a050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4188)));
    // 0x14a054: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x14a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14a058: 0xc25018  mult        $t2, $a2, $v0
    ctx->pc = 0x14a058u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x14a05c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x14a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14a060: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x14a060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x14a064: 0xaca21060  sw          $v0, 0x1060($a1)
    ctx->pc = 0x14a064u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4192), GPR_U32(ctx, 2));
    // 0x14a068: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14a068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14a06c: 0x14c3021  addu        $a2, $t2, $t4
    ctx->pc = 0x14a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x14a070: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x14a070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x14a074: 0x690b0007  ldl         $t3, 0x7($t0)
    ctx->pc = 0x14a074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x14a078: 0x6d0b0000  ldr         $t3, 0x0($t0)
    ctx->pc = 0x14a078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x14a07c: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x14a07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a080: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x14a080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a084: 0x24c30044  addiu       $v1, $a2, 0x44
    ctx->pc = 0x14a084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 68));
    // 0x14a088: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x14a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14a08c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x14A08Cu;
    {
        const bool branch_taken_0x14a08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a08c) {
            ctx->pc = 0x14A090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A08Cu;
            // 0x14a090: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A098u;
            goto label_14a098;
        }
    }
    ctx->pc = 0x14A094u;
    // 0x14a094: 0xacc40044  sw          $a0, 0x44($a2)
    ctx->pc = 0x14a094u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 68), GPR_U32(ctx, 4));
label_14a098:
    // 0x14a098: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x14a098u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x14a09c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x14a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x14a0a0: 0x690b0007  ldl         $t3, 0x7($t0)
    ctx->pc = 0x14a0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x14a0a4: 0x6d0b0000  ldr         $t3, 0x0($t0)
    ctx->pc = 0x14a0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x14a0a8: 0xb12b0d2f  sdl         $t3, 0xD2F($t1)
    ctx->pc = 0x14a0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14a0ac: 0xb52b0d28  sdr         $t3, 0xD28($t1)
    ctx->pc = 0x14a0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_14a0b0:
    // 0x14a0b0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14a0b4: 0x8c421048  lw          $v0, 0x1048($v0)
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x14a0b8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x14a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x14a0bc: 0x2486ffc0  addiu       $a2, $a0, -0x40
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967232));
    // 0x14a0c0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x14a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x14a0c4: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x14a0c4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14a0c8: 0xd8e40030  lqc2        $vf4, 0x30($a3)
    ctx->pc = 0x14a0c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x14a0cc: 0xd8e70010  lqc2        $vf7, 0x10($a3)
    ctx->pc = 0x14a0ccu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x14a0d0: 0xd8e80020  lqc2        $vf8, 0x20($a3)
    ctx->pc = 0x14a0d0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x14a0d4: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x14a0d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x14a0d8: 0xd9210010  lqc2        $vf1, 0x10($t1)
    ctx->pc = 0x14a0d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x14a0dc: 0xd9220020  lqc2        $vf2, 0x20($t1)
    ctx->pc = 0x14a0dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x14a0e0: 0xd9250030  lqc2        $vf5, 0x30($t1)
    ctx->pc = 0x14a0e0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x14a0e4: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x14a0e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14a0e8: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x14a0e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a0ec: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x14a0ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a0f0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x14a0f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14a0f4: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x14a0f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14a0f8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x14a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a0fc: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x14a0fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a100: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x14a100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a104: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x14a104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14a108: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x14a108u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14a10c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x14a10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a110: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x14a110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a114: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x14a114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a118: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x14a118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14a11c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x14a11cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x14a120: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x14a120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a124: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x14a124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a128: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x14a128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x14a12c: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x14a12cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x14a130: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x14a130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a134: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x14a134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a138: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14a138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14a13c: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x14a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14a140: 0x8c471058  lw          $a3, 0x1058($v0)
    ctx->pc = 0x14a140u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4184)));
    // 0x14a144: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x14a144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14a148: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x14a148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14a14c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x14a14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x14a150: 0xf883ffc0  sqc2        $vf3, -0x40($a0)
    ctx->pc = 0x14a150u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 4294967232), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x14a154: 0xe32018  mult        $a0, $a3, $v1
    ctx->pc = 0x14a154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14a158: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x14a158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14a15c: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x14a15cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x14a160: 0x8c1821  addu        $v1, $a0, $t4
    ctx->pc = 0x14a160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x14a164: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x14a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
    // 0x14a168: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x14a168u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14a16c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x14a16cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x14a170: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x14a170u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14a174: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x14a174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x14a178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14a17c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14a180: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x14a180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x14a184: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14a184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14a188: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x14a188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14a18c: 0x8ca41060  lw          $a0, 0x1060($a1)
    ctx->pc = 0x14a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4192)));
    // 0x14a190: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x14a190u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14a194: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14a194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14a198: 0x6c3821  addu        $a3, $v1, $t4
    ctx->pc = 0x14a198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x14a19c: 0x8c43105c  lw          $v1, 0x105C($v0)
    ctx->pc = 0x14a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4188)));
    // 0x14a1a0: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x14a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x14a1a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14a1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14a1a8: 0xaca21060  sw          $v0, 0x1060($a1)
    ctx->pc = 0x14a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4192), GPR_U32(ctx, 2));
    // 0x14a1ac: 0x24e40044  addiu       $a0, $a3, 0x44
    ctx->pc = 0x14a1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
    // 0x14a1b0: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x14a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x14a1b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a1b8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x14a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x14a1bc: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x14a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x14a1c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A1C0u;
    {
        const bool branch_taken_0x14a1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14A1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1C0u;
            // 0x14a1c4: 0xac720010  sw          $s2, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1c0) {
            ctx->pc = 0x14A1D0u;
            goto label_14a1d0;
        }
    }
    ctx->pc = 0x14A1C8u;
    // 0x14a1c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14A1C8u;
    {
        const bool branch_taken_0x14a1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A1C8u;
            // 0x14a1cc: 0xace30044  sw          $v1, 0x44($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a1c8) {
            ctx->pc = 0x14A1D4u;
            goto label_14a1d4;
        }
    }
    ctx->pc = 0x14A1D0u;
label_14a1d0:
    // 0x14a1d0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x14a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_14a1d4:
    // 0x14a1d4: 0x8d220ce4  lw          $v0, 0xCE4($t1)
    ctx->pc = 0x14a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3300)));
    // 0x14a1d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x14a1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x14a1dc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x14a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x14a1e0: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x14a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x14a1e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a1e8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x14a1e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a1ec: 0x24860050  addiu       $a2, $a0, 0x50
    ctx->pc = 0x14a1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x14a1f0: 0x8d85009c  lw          $a1, 0x9C($t4)
    ctx->pc = 0x14a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 156)));
    // 0x14a1f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14a1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a1f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x14a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14a1fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14a200: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a204: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x14a204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a20c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x14a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a210: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14a210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14a214: 0xad85009c  sw          $a1, 0x9C($t4)
    ctx->pc = 0x14a214u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 156), GPR_U32(ctx, 5));
    // 0x14a218: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x14a218u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14a21c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14a220: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14a224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x14a224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14a228: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a22c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a230: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14a230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14a234: 0x8c910004  lw          $s1, 0x4($a0)
    ctx->pc = 0x14a234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14a238: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x14A238u;
    {
        const bool branch_taken_0x14a238 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A238u;
            // 0x14a23c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a238) {
            ctx->pc = 0x14A270u;
            goto label_14a270;
        }
    }
    ctx->pc = 0x14A240u;
    // 0x14a240: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x14a240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x14a244: 0x0  nop
    ctx->pc = 0x14a244u;
    // NOP
label_14a248:
    // 0x14a248: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x14a248u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x14a24c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14a250: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x14a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x14a254: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14A254u;
    {
        const bool branch_taken_0x14a254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A254u;
            // 0x14a258: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a254) {
            ctx->pc = 0x14A264u;
            goto label_14a264;
        }
    }
    ctx->pc = 0x14A25Cu;
    // 0x14a25c: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x14A25Cu;
    SET_GPR_U32(ctx, 31, 0x14A264u);
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A264u; }
        if (ctx->pc != 0x14A264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14A264u; }
        if (ctx->pc != 0x14A264u) { return; }
    }
    ctx->pc = 0x14A264u;
label_14a264:
    // 0x14a264: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x14a264u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14a268: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14A268u;
    {
        const bool branch_taken_0x14a268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14a268) {
            ctx->pc = 0x14A26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14A268u;
            // 0x14a26c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14A248u;
            runtime->cooperativeGuestYield();
            goto label_14a248;
        }
    }
    ctx->pc = 0x14A270u;
label_14a270:
    // 0x14a270: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x14a270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x14a274: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x14a274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14a278: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x14a278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14a27c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x14a27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14a280: 0x3e00008  jr          $ra
    ctx->pc = 0x14A280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14A280u;
            // 0x14a284: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14A018u: goto label_14a018;
            case 0x14A01Cu: goto label_14a01c;
            case 0x14A098u: goto label_14a098;
            case 0x14A0B0u: goto label_14a0b0;
            case 0x14A1D0u: goto label_14a1d0;
            case 0x14A1D4u: goto label_14a1d4;
            case 0x14A248u: goto label_14a248;
            case 0x14A264u: goto label_14a264;
            case 0x14A270u: goto label_14a270;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14A288u;
    // 0x14a288: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14a288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14a28c: 0x0  nop
    ctx->pc = 0x14a28cu;
    // NOP
}
