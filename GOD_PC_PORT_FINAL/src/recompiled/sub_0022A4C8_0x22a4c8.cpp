#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022A4C8
// Address: 0x22a4c8 - 0x22a5e0
void sub_0022A4C8_0x22a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A4C8_0x22a4c8");
#endif

    ctx->pc = 0x22a4c8u;

    // 0x22a4c8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22a4cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22a4d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22a4d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22a4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22a4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22a4dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x22a4dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4e0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x22a4e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x22a4e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x22a4e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4e8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x22a4e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x22a4ec: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x22a4ecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x22a4f0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x22a4f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x22a4f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a4f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4fc: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x22A4FCu;
    SET_GPR_U32(ctx, 31, 0x22A504u);
    ctx->pc = 0x22A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4FCu;
            // 0x22a500: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A504u; }
        if (ctx->pc != 0x22A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A504u; }
        if (ctx->pc != 0x22A504u) { return; }
    }
    ctx->pc = 0x22A504u;
    // 0x22a504: 0xa3a00017  sb          $zero, 0x17($sp)
    ctx->pc = 0x22a504u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 23), (uint8_t)GPR_U32(ctx, 0));
    // 0x22a508: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x22a508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22a50c: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x22a50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22a510: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x22a510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22a514: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x22a514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22a518: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x22a518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22a51c: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x22a51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22a520: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x22a520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x22a524: 0xb20300db  sdl         $v1, 0xDB($s0)
    ctx->pc = 0x22a524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a528: 0xb60300d4  sdr         $v1, 0xD4($s0)
    ctx->pc = 0x22a528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a52c: 0xb20400e3  sdl         $a0, 0xE3($s0)
    ctx->pc = 0x22a52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a530: 0xb60400dc  sdr         $a0, 0xDC($s0)
    ctx->pc = 0x22a530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a534: 0xb20500eb  sdl         $a1, 0xEB($s0)
    ctx->pc = 0x22a534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 235); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a538: 0xb60500e4  sdr         $a1, 0xE4($s0)
    ctx->pc = 0x22a538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 228); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22a53c: 0xe61400f0  swc1        $f20, 0xF0($s0)
    ctx->pc = 0x22a53cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x22a540: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22A540u;
    {
        const bool branch_taken_0x22a540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A540u;
            // 0x22a544: 0xe61500ec  swc1        $f21, 0xEC($s0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a540) {
            ctx->pc = 0x22A570u;
            goto label_22a570;
        }
    }
    ctx->pc = 0x22A548u;
    // 0x22a548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a54c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a54cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x22a550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a554: 0xc08a978  jal         func_22A5E0
    ctx->pc = 0x22A554u;
    SET_GPR_U32(ctx, 31, 0x22A55Cu);
    ctx->pc = 0x22A558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A554u;
            // 0x22a558: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A5E0u;
    if (runtime->hasFunction(0x22A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x22A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A55Cu; }
        if (ctx->pc != 0x22A55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A5E0_0x22a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A55Cu; }
        if (ctx->pc != 0x22A55Cu) { return; }
    }
    ctx->pc = 0x22A55Cu;
    // 0x22a55c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a560: 0xc08aa48  jal         func_22A920
    ctx->pc = 0x22A560u;
    SET_GPR_U32(ctx, 31, 0x22A568u);
    ctx->pc = 0x22A564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A560u;
            // 0x22a564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A920u;
    if (runtime->hasFunction(0x22A920u)) {
        auto targetFn = runtime->lookupFunction(0x22A920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A568u; }
        if (ctx->pc != 0x22A568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A920_0x22a920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A568u; }
        if (ctx->pc != 0x22A568u) { return; }
    }
    ctx->pc = 0x22A568u;
    // 0x22a568: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22A568u;
    {
        const bool branch_taken_0x22a568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A568u;
            // 0x22a56c: 0xae0000c4  sw          $zero, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a568) {
            ctx->pc = 0x22A5C0u;
            goto label_22a5c0;
        }
    }
    ctx->pc = 0x22A570u;
label_22a570:
    // 0x22a570: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x22a570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x22a574: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x22a574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x22a578: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x22a578u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x22a57c: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x22a57cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22a580: 0xc08aaf6  jal         func_22ABD8
    ctx->pc = 0x22A580u;
    SET_GPR_U32(ctx, 31, 0x22A588u);
    ctx->pc = 0x22A584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A580u;
            // 0x22a584: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABD8u;
    if (runtime->hasFunction(0x22ABD8u)) {
        auto targetFn = runtime->lookupFunction(0x22ABD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A588u; }
        if (ctx->pc != 0x22A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_22abd8_0x22ac10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A588u; }
        if (ctx->pc != 0x22A588u) { return; }
    }
    ctx->pc = 0x22A588u;
    // 0x22a588: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22a588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x22a58c: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A58Cu;
    {
        const bool branch_taken_0x22a58c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A58Cu;
            // 0x22a590: 0xae0200c4  sw          $v0, 0xC4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a58c) {
            ctx->pc = 0x22A59Cu;
            goto label_22a59c;
        }
    }
    ctx->pc = 0x22A594u;
    // 0x22a594: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22A594u;
    {
        const bool branch_taken_0x22a594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A594u;
            // 0x22a598: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a594) {
            ctx->pc = 0x22A5BCu;
            goto label_22a5bc;
        }
    }
    ctx->pc = 0x22A59Cu;
label_22a59c:
    // 0x22a59c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x22a5a0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A5A0u;
    {
        const bool branch_taken_0x22a5a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x22A5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5A0u;
            // 0x22a5a4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5a0) {
            ctx->pc = 0x22A5B0u;
            goto label_22a5b0;
        }
    }
    ctx->pc = 0x22A5A8u;
    // 0x22a5a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22A5A8u;
    {
        const bool branch_taken_0x22a5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5A8u;
            // 0x22a5ac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5a8) {
            ctx->pc = 0x22A5BCu;
            goto label_22a5bc;
        }
    }
    ctx->pc = 0x22A5B0u;
label_22a5b0:
    // 0x22a5b0: 0x56220004  bnel        $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22A5B0u;
    {
        const bool branch_taken_0x22a5b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x22a5b0) {
            ctx->pc = 0x22A5B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5B0u;
            // 0x22a5b4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22A5C4u;
            goto label_22a5c4;
        }
    }
    ctx->pc = 0x22A5B8u;
    // 0x22a5b8: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x22a5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_22a5bc:
    // 0x22a5bc: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x22a5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_22a5c0:
    // 0x22a5c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22a5c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22a5c4:
    // 0x22a5c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22a5c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a5c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22a5c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a5cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22a5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a5d0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x22a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x22a5d4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x22a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x22A5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5D8u;
            // 0x22a5dc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22A570u: goto label_22a570;
            case 0x22A59Cu: goto label_22a59c;
            case 0x22A5B0u: goto label_22a5b0;
            case 0x22A5BCu: goto label_22a5bc;
            case 0x22A5C0u: goto label_22a5c0;
            case 0x22A5C4u: goto label_22a5c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22A5E0u;
}
