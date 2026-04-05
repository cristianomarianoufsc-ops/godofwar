#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B32F0
// Address: 0x1b32f0 - 0x1b3430
void sub_001B32F0_0x1b32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B32F0_0x1b32f0");
#endif

    ctx->pc = 0x1b32f0u;

    // 0x1b32f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b32f4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1b32f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b32f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b32f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b32fc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b32fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b3300: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1b3300u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1b3304: 0x8e43cb88  lw          $v1, -0x3478($s2)
    ctx->pc = 0x1b3304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953864)));
    // 0x1b3308: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1b3308u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1b330c: 0x262452a8  addiu       $a0, $s1, 0x52A8
    ctx->pc = 0x1b330cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 21160));
    // 0x1b3310: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b3310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b3314: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b3314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b3318: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x1b3318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x1b331c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3320: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1b3320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1b3324: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b3324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b3328: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x1b3328u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x1b332c: 0x262a52a8  addiu       $t2, $s1, 0x52A8
    ctx->pc = 0x1b332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 21160));
    // 0x1b3330: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x1b3330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b3334: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x1b3334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b3338: 0x6848000f  ldl         $t0, 0xF($v0)
    ctx->pc = 0x1b3338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b333c: 0x6c480008  ldr         $t0, 0x8($v0)
    ctx->pc = 0x1b333cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b3340: 0xb1470007  sdl         $a3, 0x7($t2)
    ctx->pc = 0x1b3340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3344: 0xb5470000  sdr         $a3, 0x0($t2)
    ctx->pc = 0x1b3344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3348: 0xb148000f  sdl         $t0, 0xF($t2)
    ctx->pc = 0x1b3348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b334c: 0xb5480008  sdr         $t0, 0x8($t2)
    ctx->pc = 0x1b334cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3350: 0x2485fff0  addiu       $a1, $a0, -0x10
    ctx->pc = 0x1b3350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x1b3354: 0x26702668  addiu       $s0, $s3, 0x2668
    ctx->pc = 0x1b3354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9832));
    // 0x1b3358: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1b3358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b335c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1b335cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1b3360: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b3360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3364: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1b3364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1b3368: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1b3368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b336c: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1b336cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b3370: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1b3370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b3374: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1b3374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b3378: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1b3378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b337c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1b337cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3380: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1b3380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3384: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1b3384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b3388: 0xac86001c  sw          $a2, 0x1C($a0)
    ctx->pc = 0x1b3388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 6));
    // 0x1b338c: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x1b338cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b3390: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B3390u;
    SET_GPR_U32(ctx, 31, 0x1B3398u);
    ctx->pc = 0x1B3394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3390u;
            // 0x1b3394: 0x24840038  addiu       $a0, $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3398u; }
        if (ctx->pc != 0x1B3398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3398u; }
        if (ctx->pc != 0x1B3398u) { return; }
    }
    ctx->pc = 0x1B3398u;
    // 0x1b3398: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3398u;
    {
        const bool branch_taken_0x1b3398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B339Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3398u;
            // 0x1b339c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3398) {
            ctx->pc = 0x1B33A8u;
            goto label_1b33a8;
        }
    }
    ctx->pc = 0x1B33A0u;
    // 0x1b33a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B33A0u;
    {
        const bool branch_taken_0x1b33a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33A0u;
            // 0x1b33a4: 0xa6000060  sh          $zero, 0x60($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33a0) {
            ctx->pc = 0x1B33ACu;
            goto label_1b33ac;
        }
    }
    ctx->pc = 0x1B33A8u;
label_1b33a8:
    // 0x1b33a8: 0xa6020060  sh          $v0, 0x60($s0)
    ctx->pc = 0x1b33a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 96), (uint16_t)GPR_U32(ctx, 2));
label_1b33ac:
    // 0x1b33ac: 0x26652668  addiu       $a1, $s3, 0x2668
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9832));
    // 0x1b33b0: 0x8e42cb88  lw          $v0, -0x3478($s2)
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953864)));
    // 0x1b33b4: 0x94a40060  lhu         $a0, 0x60($a1)
    ctx->pc = 0x1b33b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x1b33b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b33b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b33bc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1b33bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b33c0: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1b33c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b33c4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1b33c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b33c8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1B33C8u;
    {
        const bool branch_taken_0x1b33c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B33CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33C8u;
            // 0x1b33cc: 0xa4a300cc  sh          $v1, 0xCC($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 204), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33c8) {
            ctx->pc = 0x1B3400u;
            goto label_1b3400;
        }
    }
    ctx->pc = 0x1B33D0u;
label_1b33d0:
    // 0x1b33d0: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1b33d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1b33d4: 0x262252a8  addiu       $v0, $s1, 0x52A8
    ctx->pc = 0x1b33d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 21160));
    // 0x1b33d8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1b33d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b33dc: 0x8e43cb88  lw          $v1, -0x3478($s2)
    ctx->pc = 0x1b33dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953864)));
    // 0x1b33e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b33e4: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x1b33e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b33e8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b33e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b33ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b33ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1b33f0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x1b33f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1b33f4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B33F4u;
    {
        const bool branch_taken_0x1b33f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B33F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B33F4u;
            // 0x1b33f8: 0xac44000c  sw          $a0, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b33f4) {
            ctx->pc = 0x1B33D0u;
            runtime->cooperativeGuestYield();
            goto label_1b33d0;
        }
    }
    ctx->pc = 0x1B33FCu;
    // 0x1b33fc: 0x0  nop
    ctx->pc = 0x1b33fcu;
    // NOP
label_1b3400:
    // 0x1b3400: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b3400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b3404: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b3404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b3408: 0xc08b5bc  jal         func_22D6F0
    ctx->pc = 0x1B3408u;
    SET_GPR_U32(ctx, 31, 0x1B3410u);
    ctx->pc = 0x1B340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3408u;
            // 0x1b340c: 0xac62cb88  sw          $v0, -0x3478($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6F0u;
    if (runtime->hasFunction(0x22D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3410u; }
        if (ctx->pc != 0x1B3410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6F0_0x22d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3410u; }
        if (ctx->pc != 0x1B3410u) { return; }
    }
    ctx->pc = 0x1B3410u;
    // 0x1b3410: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b3410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b3414: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b3414u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b3418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b3418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b341c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b341cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b3420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3424: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3424u;
            // 0x1b3428: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B33A8u: goto label_1b33a8;
            case 0x1B33ACu: goto label_1b33ac;
            case 0x1B33D0u: goto label_1b33d0;
            case 0x1B3400u: goto label_1b3400;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B342Cu;
    // 0x1b342c: 0x0  nop
    ctx->pc = 0x1b342cu;
    // NOP
}
