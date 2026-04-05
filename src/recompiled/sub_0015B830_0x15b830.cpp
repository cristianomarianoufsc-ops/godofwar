#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B830
// Address: 0x15b830 - 0x15bab8
void sub_0015B830_0x15b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B830_0x15b830");
#endif

    ctx->pc = 0x15b830u;

    // 0x15b830: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x15b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x15b834: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x15b834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x15b838: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x15b838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x15b83c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15b83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b840: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x15b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x15b844: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15b844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b848: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15b848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b84c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x15b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x15b850: 0xc0540d0  jal         func_150340
    ctx->pc = 0x15B850u;
    SET_GPR_U32(ctx, 31, 0x15B858u);
    ctx->pc = 0x15B854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B850u;
            // 0x15b854: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150340u;
    if (runtime->hasFunction(0x150340u)) {
        auto targetFn = runtime->lookupFunction(0x150340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B858u; }
        if (ctx->pc != 0x15B858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150340_0x150340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B858u; }
        if (ctx->pc != 0x15B858u) { return; }
    }
    ctx->pc = 0x15B858u;
    // 0x15b858: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15b858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15b85c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x15b85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15b860: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x15b860u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15b864: 0x8e060048  lw          $a2, 0x48($s0)
    ctx->pc = 0x15b864u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15b868: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x15b868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b86c: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x15b86cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x15b870: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15b870u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15b874: 0x7e420120  sq          $v0, 0x120($s2)
    ctx->pc = 0x15b874u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 288), GPR_VEC(ctx, 2));
    // 0x15b878: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x15b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x15b87c: 0xfe400140  sd          $zero, 0x140($s2)
    ctx->pc = 0x15b87cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 320), GPR_U64(ctx, 0));
    // 0x15b880: 0x6a020063  ldl         $v0, 0x63($s0)
    ctx->pc = 0x15b880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 99); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15b884: 0x6e02005c  ldr         $v0, 0x5C($s0)
    ctx->pc = 0x15b884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 92); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15b888: 0x8a030067  lwl         $v1, 0x67($s0)
    ctx->pc = 0x15b888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x15b88c: 0x9a030064  lwr         $v1, 0x64($s0)
    ctx->pc = 0x15b88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 100); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x15b890: 0xb242014f  sdl         $v0, 0x14F($s2)
    ctx->pc = 0x15b890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b894: 0xb6420148  sdr         $v0, 0x148($s2)
    ctx->pc = 0x15b894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b898: 0xaa430153  swl         $v1, 0x153($s2)
    ctx->pc = 0x15b898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 339); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15b89c: 0xba430150  swr         $v1, 0x150($s2)
    ctx->pc = 0x15b89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 336); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15b8a0: 0xae510174  sw          $s1, 0x174($s2)
    ctx->pc = 0x15b8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 372), GPR_U32(ctx, 17));
    // 0x15b8a4: 0xae400178  sw          $zero, 0x178($s2)
    ctx->pc = 0x15b8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 376), GPR_U32(ctx, 0));
    // 0x15b8a8: 0xae40017c  sw          $zero, 0x17C($s2)
    ctx->pc = 0x15b8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 380), GPR_U32(ctx, 0));
    // 0x15b8ac: 0xae400180  sw          $zero, 0x180($s2)
    ctx->pc = 0x15b8acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 384), GPR_U32(ctx, 0));
    // 0x15b8b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15b8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b8b4: 0xc04c032  jal         func_1300C8
    ctx->pc = 0x15B8B4u;
    SET_GPR_U32(ctx, 31, 0x15B8BCu);
    ctx->pc = 0x15B8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B8B4u;
            // 0x15b8b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300C8u;
    if (runtime->hasFunction(0x1300C8u)) {
        auto targetFn = runtime->lookupFunction(0x1300C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8BCu; }
        if (ctx->pc != 0x15B8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001300C8_0x1300c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B8BCu; }
        if (ctx->pc != 0x15B8BCu) { return; }
    }
    ctx->pc = 0x15B8BCu;
    // 0x15b8bc: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15b8c0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x15b8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b8c4: 0xae400160  sw          $zero, 0x160($s2)
    ctx->pc = 0x15b8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 0));
    // 0x15b8c8: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x15b8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x15b8cc: 0xae400158  sw          $zero, 0x158($s2)
    ctx->pc = 0x15b8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 0));
    // 0x15b8d0: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x15b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x15b8d4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x15b8d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15b8d8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x15b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x15b8dc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x15b8dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x15b8e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x15b8e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x15b8e4: 0x24420016  addiu       $v0, $v0, 0x16
    ctx->pc = 0x15b8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22));
    // 0x15b8e8: 0xae420164  sw          $v0, 0x164($s2)
    ctx->pc = 0x15b8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 356), GPR_U32(ctx, 2));
    // 0x15b8ec: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x15b8ecu;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x15b8f0: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x15b8f0u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x15b8f4: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x15b8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15b8f8: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x15b8f8u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x15b8fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15b8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15b900: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x15b900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b904: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x15b904u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x15b908: 0xfa4200e0  sqc2        $vf2, 0xE0($s2)
    ctx->pc = 0x15b908u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b90c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x15b90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b910: 0xf8a30030  sqc2        $vf3, 0x30($a1)
    ctx->pc = 0x15b910u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15b914: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x15b914u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b918: 0xf8a40020  sqc2        $vf4, 0x20($a1)
    ctx->pc = 0x15b918u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15b91c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x15b91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15b920: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x15b920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x15b924: 0xae42015c  sw          $v0, 0x15C($s2)
    ctx->pc = 0x15b924u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 2));
    // 0x15b928: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x15b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b92c: 0x92420153  lbu         $v0, 0x153($s2)
    ctx->pc = 0x15b92cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 339)));
    // 0x15b930: 0xe6400168  swc1        $f0, 0x168($s2)
    ctx->pc = 0x15b930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 360), bits); }
    // 0x15b934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b938: 0x92430152  lbu         $v1, 0x152($s2)
    ctx->pc = 0x15b938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x15b93c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B93Cu;
    {
        const bool branch_taken_0x15b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B93Cu;
            // 0x15b940: 0x92440151  lbu         $a0, 0x151($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 337)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b93c) {
            ctx->pc = 0x15B950u;
            goto label_15b950;
        }
    }
    ctx->pc = 0x15B944u;
    // 0x15b944: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x15b944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15b948: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15B948u;
    {
        const bool branch_taken_0x15b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B948u;
            // 0x15b94c: 0x823021  addu        $a2, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b948) {
            ctx->pc = 0x15B954u;
            goto label_15b954;
        }
    }
    ctx->pc = 0x15B950u;
label_15b950:
    // 0x15b950: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x15b950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_15b954:
    // 0x15b954: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x15b954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
    // 0x15b958: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15B958u;
    {
        const bool branch_taken_0x15b958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b958) {
            ctx->pc = 0x15B95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15B958u;
            // 0x15b95c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15B960u;
            goto label_15b960;
        }
    }
    ctx->pc = 0x15B960u;
label_15b960:
    // 0x15b960: 0x86001a  div         $zero, $a0, $a2
    ctx->pc = 0x15b960u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b964: 0x8e430164  lw          $v1, 0x164($s2)
    ctx->pc = 0x15b964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
    // 0x15b968: 0x92450152  lbu         $a1, 0x152($s2)
    ctx->pc = 0x15b968u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 338)));
    // 0x15b96c: 0x24020109  addiu       $v0, $zero, 0x109
    ctx->pc = 0x15b96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
    // 0x15b970: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15b970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b974: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x15b974u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x15b978: 0x24c6dd70  addiu       $a2, $a2, -0x2290
    ctx->pc = 0x15b978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958448));
    // 0x15b97c: 0x2012  mflo        $a0
    ctx->pc = 0x15b97cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x15b980: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x15b980u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x15b984: 0x1012  mflo        $v0
    ctx->pc = 0x15b984u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x15b988: 0x82182a  slt         $v1, $a0, $v0
    ctx->pc = 0x15b988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15b98c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x15b98cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x15b990: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x15b990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15b994: 0xae42016c  sw          $v0, 0x16C($s2)
    ctx->pc = 0x15b994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 364), GPR_U32(ctx, 2));
    // 0x15b998: 0xae450154  sw          $a1, 0x154($s2)
    ctx->pc = 0x15b998u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 340), GPR_U32(ctx, 5));
    // 0x15b99c: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x15b99cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x15b9a0: 0x3c043a95  lui         $a0, 0x3A95
    ctx->pc = 0x15b9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14997 << 16));
    // 0x15b9a4: 0x3484ff6c  ori         $a0, $a0, 0xFF6C
    ctx->pc = 0x15b9a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65388);
    // 0x15b9a8: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x15b9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x15b9ac: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x15b9acu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15b9b0: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15b9b4: 0x3c054780  lui         $a1, 0x4780
    ctx->pc = 0x15b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18304 << 16));
    // 0x15b9b8: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x15b9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x15b9bc: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x15b9bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15b9c0: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15b9c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15b9c4: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x15b9c4u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15b9c8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x15b9c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15b9cc: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x15b9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b9d0: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x15b9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b9d4: 0x4be20840  vaddx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x15b9d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15b9d8: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x15b9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15b9dc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x15b9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b9e0: 0x4be220bd  vmadday.xyzw $ACC, $vf4, $vf2y
    ctx->pc = 0x15b9e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b9e4: 0x4be008ff  vmsubaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x15b9e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b9e8: 0x4be220cd  vmsuby.xyzw $vf3, $vf4, $vf2y
    ctx->pc = 0x15b9e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15b9ec: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x15b9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15b9f0: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x15b9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15b9f4: 0x4be218fe  vmsubaz.xyzw $ACC, $vf3, $vf2z
    ctx->pc = 0x15b9f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b9f8: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x15b9f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15b9fc: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x15b9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ba00: 0xfa440130  sqc2        $vf4, 0x130($s2)
    ctx->pc = 0x15ba00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15ba04: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x15ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x15ba08: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x15ba08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15ba0c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15ba10: 0x30a24040  andi        $v0, $a1, 0x4040
    ctx->pc = 0x15ba10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16448);
    // 0x15ba14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BA14u;
    {
        const bool branch_taken_0x15ba14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA14u;
            // 0x15ba18: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba14) {
            ctx->pc = 0x15BA28u;
            goto label_15ba28;
        }
    }
    ctx->pc = 0x15BA1Cu;
    // 0x15ba1c: 0x0  nop
    ctx->pc = 0x15ba1cu;
    // NOP
label_15ba20:
    // 0x15ba20: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x15BA20u;
    {
        const bool branch_taken_0x15ba20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA20u;
            // 0x15ba24: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba20) {
            ctx->pc = 0x15BA88u;
            goto label_15ba88;
        }
    }
    ctx->pc = 0x15BA28u;
label_15ba28:
    // 0x15ba28: 0x30a22000  andi        $v0, $a1, 0x2000
    ctx->pc = 0x15ba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8192);
    // 0x15ba2c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x15BA2Cu;
    {
        const bool branch_taken_0x15ba2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA2Cu;
            // 0x15ba30: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba2c) {
            ctx->pc = 0x15BA20u;
            runtime->cooperativeGuestYield();
            goto label_15ba20;
        }
    }
    ctx->pc = 0x15BA34u;
    // 0x15ba34: 0x30a40003  andi        $a0, $a1, 0x3
    ctx->pc = 0x15ba34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x15ba38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15ba3c: 0x5082fff8  beql        $a0, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x15BA3Cu;
    {
        const bool branch_taken_0x15ba3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x15ba3c) {
            ctx->pc = 0x15BA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA3Cu;
            // 0x15ba40: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA20u;
            runtime->cooperativeGuestYield();
            goto label_15ba20;
        }
    }
    ctx->pc = 0x15BA44u;
    // 0x15ba44: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x15BA44u;
    {
        const bool branch_taken_0x15ba44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba44) {
            ctx->pc = 0x15BA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA44u;
            // 0x15ba48: 0xae420170  sw          $v0, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA88u;
            goto label_15ba88;
        }
    }
    ctx->pc = 0x15BA4Cu;
    // 0x15ba4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15ba50: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15BA50u;
    {
        const bool branch_taken_0x15ba50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA50u;
            // 0x15ba54: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba50) {
            ctx->pc = 0x15BA68u;
            goto label_15ba68;
        }
    }
    ctx->pc = 0x15BA58u;
    // 0x15ba58: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BA58u;
    {
        const bool branch_taken_0x15ba58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x15BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA58u;
            // 0x15ba5c: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba58) {
            ctx->pc = 0x15BA80u;
            goto label_15ba80;
        }
    }
    ctx->pc = 0x15BA60u;
    // 0x15ba60: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15BA60u;
    {
        const bool branch_taken_0x15ba60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA60u;
            // 0x15ba64: 0xa21024  and         $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba60) {
            ctx->pc = 0x15BA90u;
            goto label_15ba90;
        }
    }
    ctx->pc = 0x15BA68u;
label_15ba68:
    // 0x15ba68: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x15ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x15ba6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ba70: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x15ba70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x15ba74: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x15ba74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x15ba78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA78u;
            // 0x15ba7c: 0xae430170  sw          $v1, 0x170($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BA88u;
            goto label_15ba88;
        }
    }
    ctx->pc = 0x15BA80u;
label_15ba80:
    // 0x15ba80: 0xae400170  sw          $zero, 0x170($s2)
    ctx->pc = 0x15ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 368), GPR_U32(ctx, 0));
    // 0x15ba84: 0x0  nop
    ctx->pc = 0x15ba84u;
    // NOP
label_15ba88:
    // 0x15ba88: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x15ba88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x15ba8c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x15ba8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_15ba90:
    // 0x15ba90: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BA90u;
    {
        const bool branch_taken_0x15ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA90u;
            // 0x15ba94: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba90) {
            ctx->pc = 0x15BA9Cu;
            goto label_15ba9c;
        }
    }
    ctx->pc = 0x15BA98u;
    // 0x15ba98: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x15ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
label_15ba9c:
    // 0x15ba9c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x15ba9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15baa0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x15baa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x15baa4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x15baa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15baa8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x15baa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15baac: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x15baacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x15bab0: 0x3e00008  jr          $ra
    ctx->pc = 0x15BAB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAB0u;
            // 0x15bab4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B950u: goto label_15b950;
            case 0x15B954u: goto label_15b954;
            case 0x15B960u: goto label_15b960;
            case 0x15BA20u: goto label_15ba20;
            case 0x15BA28u: goto label_15ba28;
            case 0x15BA68u: goto label_15ba68;
            case 0x15BA80u: goto label_15ba80;
            case 0x15BA88u: goto label_15ba88;
            case 0x15BA90u: goto label_15ba90;
            case 0x15BA9Cu: goto label_15ba9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BAB8u;
}
