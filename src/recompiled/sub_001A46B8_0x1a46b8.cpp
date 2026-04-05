#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A46B8
// Address: 0x1a46b8 - 0x1a4790
void sub_001A46B8_0x1a46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A46B8_0x1a46b8");
#endif

    ctx->pc = 0x1a46b8u;

    // 0x1a46b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a46bc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a46bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a46c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a46c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a46c4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a46c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a46c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a46cc: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1a46ccu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1a46d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a46d4: 0x3112ffff  andi        $s2, $t0, 0xFFFF
    ctx->pc = 0x1a46d4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1a46d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a46d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a46dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a46dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a46e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a46e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a46e4: 0xc0908c8  jal         func_242320
    ctx->pc = 0x1A46E4u;
    SET_GPR_U32(ctx, 31, 0x1A46ECu);
    ctx->pc = 0x1A46E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A46E4u;
            // 0x1a46e8: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242320u;
    if (runtime->hasFunction(0x242320u)) {
        auto targetFn = runtime->lookupFunction(0x242320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46ECu; }
        if (ctx->pc != 0x1A46ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242320_0x242350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A46ECu; }
        if (ctx->pc != 0x1A46ECu) { return; }
    }
    ctx->pc = 0x1A46ECu;
    // 0x1a46ec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1a46ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1a46f0: 0x2603001f  addiu       $v1, $s0, 0x1F
    ctx->pc = 0x1a46f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x1a46f4: 0x2442ab88  addiu       $v0, $v0, -0x5478
    ctx->pc = 0x1a46f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945672));
    // 0x1a46f8: 0xa611000c  sh          $s1, 0xC($s0)
    ctx->pc = 0x1a46f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x1a46fc: 0xa612000e  sh          $s2, 0xE($s0)
    ctx->pc = 0x1a46fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x1a4700: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a4700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4704: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1a4704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1a4708: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1a4708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1a470c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x1a470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1a4710: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a4710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a4714: 0x26070018  addiu       $a3, $s0, 0x18
    ctx->pc = 0x1a4714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1a4718: 0x26080020  addiu       $t0, $s0, 0x20
    ctx->pc = 0x1a4718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1a471c: 0x2609001c  addiu       $t1, $s0, 0x1C
    ctx->pc = 0x1a471cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1a4720: 0x260a001d  addiu       $t2, $s0, 0x1D
    ctx->pc = 0x1a4720u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 29));
    // 0x1a4724: 0xc0690b4  jal         func_1A42D0
    ctx->pc = 0x1A4724u;
    SET_GPR_U32(ctx, 31, 0x1A472Cu);
    ctx->pc = 0x1A4728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4724u;
            // 0x1a4728: 0x260b001e  addiu       $t3, $s0, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A42D0u;
    if (runtime->hasFunction(0x1A42D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A472Cu; }
        if (ctx->pc != 0x1A472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A42D0_0x1a42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A472Cu; }
        if (ctx->pc != 0x1A472Cu) { return; }
    }
    ctx->pc = 0x1A472Cu;
    // 0x1a472c: 0x6a830007  ldl         $v1, 0x7($s4)
    ctx->pc = 0x1a472cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a4730: 0x6e830000  ldr         $v1, 0x0($s4)
    ctx->pc = 0x1a4730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a4734: 0x6a84000f  ldl         $a0, 0xF($s4)
    ctx->pc = 0x1a4734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a4738: 0x6e840008  ldr         $a0, 0x8($s4)
    ctx->pc = 0x1a4738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a473c: 0xb2030029  sdl         $v1, 0x29($s0)
    ctx->pc = 0x1a473cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 41); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4740: 0xb6030022  sdr         $v1, 0x22($s0)
    ctx->pc = 0x1a4740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 34); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4744: 0xb2040031  sdl         $a0, 0x31($s0)
    ctx->pc = 0x1a4744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 49); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a4748: 0xb604002a  sdr         $a0, 0x2A($s0)
    ctx->pc = 0x1a4748u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 42); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a474c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a474cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4750: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a4750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a4754: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a4754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a4758: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a4758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a475c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a475cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a4760: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a4760u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a4764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a4768: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4768u;
            // 0x1a476c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4770u;
    // 0x1a4770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4778: 0xc069caa  jal         func_1A72A8
    ctx->pc = 0x1A4778u;
    SET_GPR_U32(ctx, 31, 0x1A4780u);
    ctx->pc = 0x1A477Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4778u;
            // 0x1a477c: 0x9484000c  lhu         $a0, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A72A8u;
    if (runtime->hasFunction(0x1A72A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A72A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4780u; }
        if (ctx->pc != 0x1A4780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A72A8_0x1a72a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4780u; }
        if (ctx->pc != 0x1A4780u) { return; }
    }
    ctx->pc = 0x1A4780u;
    // 0x1a4780: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4784: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4784u;
            // 0x1a4788: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A478Cu;
    // 0x1a478c: 0x0  nop
    ctx->pc = 0x1a478cu;
    // NOP
}
