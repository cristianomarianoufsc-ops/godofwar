#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002815A8
// Address: 0x2815a8 - 0x2816c0
void sub_002815A8_0x2815a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002815A8_0x2815a8");
#endif

    ctx->pc = 0x2815a8u;

    // 0x2815a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2815a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2815ac: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x2815acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x2815b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2815b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2815b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2815b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2815b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2815bc: 0x24511f40  addiu       $s1, $v0, 0x1F40
    ctx->pc = 0x2815bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8000));
    // 0x2815c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2815c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2815c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2815c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2815c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2815ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2815d0: 0xc0a0a54  jal         func_282950
    ctx->pc = 0x2815D0u;
    SET_GPR_U32(ctx, 31, 0x2815D8u);
    ctx->pc = 0x2815D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2815D0u;
            // 0x2815d4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282950u;
    if (runtime->hasFunction(0x282950u)) {
        auto targetFn = runtime->lookupFunction(0x282950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2815D8u; }
        if (ctx->pc != 0x2815D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282950_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2815D8u; }
        if (ctx->pc != 0x2815D8u) { return; }
    }
    ctx->pc = 0x2815D8u;
    // 0x2815d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2815D8u;
    {
        const bool branch_taken_0x2815d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2815DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2815D8u;
            // 0x2815dc: 0x24040184  addiu       $a0, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815d8) {
            ctx->pc = 0x2815E8u;
            goto label_2815e8;
        }
    }
    ctx->pc = 0x2815E0u;
    // 0x2815e0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x2815E0u;
    {
        const bool branch_taken_0x2815e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2815E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2815E0u;
            // 0x2815e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815e0) {
            ctx->pc = 0x2816A8u;
            goto label_2816a8;
        }
    }
    ctx->pc = 0x2815E8u;
label_2815e8:
    // 0x2815e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2815e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2815ec: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x2815ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2815f0: 0x24633318  addiu       $v1, $v1, 0x3318
    ctx->pc = 0x2815f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13080));
    // 0x2815f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2815f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2815f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2815f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2815fc: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x2815fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x281600: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x281600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x281604: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x281604u;
    {
        const bool branch_taken_0x281604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281604u;
            // 0x281608: 0x24a20180  addiu       $v0, $a1, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281604) {
            ctx->pc = 0x281668u;
            goto label_281668;
        }
    }
    ctx->pc = 0x28160Cu;
label_28160c:
    // 0x28160c: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x28160cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x281610: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x281610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x281614: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x281614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x281618: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x281618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x28161c: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x28161cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x281620: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x281620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x281624: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x281624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x281628: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x281628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x28162c: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x28162cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281630: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x281630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281634: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x281634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281638: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x281638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28163c: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x28163cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281640: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x281640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281644: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x281644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281648: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x281648u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28164c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x28164cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x281650: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x281650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x281654: 0x0  nop
    ctx->pc = 0x281654u;
    // NOP
    // 0x281658: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x281658u;
    {
        const bool branch_taken_0x281658 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x281658) {
            ctx->pc = 0x28160Cu;
            runtime->cooperativeGuestYield();
            goto label_28160c;
        }
    }
    ctx->pc = 0x281660u;
    // 0x281660: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x281660u;
    {
        const bool branch_taken_0x281660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281660) {
            ctx->pc = 0x28169Cu;
            goto label_28169c;
        }
    }
    ctx->pc = 0x281668u;
label_281668:
    // 0x281668: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x281668u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28166c: 0xdca60008  ld          $a2, 0x8($a1)
    ctx->pc = 0x28166cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x281670: 0xdca70010  ld          $a3, 0x10($a1)
    ctx->pc = 0x281670u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x281674: 0xdca80018  ld          $t0, 0x18($a1)
    ctx->pc = 0x281674u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x281678: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x281678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28167c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x28167cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x281680: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x281680u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x281684: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x281684u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x281688: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x281688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x28168c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x28168cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x281690: 0x0  nop
    ctx->pc = 0x281690u;
    // NOP
    // 0x281694: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x281694u;
    {
        const bool branch_taken_0x281694 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x281694) {
            ctx->pc = 0x281668u;
            runtime->cooperativeGuestYield();
            goto label_281668;
        }
    }
    ctx->pc = 0x28169Cu;
label_28169c:
    // 0x28169c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2816a0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2816a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2816a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2816a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2816a8:
    // 0x2816a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2816a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2816ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2816acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2816b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2816b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2816b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2816B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2816B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2816B4u;
            // 0x2816b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2815E8u: goto label_2815e8;
            case 0x28160Cu: goto label_28160c;
            case 0x281668u: goto label_281668;
            case 0x28169Cu: goto label_28169c;
            case 0x2816A8u: goto label_2816a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2816BCu;
    // 0x2816bc: 0x0  nop
    ctx->pc = 0x2816bcu;
    // NOP
}
