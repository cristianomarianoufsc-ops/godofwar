#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027F490
// Address: 0x27f490 - 0x27f638
void sub_0027F490_0x27f490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027F490_0x27f490");
#endif

    ctx->pc = 0x27f490u;

    // 0x27f490: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27f490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27f494: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27f494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27f498: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27f498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27f49c: 0x3c158101  lui         $s5, 0x8101
    ctx->pc = 0x27f49cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)33025 << 16));
    // 0x27f4a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27f4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27f4a4: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x27f4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x27f4a8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27f4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27f4ac: 0x3c127fff  lui         $s2, 0x7FFF
    ctx->pc = 0x27f4acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32767 << 16));
    // 0x27f4b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27f4b4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x27f4b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27f4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27f4bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27f4bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4c0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27f4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27f4c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x27f4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27f4cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27f4ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27f4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27f4d4: 0x36b5006f  ori         $s5, $s5, 0x6F
    ctx->pc = 0x27f4d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)111);
    // 0x27f4d8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x27f4d8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x27f4dc: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x27f4dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_27f4e0:
    // 0x27f4e0: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x27f4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27f4e4: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x27F4E4u;
    {
        const bool branch_taken_0x27f4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4E4u;
            // 0x27f4e8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4e4) {
            ctx->pc = 0x27F5D4u;
            goto label_27f5d4;
        }
    }
    ctx->pc = 0x27F4ECu;
    // 0x27f4ec: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x27f4ecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x27f4f0: 0x2672db00  addiu       $s2, $s3, -0x2500
    ctx->pc = 0x27f4f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957824));
    // 0x27f4f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f4f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27f4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f4fc: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x27F4FCu;
    SET_GPR_U32(ctx, 31, 0x27F504u);
    ctx->pc = 0x27F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4FCu;
            // 0x27f500: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F504u; }
        if (ctx->pc != 0x27F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F504u; }
        if (ctx->pc != 0x27F504u) { return; }
    }
    ctx->pc = 0x27F504u;
    // 0x27f504: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x27F504u;
    {
        const bool branch_taken_0x27f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F504u;
            // 0x27f508: 0x111a40  sll         $v1, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f504) {
            ctx->pc = 0x27F604u;
            goto label_27f604;
        }
    }
    ctx->pc = 0x27F50Cu;
    // 0x27f50c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27f50cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f510: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x27f510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x27f514: 0xa31025  or          $v0, $a1, $v1
    ctx->pc = 0x27f514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x27f518: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27f51c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x27F51Cu;
    {
        const bool branch_taken_0x27f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F51Cu;
            // 0x27f520: 0x24a20200  addiu       $v0, $a1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f51c) {
            ctx->pc = 0x27F580u;
            goto label_27f580;
        }
    }
    ctx->pc = 0x27F524u;
label_27f524:
    // 0x27f524: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x27f524u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x27f528: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x27f528u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x27f52c: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x27f52cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27f530: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x27f530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27f534: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x27f534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27f538: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x27f538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27f53c: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x27f53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27f540: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x27f540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27f544: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x27f544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f548: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x27f548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f54c: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x27f54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f550: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x27f550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f554: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x27f554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f558: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x27f558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f55c: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x27f55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f560: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x27f560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27f564: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27f568: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f56c: 0x0  nop
    ctx->pc = 0x27f56cu;
    // NOP
    // 0x27f570: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27F570u;
    {
        const bool branch_taken_0x27f570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f570) {
            ctx->pc = 0x27F524u;
            runtime->cooperativeGuestYield();
            goto label_27f524;
        }
    }
    ctx->pc = 0x27F578u;
    // 0x27f578: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F578u;
    {
        const bool branch_taken_0x27f578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F578u;
            // 0x27f57c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f578) {
            ctx->pc = 0x27F5B8u;
            goto label_27f5b8;
        }
    }
    ctx->pc = 0x27F580u;
label_27f580:
    // 0x27f580: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x27f580u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27f584: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x27f584u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x27f588: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x27f588u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x27f58c: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x27f58cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x27f590: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x27f590u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 4));
    // 0x27f594: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x27f594u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x27f598: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x27f598u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x27f59c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x27f59cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x27f5a0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x27f5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x27f5a4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27f5a8: 0x0  nop
    ctx->pc = 0x27f5a8u;
    // NOP
    // 0x27f5ac: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27F5ACu;
    {
        const bool branch_taken_0x27f5ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x27f5ac) {
            ctx->pc = 0x27F580u;
            runtime->cooperativeGuestYield();
            goto label_27f580;
        }
    }
    ctx->pc = 0x27F5B4u;
    // 0x27f5b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27f5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27f5b8:
    // 0x27f5b8: 0x2665db00  addiu       $a1, $s3, -0x2500
    ctx->pc = 0x27f5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957824));
    // 0x27f5bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27f5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5c0: 0xc0a0772  jal         func_281DC8
    ctx->pc = 0x27F5C0u;
    SET_GPR_U32(ctx, 31, 0x27F5C8u);
    ctx->pc = 0x27F5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5C0u;
            // 0x27f5c4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DC8u;
    if (runtime->hasFunction(0x281DC8u)) {
        auto targetFn = runtime->lookupFunction(0x281DC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5C8u; }
        if (ctx->pc != 0x27F5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DC8_0x281dc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5C8u; }
        if (ctx->pc != 0x27F5C8u) { return; }
    }
    ctx->pc = 0x27F5C8u;
    // 0x27f5c8: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x27f5c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x27f5cc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27F5CCu;
    {
        const bool branch_taken_0x27f5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5CCu;
            // 0x27f5d0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5cc) {
            ctx->pc = 0x27F60Cu;
            goto label_27f60c;
        }
    }
    ctx->pc = 0x27F5D4u;
label_27f5d4:
    // 0x27f5d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f5d8: 0xc09f638  jal         func_27D8E0
    ctx->pc = 0x27F5D8u;
    SET_GPR_U32(ctx, 31, 0x27F5E0u);
    ctx->pc = 0x27F5DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5D8u;
            // 0x27f5dc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D8E0u;
    if (runtime->hasFunction(0x27D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x27D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5E0u; }
        if (ctx->pc != 0x27F5E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D8E0_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5E0u; }
        if (ctx->pc != 0x27F5E0u) { return; }
    }
    ctx->pc = 0x27F5E0u;
    // 0x27f5e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27f5e4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F5E4u;
    {
        const bool branch_taken_0x27f5e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5E4u;
            // 0x27f5e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5e4) {
            ctx->pc = 0x27F5F4u;
            goto label_27f5f4;
        }
    }
    ctx->pc = 0x27F5ECu;
    // 0x27f5ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27F5ECu;
    {
        const bool branch_taken_0x27f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5ECu;
            // 0x27f5f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5ec) {
            ctx->pc = 0x27F60Cu;
            goto label_27f60c;
        }
    }
    ctx->pc = 0x27F5F4u;
label_27f5f4:
    // 0x27f5f4: 0x12130003  beq         $s0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x27F5F4u;
    {
        const bool branch_taken_0x27f5f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x27F5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5F4u;
            // 0x27f5f8: 0x2128024  and         $s0, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5f4) {
            ctx->pc = 0x27F604u;
            goto label_27f604;
        }
    }
    ctx->pc = 0x27F5FCu;
    // 0x27f5fc: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x27F5FCu;
    {
        const bool branch_taken_0x27f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5FCu;
            // 0x27f600: 0x2631fffe  addiu       $s1, $s1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5fc) {
            ctx->pc = 0x27F4E0u;
            runtime->cooperativeGuestYield();
            goto label_27f4e0;
        }
    }
    ctx->pc = 0x27F604u;
label_27f604:
    // 0x27f604: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27f604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27f608: 0x3442006f  ori         $v0, $v0, 0x6F
    ctx->pc = 0x27f608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
label_27f60c:
    // 0x27f60c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27f60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f610: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27f610u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f614: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27f614u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f618: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27f618u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27f61c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27f61cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27f620: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27f620u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27f624: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27f624u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27f628: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27f628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27f62c: 0x3e00008  jr          $ra
    ctx->pc = 0x27F62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F62Cu;
            // 0x27f630: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27F4E0u: goto label_27f4e0;
            case 0x27F524u: goto label_27f524;
            case 0x27F580u: goto label_27f580;
            case 0x27F5B8u: goto label_27f5b8;
            case 0x27F5D4u: goto label_27f5d4;
            case 0x27F5F4u: goto label_27f5f4;
            case 0x27F604u: goto label_27f604;
            case 0x27F60Cu: goto label_27f60c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27F634u;
    // 0x27f634: 0x0  nop
    ctx->pc = 0x27f634u;
    // NOP
}
