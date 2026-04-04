#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013B048
// Address: 0x13b048 - 0x13b538
void sub_0013B048_0x13b048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B048_0x13b048");
#endif

    ctx->pc = 0x13b048u;

    // 0x13b048: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x13b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x13b04c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x13b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x13b050: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x13b050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x13b054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b058: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x13b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x13b05c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x13b05cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b060: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x13b060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x13b064: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x13b064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b068: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x13b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x13b06c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13b06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b070: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x13b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x13b074: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x13b074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b078: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x13b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x13b07c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13b07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b080: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x13b080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x13b084: 0xc090506  jal         func_241418
    ctx->pc = 0x13B084u;
    SET_GPR_U32(ctx, 31, 0x13B08Cu);
    ctx->pc = 0x13B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13B084u;
            // 0x13b088: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241418u;
    if (runtime->hasFunction(0x241418u)) {
        auto targetFn = runtime->lookupFunction(0x241418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B08Cu; }
        if (ctx->pc != 0x13B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_241418_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13B08Cu; }
        if (ctx->pc != 0x13B08Cu) { return; }
    }
    ctx->pc = 0x13B08Cu;
    // 0x13b08c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13b090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13b090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b094: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13b094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13b098: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13b09c: 0x2446f170  addiu       $a2, $v0, -0xE90
    ctx->pc = 0x13b09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13b0a0: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x13b0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b0a4: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x13b0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b0a8: 0x6ac4000f  ldl         $a0, 0xF($s6)
    ctx->pc = 0x13b0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13b0ac: 0x6ec40008  ldr         $a0, 0x8($s6)
    ctx->pc = 0x13b0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13b0b0: 0x6ac50017  ldl         $a1, 0x17($s6)
    ctx->pc = 0x13b0b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x13b0b4: 0x6ec50010  ldr         $a1, 0x10($s6)
    ctx->pc = 0x13b0b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x13b0b8: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x13b0b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0bc: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x13b0bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0c0: 0xb0c4000f  sdl         $a0, 0xF($a2)
    ctx->pc = 0x13b0c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0c4: 0xb4c40008  sdr         $a0, 0x8($a2)
    ctx->pc = 0x13b0c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0c8: 0xb0c50017  sdl         $a1, 0x17($a2)
    ctx->pc = 0x13b0c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0cc: 0xb4c50010  sdr         $a1, 0x10($a2)
    ctx->pc = 0x13b0ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0d0: 0x6ac3001f  ldl         $v1, 0x1F($s6)
    ctx->pc = 0x13b0d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x13b0d4: 0x6ec30018  ldr         $v1, 0x18($s6)
    ctx->pc = 0x13b0d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13b0d8: 0x6ac40027  ldl         $a0, 0x27($s6)
    ctx->pc = 0x13b0d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x13b0dc: 0x6ec40020  ldr         $a0, 0x20($s6)
    ctx->pc = 0x13b0dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x13b0e0: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x13b0e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0e4: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x13b0e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0e8: 0xb0c40027  sdl         $a0, 0x27($a2)
    ctx->pc = 0x13b0e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0ec: 0xb4c40020  sdr         $a0, 0x20($a2)
    ctx->pc = 0x13b0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13b0f0: 0x8e15003c  lw          $s5, 0x3C($s0)
    ctx->pc = 0x13b0f0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x13b0f4: 0x52a0006a  beql        $s5, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x13B0F4u;
    {
        const bool branch_taken_0x13b0f4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x13b0f4) {
            ctx->pc = 0x13B0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B0F4u;
            // 0x13b0f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B2A0u;
            goto label_13b2a0;
        }
    }
    ctx->pc = 0x13B0FCu;
    // 0x13b0fc: 0x0  nop
    ctx->pc = 0x13b0fcu;
    // NOP
label_13b100:
    // 0x13b100: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x13b100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x13b104: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x13b104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x13b108: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13b108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b110: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x13b110u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b114: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x13b114u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b118: 0x70a610a8  pceqw       $v0, $a1, $a2
    ctx->pc = 0x13b118u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x13b11c: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13b11cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13b120: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13b120u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13b124: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13b124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13b128: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13b128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13b12c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13b12cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13b130: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x13B130u;
    {
        const bool branch_taken_0x13b130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B130u;
            // 0x13b134: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b130) {
            ctx->pc = 0x13B280u;
            goto label_13b280;
        }
    }
    ctx->pc = 0x13B138u;
    // 0x13b138: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x13b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x13b13c: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x13b13cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x13b140: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x13b140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13b144: 0x40f809  jalr        $v0
    ctx->pc = 0x13B144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B14Cu);
        ctx->pc = 0x13B148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B144u;
            // 0x13b148: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13B14Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B100u: goto label_13b100;
            case 0x13B1F0u: goto label_13b1f0;
            case 0x13B270u: goto label_13b270;
            case 0x13B274u: goto label_13b274;
            case 0x13B27Cu: goto label_13b27c;
            case 0x13B280u: goto label_13b280;
            case 0x13B2A0u: goto label_13b2a0;
            case 0x13B2A4u: goto label_13b2a4;
            case 0x13B2BCu: goto label_13b2bc;
            case 0x13B340u: goto label_13b340;
            case 0x13B394u: goto label_13b394;
            case 0x13B42Cu: goto label_13b42c;
            case 0x13B438u: goto label_13b438;
            case 0x13B43Cu: goto label_13b43c;
            case 0x13B498u: goto label_13b498;
            case 0x13B4B8u: goto label_13b4b8;
            case 0x13B50Cu: goto label_13b50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13B14Cu; }
            if (ctx->pc != 0x13B14Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13B14Cu;
    // 0x13b14c: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x13B14Cu;
    {
        const bool branch_taken_0x13b14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B14Cu;
            // 0x13b150: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b14c) {
            ctx->pc = 0x13B27Cu;
            goto label_13b27c;
        }
    }
    ctx->pc = 0x13B154u;
    // 0x13b154: 0xa7b30034  sh          $s3, 0x34($sp)
    ctx->pc = 0x13b154u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 19));
    // 0x13b158: 0xa7b20036  sh          $s2, 0x36($sp)
    ctx->pc = 0x13b158u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 18));
    // 0x13b15c: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x13b15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13b160: 0x3a0502d  daddu       $t2, $sp, $zero
    ctx->pc = 0x13b160u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b164: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x13b164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b168: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x13b168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x13b16c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x13b16cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b170: 0x78470010  lq          $a3, 0x10($v0)
    ctx->pc = 0x13b170u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13b174: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x13b174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x13b178: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x13b178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13b17c: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x13b17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x13b180: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x13b180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x13b184: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x13b184u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x13b188: 0x8da50008  lw          $a1, 0x8($t5)
    ctx->pc = 0x13b188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x13b18c: 0x3c0e002c  lui         $t6, 0x2C
    ctx->pc = 0x13b18cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)44 << 16));
    // 0x13b190: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x13b190u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b194: 0x25c87940  addiu       $t0, $t6, 0x7940
    ctx->pc = 0x13b194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), 31040));
    // 0x13b198: 0x7ba30030  lq          $v1, 0x30($sp)
    ctx->pc = 0x13b198u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b19c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x13b19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x13b1a0: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13b1a4: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x13b1a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b1a8: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x13b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x13b1ac: 0xb4843  sra         $t1, $t3, 1
    ctx->pc = 0x13b1acu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 11), 1));
    // 0x13b1b0: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x13b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x13b1b4: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x13b1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x13b1b8: 0x1920002d  blez        $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x13B1B8u;
    {
        const bool branch_taken_0x13b1b8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x13B1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B1B8u;
            // 0x13b1bc: 0x7c470020  sq          $a3, 0x20($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1b8) {
            ctx->pc = 0x13B270u;
            goto label_13b270;
        }
    }
    ctx->pc = 0x13B1C0u;
    // 0x13b1c0: 0x91180  sll         $v0, $t1, 6
    ctx->pc = 0x13b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x13b1c4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x13b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x13b1c8: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x13b1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13b1cc: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x13b1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13b1d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13b1d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b1d4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b1d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b1d8: 0x0  nop
    ctx->pc = 0x13b1d8u;
    // NOP
    // 0x13b1dc: 0x45010025  bc1t        . + 4 + (0x25 << 2)
    ctx->pc = 0x13B1DCu;
    {
        const bool branch_taken_0x13b1dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B1DCu;
            // 0x13b1e0: 0x8da20008  lw          $v0, 0x8($t5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b1dc) {
            ctx->pc = 0x13B274u;
            goto label_13b274;
        }
    }
    ctx->pc = 0x13B1E4u;
    // 0x13b1e4: 0x25cc7940  addiu       $t4, $t6, 0x7940
    ctx->pc = 0x13b1e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), 31040));
    // 0x13b1e8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x13b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x13b1ec: 0x0  nop
    ctx->pc = 0x13b1ecu;
    // NOP
label_13b1f0:
    // 0x13b1f0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x13b1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x13b1f4: 0xb2180  sll         $a0, $t3, 6
    ctx->pc = 0x13b1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x13b1f8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13b1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b1fc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x13b1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x13b200: 0x79480000  lq          $t0, 0x0($t2)
    ctx->pc = 0x13b200u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x13b204: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x13b204u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b208: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x13b208u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x13b20c: 0x94843  sra         $t1, $t1, 1
    ctx->pc = 0x13b20cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 1));
    // 0x13b210: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13b210u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13b214: 0x79470010  lq          $a3, 0x10($t2)
    ctx->pc = 0x13b214u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x13b218: 0x79460020  lq          $a2, 0x20($t2)
    ctx->pc = 0x13b218u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x13b21c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x13b21cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x13b220: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x13b220u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13b224: 0x79450030  lq          $a1, 0x30($t2)
    ctx->pc = 0x13b224u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x13b228: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x13b228u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x13b22c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13b22cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13b230: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x13b230u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x13b234: 0x7c650030  sq          $a1, 0x30($v1)
    ctx->pc = 0x13b234u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 5));
    // 0x13b238: 0x7c680000  sq          $t0, 0x0($v1)
    ctx->pc = 0x13b238u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 8));
    // 0x13b23c: 0x7c670010  sq          $a3, 0x10($v1)
    ctx->pc = 0x13b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 7));
    // 0x13b240: 0x1920000b  blez        $t1, . + 4 + (0xB << 2)
    ctx->pc = 0x13B240u;
    {
        const bool branch_taken_0x13b240 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x13B244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B240u;
            // 0x13b244: 0x7c660020  sq          $a2, 0x20($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b240) {
            ctx->pc = 0x13B270u;
            goto label_13b270;
        }
    }
    ctx->pc = 0x13B248u;
    // 0x13b248: 0x91180  sll         $v0, $t1, 6
    ctx->pc = 0x13b248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x13b24c: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x13b24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13b250: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x13b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x13b254: 0x88440003  lwl         $a0, 0x3($v0)
    ctx->pc = 0x13b254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x13b258: 0x98440000  lwr         $a0, 0x0($v0)
    ctx->pc = 0x13b258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x13b25c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13b25cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b260: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13b260u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b264: 0x0  nop
    ctx->pc = 0x13b264u;
    // NOP
    // 0x13b268: 0x4500ffe1  bc1f        . + 4 + (-0x1F << 2)
    ctx->pc = 0x13B268u;
    {
        const bool branch_taken_0x13b268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13B26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B268u;
            // 0x13b26c: 0x91980  sll         $v1, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b268) {
            ctx->pc = 0x13B1F0u;
            runtime->cooperativeGuestYield();
            goto label_13b1f0;
        }
    }
    ctx->pc = 0x13B270u;
label_13b270:
    // 0x13b270: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x13b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
label_13b274:
    // 0x13b274: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13b274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13b278: 0xada20008  sw          $v0, 0x8($t5)
    ctx->pc = 0x13b278u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 2));
label_13b27c:
    // 0x13b27c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13b27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_13b280:
    // 0x13b280: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x13b280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13b284: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x13b284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x13b288: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x13b288u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13b28c: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x13b28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x13b290: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x13B290u;
    {
        const bool branch_taken_0x13b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B290u;
            // 0x13b294: 0x3073ffff  andi        $s3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b290) {
            ctx->pc = 0x13B100u;
            runtime->cooperativeGuestYield();
            goto label_13b100;
        }
    }
    ctx->pc = 0x13B298u;
    // 0x13b298: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x13b298u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b29c: 0x0  nop
    ctx->pc = 0x13b29cu;
    // NOP
label_13b2a0:
    // 0x13b2a0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x13b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_13b2a4:
    // 0x13b2a4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x13b2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13b2a8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x13b2a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x13b2ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13B2ACu;
    {
        const bool branch_taken_0x13b2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2ACu;
            // 0x13b2b0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2ac) {
            ctx->pc = 0x13B2BCu;
            goto label_13b2bc;
        }
    }
    ctx->pc = 0x13B2B4u;
    // 0x13b2b4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x13B2B4u;
    {
        const bool branch_taken_0x13b2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2B4u;
            // 0x13b2b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2b4) {
            ctx->pc = 0x13B43Cu;
            goto label_13b43c;
        }
    }
    ctx->pc = 0x13B2BCu;
label_13b2bc:
    // 0x13b2bc: 0x2468ffff  addiu       $t0, $v1, -0x1
    ctx->pc = 0x13b2bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13b2c0: 0x24477980  addiu       $a3, $v0, 0x7980
    ctx->pc = 0x13b2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
    // 0x13b2c4: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x13b2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x13b2c8: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x13b2c8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13b2cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13b2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b2d0: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x13b2d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x13b2d4: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x13b2d4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x13b2d8: 0x78e40030  lq          $a0, 0x30($a3)
    ctx->pc = 0x13b2d8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x13b2dc: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x13b2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x13b2e0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x13b2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x13b2e4: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x13b2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x13b2e8: 0x7fa40030  sq          $a0, 0x30($sp)
    ctx->pc = 0x13b2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 4));
    // 0x13b2ec: 0x11060053  beq         $t0, $a2, . + 4 + (0x53 << 2)
    ctx->pc = 0x13B2ECu;
    {
        const bool branch_taken_0x13b2ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 6));
        ctx->pc = 0x13B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B2ECu;
            // 0x13b2f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b2ec) {
            ctx->pc = 0x13B43Cu;
            goto label_13b43c;
        }
    }
    ctx->pc = 0x13B2F4u;
    // 0x13b2f4: 0x24e2ffc0  addiu       $v0, $a3, -0x40
    ctx->pc = 0x13b2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    // 0x13b2f8: 0x81980  sll         $v1, $t0, 6
    ctx->pc = 0x13b2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 6));
    // 0x13b2fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x13b300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13b304: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x13b304u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b308: 0xc8202a  slt         $a0, $a2, $t0
    ctx->pc = 0x13b308u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x13b30c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x13b30cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b310: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x13b310u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x13b314: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13b314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13b318: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x13b318u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x13b31c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x13b31cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13b320: 0x7ce20020  sq          $v0, 0x20($a3)
    ctx->pc = 0x13b320u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 32), GPR_VEC(ctx, 2));
    // 0x13b324: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13b324u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13b328: 0x10800043  beqz        $a0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13B328u;
    {
        const bool branch_taken_0x13b328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B328u;
            // 0x13b32c: 0x7ce20030  sq          $v0, 0x30($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b328) {
            ctx->pc = 0x13B438u;
            goto label_13b438;
        }
    }
    ctx->pc = 0x13B330u;
    // 0x13b330: 0x7baa0040  lq          $t2, 0x40($sp)
    ctx->pc = 0x13b330u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13b334: 0x7ba90050  lq          $t1, 0x50($sp)
    ctx->pc = 0x13b334u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13b338: 0x7ba80060  lq          $t0, 0x60($sp)
    ctx->pc = 0x13b338u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13b33c: 0x7ba70070  lq          $a3, 0x70($sp)
    ctx->pc = 0x13b33cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_13b340:
    // 0x13b340: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x13b340u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x13b344: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x13b344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x13b348: 0x8d820008  lw          $v0, 0x8($t4)
    ctx->pc = 0x13b348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x13b34c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x13b34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13b350: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13B350u;
    {
        const bool branch_taken_0x13b350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B350u;
            // 0x13b354: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b350) {
            ctx->pc = 0x13B394u;
            goto label_13b394;
        }
    }
    ctx->pc = 0x13B358u;
    // 0x13b358: 0x62180  sll         $a0, $a2, 6
    ctx->pc = 0x13b358u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x13b35c: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x13b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
    // 0x13b360: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x13b360u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x13b364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b368: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13b368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13b36c: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x13b36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x13b370: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x13b370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x13b374: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x13b374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x13b378: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x13b378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x13b37c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13b37cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b380: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13b380u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b384: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13b384u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b388: 0x0  nop
    ctx->pc = 0x13b388u;
    // NOP
    // 0x13b38c: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13B38Cu;
    {
        const bool branch_taken_0x13b38c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b38c) {
            ctx->pc = 0x13B390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B38Cu;
            // 0x13b390: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B394u;
            goto label_13b394;
        }
    }
    ctx->pc = 0x13B394u;
label_13b394:
    // 0x13b394: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13b394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x13b398: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x13b398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x13b39c: 0x24427940  addiu       $v0, $v0, 0x7940
    ctx->pc = 0x13b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31040));
    // 0x13b3a0: 0xb2180  sll         $a0, $t3, 6
    ctx->pc = 0x13b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 6));
    // 0x13b3a4: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x13b3a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b3a8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13b3ac: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x13b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x13b3b0: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x13b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x13b3b4: 0x88a30003  lwl         $v1, 0x3($a1)
    ctx->pc = 0x13b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x13b3b8: 0x98a30000  lwr         $v1, 0x0($a1)
    ctx->pc = 0x13b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x13b3bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x13b3bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13b3c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13b3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13b3c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x13b3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13b3c8: 0x0  nop
    ctx->pc = 0x13b3c8u;
    // NOP
    // 0x13b3cc: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
    ctx->pc = 0x13B3CCu;
    {
        const bool branch_taken_0x13b3cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13b3cc) {
            ctx->pc = 0x13B3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13B3CCu;
            // 0x13b3d0: 0x7fa70070  sq          $a3, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13B42Cu;
            goto label_13b42c;
        }
    }
    ctx->pc = 0x13B3D4u;
    // 0x13b3d4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x13b3d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13b3d8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x13b3d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b3dc: 0x78aa0000  lq          $t2, 0x0($a1)
    ctx->pc = 0x13b3dcu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13b3e0: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x13b3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x13b3e4: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x13b3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x13b3e8: 0x78a90010  lq          $t1, 0x10($a1)
    ctx->pc = 0x13b3e8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x13b3ec: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x13b3ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x13b3f0: 0x8d830008  lw          $v1, 0x8($t4)
    ctx->pc = 0x13b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x13b3f4: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x13b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x13b3f8: 0x78a80020  lq          $t0, 0x20($a1)
    ctx->pc = 0x13b3f8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x13b3fc: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x13b3fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13b400: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x13b400u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x13b404: 0x78a70030  lq          $a3, 0x30($a1)
    ctx->pc = 0x13b404u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x13b408: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x13b408u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x13b40c: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x13b40cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x13b410: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x13b410u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x13b414: 0x7c870030  sq          $a3, 0x30($a0)
    ctx->pc = 0x13b414u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 7));
    // 0x13b418: 0x7c8a0000  sq          $t2, 0x0($a0)
    ctx->pc = 0x13b418u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 10));
    // 0x13b41c: 0x7c890010  sq          $t1, 0x10($a0)
    ctx->pc = 0x13b41cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 9));
    // 0x13b420: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x13B420u;
    {
        const bool branch_taken_0x13b420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B420u;
            // 0x13b424: 0x7c880020  sq          $t0, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b420) {
            ctx->pc = 0x13B340u;
            runtime->cooperativeGuestYield();
            goto label_13b340;
        }
    }
    ctx->pc = 0x13B428u;
    // 0x13b428: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x13b428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
label_13b42c:
    // 0x13b42c: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x13b42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x13b430: 0x7fa90050  sq          $t1, 0x50($sp)
    ctx->pc = 0x13b430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 9));
    // 0x13b434: 0x7faa0040  sq          $t2, 0x40($sp)
    ctx->pc = 0x13b434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 10));
label_13b438:
    // 0x13b438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13b43c:
    // 0x13b43c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x13B43Cu;
    {
        const bool branch_taken_0x13b43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B43Cu;
            // 0x13b440: 0xdba10010  lqc2        $vf1, 0x10($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b43c) {
            ctx->pc = 0x13B50Cu;
            goto label_13b50c;
        }
    }
    ctx->pc = 0x13B444u;
    // 0x13b444: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x13b444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x13b448: 0x24627790  addiu       $v0, $v1, 0x7790
    ctx->pc = 0x13b448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x13b44c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13b44cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b450: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x13b450u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x13b454: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13b454u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b458: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x13b458u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b45c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13b45cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b460: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x13b460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13b464: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x13b464u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13b468: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x13b468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b46c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x13b46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13b470: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x13b470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13b474: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x13b474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x13b478: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x13b478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x13b47c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13b47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x13b480: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13b480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13b484: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13B484u;
    {
        const bool branch_taken_0x13b484 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B484u;
            // 0x13b488: 0x97a30036  lhu         $v1, 0x36($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b484) {
            ctx->pc = 0x13B498u;
            goto label_13b498;
        }
    }
    ctx->pc = 0x13B48Cu;
    // 0x13b48c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13B48Cu;
    {
        const bool branch_taken_0x13b48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B48Cu;
            // 0x13b490: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b48c) {
            ctx->pc = 0x13B4B8u;
            goto label_13b4b8;
        }
    }
    ctx->pc = 0x13B494u;
    // 0x13b494: 0x0  nop
    ctx->pc = 0x13b494u;
    // NOP
label_13b498:
    // 0x13b498: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x13b498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x13b49c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x13b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x13b4a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13b4a4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13b4a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b4a8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x13b4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x13b4ac: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13b4acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13b4b0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x13b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13b4b4: 0x0  nop
    ctx->pc = 0x13b4b4u;
    // NOP
label_13b4b8:
    // 0x13b4b8: 0x97a40034  lhu         $a0, 0x34($sp)
    ctx->pc = 0x13b4b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x13b4bc: 0x24c37790  addiu       $v1, $a2, 0x7790
    ctx->pc = 0x13b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 30608));
    // 0x13b4c0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x13b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13b4c4: 0xac650030  sw          $a1, 0x30($v1)
    ctx->pc = 0x13b4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 5));
    // 0x13b4c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13b4cc: 0xa4600034  sh          $zero, 0x34($v1)
    ctx->pc = 0x13b4ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x13b4d0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x13b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13b4d4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x13b4d4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13b4d8: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x13b4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x13b4dc: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x13b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x13b4e0: 0xa4650036  sh          $a1, 0x36($v1)
    ctx->pc = 0x13b4e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 54), (uint16_t)GPR_U32(ctx, 5));
    // 0x13b4e4: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x13b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
    // 0x13b4e8: 0x40f809  jalr        $v0
    ctx->pc = 0x13B4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13B4F0u);
        ctx->pc = 0x13B4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4E8u;
            // 0x13b4ec: 0xac600038  sw          $zero, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13B4F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B100u: goto label_13b100;
            case 0x13B1F0u: goto label_13b1f0;
            case 0x13B270u: goto label_13b270;
            case 0x13B274u: goto label_13b274;
            case 0x13B27Cu: goto label_13b27c;
            case 0x13B280u: goto label_13b280;
            case 0x13B2A0u: goto label_13b2a0;
            case 0x13B2A4u: goto label_13b2a4;
            case 0x13B2BCu: goto label_13b2bc;
            case 0x13B340u: goto label_13b340;
            case 0x13B394u: goto label_13b394;
            case 0x13B42Cu: goto label_13b42c;
            case 0x13B438u: goto label_13b438;
            case 0x13B43Cu: goto label_13b43c;
            case 0x13B498u: goto label_13b498;
            case 0x13B4B8u: goto label_13b4b8;
            case 0x13B50Cu: goto label_13b50c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13B4F0u; }
            if (ctx->pc != 0x13B4F0u) { return; }
        }
        }
    }
    ctx->pc = 0x13B4F0u;
    // 0x13b4f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13b4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b4f4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13b4f8: 0x1062ff6a  beq         $v1, $v0, . + 4 + (-0x96 << 2)
    ctx->pc = 0x13B4F8u;
    {
        const bool branch_taken_0x13b4f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13B4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B4F8u;
            // 0x13b4fc: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b4f8) {
            ctx->pc = 0x13B2A4u;
            runtime->cooperativeGuestYield();
            goto label_13b2a4;
        }
    }
    ctx->pc = 0x13B500u;
    // 0x13b500: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x13b500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13b504: 0x1462ff67  bne         $v1, $v0, . + 4 + (-0x99 << 2)
    ctx->pc = 0x13B504u;
    {
        const bool branch_taken_0x13b504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13B508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B504u;
            // 0x13b508: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b504) {
            ctx->pc = 0x13B2A4u;
            runtime->cooperativeGuestYield();
            goto label_13b2a4;
        }
    }
    ctx->pc = 0x13B50Cu;
label_13b50c:
    // 0x13b50c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13b50cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b510: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x13b510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x13b514: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x13b514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13b518: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x13b518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13b51c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x13b51cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13b520: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x13b520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13b524: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x13b524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13b528: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x13b528u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13b52c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x13b52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13b530: 0x3e00008  jr          $ra
    ctx->pc = 0x13B530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13B530u;
            // 0x13b534: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13B100u: goto label_13b100;
            case 0x13B1F0u: goto label_13b1f0;
            case 0x13B270u: goto label_13b270;
            case 0x13B274u: goto label_13b274;
            case 0x13B27Cu: goto label_13b27c;
            case 0x13B280u: goto label_13b280;
            case 0x13B2A0u: goto label_13b2a0;
            case 0x13B2A4u: goto label_13b2a4;
            case 0x13B2BCu: goto label_13b2bc;
            case 0x13B340u: goto label_13b340;
            case 0x13B394u: goto label_13b394;
            case 0x13B42Cu: goto label_13b42c;
            case 0x13B438u: goto label_13b438;
            case 0x13B43Cu: goto label_13b43c;
            case 0x13B498u: goto label_13b498;
            case 0x13B4B8u: goto label_13b4b8;
            case 0x13B50Cu: goto label_13b50c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13B538u;
}
