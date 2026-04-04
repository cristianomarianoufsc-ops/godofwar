#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B6D0
// Address: 0x15b6d0 - 0x15b748
void sub_0015B6D0_0x15b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B6D0_0x15b6d0");
#endif

    ctx->pc = 0x15b6d0u;

    // 0x15b6d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15b6d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15b6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15b6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15b6dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15b6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b6e0: 0x68a2014f  ldl         $v0, 0x14F($a1)
    ctx->pc = 0x15b6e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x15b6e4: 0x6ca20148  ldr         $v0, 0x148($a1)
    ctx->pc = 0x15b6e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x15b6e8: 0x88a30153  lwl         $v1, 0x153($a1)
    ctx->pc = 0x15b6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 339); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x15b6ec: 0x98a30150  lwr         $v1, 0x150($a1)
    ctx->pc = 0x15b6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 336); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x15b6f0: 0xb202003b  sdl         $v0, 0x3B($s0)
    ctx->pc = 0x15b6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b6f4: 0xb6020034  sdr         $v0, 0x34($s0)
    ctx->pc = 0x15b6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15b6f8: 0xaa03003f  swl         $v1, 0x3F($s0)
    ctx->pc = 0x15b6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 63); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15b6fc: 0xba03003c  swr         $v1, 0x3C($s0)
    ctx->pc = 0x15b6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 60); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x15b700: 0x9202003d  lbu         $v0, 0x3D($s0)
    ctx->pc = 0x15b700u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 61)));
    // 0x15b704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15b704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b708: 0x9203003e  lbu         $v1, 0x3E($s0)
    ctx->pc = 0x15b708u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 62)));
    // 0x15b70c: 0x8ca6017c  lw          $a2, 0x17C($a1)
    ctx->pc = 0x15b70cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 380)));
    // 0x15b710: 0xae100010  sw          $s0, 0x10($s0)
    ctx->pc = 0x15b710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 16));
    // 0x15b714: 0xae100020  sw          $s0, 0x20($s0)
    ctx->pc = 0x15b714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 16));
    // 0x15b718: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x15b718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x15b71c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x15b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x15b720: 0xe60c0030  swc1        $f12, 0x30($s0)
    ctx->pc = 0x15b720u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x15b724: 0xae060044  sw          $a2, 0x44($s0)
    ctx->pc = 0x15b724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 6));
    // 0x15b728: 0xc056d86  jal         func_15B618
    ctx->pc = 0x15B728u;
    SET_GPR_U32(ctx, 31, 0x15B730u);
    ctx->pc = 0x15B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15B728u;
            // 0x15b72c: 0xae050040  sw          $a1, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B618u;
    if (runtime->hasFunction(0x15B618u)) {
        auto targetFn = runtime->lookupFunction(0x15B618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B730u; }
        if (ctx->pc != 0x15B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15b618_0x15b6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15B730u; }
        if (ctx->pc != 0x15B730u) { return; }
    }
    ctx->pc = 0x15B730u;
    // 0x15b730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x15b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b734: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b738: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15b738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b73c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B73Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B73Cu;
            // 0x15b740: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15B744u;
    // 0x15b744: 0x0  nop
    ctx->pc = 0x15b744u;
    // NOP
}
