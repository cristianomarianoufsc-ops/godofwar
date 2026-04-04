#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027B170
// Address: 0x27b170 - 0x27b2b8
void sub_0027B170_0x27b170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B170_0x27b170");
#endif

    ctx->pc = 0x27b170u;

    // 0x27b170: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27b174: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27b174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27b178: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27b17c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b180: 0x3c110031  lui         $s1, 0x31
    ctx->pc = 0x27b180u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)49 << 16));
    // 0x27b184: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27b184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27b188: 0x2624cf40  addiu       $a0, $s1, -0x30C0
    ctx->pc = 0x27b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954816));
    // 0x27b18c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27b18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27b190: 0xc0a5118  jal         func_294460
    ctx->pc = 0x27B190u;
    SET_GPR_U32(ctx, 31, 0x27B198u);
    ctx->pc = 0x27B194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B190u;
            // 0x27b194: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B198u; }
        if (ctx->pc != 0x27B198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B198u; }
        if (ctx->pc != 0x27B198u) { return; }
    }
    ctx->pc = 0x27B198u;
    // 0x27b198: 0xc0a648c  jal         func_299230
    ctx->pc = 0x27B198u;
    SET_GPR_U32(ctx, 31, 0x27B1A0u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1A0u; }
        if (ctx->pc != 0x27B1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B1A0u; }
        if (ctx->pc != 0x27B1A0u) { return; }
    }
    ctx->pc = 0x27B1A0u;
    // 0x27b1a0: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27b1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27b1a4: 0x2626cf40  addiu       $a2, $s1, -0x30C0
    ctx->pc = 0x27b1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954816));
    // 0x27b1a8: 0x2465cfc0  addiu       $a1, $v1, -0x3040
    ctx->pc = 0x27b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
    // 0x27b1ac: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x27b1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27b1b0: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x27b1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27b1b4: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x27b1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27b1b8: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x27b1b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27b1bc: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x27b1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1c0: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x27b1c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1c4: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x27b1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1c8: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x27b1c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1cc: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x27b1ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27b1d0: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x27b1d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27b1d4: 0x68c4001f  ldl         $a0, 0x1F($a2)
    ctx->pc = 0x27b1d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27b1d8: 0x6cc40018  ldr         $a0, 0x18($a2)
    ctx->pc = 0x27b1d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27b1dc: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x27b1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1e0: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x27b1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1e4: 0xb0a4001f  sdl         $a0, 0x1F($a1)
    ctx->pc = 0x27b1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1e8: 0xb4a40018  sdr         $a0, 0x18($a1)
    ctx->pc = 0x27b1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b1ec: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x27b1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27b1f0: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x27b1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27b1f4: 0x68c4002f  ldl         $a0, 0x2F($a2)
    ctx->pc = 0x27b1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27b1f8: 0x6cc40028  ldr         $a0, 0x28($a2)
    ctx->pc = 0x27b1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27b1fc: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x27b1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b200: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x27b200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b204: 0xb0a4002f  sdl         $a0, 0x2F($a1)
    ctx->pc = 0x27b204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b208: 0xb4a40028  sdr         $a0, 0x28($a1)
    ctx->pc = 0x27b208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b20c: 0x68c20037  ldl         $v0, 0x37($a2)
    ctx->pc = 0x27b20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27b210: 0x6cc20030  ldr         $v0, 0x30($a2)
    ctx->pc = 0x27b210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x27b214: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x27b214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27b218: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x27b218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27b21c: 0xb0a20037  sdl         $v0, 0x37($a1)
    ctx->pc = 0x27b21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b220: 0xb4a20030  sdr         $v0, 0x30($a1)
    ctx->pc = 0x27b220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b224: 0xb0a4003f  sdl         $a0, 0x3F($a1)
    ctx->pc = 0x27b224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b228: 0xb4a40038  sdr         $a0, 0x38($a1)
    ctx->pc = 0x27b228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b22c: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x27B22Cu;
    SET_GPR_U32(ctx, 31, 0x27B234u);
    ctx->pc = 0x27B230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B22Cu;
            // 0x27b230: 0x2470cfc0  addiu       $s0, $v1, -0x3040 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B234u; }
        if (ctx->pc != 0x27B234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B234u; }
        if (ctx->pc != 0x27B234u) { return; }
    }
    ctx->pc = 0x27B234u;
    // 0x27b234: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x27b234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27b238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b23c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x27b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x27b240: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b244: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27B244u;
    {
        const bool branch_taken_0x27b244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x27B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B244u;
            // 0x27b248: 0x2402fff4  addiu       $v0, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b244) {
            ctx->pc = 0x27B2A0u;
            goto label_27b2a0;
        }
    }
    ctx->pc = 0x27B24Cu;
    // 0x27b24c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27b250: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x27b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x27b254: 0x2450ac40  addiu       $s0, $v0, -0x53C0
    ctx->pc = 0x27b254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945856));
    // 0x27b258: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x27b258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x27b25c: 0xac52ac40  sw          $s2, -0x53C0($v0)
    ctx->pc = 0x27b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945856), GPR_U32(ctx, 18));
    // 0x27b260: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x27b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x27b264: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b268: 0x34a51303  ori         $a1, $a1, 0x1303
    ctx->pc = 0x27b268u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4867);
    // 0x27b26c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27b26cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b270: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x27b270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b274: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x27b274u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b278: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27b278u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b27c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x27b27cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x27b280: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27B280u;
    SET_GPR_U32(ctx, 31, 0x27B288u);
    ctx->pc = 0x27B284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B280u;
            // 0x27b284: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B288u; }
        if (ctx->pc != 0x27B288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B288u; }
        if (ctx->pc != 0x27B288u) { return; }
    }
    ctx->pc = 0x27B288u;
    // 0x27b288: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B288u;
    {
        const bool branch_taken_0x27b288 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27b288) {
            ctx->pc = 0x27B28Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27B288u;
            // 0x27b28c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27B2A0u;
            goto label_27b2a0;
        }
    }
    ctx->pc = 0x27B290u;
    // 0x27b290: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x27b290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x27b294: 0xc09edf0  jal         func_27B7C0
    ctx->pc = 0x27B294u;
    SET_GPR_U32(ctx, 31, 0x27B29Cu);
    ctx->pc = 0x27B298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27B294u;
            // 0x27b298: 0x24844e08  addiu       $a0, $a0, 0x4E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B7C0u;
    if (runtime->hasFunction(0x27B7C0u)) {
        auto targetFn = runtime->lookupFunction(0x27B7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B29Cu; }
        if (ctx->pc != 0x27B29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B7C0_0x27b7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27B29Cu; }
        if (ctx->pc != 0x27B29Cu) { return; }
    }
    ctx->pc = 0x27B29Cu;
    // 0x27b29c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b29cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b2a0:
    // 0x27b2a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27b2a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b2a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27b2a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b2a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27b2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b2ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27b2acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x27B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27B2B0u;
            // 0x27b2b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27B2A0u: goto label_27b2a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27B2B8u;
}
