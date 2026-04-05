#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B368
// Address: 0x17b368 - 0x17b7c0
void sub_0017B368_0x17b368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B368_0x17b368");
#endif

    ctx->pc = 0x17b368u;

label_17b368:
    // 0x17b368: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17b368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_17b36c:
    // 0x17b36c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17b36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_17b370:
    // 0x17b370: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17b370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_17b374:
    // 0x17b374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b378:
    // 0x17b378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17b378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_17b37c:
    // 0x17b37c: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x17b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17b380:
    // 0x17b380: 0x1080010a  beqz        $a0, . + 4 + (0x10A << 2)
label_17b384:
    if (ctx->pc == 0x17B384u) {
        ctx->pc = 0x17B384u;
            // 0x17b384: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x17B388u;
        goto label_17b388;
    }
    ctx->pc = 0x17B380u;
    {
        const bool branch_taken_0x17b380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B380u;
            // 0x17b384: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b380) {
            ctx->pc = 0x17B7ACu;
            goto label_17b7ac;
        }
    }
    ctx->pc = 0x17B388u;
label_17b388:
    // 0x17b388: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x17b388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b38c:
    // 0x17b38c: 0xc621c64c  lwc1        $f1, -0x39B4($s1)
    ctx->pc = 0x17b38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b390:
    // 0x17b390: 0x2c830005  sltiu       $v1, $a0, 0x5
    ctx->pc = 0x17b390u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_17b394:
    // 0x17b394: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17b398:
    // 0x17b398: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b398u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b39c:
    // 0x17b39c: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x17b39cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_17b3a0:
    // 0x17b3a0: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x17b3a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17b3a4:
    // 0x17b3a4: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x17b3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_17b3a8:
    // 0x17b3a8: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x17b3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_17b3ac:
    // 0x17b3ac: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x17b3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_17b3b0:
    // 0x17b3b0: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x17b3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_17b3b4:
    // 0x17b3b4: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x17b3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_17b3b8:
    // 0x17b3b8: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x17b3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_17b3bc:
    // 0x17b3bc: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x17b3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3c0:
    // 0x17b3c0: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x17b3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3c4:
    // 0x17b3c4: 0xb3a6000f  sdl         $a2, 0xF($sp)
    ctx->pc = 0x17b3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3c8:
    // 0x17b3c8: 0xb7a60008  sdr         $a2, 0x8($sp)
    ctx->pc = 0x17b3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3cc:
    // 0x17b3cc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x17b3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3d0:
    // 0x17b3d0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x17b3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3d4:
    // 0x17b3d4: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x17b3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3d8:
    // 0x17b3d8: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x17b3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3dc:
    // 0x17b3dc: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x17b3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_17b3e0:
    // 0x17b3e0: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x17b3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_17b3e4:
    // 0x17b3e4: 0x6846002f  ldl         $a2, 0x2F($v0)
    ctx->pc = 0x17b3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_17b3e8:
    // 0x17b3e8: 0x6c460028  ldr         $a2, 0x28($v0)
    ctx->pc = 0x17b3e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_17b3ec:
    // 0x17b3ec: 0x68470037  ldl         $a3, 0x37($v0)
    ctx->pc = 0x17b3ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_17b3f0:
    // 0x17b3f0: 0x6c470030  ldr         $a3, 0x30($v0)
    ctx->pc = 0x17b3f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_17b3f4:
    // 0x17b3f4: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x17b3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3f8:
    // 0x17b3f8: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x17b3f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b3fc:
    // 0x17b3fc: 0xb3a6002f  sdl         $a2, 0x2F($sp)
    ctx->pc = 0x17b3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b400:
    // 0x17b400: 0xb7a60028  sdr         $a2, 0x28($sp)
    ctx->pc = 0x17b400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b404:
    // 0x17b404: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x17b404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b408:
    // 0x17b408: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x17b408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_17b40c:
    // 0x17b40c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17b40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b410:
    // 0x17b410: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_17b414:
    if (ctx->pc == 0x17B414u) {
        ctx->pc = 0x17B414u;
            // 0x17b414: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->pc = 0x17B418u;
        goto label_17b418;
    }
    ctx->pc = 0x17B410u;
    {
        const bool branch_taken_0x17b410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B410u;
            // 0x17b414: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b410) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B418u;
label_17b418:
    // 0x17b418: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_17b41c:
    // 0x17b41c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_17b420:
    // 0x17b420: 0x244229b0  addiu       $v0, $v0, 0x29B0
    ctx->pc = 0x17b420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10672));
label_17b424:
    // 0x17b424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17b428:
    // 0x17b428: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b42c:
    // 0x17b42c: 0x400008  jr          $v0
label_17b430:
    if (ctx->pc == 0x17B430u) {
        ctx->pc = 0x17B434u;
        goto label_17b434;
    }
    ctx->pc = 0x17B42Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B368u: goto label_17b368;
            case 0x17B36Cu: goto label_17b36c;
            case 0x17B370u: goto label_17b370;
            case 0x17B374u: goto label_17b374;
            case 0x17B378u: goto label_17b378;
            case 0x17B37Cu: goto label_17b37c;
            case 0x17B380u: goto label_17b380;
            case 0x17B384u: goto label_17b384;
            case 0x17B388u: goto label_17b388;
            case 0x17B38Cu: goto label_17b38c;
            case 0x17B390u: goto label_17b390;
            case 0x17B394u: goto label_17b394;
            case 0x17B398u: goto label_17b398;
            case 0x17B39Cu: goto label_17b39c;
            case 0x17B3A0u: goto label_17b3a0;
            case 0x17B3A4u: goto label_17b3a4;
            case 0x17B3A8u: goto label_17b3a8;
            case 0x17B3ACu: goto label_17b3ac;
            case 0x17B3B0u: goto label_17b3b0;
            case 0x17B3B4u: goto label_17b3b4;
            case 0x17B3B8u: goto label_17b3b8;
            case 0x17B3BCu: goto label_17b3bc;
            case 0x17B3C0u: goto label_17b3c0;
            case 0x17B3C4u: goto label_17b3c4;
            case 0x17B3C8u: goto label_17b3c8;
            case 0x17B3CCu: goto label_17b3cc;
            case 0x17B3D0u: goto label_17b3d0;
            case 0x17B3D4u: goto label_17b3d4;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B3E0u: goto label_17b3e0;
            case 0x17B3E4u: goto label_17b3e4;
            case 0x17B3E8u: goto label_17b3e8;
            case 0x17B3ECu: goto label_17b3ec;
            case 0x17B3F0u: goto label_17b3f0;
            case 0x17B3F4u: goto label_17b3f4;
            case 0x17B3F8u: goto label_17b3f8;
            case 0x17B3FCu: goto label_17b3fc;
            case 0x17B400u: goto label_17b400;
            case 0x17B404u: goto label_17b404;
            case 0x17B408u: goto label_17b408;
            case 0x17B40Cu: goto label_17b40c;
            case 0x17B410u: goto label_17b410;
            case 0x17B414u: goto label_17b414;
            case 0x17B418u: goto label_17b418;
            case 0x17B41Cu: goto label_17b41c;
            case 0x17B420u: goto label_17b420;
            case 0x17B424u: goto label_17b424;
            case 0x17B428u: goto label_17b428;
            case 0x17B42Cu: goto label_17b42c;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B438u: goto label_17b438;
            case 0x17B43Cu: goto label_17b43c;
            case 0x17B440u: goto label_17b440;
            case 0x17B444u: goto label_17b444;
            case 0x17B448u: goto label_17b448;
            case 0x17B44Cu: goto label_17b44c;
            case 0x17B450u: goto label_17b450;
            case 0x17B454u: goto label_17b454;
            case 0x17B458u: goto label_17b458;
            case 0x17B45Cu: goto label_17b45c;
            case 0x17B460u: goto label_17b460;
            case 0x17B464u: goto label_17b464;
            case 0x17B468u: goto label_17b468;
            case 0x17B46Cu: goto label_17b46c;
            case 0x17B470u: goto label_17b470;
            case 0x17B474u: goto label_17b474;
            case 0x17B478u: goto label_17b478;
            case 0x17B47Cu: goto label_17b47c;
            case 0x17B480u: goto label_17b480;
            case 0x17B484u: goto label_17b484;
            case 0x17B488u: goto label_17b488;
            case 0x17B48Cu: goto label_17b48c;
            case 0x17B490u: goto label_17b490;
            case 0x17B494u: goto label_17b494;
            case 0x17B498u: goto label_17b498;
            case 0x17B49Cu: goto label_17b49c;
            case 0x17B4A0u: goto label_17b4a0;
            case 0x17B4A4u: goto label_17b4a4;
            case 0x17B4A8u: goto label_17b4a8;
            case 0x17B4ACu: goto label_17b4ac;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4B4u: goto label_17b4b4;
            case 0x17B4B8u: goto label_17b4b8;
            case 0x17B4BCu: goto label_17b4bc;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4CCu: goto label_17b4cc;
            case 0x17B4D0u: goto label_17b4d0;
            case 0x17B4D4u: goto label_17b4d4;
            case 0x17B4D8u: goto label_17b4d8;
            case 0x17B4DCu: goto label_17b4dc;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E4u: goto label_17b4e4;
            case 0x17B4E8u: goto label_17b4e8;
            case 0x17B4ECu: goto label_17b4ec;
            case 0x17B4F0u: goto label_17b4f0;
            case 0x17B4F4u: goto label_17b4f4;
            case 0x17B4F8u: goto label_17b4f8;
            case 0x17B4FCu: goto label_17b4fc;
            case 0x17B500u: goto label_17b500;
            case 0x17B504u: goto label_17b504;
            case 0x17B508u: goto label_17b508;
            case 0x17B50Cu: goto label_17b50c;
            case 0x17B510u: goto label_17b510;
            case 0x17B514u: goto label_17b514;
            case 0x17B518u: goto label_17b518;
            case 0x17B51Cu: goto label_17b51c;
            case 0x17B520u: goto label_17b520;
            case 0x17B524u: goto label_17b524;
            case 0x17B528u: goto label_17b528;
            case 0x17B52Cu: goto label_17b52c;
            case 0x17B530u: goto label_17b530;
            case 0x17B534u: goto label_17b534;
            case 0x17B538u: goto label_17b538;
            case 0x17B53Cu: goto label_17b53c;
            case 0x17B540u: goto label_17b540;
            case 0x17B544u: goto label_17b544;
            case 0x17B548u: goto label_17b548;
            case 0x17B54Cu: goto label_17b54c;
            case 0x17B550u: goto label_17b550;
            case 0x17B554u: goto label_17b554;
            case 0x17B558u: goto label_17b558;
            case 0x17B55Cu: goto label_17b55c;
            case 0x17B560u: goto label_17b560;
            case 0x17B564u: goto label_17b564;
            case 0x17B568u: goto label_17b568;
            case 0x17B56Cu: goto label_17b56c;
            case 0x17B570u: goto label_17b570;
            case 0x17B574u: goto label_17b574;
            case 0x17B578u: goto label_17b578;
            case 0x17B57Cu: goto label_17b57c;
            case 0x17B580u: goto label_17b580;
            case 0x17B584u: goto label_17b584;
            case 0x17B588u: goto label_17b588;
            case 0x17B58Cu: goto label_17b58c;
            case 0x17B590u: goto label_17b590;
            case 0x17B594u: goto label_17b594;
            case 0x17B598u: goto label_17b598;
            case 0x17B59Cu: goto label_17b59c;
            case 0x17B5A0u: goto label_17b5a0;
            case 0x17B5A4u: goto label_17b5a4;
            case 0x17B5A8u: goto label_17b5a8;
            case 0x17B5ACu: goto label_17b5ac;
            case 0x17B5B0u: goto label_17b5b0;
            case 0x17B5B4u: goto label_17b5b4;
            case 0x17B5B8u: goto label_17b5b8;
            case 0x17B5BCu: goto label_17b5bc;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5C4u: goto label_17b5c4;
            case 0x17B5C8u: goto label_17b5c8;
            case 0x17B5CCu: goto label_17b5cc;
            case 0x17B5D0u: goto label_17b5d0;
            case 0x17B5D4u: goto label_17b5d4;
            case 0x17B5D8u: goto label_17b5d8;
            case 0x17B5DCu: goto label_17b5dc;
            case 0x17B5E0u: goto label_17b5e0;
            case 0x17B5E4u: goto label_17b5e4;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B5F0u: goto label_17b5f0;
            case 0x17B5F4u: goto label_17b5f4;
            case 0x17B5F8u: goto label_17b5f8;
            case 0x17B5FCu: goto label_17b5fc;
            case 0x17B600u: goto label_17b600;
            case 0x17B604u: goto label_17b604;
            case 0x17B608u: goto label_17b608;
            case 0x17B60Cu: goto label_17b60c;
            case 0x17B610u: goto label_17b610;
            case 0x17B614u: goto label_17b614;
            case 0x17B618u: goto label_17b618;
            case 0x17B61Cu: goto label_17b61c;
            case 0x17B620u: goto label_17b620;
            case 0x17B624u: goto label_17b624;
            case 0x17B628u: goto label_17b628;
            case 0x17B62Cu: goto label_17b62c;
            case 0x17B630u: goto label_17b630;
            case 0x17B634u: goto label_17b634;
            case 0x17B638u: goto label_17b638;
            case 0x17B63Cu: goto label_17b63c;
            case 0x17B640u: goto label_17b640;
            case 0x17B644u: goto label_17b644;
            case 0x17B648u: goto label_17b648;
            case 0x17B64Cu: goto label_17b64c;
            case 0x17B650u: goto label_17b650;
            case 0x17B654u: goto label_17b654;
            case 0x17B658u: goto label_17b658;
            case 0x17B65Cu: goto label_17b65c;
            case 0x17B660u: goto label_17b660;
            case 0x17B664u: goto label_17b664;
            case 0x17B668u: goto label_17b668;
            case 0x17B66Cu: goto label_17b66c;
            case 0x17B670u: goto label_17b670;
            case 0x17B674u: goto label_17b674;
            case 0x17B678u: goto label_17b678;
            case 0x17B67Cu: goto label_17b67c;
            case 0x17B680u: goto label_17b680;
            case 0x17B684u: goto label_17b684;
            case 0x17B688u: goto label_17b688;
            case 0x17B68Cu: goto label_17b68c;
            case 0x17B690u: goto label_17b690;
            case 0x17B694u: goto label_17b694;
            case 0x17B698u: goto label_17b698;
            case 0x17B69Cu: goto label_17b69c;
            case 0x17B6A0u: goto label_17b6a0;
            case 0x17B6A4u: goto label_17b6a4;
            case 0x17B6A8u: goto label_17b6a8;
            case 0x17B6ACu: goto label_17b6ac;
            case 0x17B6B0u: goto label_17b6b0;
            case 0x17B6B4u: goto label_17b6b4;
            case 0x17B6B8u: goto label_17b6b8;
            case 0x17B6BCu: goto label_17b6bc;
            case 0x17B6C0u: goto label_17b6c0;
            case 0x17B6C4u: goto label_17b6c4;
            case 0x17B6C8u: goto label_17b6c8;
            case 0x17B6CCu: goto label_17b6cc;
            case 0x17B6D0u: goto label_17b6d0;
            case 0x17B6D4u: goto label_17b6d4;
            case 0x17B6D8u: goto label_17b6d8;
            case 0x17B6DCu: goto label_17b6dc;
            case 0x17B6E0u: goto label_17b6e0;
            case 0x17B6E4u: goto label_17b6e4;
            case 0x17B6E8u: goto label_17b6e8;
            case 0x17B6ECu: goto label_17b6ec;
            case 0x17B6F0u: goto label_17b6f0;
            case 0x17B6F4u: goto label_17b6f4;
            case 0x17B6F8u: goto label_17b6f8;
            case 0x17B6FCu: goto label_17b6fc;
            case 0x17B700u: goto label_17b700;
            case 0x17B704u: goto label_17b704;
            case 0x17B708u: goto label_17b708;
            case 0x17B70Cu: goto label_17b70c;
            case 0x17B710u: goto label_17b710;
            case 0x17B714u: goto label_17b714;
            case 0x17B718u: goto label_17b718;
            case 0x17B71Cu: goto label_17b71c;
            case 0x17B720u: goto label_17b720;
            case 0x17B724u: goto label_17b724;
            case 0x17B728u: goto label_17b728;
            case 0x17B72Cu: goto label_17b72c;
            case 0x17B730u: goto label_17b730;
            case 0x17B734u: goto label_17b734;
            case 0x17B738u: goto label_17b738;
            case 0x17B73Cu: goto label_17b73c;
            case 0x17B740u: goto label_17b740;
            case 0x17B744u: goto label_17b744;
            case 0x17B748u: goto label_17b748;
            case 0x17B74Cu: goto label_17b74c;
            case 0x17B750u: goto label_17b750;
            case 0x17B754u: goto label_17b754;
            case 0x17B758u: goto label_17b758;
            case 0x17B75Cu: goto label_17b75c;
            case 0x17B760u: goto label_17b760;
            case 0x17B764u: goto label_17b764;
            case 0x17B768u: goto label_17b768;
            case 0x17B76Cu: goto label_17b76c;
            case 0x17B770u: goto label_17b770;
            case 0x17B774u: goto label_17b774;
            case 0x17B778u: goto label_17b778;
            case 0x17B77Cu: goto label_17b77c;
            case 0x17B780u: goto label_17b780;
            case 0x17B784u: goto label_17b784;
            case 0x17B788u: goto label_17b788;
            case 0x17B78Cu: goto label_17b78c;
            case 0x17B790u: goto label_17b790;
            case 0x17B794u: goto label_17b794;
            case 0x17B798u: goto label_17b798;
            case 0x17B79Cu: goto label_17b79c;
            case 0x17B7A0u: goto label_17b7a0;
            case 0x17B7A4u: goto label_17b7a4;
            case 0x17B7A8u: goto label_17b7a8;
            case 0x17B7ACu: goto label_17b7ac;
            case 0x17B7B0u: goto label_17b7b0;
            case 0x17B7B4u: goto label_17b7b4;
            case 0x17B7B8u: goto label_17b7b8;
            case 0x17B7BCu: goto label_17b7bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B434u;
label_17b434:
    // 0x17b434: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x17b434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b438:
    // 0x17b438: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x17b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b43c:
    // 0x17b43c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b43cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b440:
    // 0x17b440: 0x0  nop
    ctx->pc = 0x17b440u;
    // NOP
label_17b444:
    // 0x17b444: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17b448:
    if (ctx->pc == 0x17B448u) {
        ctx->pc = 0x17B448u;
            // 0x17b448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x17B44Cu;
        goto label_17b44c;
    }
    ctx->pc = 0x17B444u;
    {
        const bool branch_taken_0x17b444 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B444u;
            // 0x17b448: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b444) {
            ctx->pc = 0x17B458u;
            goto label_17b458;
        }
    }
    ctx->pc = 0x17B44Cu;
label_17b44c:
    // 0x17b44c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x17b44cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_17b450:
    // 0x17b450: 0x10000033  b           . + 4 + (0x33 << 2)
label_17b454:
    if (ctx->pc == 0x17B454u) {
        ctx->pc = 0x17B454u;
            // 0x17b454: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B458u;
        goto label_17b458;
    }
    ctx->pc = 0x17B450u;
    {
        const bool branch_taken_0x17b450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B450u;
            // 0x17b454: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b450) {
            ctx->pc = 0x17B520u;
            goto label_17b520;
        }
    }
    ctx->pc = 0x17B458u;
label_17b458:
    // 0x17b458: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x17b458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_17b45c:
    // 0x17b45c: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x17b45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17b460:
    // 0x17b460: 0xc7a4002c  lwc1        $f4, 0x2C($sp)
    ctx->pc = 0x17b460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_17b464:
    // 0x17b464: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x17b464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b468:
    // 0x17b468: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x17b468u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_17b46c:
    // 0x17b46c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b46cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b470:
    // 0x17b470: 0x0  nop
    ctx->pc = 0x17b470u;
    // NOP
label_17b474:
    // 0x17b474: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_17b478:
    if (ctx->pc == 0x17B478u) {
        ctx->pc = 0x17B478u;
            // 0x17b478: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x17B47Cu;
        goto label_17b47c;
    }
    ctx->pc = 0x17B474u;
    {
        const bool branch_taken_0x17b474 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B474u;
            // 0x17b478: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b474) {
            ctx->pc = 0x17B4A0u;
            goto label_17b4a0;
        }
    }
    ctx->pc = 0x17B47Cu;
label_17b47c:
    // 0x17b47c: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x17b47cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_17b480:
    // 0x17b480: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b484:
    // 0x17b484: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17b484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b488:
    // 0x17b488: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x17b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b48c:
    // 0x17b48c: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x17b48cu;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
label_17b490:
    // 0x17b490: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17b490u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_17b494:
    // 0x17b494: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b498:
    // 0x17b498: 0x10000020  b           . + 4 + (0x20 << 2)
label_17b49c:
    if (ctx->pc == 0x17B49Cu) {
        ctx->pc = 0x17B49Cu;
            // 0x17b49c: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x17B4A0u;
        goto label_17b4a0;
    }
    ctx->pc = 0x17B498u;
    {
        const bool branch_taken_0x17b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B498u;
            // 0x17b49c: 0x46020880  add.s       $f2, $f1, $f2 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b498) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B4A0u;
label_17b4a0:
    // 0x17b4a0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_17b4a4:
    if (ctx->pc == 0x17B4A4u) {
        ctx->pc = 0x17B4A4u;
            // 0x17b4a4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x17B4A8u;
        goto label_17b4a8;
    }
    ctx->pc = 0x17B4A0u;
    {
        const bool branch_taken_0x17b4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4A0u;
            // 0x17b4a4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4a0) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B4A8u;
label_17b4a8:
    // 0x17b4a8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x17b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_17b4ac:
    // 0x17b4ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_17b4b0:
    if (ctx->pc == 0x17B4B0u) {
        ctx->pc = 0x17B4B0u;
            // 0x17b4b0: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B4B4u;
        goto label_17b4b4;
    }
    ctx->pc = 0x17B4ACu;
    {
        const bool branch_taken_0x17b4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4ACu;
            // 0x17b4b0: 0xc7a00028  lwc1        $f0, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4ac) {
            ctx->pc = 0x17B4C8u;
            goto label_17b4c8;
        }
    }
    ctx->pc = 0x17B4B4u;
label_17b4b4:
    // 0x17b4b4: 0xc7a1002c  lwc1        $f1, 0x2C($sp)
    ctx->pc = 0x17b4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b4b8:
    // 0x17b4b8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x17b4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b4bc:
    // 0x17b4bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b4bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b4c0:
    // 0x17b4c0: 0x10000016  b           . + 4 + (0x16 << 2)
label_17b4c4:
    if (ctx->pc == 0x17B4C4u) {
        ctx->pc = 0x17B4C4u;
            // 0x17b4c4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->pc = 0x17B4C8u;
        goto label_17b4c8;
    }
    ctx->pc = 0x17B4C0u;
    {
        const bool branch_taken_0x17b4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4C0u;
            // 0x17b4c4: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b4c0) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B4C8u;
label_17b4c8:
    // 0x17b4c8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b4cc:
    // 0x17b4cc: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x17b4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_17b4d0:
    // 0x17b4d0: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x17b4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b4d4:
    // 0x17b4d4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x17b4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b4d8:
    // 0x17b4d8: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x17b4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17b4dc:
    // 0x17b4dc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x17b4dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b4e0:
    // 0x17b4e0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x17b4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b4e4:
    // 0x17b4e4: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x17b4e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_17b4e8:
    // 0x17b4e8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x17b4e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b4ec:
    // 0x17b4ec: 0x0  nop
    ctx->pc = 0x17b4ecu;
    // NOP
label_17b4f0:
    // 0x17b4f0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_17b4f4:
    if (ctx->pc == 0x17B4F4u) {
        ctx->pc = 0x17B4F4u;
            // 0x17b4f4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x17B4F8u;
        goto label_17b4f8;
    }
    ctx->pc = 0x17B4F0u;
    {
        const bool branch_taken_0x17b4f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b4f0) {
            ctx->pc = 0x17B4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B4F0u;
            // 0x17b4f4: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B518u;
            goto label_17b518;
        }
    }
    ctx->pc = 0x17B4F8u;
label_17b4f8:
    // 0x17b4f8: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x17b4f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_17b4fc:
    // 0x17b4fc: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x17b4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b500:
    // 0x17b500: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17b500u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b504:
    // 0x17b504: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x17b504u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_17b508:
    // 0x17b508: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x17b508u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_17b50c:
    // 0x17b50c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17b50cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b510:
    // 0x17b510: 0x10000002  b           . + 4 + (0x2 << 2)
label_17b514:
    if (ctx->pc == 0x17B514u) {
        ctx->pc = 0x17B514u;
            // 0x17b514: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x17B518u;
        goto label_17b518;
    }
    ctx->pc = 0x17B510u;
    {
        const bool branch_taken_0x17b510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B510u;
            // 0x17b514: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b510) {
            ctx->pc = 0x17B51Cu;
            goto label_17b51c;
        }
    }
    ctx->pc = 0x17B518u;
label_17b518:
    // 0x17b518: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17b518u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b51c:
    // 0x17b51c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x17b51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b520:
    // 0x17b520: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x17b520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17b524:
    // 0x17b524: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_17b528:
    // 0x17b528: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b528u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b52c:
    // 0x17b52c: 0x24430038  addiu       $v1, $v0, 0x38
    ctx->pc = 0x17b52cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
label_17b530:
    // 0x17b530: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17b530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_17b534:
    // 0x17b534: 0x0  nop
    ctx->pc = 0x17b534u;
    // NOP
label_17b538:
    // 0x17b538: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x17b538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17b53c:
    // 0x17b53c: 0x440003a  bltz        $v0, . + 4 + (0x3A << 2)
label_17b540:
    if (ctx->pc == 0x17B540u) {
        ctx->pc = 0x17B540u;
            // 0x17b540: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x17B544u;
        goto label_17b544;
    }
    ctx->pc = 0x17B53Cu;
    {
        const bool branch_taken_0x17b53c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x17B540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B53Cu;
            // 0x17b540: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b53c) {
            ctx->pc = 0x17B628u;
            goto label_17b628;
        }
    }
    ctx->pc = 0x17B544u;
label_17b544:
    // 0x17b544: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x17b544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b548:
    // 0x17b548: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x17b548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_17b54c:
    // 0x17b54c: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x17b54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b550:
    // 0x17b550: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x17b550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b554:
    // 0x17b554: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x17b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_17b558:
    // 0x17b558: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b558u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b55c:
    // 0x17b55c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17b55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17b560:
    // 0x17b560: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_17b564:
    if (ctx->pc == 0x17B564u) {
        ctx->pc = 0x17B564u;
            // 0x17b564: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x17B568u;
        goto label_17b568;
    }
    ctx->pc = 0x17B560u;
    {
        const bool branch_taken_0x17b560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B560u;
            // 0x17b564: 0x46020002  mul.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b560) {
            ctx->pc = 0x17B574u;
            goto label_17b574;
        }
    }
    ctx->pc = 0x17B568u;
label_17b568:
    // 0x17b568: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17b568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b56c:
    // 0x17b56c: 0x10000009  b           . + 4 + (0x9 << 2)
label_17b570:
    if (ctx->pc == 0x17B570u) {
        ctx->pc = 0x17B570u;
            // 0x17b570: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x17B574u;
        goto label_17b574;
    }
    ctx->pc = 0x17B56Cu;
    {
        const bool branch_taken_0x17b56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B56Cu;
            // 0x17b570: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b56c) {
            ctx->pc = 0x17B594u;
            goto label_17b594;
        }
    }
    ctx->pc = 0x17B574u;
label_17b574:
    // 0x17b574: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x17b574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_17b578:
    // 0x17b578: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17b57c:
    if (ctx->pc == 0x17B57Cu) {
        ctx->pc = 0x17B57Cu;
            // 0x17b57c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x17B580u;
        goto label_17b580;
    }
    ctx->pc = 0x17B578u;
    {
        const bool branch_taken_0x17b578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B578u;
            // 0x17b57c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b578) {
            ctx->pc = 0x17B590u;
            goto label_17b590;
        }
    }
    ctx->pc = 0x17B580u;
label_17b580:
    // 0x17b580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b584:
    // 0x17b584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17b584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b588:
    // 0x17b588: 0x10000002  b           . + 4 + (0x2 << 2)
label_17b58c:
    if (ctx->pc == 0x17B58Cu) {
        ctx->pc = 0x17B58Cu;
            // 0x17b58c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x17B590u;
        goto label_17b590;
    }
    ctx->pc = 0x17B588u;
    {
        const bool branch_taken_0x17b588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B588u;
            // 0x17b58c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b588) {
            ctx->pc = 0x17B594u;
            goto label_17b594;
        }
    }
    ctx->pc = 0x17B590u;
label_17b590:
    // 0x17b590: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x17b590u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17b594:
    // 0x17b594: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x17b594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_17b598:
    // 0x17b598: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17b59c:
    if (ctx->pc == 0x17B59Cu) {
        ctx->pc = 0x17B59Cu;
            // 0x17b59c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B5A0u;
        goto label_17b5a0;
    }
    ctx->pc = 0x17B598u;
    {
        const bool branch_taken_0x17b598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B598u;
            // 0x17b59c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b598) {
            ctx->pc = 0x17B5B0u;
            goto label_17b5b0;
        }
    }
    ctx->pc = 0x17B5A0u;
label_17b5a0:
    // 0x17b5a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b5a4:
    // 0x17b5a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b5a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b5a8:
    // 0x17b5a8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17b5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17b5ac:
    // 0x17b5ac: 0x0  nop
    ctx->pc = 0x17b5acu;
    // NOP
label_17b5b0:
    // 0x17b5b0: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x17b5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_17b5b4:
    // 0x17b5b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b5b8:
    if (ctx->pc == 0x17B5B8u) {
        ctx->pc = 0x17B5B8u;
            // 0x17b5b8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B5BCu;
        goto label_17b5bc;
    }
    ctx->pc = 0x17B5B4u;
    {
        const bool branch_taken_0x17b5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5B4u;
            // 0x17b5b8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5b4) {
            ctx->pc = 0x17B5C8u;
            goto label_17b5c8;
        }
    }
    ctx->pc = 0x17B5BCu;
label_17b5bc:
    // 0x17b5bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b5c0:
    // 0x17b5c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b5c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b5c4:
    // 0x17b5c4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x17b5c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17b5c8:
    // 0x17b5c8: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x17b5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_17b5cc:
    // 0x17b5cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b5d0:
    if (ctx->pc == 0x17B5D0u) {
        ctx->pc = 0x17B5D0u;
            // 0x17b5d0: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B5D4u;
        goto label_17b5d4;
    }
    ctx->pc = 0x17B5CCu;
    {
        const bool branch_taken_0x17b5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5CCu;
            // 0x17b5d0: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5cc) {
            ctx->pc = 0x17B5E0u;
            goto label_17b5e0;
        }
    }
    ctx->pc = 0x17B5D4u;
label_17b5d4:
    // 0x17b5d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b5d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b5d8:
    // 0x17b5d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b5dc:
    // 0x17b5dc: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x17b5dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17b5e0:
    // 0x17b5e0: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x17b5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_17b5e4:
    // 0x17b5e4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b5e8:
    if (ctx->pc == 0x17B5E8u) {
        ctx->pc = 0x17B5E8u;
            // 0x17b5e8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B5ECu;
        goto label_17b5ec;
    }
    ctx->pc = 0x17B5E4u;
    {
        const bool branch_taken_0x17b5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5E4u;
            // 0x17b5e8: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5e4) {
            ctx->pc = 0x17B5F8u;
            goto label_17b5f8;
        }
    }
    ctx->pc = 0x17B5ECu;
label_17b5ec:
    // 0x17b5ec: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b5ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b5f0:
    // 0x17b5f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b5f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b5f4:
    // 0x17b5f4: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x17b5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_17b5f8:
    // 0x17b5f8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x17b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_17b5fc:
    // 0x17b5fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b600:
    if (ctx->pc == 0x17B600u) {
        ctx->pc = 0x17B600u;
            // 0x17b600: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B604u;
        goto label_17b604;
    }
    ctx->pc = 0x17B5FCu;
    {
        const bool branch_taken_0x17b5fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B5FCu;
            // 0x17b600: 0xc7a00018  lwc1        $f0, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b5fc) {
            ctx->pc = 0x17B610u;
            goto label_17b610;
        }
    }
    ctx->pc = 0x17B604u;
label_17b604:
    // 0x17b604: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b608:
    // 0x17b608: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b608u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b60c:
    // 0x17b60c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x17b60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_17b610:
    // 0x17b610: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x17b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_17b614:
    // 0x17b614: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b618:
    if (ctx->pc == 0x17B618u) {
        ctx->pc = 0x17B618u;
            // 0x17b618: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x17B61Cu;
        goto label_17b61c;
    }
    ctx->pc = 0x17B614u;
    {
        const bool branch_taken_0x17b614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B614u;
            // 0x17b618: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b614) {
            ctx->pc = 0x17B628u;
            goto label_17b628;
        }
    }
    ctx->pc = 0x17B61Cu;
label_17b61c:
    // 0x17b61c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x17b61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_17b620:
    // 0x17b620: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17b620u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_17b624:
    // 0x17b624: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x17b624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_17b628:
    // 0x17b628: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x17b628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_17b62c:
    // 0x17b62c: 0x14a0ffc2  bnez        $a1, . + 4 + (-0x3E << 2)
label_17b630:
    if (ctx->pc == 0x17B630u) {
        ctx->pc = 0x17B630u;
            // 0x17b630: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->pc = 0x17B634u;
        goto label_17b634;
    }
    ctx->pc = 0x17B62Cu;
    {
        const bool branch_taken_0x17b62c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17B630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B62Cu;
            // 0x17b630: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b62c) {
            ctx->pc = 0x17B538u;
            runtime->cooperativeGuestYield();
            goto label_17b538;
        }
    }
    ctx->pc = 0x17B634u;
label_17b634:
    // 0x17b634: 0xc620c64c  lwc1        $f0, -0x39B4($s1)
    ctx->pc = 0x17b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b638:
    // 0x17b638: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x17b638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b63c:
    // 0x17b63c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x17b63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b640:
    // 0x17b640: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17b640u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_17b644:
    // 0x17b644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b648:
    // 0x17b648: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b64c:
    // 0x17b64c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x17b64cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17b650:
    // 0x17b650: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x17b650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b654:
    // 0x17b654: 0x0  nop
    ctx->pc = 0x17b654u;
    // NOP
label_17b658:
    // 0x17b658: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_17b65c:
    if (ctx->pc == 0x17B65Cu) {
        ctx->pc = 0x17B65Cu;
            // 0x17b65c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->pc = 0x17B660u;
        goto label_17b660;
    }
    ctx->pc = 0x17B658u;
    {
        const bool branch_taken_0x17b658 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B658u;
            // 0x17b65c: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b658) {
            ctx->pc = 0x17B684u;
            goto label_17b684;
        }
    }
    ctx->pc = 0x17B660u;
label_17b660:
    // 0x17b660: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17b660u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_17b664:
    // 0x17b664: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x17b664u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_17b668:
    // 0x17b668: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x17b668u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_17b66c:
    // 0x17b66c: 0x0  nop
    ctx->pc = 0x17b66cu;
    // NOP
label_17b670:
    // 0x17b670: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b674:
    // 0x17b674: 0x0  nop
    ctx->pc = 0x17b674u;
    // NOP
label_17b678:
    // 0x17b678: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
label_17b67c:
    if (ctx->pc == 0x17B67Cu) {
        ctx->pc = 0x17B67Cu;
            // 0x17b67c: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->pc = 0x17B680u;
        goto label_17b680;
    }
    ctx->pc = 0x17B678u;
    {
        const bool branch_taken_0x17b678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b678) {
            ctx->pc = 0x17B67Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B678u;
            // 0x17b67c: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B670u;
            runtime->cooperativeGuestYield();
            goto label_17b670;
        }
    }
    ctx->pc = 0x17B680u;
label_17b680:
    // 0x17b680: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x17b680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_17b684:
    // 0x17b684: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x17b684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b688:
    // 0x17b688: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17b688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b68c:
    // 0x17b68c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17b68cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b690:
    // 0x17b690: 0x0  nop
    ctx->pc = 0x17b690u;
    // NOP
label_17b694:
    // 0x17b694: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_17b698:
    if (ctx->pc == 0x17B698u) {
        ctx->pc = 0x17B698u;
            // 0x17b698: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x17B69Cu;
        goto label_17b69c;
    }
    ctx->pc = 0x17B694u;
    {
        const bool branch_taken_0x17b694 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b694) {
            ctx->pc = 0x17B698u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B694u;
            // 0x17b698: 0xc60c000c  lwc1        $f12, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B6C4u;
            goto label_17b6c4;
        }
    }
    ctx->pc = 0x17B69Cu;
label_17b69c:
    // 0x17b69c: 0x0  nop
    ctx->pc = 0x17b69cu;
    // NOP
label_17b6a0:
    // 0x17b6a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b6a4:
    // 0x17b6a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b6a8:
    // 0x17b6a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b6a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b6ac:
    // 0x17b6ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17b6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b6b0:
    // 0x17b6b0: 0x0  nop
    ctx->pc = 0x17b6b0u;
    // NOP
label_17b6b4:
    // 0x17b6b4: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_17b6b8:
    if (ctx->pc == 0x17B6B8u) {
        ctx->pc = 0x17B6B8u;
            // 0x17b6b8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x17B6BCu;
        goto label_17b6bc;
    }
    ctx->pc = 0x17B6B4u;
    {
        const bool branch_taken_0x17b6b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6B4u;
            // 0x17b6b8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b6b4) {
            ctx->pc = 0x17B6A0u;
            runtime->cooperativeGuestYield();
            goto label_17b6a0;
        }
    }
    ctx->pc = 0x17B6BCu;
label_17b6bc:
    // 0x17b6bc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x17b6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_17b6c0:
    // 0x17b6c0: 0xc60c000c  lwc1        $f12, 0xC($s0)
    ctx->pc = 0x17b6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17b6c4:
    // 0x17b6c4: 0xc05eca2  jal         func_17B288
label_17b6c8:
    if (ctx->pc == 0x17B6C8u) {
        ctx->pc = 0x17B6C8u;
            // 0x17b6c8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x17B6CCu;
        goto label_17b6cc;
    }
    ctx->pc = 0x17B6C4u;
    SET_GPR_U32(ctx, 31, 0x17B6CCu);
    ctx->pc = 0x17B6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6C4u;
            // 0x17b6c8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B288u;
    if (runtime->hasFunction(0x17B288u)) {
        auto targetFn = runtime->lookupFunction(0x17B288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6CCu; }
        if (ctx->pc != 0x17B6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B288_0x17b288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6CCu; }
        if (ctx->pc != 0x17B6CCu) { return; }
    }
    ctx->pc = 0x17B6CCu;
label_17b6cc:
    // 0x17b6cc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x17b6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b6d0:
    // 0x17b6d0: 0xc7ac000c  lwc1        $f12, 0xC($sp)
    ctx->pc = 0x17b6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17b6d4:
    // 0x17b6d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b6d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b6d8:
    // 0x17b6d8: 0xc0a14de  jal         func_285378
label_17b6dc:
    if (ctx->pc == 0x17B6DCu) {
        ctx->pc = 0x17B6DCu;
            // 0x17b6dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->pc = 0x17B6E0u;
        goto label_17b6e0;
    }
    ctx->pc = 0x17B6D8u;
    SET_GPR_U32(ctx, 31, 0x17B6E0u);
    ctx->pc = 0x17B6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6D8u;
            // 0x17b6dc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x285378u;
    if (runtime->hasFunction(0x285378u)) {
        auto targetFn = runtime->lookupFunction(0x285378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6E0u; }
        if (ctx->pc != 0x17B6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285378_0x285410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6E0u; }
        if (ctx->pc != 0x17B6E0u) { return; }
    }
    ctx->pc = 0x17B6E0u;
label_17b6e0:
    // 0x17b6e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b6e4:
    // 0x17b6e4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x17b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_17b6e8:
    // 0x17b6e8: 0xc05efc8  jal         func_17BF20
label_17b6ec:
    if (ctx->pc == 0x17B6ECu) {
        ctx->pc = 0x17B6ECu;
            // 0x17b6ec: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x17B6F0u;
        goto label_17b6f0;
    }
    ctx->pc = 0x17B6E8u;
    SET_GPR_U32(ctx, 31, 0x17B6F0u);
    ctx->pc = 0x17B6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B6E8u;
            // 0x17b6ec: 0x304600ff  andi        $a2, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (runtime->hasFunction(0x17BF20u)) {
        auto targetFn = runtime->lookupFunction(0x17BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6F0u; }
        if (ctx->pc != 0x17B6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bf20_0x17bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B6F0u; }
        if (ctx->pc != 0x17B6F0u) { return; }
    }
    ctx->pc = 0x17B6F0u;
label_17b6f0:
    // 0x17b6f0: 0xc621c64c  lwc1        $f1, -0x39B4($s1)
    ctx->pc = 0x17b6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294952524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b6f4:
    // 0x17b6f4: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x17b6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b6f8:
    // 0x17b6f8: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x17b6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b6fc:
    // 0x17b6fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b6fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b700:
    // 0x17b700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b704:
    // 0x17b704: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x17b704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17b708:
    // 0x17b708: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x17b708u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_17b70c:
    // 0x17b70c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x17b70cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b710:
    // 0x17b710: 0x0  nop
    ctx->pc = 0x17b710u;
    // NOP
label_17b714:
    // 0x17b714: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_17b718:
    if (ctx->pc == 0x17B718u) {
        ctx->pc = 0x17B718u;
            // 0x17b718: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->pc = 0x17B71Cu;
        goto label_17b71c;
    }
    ctx->pc = 0x17B714u;
    {
        const bool branch_taken_0x17b714 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B714u;
            // 0x17b718: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b714) {
            ctx->pc = 0x17B73Cu;
            goto label_17b73c;
        }
    }
    ctx->pc = 0x17B71Cu;
label_17b71c:
    // 0x17b71c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x17b71cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_17b720:
    // 0x17b720: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x17b720u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_17b724:
    // 0x17b724: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x17b724u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_17b728:
    // 0x17b728: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17b728u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b72c:
    // 0x17b72c: 0x0  nop
    ctx->pc = 0x17b72cu;
    // NOP
label_17b730:
    // 0x17b730: 0x4503fffd  bc1tl       . + 4 + (-0x3 << 2)
label_17b734:
    if (ctx->pc == 0x17B734u) {
        ctx->pc = 0x17B734u;
            // 0x17b734: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->pc = 0x17B738u;
        goto label_17b738;
    }
    ctx->pc = 0x17B730u;
    {
        const bool branch_taken_0x17b730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b730) {
            ctx->pc = 0x17B734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17B730u;
            // 0x17b734: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17B728u;
            runtime->cooperativeGuestYield();
            goto label_17b728;
        }
    }
    ctx->pc = 0x17B738u;
label_17b738:
    // 0x17b738: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x17b738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_17b73c:
    // 0x17b73c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x17b73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b740:
    // 0x17b740: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17b740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17b744:
    // 0x17b744: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x17b744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b748:
    // 0x17b748: 0x0  nop
    ctx->pc = 0x17b748u;
    // NOP
label_17b74c:
    // 0x17b74c: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_17b750:
    if (ctx->pc == 0x17B750u) {
        ctx->pc = 0x17B750u;
            // 0x17b750: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->pc = 0x17B754u;
        goto label_17b754;
    }
    ctx->pc = 0x17B74Cu;
    {
        const bool branch_taken_0x17b74c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B74Cu;
            // 0x17b750: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b74c) {
            ctx->pc = 0x17B77Cu;
            goto label_17b77c;
        }
    }
    ctx->pc = 0x17B754u;
label_17b754:
    // 0x17b754: 0x0  nop
    ctx->pc = 0x17b754u;
    // NOP
label_17b758:
    // 0x17b758: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17b75c:
    // 0x17b75c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17b760:
    // 0x17b760: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17b760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_17b764:
    // 0x17b764: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x17b764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17b768:
    // 0x17b768: 0x0  nop
    ctx->pc = 0x17b768u;
    // NOP
label_17b76c:
    // 0x17b76c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
label_17b770:
    if (ctx->pc == 0x17B770u) {
        ctx->pc = 0x17B770u;
            // 0x17b770: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x17B774u;
        goto label_17b774;
    }
    ctx->pc = 0x17B76Cu;
    {
        const bool branch_taken_0x17b76c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B76Cu;
            // 0x17b770: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b76c) {
            ctx->pc = 0x17B758u;
            runtime->cooperativeGuestYield();
            goto label_17b758;
        }
    }
    ctx->pc = 0x17B774u;
label_17b774:
    // 0x17b774: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x17b774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
label_17b778:
    // 0x17b778: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x17b778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_17b77c:
    // 0x17b77c: 0xc05eca2  jal         func_17B288
label_17b780:
    if (ctx->pc == 0x17B780u) {
        ctx->pc = 0x17B780u;
            // 0x17b780: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x17B784u;
        goto label_17b784;
    }
    ctx->pc = 0x17B77Cu;
    SET_GPR_U32(ctx, 31, 0x17B784u);
    ctx->pc = 0x17B780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B77Cu;
            // 0x17b780: 0xc60c0010  lwc1        $f12, 0x10($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B288u;
    if (runtime->hasFunction(0x17B288u)) {
        auto targetFn = runtime->lookupFunction(0x17B288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B784u; }
        if (ctx->pc != 0x17B784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B288_0x17b288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B784u; }
        if (ctx->pc != 0x17B784u) { return; }
    }
    ctx->pc = 0x17B784u;
label_17b784:
    // 0x17b784: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x17b784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17b788:
    // 0x17b788: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x17b788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_17b78c:
    // 0x17b78c: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x17b78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17b790:
    // 0x17b790: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17b790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_17b794:
    // 0x17b794: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x17b794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17b798:
    // 0x17b798: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x17b798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_17b79c:
    // 0x17b79c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17b79cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_17b7a0:
    // 0x17b7a0: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x17b7a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_17b7a4:
    // 0x17b7a4: 0xc05efc8  jal         func_17BF20
label_17b7a8:
    if (ctx->pc == 0x17B7A8u) {
        ctx->pc = 0x17B7A8u;
            // 0x17b7a8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x17B7ACu;
        goto label_17b7ac;
    }
    ctx->pc = 0x17B7A4u;
    SET_GPR_U32(ctx, 31, 0x17B7ACu);
    ctx->pc = 0x17B7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7A4u;
            // 0x17b7a8: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x17BF20u;
    if (runtime->hasFunction(0x17BF20u)) {
        auto targetFn = runtime->lookupFunction(0x17BF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7ACu; }
        if (ctx->pc != 0x17B7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17bf20_0x17bf78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B7ACu; }
        if (ctx->pc != 0x17B7ACu) { return; }
    }
    ctx->pc = 0x17B7ACu;
label_17b7ac:
    // 0x17b7ac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17b7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17b7b0:
    // 0x17b7b0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x17b7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17b7b4:
    // 0x17b7b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17b7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17b7b8:
    // 0x17b7b8: 0x3e00008  jr          $ra
label_17b7bc:
    if (ctx->pc == 0x17B7BCu) {
        ctx->pc = 0x17B7BCu;
            // 0x17b7bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x17B7C0u;
        goto label_fallthrough_0x17b7b8;
    }
    ctx->pc = 0x17B7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B7B8u;
            // 0x17b7bc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B368u: goto label_17b368;
            case 0x17B36Cu: goto label_17b36c;
            case 0x17B370u: goto label_17b370;
            case 0x17B374u: goto label_17b374;
            case 0x17B378u: goto label_17b378;
            case 0x17B37Cu: goto label_17b37c;
            case 0x17B380u: goto label_17b380;
            case 0x17B384u: goto label_17b384;
            case 0x17B388u: goto label_17b388;
            case 0x17B38Cu: goto label_17b38c;
            case 0x17B390u: goto label_17b390;
            case 0x17B394u: goto label_17b394;
            case 0x17B398u: goto label_17b398;
            case 0x17B39Cu: goto label_17b39c;
            case 0x17B3A0u: goto label_17b3a0;
            case 0x17B3A4u: goto label_17b3a4;
            case 0x17B3A8u: goto label_17b3a8;
            case 0x17B3ACu: goto label_17b3ac;
            case 0x17B3B0u: goto label_17b3b0;
            case 0x17B3B4u: goto label_17b3b4;
            case 0x17B3B8u: goto label_17b3b8;
            case 0x17B3BCu: goto label_17b3bc;
            case 0x17B3C0u: goto label_17b3c0;
            case 0x17B3C4u: goto label_17b3c4;
            case 0x17B3C8u: goto label_17b3c8;
            case 0x17B3CCu: goto label_17b3cc;
            case 0x17B3D0u: goto label_17b3d0;
            case 0x17B3D4u: goto label_17b3d4;
            case 0x17B3D8u: goto label_17b3d8;
            case 0x17B3DCu: goto label_17b3dc;
            case 0x17B3E0u: goto label_17b3e0;
            case 0x17B3E4u: goto label_17b3e4;
            case 0x17B3E8u: goto label_17b3e8;
            case 0x17B3ECu: goto label_17b3ec;
            case 0x17B3F0u: goto label_17b3f0;
            case 0x17B3F4u: goto label_17b3f4;
            case 0x17B3F8u: goto label_17b3f8;
            case 0x17B3FCu: goto label_17b3fc;
            case 0x17B400u: goto label_17b400;
            case 0x17B404u: goto label_17b404;
            case 0x17B408u: goto label_17b408;
            case 0x17B40Cu: goto label_17b40c;
            case 0x17B410u: goto label_17b410;
            case 0x17B414u: goto label_17b414;
            case 0x17B418u: goto label_17b418;
            case 0x17B41Cu: goto label_17b41c;
            case 0x17B420u: goto label_17b420;
            case 0x17B424u: goto label_17b424;
            case 0x17B428u: goto label_17b428;
            case 0x17B42Cu: goto label_17b42c;
            case 0x17B430u: goto label_17b430;
            case 0x17B434u: goto label_17b434;
            case 0x17B438u: goto label_17b438;
            case 0x17B43Cu: goto label_17b43c;
            case 0x17B440u: goto label_17b440;
            case 0x17B444u: goto label_17b444;
            case 0x17B448u: goto label_17b448;
            case 0x17B44Cu: goto label_17b44c;
            case 0x17B450u: goto label_17b450;
            case 0x17B454u: goto label_17b454;
            case 0x17B458u: goto label_17b458;
            case 0x17B45Cu: goto label_17b45c;
            case 0x17B460u: goto label_17b460;
            case 0x17B464u: goto label_17b464;
            case 0x17B468u: goto label_17b468;
            case 0x17B46Cu: goto label_17b46c;
            case 0x17B470u: goto label_17b470;
            case 0x17B474u: goto label_17b474;
            case 0x17B478u: goto label_17b478;
            case 0x17B47Cu: goto label_17b47c;
            case 0x17B480u: goto label_17b480;
            case 0x17B484u: goto label_17b484;
            case 0x17B488u: goto label_17b488;
            case 0x17B48Cu: goto label_17b48c;
            case 0x17B490u: goto label_17b490;
            case 0x17B494u: goto label_17b494;
            case 0x17B498u: goto label_17b498;
            case 0x17B49Cu: goto label_17b49c;
            case 0x17B4A0u: goto label_17b4a0;
            case 0x17B4A4u: goto label_17b4a4;
            case 0x17B4A8u: goto label_17b4a8;
            case 0x17B4ACu: goto label_17b4ac;
            case 0x17B4B0u: goto label_17b4b0;
            case 0x17B4B4u: goto label_17b4b4;
            case 0x17B4B8u: goto label_17b4b8;
            case 0x17B4BCu: goto label_17b4bc;
            case 0x17B4C0u: goto label_17b4c0;
            case 0x17B4C4u: goto label_17b4c4;
            case 0x17B4C8u: goto label_17b4c8;
            case 0x17B4CCu: goto label_17b4cc;
            case 0x17B4D0u: goto label_17b4d0;
            case 0x17B4D4u: goto label_17b4d4;
            case 0x17B4D8u: goto label_17b4d8;
            case 0x17B4DCu: goto label_17b4dc;
            case 0x17B4E0u: goto label_17b4e0;
            case 0x17B4E4u: goto label_17b4e4;
            case 0x17B4E8u: goto label_17b4e8;
            case 0x17B4ECu: goto label_17b4ec;
            case 0x17B4F0u: goto label_17b4f0;
            case 0x17B4F4u: goto label_17b4f4;
            case 0x17B4F8u: goto label_17b4f8;
            case 0x17B4FCu: goto label_17b4fc;
            case 0x17B500u: goto label_17b500;
            case 0x17B504u: goto label_17b504;
            case 0x17B508u: goto label_17b508;
            case 0x17B50Cu: goto label_17b50c;
            case 0x17B510u: goto label_17b510;
            case 0x17B514u: goto label_17b514;
            case 0x17B518u: goto label_17b518;
            case 0x17B51Cu: goto label_17b51c;
            case 0x17B520u: goto label_17b520;
            case 0x17B524u: goto label_17b524;
            case 0x17B528u: goto label_17b528;
            case 0x17B52Cu: goto label_17b52c;
            case 0x17B530u: goto label_17b530;
            case 0x17B534u: goto label_17b534;
            case 0x17B538u: goto label_17b538;
            case 0x17B53Cu: goto label_17b53c;
            case 0x17B540u: goto label_17b540;
            case 0x17B544u: goto label_17b544;
            case 0x17B548u: goto label_17b548;
            case 0x17B54Cu: goto label_17b54c;
            case 0x17B550u: goto label_17b550;
            case 0x17B554u: goto label_17b554;
            case 0x17B558u: goto label_17b558;
            case 0x17B55Cu: goto label_17b55c;
            case 0x17B560u: goto label_17b560;
            case 0x17B564u: goto label_17b564;
            case 0x17B568u: goto label_17b568;
            case 0x17B56Cu: goto label_17b56c;
            case 0x17B570u: goto label_17b570;
            case 0x17B574u: goto label_17b574;
            case 0x17B578u: goto label_17b578;
            case 0x17B57Cu: goto label_17b57c;
            case 0x17B580u: goto label_17b580;
            case 0x17B584u: goto label_17b584;
            case 0x17B588u: goto label_17b588;
            case 0x17B58Cu: goto label_17b58c;
            case 0x17B590u: goto label_17b590;
            case 0x17B594u: goto label_17b594;
            case 0x17B598u: goto label_17b598;
            case 0x17B59Cu: goto label_17b59c;
            case 0x17B5A0u: goto label_17b5a0;
            case 0x17B5A4u: goto label_17b5a4;
            case 0x17B5A8u: goto label_17b5a8;
            case 0x17B5ACu: goto label_17b5ac;
            case 0x17B5B0u: goto label_17b5b0;
            case 0x17B5B4u: goto label_17b5b4;
            case 0x17B5B8u: goto label_17b5b8;
            case 0x17B5BCu: goto label_17b5bc;
            case 0x17B5C0u: goto label_17b5c0;
            case 0x17B5C4u: goto label_17b5c4;
            case 0x17B5C8u: goto label_17b5c8;
            case 0x17B5CCu: goto label_17b5cc;
            case 0x17B5D0u: goto label_17b5d0;
            case 0x17B5D4u: goto label_17b5d4;
            case 0x17B5D8u: goto label_17b5d8;
            case 0x17B5DCu: goto label_17b5dc;
            case 0x17B5E0u: goto label_17b5e0;
            case 0x17B5E4u: goto label_17b5e4;
            case 0x17B5E8u: goto label_17b5e8;
            case 0x17B5ECu: goto label_17b5ec;
            case 0x17B5F0u: goto label_17b5f0;
            case 0x17B5F4u: goto label_17b5f4;
            case 0x17B5F8u: goto label_17b5f8;
            case 0x17B5FCu: goto label_17b5fc;
            case 0x17B600u: goto label_17b600;
            case 0x17B604u: goto label_17b604;
            case 0x17B608u: goto label_17b608;
            case 0x17B60Cu: goto label_17b60c;
            case 0x17B610u: goto label_17b610;
            case 0x17B614u: goto label_17b614;
            case 0x17B618u: goto label_17b618;
            case 0x17B61Cu: goto label_17b61c;
            case 0x17B620u: goto label_17b620;
            case 0x17B624u: goto label_17b624;
            case 0x17B628u: goto label_17b628;
            case 0x17B62Cu: goto label_17b62c;
            case 0x17B630u: goto label_17b630;
            case 0x17B634u: goto label_17b634;
            case 0x17B638u: goto label_17b638;
            case 0x17B63Cu: goto label_17b63c;
            case 0x17B640u: goto label_17b640;
            case 0x17B644u: goto label_17b644;
            case 0x17B648u: goto label_17b648;
            case 0x17B64Cu: goto label_17b64c;
            case 0x17B650u: goto label_17b650;
            case 0x17B654u: goto label_17b654;
            case 0x17B658u: goto label_17b658;
            case 0x17B65Cu: goto label_17b65c;
            case 0x17B660u: goto label_17b660;
            case 0x17B664u: goto label_17b664;
            case 0x17B668u: goto label_17b668;
            case 0x17B66Cu: goto label_17b66c;
            case 0x17B670u: goto label_17b670;
            case 0x17B674u: goto label_17b674;
            case 0x17B678u: goto label_17b678;
            case 0x17B67Cu: goto label_17b67c;
            case 0x17B680u: goto label_17b680;
            case 0x17B684u: goto label_17b684;
            case 0x17B688u: goto label_17b688;
            case 0x17B68Cu: goto label_17b68c;
            case 0x17B690u: goto label_17b690;
            case 0x17B694u: goto label_17b694;
            case 0x17B698u: goto label_17b698;
            case 0x17B69Cu: goto label_17b69c;
            case 0x17B6A0u: goto label_17b6a0;
            case 0x17B6A4u: goto label_17b6a4;
            case 0x17B6A8u: goto label_17b6a8;
            case 0x17B6ACu: goto label_17b6ac;
            case 0x17B6B0u: goto label_17b6b0;
            case 0x17B6B4u: goto label_17b6b4;
            case 0x17B6B8u: goto label_17b6b8;
            case 0x17B6BCu: goto label_17b6bc;
            case 0x17B6C0u: goto label_17b6c0;
            case 0x17B6C4u: goto label_17b6c4;
            case 0x17B6C8u: goto label_17b6c8;
            case 0x17B6CCu: goto label_17b6cc;
            case 0x17B6D0u: goto label_17b6d0;
            case 0x17B6D4u: goto label_17b6d4;
            case 0x17B6D8u: goto label_17b6d8;
            case 0x17B6DCu: goto label_17b6dc;
            case 0x17B6E0u: goto label_17b6e0;
            case 0x17B6E4u: goto label_17b6e4;
            case 0x17B6E8u: goto label_17b6e8;
            case 0x17B6ECu: goto label_17b6ec;
            case 0x17B6F0u: goto label_17b6f0;
            case 0x17B6F4u: goto label_17b6f4;
            case 0x17B6F8u: goto label_17b6f8;
            case 0x17B6FCu: goto label_17b6fc;
            case 0x17B700u: goto label_17b700;
            case 0x17B704u: goto label_17b704;
            case 0x17B708u: goto label_17b708;
            case 0x17B70Cu: goto label_17b70c;
            case 0x17B710u: goto label_17b710;
            case 0x17B714u: goto label_17b714;
            case 0x17B718u: goto label_17b718;
            case 0x17B71Cu: goto label_17b71c;
            case 0x17B720u: goto label_17b720;
            case 0x17B724u: goto label_17b724;
            case 0x17B728u: goto label_17b728;
            case 0x17B72Cu: goto label_17b72c;
            case 0x17B730u: goto label_17b730;
            case 0x17B734u: goto label_17b734;
            case 0x17B738u: goto label_17b738;
            case 0x17B73Cu: goto label_17b73c;
            case 0x17B740u: goto label_17b740;
            case 0x17B744u: goto label_17b744;
            case 0x17B748u: goto label_17b748;
            case 0x17B74Cu: goto label_17b74c;
            case 0x17B750u: goto label_17b750;
            case 0x17B754u: goto label_17b754;
            case 0x17B758u: goto label_17b758;
            case 0x17B75Cu: goto label_17b75c;
            case 0x17B760u: goto label_17b760;
            case 0x17B764u: goto label_17b764;
            case 0x17B768u: goto label_17b768;
            case 0x17B76Cu: goto label_17b76c;
            case 0x17B770u: goto label_17b770;
            case 0x17B774u: goto label_17b774;
            case 0x17B778u: goto label_17b778;
            case 0x17B77Cu: goto label_17b77c;
            case 0x17B780u: goto label_17b780;
            case 0x17B784u: goto label_17b784;
            case 0x17B788u: goto label_17b788;
            case 0x17B78Cu: goto label_17b78c;
            case 0x17B790u: goto label_17b790;
            case 0x17B794u: goto label_17b794;
            case 0x17B798u: goto label_17b798;
            case 0x17B79Cu: goto label_17b79c;
            case 0x17B7A0u: goto label_17b7a0;
            case 0x17B7A4u: goto label_17b7a4;
            case 0x17B7A8u: goto label_17b7a8;
            case 0x17B7ACu: goto label_17b7ac;
            case 0x17B7B0u: goto label_17b7b0;
            case 0x17B7B4u: goto label_17b7b4;
            case 0x17B7B8u: goto label_17b7b8;
            case 0x17B7BCu: goto label_17b7bc;
            default: break;
        }
        return;
    }
label_fallthrough_0x17b7b8:
    ctx->pc = 0x17B7C0u;
}
