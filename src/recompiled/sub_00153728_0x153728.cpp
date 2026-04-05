#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00153728
// Address: 0x153728 - 0x153a50
void sub_00153728_0x153728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153728_0x153728");
#endif

    ctx->pc = 0x153728u;

    // 0x153728: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x153728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x15372c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x153730: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x153730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x153734: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x153734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x153738: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153738u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15373c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x15373cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x153740: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x153740u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153744: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x153744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x153748: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x153748u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15374c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x15374cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x153750: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x153750u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153754: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x153754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x153758: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x153758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x15375c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15375cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x153760: 0xa6230004  sh          $v1, 0x4($s1)
    ctx->pc = 0x153760u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x153764: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x153764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x153768: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x153768u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x15376c: 0x41402  srl         $v0, $a0, 16
    ctx->pc = 0x15376cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x153770: 0xa6240000  sh          $a0, 0x0($s1)
    ctx->pc = 0x153770u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x153774: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x153774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x153778: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x153778u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x15377c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x15377cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x153780: 0x6a82000f  ldl         $v0, 0xF($s4)
    ctx->pc = 0x153780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x153784: 0x6e820008  ldr         $v0, 0x8($s4)
    ctx->pc = 0x153784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x153788: 0x6a830017  ldl         $v1, 0x17($s4)
    ctx->pc = 0x153788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15378c: 0x6e830010  ldr         $v1, 0x10($s4)
    ctx->pc = 0x15378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x153790: 0xb2220017  sdl         $v0, 0x17($s1)
    ctx->pc = 0x153790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153794: 0xb6220010  sdr         $v0, 0x10($s1)
    ctx->pc = 0x153794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x153798: 0xb223001f  sdl         $v1, 0x1F($s1)
    ctx->pc = 0x153798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15379c: 0xb6230018  sdr         $v1, 0x18($s1)
    ctx->pc = 0x15379cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1537a0: 0x6a82001f  ldl         $v0, 0x1F($s4)
    ctx->pc = 0x1537a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1537a4: 0x6e820018  ldr         $v0, 0x18($s4)
    ctx->pc = 0x1537a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1537a8: 0x6a830027  ldl         $v1, 0x27($s4)
    ctx->pc = 0x1537a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1537ac: 0x6e830020  ldr         $v1, 0x20($s4)
    ctx->pc = 0x1537acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1537b0: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x1537b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1537b4: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x1537b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1537b8: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x1537b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1537bc: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x1537bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1537c0: 0xc6800028  lwc1        $f0, 0x28($s4)
    ctx->pc = 0x1537c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1537c4: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1537c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1537c8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1537c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1537cc: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1537ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1537d0: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x1537d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x1537d4: 0xc680002c  lwc1        $f0, 0x2C($s4)
    ctx->pc = 0x1537d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1537d8: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x1537d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x1537dc: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x1537dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x1537e0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1537e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1537e4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1537E4u;
    {
        const bool branch_taken_0x1537e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1537E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1537E4u;
            // 0x1537e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1537e4) {
            ctx->pc = 0x153830u;
            goto label_153830;
        }
    }
    ctx->pc = 0x1537ECu;
    // 0x1537ec: 0x26930038  addiu       $s3, $s4, 0x38
    ctx->pc = 0x1537ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 56));
label_1537f0:
    // 0x1537f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1537f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1537f4: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x1537f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x1537f8: 0x8ec40048  lw          $a0, 0x48($s6)
    ctx->pc = 0x1537f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x1537fc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1537FCu;
    SET_GPR_U32(ctx, 31, 0x153804u);
    ctx->pc = 0x153800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1537FCu;
            // 0x153800: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153804u; }
        if (ctx->pc != 0x153804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153804u; }
        if (ctx->pc != 0x153804u) { return; }
    }
    ctx->pc = 0x153804u;
    // 0x153804: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x153804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153808: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x153808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15380c: 0xc054ca4  jal         func_153290
    ctx->pc = 0x15380Cu;
    SET_GPR_U32(ctx, 31, 0x153814u);
    ctx->pc = 0x153810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15380Cu;
            // 0x153810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153290u;
    if (runtime->hasFunction(0x153290u)) {
        auto targetFn = runtime->lookupFunction(0x153290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153814u; }
        if (ctx->pc != 0x153814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153290_0x153290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153814u; }
        if (ctx->pc != 0x153814u) { return; }
    }
    ctx->pc = 0x153814u;
    // 0x153814: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x153814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x153818: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x153818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x15381c: 0x86220040  lh          $v0, 0x40($s1)
    ctx->pc = 0x15381cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x153820: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x153820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x153824: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x153824u;
    {
        const bool branch_taken_0x153824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153824u;
            // 0x153828: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153824) {
            ctx->pc = 0x1537F0u;
            runtime->cooperativeGuestYield();
            goto label_1537f0;
        }
    }
    ctx->pc = 0x15382Cu;
    // 0x15382c: 0x0  nop
    ctx->pc = 0x15382cu;
    // NOP
label_153830:
    // 0x153830: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x153830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153834: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153838: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15383c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x15383cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x153840: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x153840u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x153844: 0x0  nop
    ctx->pc = 0x153844u;
    // NOP
    // 0x153848: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x153848u;
    {
        const bool branch_taken_0x153848 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15384Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153848u;
            // 0x15384c: 0xa623003c  sh          $v1, 0x3C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153848) {
            ctx->pc = 0x153868u;
            goto label_153868;
        }
    }
    ctx->pc = 0x153850u;
    // 0x153850: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x153850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x153854: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x153854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153858: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x153858u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15385c: 0x0  nop
    ctx->pc = 0x15385cu;
    // NOP
    // 0x153860: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x153860u;
    {
        const bool branch_taken_0x153860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x153860) {
            ctx->pc = 0x153864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153860u;
            // 0x153864: 0x8c420038  lw          $v0, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153878u;
            goto label_153878;
        }
    }
    ctx->pc = 0x153868u;
label_153868:
    // 0x153868: 0x34628000  ori         $v0, $v1, 0x8000
    ctx->pc = 0x153868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x15386c: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x15386cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x153870: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x153870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x153874: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x153874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_153878:
    // 0x153878: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x153878u;
    {
        const bool branch_taken_0x153878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153878u;
            // 0x15387c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153878) {
            ctx->pc = 0x1538A0u;
            goto label_1538a0;
        }
    }
    ctx->pc = 0x153880u;
    // 0x153880: 0xdc420020  ld          $v0, 0x20($v0)
    ctx->pc = 0x153880u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x153884: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153888: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x153888u;
    {
        const bool branch_taken_0x153888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153888) {
            ctx->pc = 0x15388Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153888u;
            // 0x15388c: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1538A8u;
            goto label_1538a8;
        }
    }
    ctx->pc = 0x153890u;
    // 0x153890: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x153890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x153894: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x153894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x153898: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x153898u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x15389c: 0x0  nop
    ctx->pc = 0x15389cu;
    // NOP
label_1538a0:
    // 0x1538a0: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x1538a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1538a4: 0x0  nop
    ctx->pc = 0x1538a4u;
    // NOP
label_1538a8:
    // 0x1538a8: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x1538a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1538ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x1538acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1538b0: 0x3c054800  lui         $a1, 0x4800
    ctx->pc = 0x1538b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18432 << 16));
    // 0x1538b4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x1538b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1538b8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1538b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1538bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1538bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1538c0: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1538c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1538c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1538c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1538c8: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x1538c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1538cc: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1538CCu;
    {
        const bool branch_taken_0x1538cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1538D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1538CCu;
            // 0x1538d0: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1538cc) {
            ctx->pc = 0x1538E0u;
            goto label_1538e0;
        }
    }
    ctx->pc = 0x1538D4u;
    // 0x1538d4: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x1538d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
    // 0x1538d8: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1538D8u;
    {
        const bool branch_taken_0x1538d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1538d8) {
            ctx->pc = 0x1538DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1538D8u;
            // 0x1538dc: 0x96a20000  lhu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1538F0u;
            goto label_1538f0;
        }
    }
    ctx->pc = 0x1538E0u;
label_1538e0:
    // 0x1538e0: 0x9622003c  lhu         $v0, 0x3C($s1)
    ctx->pc = 0x1538e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1538e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1538e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1538e8: 0xa622003c  sh          $v0, 0x3C($s1)
    ctx->pc = 0x1538e8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1538ec: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x1538ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1538f0:
    // 0x1538f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1538f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1538f4: 0x96230040  lhu         $v1, 0x40($s1)
    ctx->pc = 0x1538f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1538f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1538f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1538fc: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x1538fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
    // 0x153900: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x153900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x153904: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x153904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x153908: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x153908u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x15390c: 0xa624003e  sh          $a0, 0x3E($s1)
    ctx->pc = 0x15390cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 62), (uint16_t)GPR_U32(ctx, 4));
    // 0x153910: 0xa2200042  sb          $zero, 0x42($s1)
    ctx->pc = 0x153910u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x153914: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x153914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x153918: 0x26270054  addiu       $a3, $s1, 0x54
    ctx->pc = 0x153918u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
    // 0x15391c: 0x0  nop
    ctx->pc = 0x15391cu;
    // NOP
label_153920:
    // 0x153920: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x153920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x153924: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x153924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x153928: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x153928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15392c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x15392cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x153930: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x153930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x153934: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x153934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x153938: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x153938u;
    {
        const bool branch_taken_0x153938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153938u;
            // 0x15393c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153938) {
            ctx->pc = 0x153920u;
            runtime->cooperativeGuestYield();
            goto label_153920;
        }
    }
    ctx->pc = 0x153940u;
    // 0x153940: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x153940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x153944: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x153944u;
    {
        const bool branch_taken_0x153944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153944) {
            ctx->pc = 0x153948u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153944u;
            // 0x153948: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1539B8u;
            goto label_1539b8;
        }
    }
    ctx->pc = 0x15394Cu;
    // 0x15394c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x15394cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153950: 0x50a20019  beql        $a1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x153950u;
    {
        const bool branch_taken_0x153950 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x153950) {
            ctx->pc = 0x153954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153950u;
            // 0x153954: 0x8e900004  lw          $s0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1539B8u;
            goto label_1539b8;
        }
    }
    ctx->pc = 0x153958u;
    // 0x153958: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x153958u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x15395c: 0x0  nop
    ctx->pc = 0x15395cu;
    // NOP
label_153960:
    // 0x153960: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x153960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153964: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x153964u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x153968: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153968u;
    {
        const bool branch_taken_0x153968 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x15396Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153968u;
            // 0x15396c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153968) {
            ctx->pc = 0x153978u;
            goto label_153978;
        }
    }
    ctx->pc = 0x153970u;
    // 0x153970: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153970u;
    {
        const bool branch_taken_0x153970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153970u;
            // 0x153974: 0xae260048  sw          $a2, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153970) {
            ctx->pc = 0x1539A4u;
            goto label_1539a4;
        }
    }
    ctx->pc = 0x153978u;
label_153978:
    // 0x153978: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153978u;
    {
        const bool branch_taken_0x153978 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x153978) {
            ctx->pc = 0x15397Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x153978u;
            // 0x15397c: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1539A8u;
            goto label_1539a8;
        }
    }
    ctx->pc = 0x153980u;
    // 0x153980: 0x92230042  lbu         $v1, 0x42($s1)
    ctx->pc = 0x153980u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x153984: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x153984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x153988: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x153988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15398c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15398Cu;
    {
        const bool branch_taken_0x15398c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15398Cu;
            // 0x153990: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15398c) {
            ctx->pc = 0x1539A4u;
            goto label_1539a4;
        }
    }
    ctx->pc = 0x153994u;
    // 0x153994: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x153994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x153998: 0xa2230042  sb          $v1, 0x42($s1)
    ctx->pc = 0x153998u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 66), (uint8_t)GPR_U32(ctx, 3));
    // 0x15399c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x15399cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1539a0: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1539a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1539a4:
    // 0x1539a4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1539a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1539a8:
    // 0x1539a8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1539a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1539ac: 0x54a2ffec  bnel        $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1539ACu;
    {
        const bool branch_taken_0x1539ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1539ac) {
            ctx->pc = 0x1539B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1539ACu;
            // 0x1539b0: 0x8ca60008  lw          $a2, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153960u;
            runtime->cooperativeGuestYield();
            goto label_153960;
        }
    }
    ctx->pc = 0x1539B4u;
    // 0x1539b4: 0x8e900004  lw          $s0, 0x4($s4)
    ctx->pc = 0x1539b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_1539b8:
    // 0x1539b8: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1539B8u;
    {
        const bool branch_taken_0x1539b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1539b8) {
            ctx->pc = 0x1539BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1539B8u;
            // 0x1539bc: 0x8e830030  lw          $v1, 0x30($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153A18u;
            goto label_153a18;
        }
    }
    ctx->pc = 0x1539C0u;
    // 0x1539c0: 0xc05e394  jal         func_178E50
    ctx->pc = 0x1539C0u;
    SET_GPR_U32(ctx, 31, 0x1539C8u);
    ctx->pc = 0x1539C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1539C0u;
            // 0x1539c4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539C8u; }
        if (ctx->pc != 0x1539C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539C8u; }
        if (ctx->pc != 0x1539C8u) { return; }
    }
    ctx->pc = 0x1539C8u;
    // 0x1539c8: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1539c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1539cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1539ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1539d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1539d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1539d4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1539d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1539d8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1539d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1539dc: 0x5050000a  beql        $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1539DCu;
    {
        const bool branch_taken_0x1539dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1539dc) {
            ctx->pc = 0x1539E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1539DCu;
            // 0x1539e0: 0xae100000  sw          $s0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153A08u;
            goto label_153a08;
        }
    }
    ctx->pc = 0x1539E4u;
    // 0x1539e4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x1539e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1539e8:
    // 0x1539e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1539e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1539ec: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x1539ECu;
    SET_GPR_U32(ctx, 31, 0x1539F4u);
    ctx->pc = 0x1539F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1539ECu;
            // 0x1539f0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539F4u; }
        if (ctx->pc != 0x1539F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1539F4u; }
        if (ctx->pc != 0x1539F4u) { return; }
    }
    ctx->pc = 0x1539F4u;
    // 0x1539f4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1539f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1539f8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1539f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1539fc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1539FCu;
    {
        const bool branch_taken_0x1539fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x153A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1539FCu;
            // 0x153a00: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1539fc) {
            ctx->pc = 0x1539E8u;
            runtime->cooperativeGuestYield();
            goto label_1539e8;
        }
    }
    ctx->pc = 0x153A04u;
    // 0x153a04: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x153a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
label_153a08:
    // 0x153a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x153a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a0c: 0xc08e204  jal         func_238810
    ctx->pc = 0x153A0Cu;
    SET_GPR_U32(ctx, 31, 0x153A14u);
    ctx->pc = 0x153A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x153A0Cu;
            // 0x153a10: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A14u; }
        if (ctx->pc != 0x153A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x153A14u; }
        if (ctx->pc != 0x153A14u) { return; }
    }
    ctx->pc = 0x153A14u;
    // 0x153a14: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x153a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_153a18:
    // 0x153a18: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x153a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153a1c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x153a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x153a20: 0xa2230043  sb          $v1, 0x43($s1)
    ctx->pc = 0x153a20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x153a24: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x153a24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x153a28: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x153a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x153a2c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x153a2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x153a30: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x153a30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x153a34: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x153a34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x153a38: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x153a38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x153a3c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x153a3cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x153a40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x153a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153a44: 0x3e00008  jr          $ra
    ctx->pc = 0x153A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153A44u;
            // 0x153a48: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1537F0u: goto label_1537f0;
            case 0x153830u: goto label_153830;
            case 0x153868u: goto label_153868;
            case 0x153878u: goto label_153878;
            case 0x1538A0u: goto label_1538a0;
            case 0x1538A8u: goto label_1538a8;
            case 0x1538E0u: goto label_1538e0;
            case 0x1538F0u: goto label_1538f0;
            case 0x153920u: goto label_153920;
            case 0x153960u: goto label_153960;
            case 0x153978u: goto label_153978;
            case 0x1539A4u: goto label_1539a4;
            case 0x1539A8u: goto label_1539a8;
            case 0x1539B8u: goto label_1539b8;
            case 0x1539E8u: goto label_1539e8;
            case 0x153A08u: goto label_153a08;
            case 0x153A18u: goto label_153a18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x153A4Cu;
    // 0x153a4c: 0x0  nop
    ctx->pc = 0x153a4cu;
    // NOP
}
