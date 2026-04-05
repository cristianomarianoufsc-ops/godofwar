#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002818D0
// Address: 0x2818d0 - 0x281c68
void sub_002818D0_0x2818d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002818D0_0x2818d0");
#endif

    ctx->pc = 0x2818d0u;

    // 0x2818d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2818d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2818d4: 0x24030184  addiu       $v1, $zero, 0x184
    ctx->pc = 0x2818d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2818d8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2818d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2818dc: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x2818dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2818e0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2818e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2818e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2818e8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x2818e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2818ec: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2818ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2818f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2818f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2818f4: 0x24843318  addiu       $a0, $a0, 0x3318
    ctx->pc = 0x2818f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13080));
    // 0x2818f8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2818f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2818fc: 0x2624018  mult        $t0, $s3, $v0
    ctx->pc = 0x2818fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x281900: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x281900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x281904: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x281904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281908: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x281908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28190c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281910: 0x3c140032  lui         $s4, 0x32
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
    // 0x281914: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x281914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x281918: 0x8c650034  lw          $a1, 0x34($v1)
    ctx->pc = 0x281918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x28191c: 0x2689df00  addiu       $t1, $s4, -0x2100
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958848));
    // 0x281920: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x281920u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x281924: 0x1095021  addu        $t2, $t0, $t1
    ctx->pc = 0x281924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x281928: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x281928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x28192c: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x28192cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x281930: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x281930u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x281934: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x281934u;
    {
        const bool branch_taken_0x281934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281934) {
            ctx->pc = 0x281938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281934u;
            // 0x281938: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28193Cu;
            goto label_28193c;
        }
    }
    ctx->pc = 0x28193Cu;
label_28193c:
    // 0x28193c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x281940: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x281940u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x281944: 0x9012  mflo        $s2
    ctx->pc = 0x281944u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x281948: 0x54670039  bnel        $v1, $a3, . + 4 + (0x39 << 2)
    ctx->pc = 0x281948u;
    {
        const bool branch_taken_0x281948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x281948) {
            ctx->pc = 0x28194Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281948u;
            // 0x28194c: 0x25230004  addiu       $v1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281A30u;
            goto label_281a30;
        }
    }
    ctx->pc = 0x281950u;
    // 0x281950: 0x25220010  addiu       $v0, $t1, 0x10
    ctx->pc = 0x281950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x281954: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x281954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x281958: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x281958u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
    // 0x28195c: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x28195cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x281960: 0xac700004  sw          $s0, 0x4($v1)
    ctx->pc = 0x281960u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
    // 0x281964: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x281964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281968: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x281968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x28196c: 0x2261025  or          $v0, $s1, $a2
    ctx->pc = 0x28196cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x281970: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x281970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x281974: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x281974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x281978: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x281978u;
    {
        const bool branch_taken_0x281978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28197Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281978u;
            // 0x28197c: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281978) {
            ctx->pc = 0x2819E0u;
            goto label_2819e0;
        }
    }
    ctx->pc = 0x281980u;
    // 0x281980: 0x26220400  addiu       $v0, $s1, 0x400
    ctx->pc = 0x281980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_281984:
    // 0x281984: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x281984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x281988: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x281988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28198c: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x281990: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x281990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x281994: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x281994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x281998: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x281998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x28199c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x28199cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2819a0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x2819a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2819a4: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x2819a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819a8: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x2819a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819ac: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x2819acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819b0: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x2819b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819b4: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x2819b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819b8: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x2819b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819bc: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x2819bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819c0: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x2819c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2819c4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2819c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2819c8: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2819c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x2819cc: 0x0  nop
    ctx->pc = 0x2819ccu;
    // NOP
    // 0x2819d0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2819D0u;
    {
        const bool branch_taken_0x2819d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2819d0) {
            ctx->pc = 0x281984u;
            runtime->cooperativeGuestYield();
            goto label_281984;
        }
    }
    ctx->pc = 0x2819D8u;
    // 0x2819d8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2819D8u;
    {
        const bool branch_taken_0x2819d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2819DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2819D8u;
            // 0x2819dc: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819d8) {
            ctx->pc = 0x281A1Cu;
            goto label_281a1c;
        }
    }
    ctx->pc = 0x2819E0u;
label_2819e0:
    // 0x2819e0: 0x26220400  addiu       $v0, $s1, 0x400
    ctx->pc = 0x2819e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_2819e4:
    // 0x2819e4: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x2819e4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2819e8: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x2819e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2819ec: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x2819ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2819f0: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x2819f0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2819f4: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x2819f4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x2819f8: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x2819f8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x2819fc: 0xfcc50010  sd          $a1, 0x10($a2)
    ctx->pc = 0x2819fcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 5));
    // 0x281a00: 0xfcc70018  sd          $a3, 0x18($a2)
    ctx->pc = 0x281a00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 7));
    // 0x281a04: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x281a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x281a08: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x281a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x281a0c: 0x0  nop
    ctx->pc = 0x281a0cu;
    // NOP
    // 0x281a10: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x281A10u;
    {
        const bool branch_taken_0x281a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a10) {
            ctx->pc = 0x2819E4u;
            runtime->cooperativeGuestYield();
            goto label_2819e4;
        }
    }
    ctx->pc = 0x281A18u;
    // 0x281a18: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_281a1c:
    // 0x281a1c: 0x2684df00  addiu       $a0, $s4, -0x2100
    ctx->pc = 0x281a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958848));
    // 0x281a20: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x281a20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x281a24: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x281a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x281a28: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x281A28u;
    {
        const bool branch_taken_0x281a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A28u;
            // 0x281a2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a28) {
            ctx->pc = 0x281C34u;
            goto label_281c34;
        }
    }
    ctx->pc = 0x281A30u;
label_281a30:
    // 0x281a30: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x281a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x281a34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x281a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x281a38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x281a3c: 0x1602003e  bne         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x281A3Cu;
    {
        const bool branch_taken_0x281a3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x281A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A3Cu;
            // 0x281a40: 0x2523000c  addiu       $v1, $t1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a3c) {
            ctx->pc = 0x281B38u;
            goto label_281b38;
        }
    }
    ctx->pc = 0x281A44u;
    // 0x281a44: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x281a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x281a48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x281a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281a4c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x281a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x281a50: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x281A50u;
    {
        const bool branch_taken_0x281a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A50u;
            // 0x281a54: 0x1281021  addu        $v0, $t1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a50) {
            ctx->pc = 0x281B38u;
            goto label_281b38;
        }
    }
    ctx->pc = 0x281A58u;
    // 0x281a58: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x281a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x281a5c: 0x14720036  bne         $v1, $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x281A5Cu;
    {
        const bool branch_taken_0x281a5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x281A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A5Cu;
            // 0x281a60: 0x25220010  addiu       $v0, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a5c) {
            ctx->pc = 0x281B38u;
            goto label_281b38;
        }
    }
    ctx->pc = 0x281A64u;
    // 0x281a64: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x281a64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x281a68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x281a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281a6c: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x281a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x281a70: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x281a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x281a74: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x281a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x281a78: 0x2222025  or          $a0, $s1, $v0
    ctx->pc = 0x281a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x281a7c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x281a7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x281a80: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x281A80u;
    {
        const bool branch_taken_0x281a80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A80u;
            // 0x281a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a80) {
            ctx->pc = 0x281AE8u;
            goto label_281ae8;
        }
    }
    ctx->pc = 0x281A88u;
    // 0x281a88: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x281a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_281a8c:
    // 0x281a8c: 0x68c80007  ldl         $t0, 0x7($a2)
    ctx->pc = 0x281a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x281a90: 0x6cc80000  ldr         $t0, 0x0($a2)
    ctx->pc = 0x281a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x281a94: 0x68c9000f  ldl         $t1, 0xF($a2)
    ctx->pc = 0x281a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x281a98: 0x6cc90008  ldr         $t1, 0x8($a2)
    ctx->pc = 0x281a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x281a9c: 0x68c30017  ldl         $v1, 0x17($a2)
    ctx->pc = 0x281a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x281aa0: 0x6cc30010  ldr         $v1, 0x10($a2)
    ctx->pc = 0x281aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x281aa4: 0x68c5001f  ldl         $a1, 0x1F($a2)
    ctx->pc = 0x281aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x281aa8: 0x6cc50018  ldr         $a1, 0x18($a2)
    ctx->pc = 0x281aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x281aac: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x281aacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ab0: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x281ab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ab4: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x281ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ab8: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x281ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281abc: 0xb0430017  sdl         $v1, 0x17($v0)
    ctx->pc = 0x281abcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ac0: 0xb4430010  sdr         $v1, 0x10($v0)
    ctx->pc = 0x281ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ac4: 0xb045001f  sdl         $a1, 0x1F($v0)
    ctx->pc = 0x281ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281ac8: 0xb4450018  sdr         $a1, 0x18($v0)
    ctx->pc = 0x281ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281acc: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x281ad0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x281ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x281ad4: 0x0  nop
    ctx->pc = 0x281ad4u;
    // NOP
    // 0x281ad8: 0x14c4ffec  bne         $a2, $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x281AD8u;
    {
        const bool branch_taken_0x281ad8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x281ad8) {
            ctx->pc = 0x281A8Cu;
            runtime->cooperativeGuestYield();
            goto label_281a8c;
        }
    }
    ctx->pc = 0x281AE0u;
    // 0x281ae0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x281AE0u;
    {
        const bool branch_taken_0x281ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281AE0u;
            // 0x281ae4: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ae0) {
            ctx->pc = 0x281B24u;
            goto label_281b24;
        }
    }
    ctx->pc = 0x281AE8u;
label_281ae8:
    // 0x281ae8: 0x26240400  addiu       $a0, $s1, 0x400
    ctx->pc = 0x281ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
label_281aec:
    // 0x281aec: 0xdcc70000  ld          $a3, 0x0($a2)
    ctx->pc = 0x281aecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x281af0: 0xdcc80008  ld          $t0, 0x8($a2)
    ctx->pc = 0x281af0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x281af4: 0xdcc90010  ld          $t1, 0x10($a2)
    ctx->pc = 0x281af4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x281af8: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x281af8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x281afc: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x281afcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x281b00: 0xfc480008  sd          $t0, 0x8($v0)
    ctx->pc = 0x281b00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x281b04: 0xfc490010  sd          $t1, 0x10($v0)
    ctx->pc = 0x281b04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x281b08: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x281b08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x281b0c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x281b10: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x281b14: 0x0  nop
    ctx->pc = 0x281b14u;
    // NOP
    // 0x281b18: 0x14c4fff4  bne         $a2, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x281B18u;
    {
        const bool branch_taken_0x281b18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x281b18) {
            ctx->pc = 0x281AECu;
            runtime->cooperativeGuestYield();
            goto label_281aec;
        }
    }
    ctx->pc = 0x281B20u;
    // 0x281b20: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x281b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_281b24:
    // 0x281b24: 0x2684df00  addiu       $a0, $s4, -0x2100
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958848));
    // 0x281b28: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x281b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x281b2c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x281b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x281b30: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x281B30u;
    {
        const bool branch_taken_0x281b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281B30u;
            // 0x281b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b30) {
            ctx->pc = 0x281C34u;
            goto label_281c34;
        }
    }
    ctx->pc = 0x281B38u;
label_281b38:
    // 0x281b38: 0xc0a0618  jal         func_281860
    ctx->pc = 0x281B38u;
    SET_GPR_U32(ctx, 31, 0x281B40u);
    ctx->pc = 0x281B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281B38u;
            // 0x281b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281860u;
    if (runtime->hasFunction(0x281860u)) {
        auto targetFn = runtime->lookupFunction(0x281860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B40u; }
        if (ctx->pc != 0x281B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281860_0x2818d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281B40u; }
        if (ctx->pc != 0x281B40u) { return; }
    }
    ctx->pc = 0x281B40u;
    // 0x281b40: 0x24032010  addiu       $v1, $zero, 0x2010
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x281b44: 0x2684df00  addiu       $a0, $s4, -0x2100
    ctx->pc = 0x281b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958848));
    // 0x281b48: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x281b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x281b4c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x281b4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b50: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x281b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x281b54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x281b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b58: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x281b5c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x281b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281b60: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x281b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x281b64: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x281b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x281b68: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x281b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b6c: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x281b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x281b70: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x281b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x281b74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x281b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b78: 0xe61025  or          $v0, $a3, $a2
    ctx->pc = 0x281b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x281b7c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x281b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x281b80: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x281B80u;
    {
        const bool branch_taken_0x281b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281B80u;
            // 0x281b84: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b80) {
            ctx->pc = 0x281BE8u;
            goto label_281be8;
        }
    }
    ctx->pc = 0x281B88u;
    // 0x281b88: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_281b8c:
    // 0x281b8c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x281b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x281b90: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x281b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x281b94: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x281b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x281b98: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x281b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x281b9c: 0x68e90017  ldl         $t1, 0x17($a3)
    ctx->pc = 0x281b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x281ba0: 0x6ce90010  ldr         $t1, 0x10($a3)
    ctx->pc = 0x281ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x281ba4: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x281ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x281ba8: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x281ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x281bac: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x281bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bb0: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x281bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bb4: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x281bb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bb8: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x281bb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bbc: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x281bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bc0: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x281bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bc4: 0xb0c3001f  sdl         $v1, 0x1F($a2)
    ctx->pc = 0x281bc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bc8: 0xb4c30018  sdr         $v1, 0x18($a2)
    ctx->pc = 0x281bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281bcc: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x281bd0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x281bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x281bd4: 0x0  nop
    ctx->pc = 0x281bd4u;
    // NOP
    // 0x281bd8: 0x14e2ffec  bne         $a3, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x281BD8u;
    {
        const bool branch_taken_0x281bd8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x281bd8) {
            ctx->pc = 0x281B8Cu;
            runtime->cooperativeGuestYield();
            goto label_281b8c;
        }
    }
    ctx->pc = 0x281BE0u;
    // 0x281be0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x281BE0u;
    {
        const bool branch_taken_0x281be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281BE0u;
            // 0x281be4: 0x24052010  addiu       $a1, $zero, 0x2010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281be0) {
            ctx->pc = 0x281C24u;
            goto label_281c24;
        }
    }
    ctx->pc = 0x281BE8u;
label_281be8:
    // 0x281be8: 0x24e20400  addiu       $v0, $a3, 0x400
    ctx->pc = 0x281be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
label_281bec:
    // 0x281bec: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x281becu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x281bf0: 0xdce50008  ld          $a1, 0x8($a3)
    ctx->pc = 0x281bf0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x281bf4: 0xdce90010  ld          $t1, 0x10($a3)
    ctx->pc = 0x281bf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x281bf8: 0xdce30018  ld          $v1, 0x18($a3)
    ctx->pc = 0x281bf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x281bfc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x281bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x281c00: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x281c00u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x281c04: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x281c04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x281c08: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x281c08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x281c0c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x281c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x281c10: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x281c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x281c14: 0x0  nop
    ctx->pc = 0x281c14u;
    // NOP
    // 0x281c18: 0x14e2fff4  bne         $a3, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x281C18u;
    {
        const bool branch_taken_0x281c18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x281c18) {
            ctx->pc = 0x281BECu;
            runtime->cooperativeGuestYield();
            goto label_281bec;
        }
    }
    ctx->pc = 0x281C20u;
    // 0x281c20: 0x24052010  addiu       $a1, $zero, 0x2010
    ctx->pc = 0x281c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
label_281c24:
    // 0x281c24: 0x2684df00  addiu       $a0, $s4, -0x2100
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958848));
    // 0x281c28: 0x2652818  mult        $a1, $s3, $a1
    ctx->pc = 0x281c28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x281c2c: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x281c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x281c30: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x281c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_281c34:
    // 0x281c34: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x281c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x281c38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x281c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x281c3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x281c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x281c40: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x281c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x281c44: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x281c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281c48: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x281c48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281c4c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x281c4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281c50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x281c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281c54: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x281c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281c58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x281C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281C5Cu;
            // 0x281c60: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28193Cu: goto label_28193c;
            case 0x281984u: goto label_281984;
            case 0x2819E0u: goto label_2819e0;
            case 0x2819E4u: goto label_2819e4;
            case 0x281A1Cu: goto label_281a1c;
            case 0x281A30u: goto label_281a30;
            case 0x281A8Cu: goto label_281a8c;
            case 0x281AE8u: goto label_281ae8;
            case 0x281AECu: goto label_281aec;
            case 0x281B24u: goto label_281b24;
            case 0x281B38u: goto label_281b38;
            case 0x281B8Cu: goto label_281b8c;
            case 0x281BE8u: goto label_281be8;
            case 0x281BECu: goto label_281bec;
            case 0x281C24u: goto label_281c24;
            case 0x281C34u: goto label_281c34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281C64u;
    // 0x281c64: 0x0  nop
    ctx->pc = 0x281c64u;
    // NOP
}
