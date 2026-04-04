#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B538
// Address: 0x13b538 - 0x13b7e8
void sub_0013B538_0x13b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B538_0x13b538");
#endif

    ctx->pc = 0x13b538u;

    // 0x13b538: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b53c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13b540: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13b544: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13b544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b548: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x13b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x13b54c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x13b54cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b550: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b554: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x13b554u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b558: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13b558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b55c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13b55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13b560: 0x70032ca9  por         $a1, $zero, $v1
    ctx->pc = 0x13b560u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x13b564: 0x2447f170  addiu       $a3, $v0, -0xE90
    ctx->pc = 0x13b564u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13b568: 0x6a230007  ldl         $v1, 0x7($s1)
    ctx->pc = 0x13b568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b56c: 0x6e230000  ldr         $v1, 0x0($s1)
    ctx->pc = 0x13b56cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b570: 0x6a24000f  ldl         $a0, 0xF($s1)
    ctx->pc = 0x13b570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13b574: 0x6e240008  ldr         $a0, 0x8($s1)
    ctx->pc = 0x13b574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13b578: 0x6a260017  ldl         $a2, 0x17($s1)
    ctx->pc = 0x13b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x13b57c: 0x6e260010  ldr         $a2, 0x10($s1)
    ctx->pc = 0x13b57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x13b580: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x13b580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b584: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x13b584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b588: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x13b588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b58c: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x13b58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b590: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x13b590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b594: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x13b594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b598: 0x6a23001f  ldl         $v1, 0x1F($s1)
    ctx->pc = 0x13b598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b59c: 0x6e230018  ldr         $v1, 0x18($s1)
    ctx->pc = 0x13b59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b5a0: 0x6a240027  ldl         $a0, 0x27($s1)
    ctx->pc = 0x13b5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13b5a4: 0x6e240020  ldr         $a0, 0x20($s1)
    ctx->pc = 0x13b5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13b5a8: 0xb0e3001f  sdl         $v1, 0x1F($a3)
    ctx->pc = 0x13b5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b5ac: 0xb4e30018  sdr         $v1, 0x18($a3)
    ctx->pc = 0x13b5acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b5b0: 0xb0e40027  sdl         $a0, 0x27($a3)
    ctx->pc = 0x13b5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b5b4: 0xb4e40020  sdr         $a0, 0x20($a3)
    ctx->pc = 0x13b5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b5b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13b5b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b5bc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x13b5bcu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b5c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13b5c4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x13b5c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13b5c8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x13b5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13b5cc: 0x40f809  jalr        $v0
    ctx->pc = 0x13B5CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B5D4u);
        ctx->pc = 0x13B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5CCu;
            // 0x13b5d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13B5D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B628u: goto label_13b628;
            case 0x13B6A8u: goto label_13b6a8;
            case 0x13B6E8u: goto label_13b6e8;
            case 0x13B790u: goto label_13b790;
            case 0x13B794u: goto label_13b794;
            case 0x13B7A0u: goto label_13b7a0;
            case 0x13B7A4u: goto label_13b7a4;
            case 0x13B7B0u: goto label_13b7b0;
            case 0x13B7B4u: goto label_13b7b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13B5D4u; }
            if (ctx->pc != 0x13B5D4u) { return; }
        }
        }
    }
    ctx->pc = 0x13B5D4u;
    // 0x13b5d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13B5D4u;
    {
        const bool branch_taken_0x13b5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B5D4u;
            // 0x13b5d8: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b5d4) {
            ctx->pc = 0x13B628u;
            goto label_13b628;
        }
    }
    ctx->pc = 0x13B5DCu;
    // 0x13b5dc: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x13b5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x13b5e0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13b5e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b5e4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13b5e4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13b5e8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x13b5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b5ec: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13b5ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13b5f0: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13b5f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b5f4: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x13b5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b5f8: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x13b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x13b5fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13b5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13b600: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x13b600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x13b604: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x13b604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x13b608: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x13b608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x13b60c: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x13b60cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x13b610: 0xa4600034  sh          $zero, 0x34($v1)
    ctx->pc = 0x13b610u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b614: 0xa4600036  sh          $zero, 0x36($v1)
    ctx->pc = 0x13b614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b618: 0x40f809  jalr        $v0
    ctx->pc = 0x13B618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B620u);
        ctx->pc = 0x13B61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B618u;
            // 0x13b61c: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13B620u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B628u: goto label_13b628;
            case 0x13B6A8u: goto label_13b6a8;
            case 0x13B6E8u: goto label_13b6e8;
            case 0x13B790u: goto label_13b790;
            case 0x13B794u: goto label_13b794;
            case 0x13B7A0u: goto label_13b7a0;
            case 0x13B7A4u: goto label_13b7a4;
            case 0x13B7B0u: goto label_13b7b0;
            case 0x13B7B4u: goto label_13b7b4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13B620u; }
            if (ctx->pc != 0x13B620u) { return; }
        }
        }
    }
    ctx->pc = 0x13B620u;
    // 0x13b620: 0x3842000b  xori        $v0, $v0, 0xB
    ctx->pc = 0x13b620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)11);
    // 0x13b624: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x13b624u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_13b628:
    // 0x13b628: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x13b628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b62c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13b62cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b630: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13b630u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b634: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x13b634u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b638: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b63c: 0x3e00008  jr          $ra
    ctx->pc = 0x13B63Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B63Cu;
            // 0x13b640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B628u: goto label_13b628;
            case 0x13B6A8u: goto label_13b6a8;
            case 0x13B6E8u: goto label_13b6e8;
            case 0x13B790u: goto label_13b790;
            case 0x13B794u: goto label_13b794;
            case 0x13B7A0u: goto label_13b7a0;
            case 0x13B7A4u: goto label_13b7a4;
            case 0x13B7B0u: goto label_13b7b0;
            case 0x13B7B4u: goto label_13b7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B644u;
    // 0x13b644: 0x0  nop
    ctx->pc = 0x13b644u;
    // NOP
    // 0x13b648: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x13b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x13b64c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x13b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x13b650: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x13b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x13b654: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b658: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x13b65c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b65cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b660: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x13b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x13b664: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x13b664u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b668: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x13b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x13b66c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x13b66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x13b670: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13b670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13b674: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x13b674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x13b678: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13b678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13b67c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x13b67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x13b680: 0x8ebe003c  lw          $fp, 0x3C($s5)
    ctx->pc = 0x13b680u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x13b684: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x13b684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x13b688: 0x8ea20088  lw          $v0, 0x88($s5)
    ctx->pc = 0x13b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x13b68c: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x13b68cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x13b690: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x13b690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
    // 0x13b694: 0x8e97003c  lw          $s7, 0x3C($s4)
    ctx->pc = 0x13b694u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x13b698: 0x13c00045  beqz        $fp, . + 4 + (0x45 << 2)
    ctx->pc = 0x13B698u;
    {
        const bool branch_taken_0x13b698 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B698u;
            // 0x13b69c: 0xafa30018  sw          $v1, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b698) {
            ctx->pc = 0x13B7B0u;
            goto label_13b7b0;
        }
    }
    ctx->pc = 0x13B6A0u;
    // 0x13b6a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13b6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6a4: 0x0  nop
    ctx->pc = 0x13b6a4u;
    // NOP
label_13b6a8:
    // 0x13b6a8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x13b6a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13b6ac: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13b6acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b6b0: 0x48360800  qmfc2.ni    $s6, $vf1
    ctx->pc = 0x13b6b0u;
    SET_GPR_VEC(ctx, 22, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b6b4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x13b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x13b6b8: 0x705610a8  pceqw       $v0, $v0, $s6
    ctx->pc = 0x13b6b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x13b6bc: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13b6bcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13b6c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13b6c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13b6c4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13b6c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13b6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b6cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b6ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b6d0: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x13B6D0u;
    {
        const bool branch_taken_0x13b6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b6d0) {
            ctx->pc = 0x13B6D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6D0u;
            // 0x13b6d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B7A4u;
            goto label_13b7a4;
        }
    }
    ctx->pc = 0x13B6D8u;
    // 0x13b6d8: 0x12e00031  beqz        $s7, . + 4 + (0x31 << 2)
    ctx->pc = 0x13B6D8u;
    {
        const bool branch_taken_0x13b6d8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B6D8u;
            // 0x13b6dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b6d8) {
            ctx->pc = 0x13B7A0u;
            goto label_13b7a0;
        }
    }
    ctx->pc = 0x13B6E0u;
    // 0x13b6e0: 0x8fb20018  lw          $s2, 0x18($sp)
    ctx->pc = 0x13b6e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13b6e4: 0x0  nop
    ctx->pc = 0x13b6e4u;
    // NOP
label_13b6e8:
    // 0x13b6e8: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x13b6e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13b6ec: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13b6ecu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13b6f0: 0x707610a8  pceqw       $v0, $v1, $s6
    ctx->pc = 0x13b6f0u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 22)));
    // 0x13b6f4: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13b6f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13b6f8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13b6f8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13b6fc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13b700: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13b700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b704: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b704u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b708: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x13B708u;
    {
        const bool branch_taken_0x13b708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13b708) {
            ctx->pc = 0x13B70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B708u;
            // 0x13b70c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B794u;
            goto label_13b794;
        }
    }
    ctx->pc = 0x13B710u;
    // 0x13b710: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x13b710u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b714: 0x4a221843  vaddw.w     $vf1, $vf3, $vf2w
    ctx->pc = 0x13b714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b718: 0x4a21085b  vmulw.w     $vf1, $vf1, $vf1w
    ctx->pc = 0x13b718u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b71c: 0x4be218ac  vsub.xyzw   $vf2, $vf3, $vf2
    ctx->pc = 0x13b71cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13b720: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13b720u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b724: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13b724u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b728: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x13b728u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13b72c: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x13b72cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13b730: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13b730u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b734: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13b734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b738: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13b738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b73c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13b73cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b740: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13b740u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b744: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x13b744u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x13b748: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b748u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b74c: 0x0  nop
    ctx->pc = 0x13b74cu;
    // NOP
    // 0x13b750: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x13B750u;
    {
        const bool branch_taken_0x13b750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B750u;
            // 0x13b754: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b750) {
            ctx->pc = 0x13B790u;
            goto label_13b790;
        }
    }
    ctx->pc = 0x13B758u;
    // 0x13b758: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x13b758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b75c: 0xc44016a0  lwc1        $f0, 0x16A0($v0)
    ctx->pc = 0x13b75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b760: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13b760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b764: 0x8fa70014  lw          $a3, 0x14($sp)
    ctx->pc = 0x13b764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x13b768: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x13b768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b76c: 0xa7b10004  sh          $s1, 0x4($sp)
    ctx->pc = 0x13b76cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 17));
    // 0x13b770: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x13b770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b774: 0xa7b10008  sh          $s1, 0x8($sp)
    ctx->pc = 0x13b774u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 17));
    // 0x13b778: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x13b778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13b77c: 0xa7b00006  sh          $s0, 0x6($sp)
    ctx->pc = 0x13b77cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x13b780: 0xc04f0f0  jal         func_13C3C0
    ctx->pc = 0x13B780u;
    SET_GPR_U32(ctx, 31, 0x13B788u);
    ctx->pc = 0x13B784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B780u;
            // 0x13b784: 0xa7b0000a  sh          $s0, 0xA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (runtime->hasFunction(0x13C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x13C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B788u; }
        if (ctx->pc != 0x13B788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C3C0_0x13c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B788u; }
        if (ctx->pc != 0x13B788u) { return; }
    }
    ctx->pc = 0x13B788u;
    // 0x13b788: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13B788u;
    {
        const bool branch_taken_0x13b788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B788u;
            // 0x13b78c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b788) {
            ctx->pc = 0x13B7B4u;
            goto label_13b7b4;
        }
    }
    ctx->pc = 0x13B790u;
label_13b790:
    // 0x13b790: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x13b790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_13b794:
    // 0x13b794: 0x217102b  sltu        $v0, $s0, $s7
    ctx->pc = 0x13b794u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x13b798: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x13B798u;
    {
        const bool branch_taken_0x13b798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B798u;
            // 0x13b79c: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b798) {
            ctx->pc = 0x13B6E8u;
            runtime->cooperativeGuestYield();
            goto label_13b6e8;
        }
    }
    ctx->pc = 0x13B7A0u;
label_13b7a0:
    // 0x13b7a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13b7a4:
    // 0x13b7a4: 0x23e102b  sltu        $v0, $s1, $fp
    ctx->pc = 0x13b7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x13b7a8: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
    ctx->pc = 0x13B7A8u;
    {
        const bool branch_taken_0x13b7a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7A8u;
            // 0x13b7ac: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b7a8) {
            ctx->pc = 0x13B6A8u;
            runtime->cooperativeGuestYield();
            goto label_13b6a8;
        }
    }
    ctx->pc = 0x13B7B0u;
label_13b7b0:
    // 0x13b7b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13b7b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13b7b4:
    // 0x13b7b4: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x13b7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b7b8: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x13b7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13b7bc: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x13b7bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13b7c0: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x13b7c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b7c4: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x13b7c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b7c8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x13b7c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13b7cc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x13b7ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b7d0: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x13b7d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b7d4: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x13b7d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b7d8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13b7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x13B7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B7DCu;
            // 0x13b7e0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B628u: goto label_13b628;
            case 0x13B6A8u: goto label_13b6a8;
            case 0x13B6E8u: goto label_13b6e8;
            case 0x13B790u: goto label_13b790;
            case 0x13B794u: goto label_13b794;
            case 0x13B7A0u: goto label_13b7a0;
            case 0x13B7A4u: goto label_13b7a4;
            case 0x13B7B0u: goto label_13b7b0;
            case 0x13B7B4u: goto label_13b7b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B7E4u;
    // 0x13b7e4: 0x0  nop
    ctx->pc = 0x13b7e4u;
    // NOP
}
