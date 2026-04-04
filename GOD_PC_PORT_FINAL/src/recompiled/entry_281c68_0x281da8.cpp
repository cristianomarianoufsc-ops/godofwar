#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_281c68
// Address: 0x281c68 - 0x281da8
void entry_281c68_0x281da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_281c68_0x281da8");
#endif

    ctx->pc = 0x281c68u;

    // 0x281c68: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x281c68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c6c: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x281c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x281c70: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x281c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x281c74: 0xe24018  mult        $t0, $a3, $v0
    ctx->pc = 0x281c74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x281c78: 0xe42018  mult        $a0, $a3, $a0
    ctx->pc = 0x281c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x281c7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281c80: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x281c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x281c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x281c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281c88: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x281c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x281c8c: 0x24633318  addiu       $v1, $v1, 0x3318
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13080));
    // 0x281c90: 0x2449df00  addiu       $t1, $v0, -0x2100
    ctx->pc = 0x281c90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958848));
    // 0x281c94: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c98: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x281c9c: 0x1091021  addu        $v0, $t0, $t1
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x281ca0: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x281ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x281ca4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x281ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281ca8: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x281ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x281cac: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x281cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x281cb0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x281CB0u;
    {
        const bool branch_taken_0x281cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281cb0) {
            ctx->pc = 0x281CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281CB0u;
            // 0x281cb4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281D90u;
            goto label_281d90;
        }
    }
    ctx->pc = 0x281CB8u;
    // 0x281cb8: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x281cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x281cbc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x281cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x281cc0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x281cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x281cc4: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x281cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x281cc8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x281CC8u;
    {
        const bool branch_taken_0x281cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281CC8u;
            // 0x281ccc: 0xc41023  subu        $v0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cc8) {
            ctx->pc = 0x281D8Cu;
            goto label_281d8c;
        }
    }
    ctx->pc = 0x281CD0u;
    // 0x281cd0: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x281cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281cd4: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x281cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x281cd8: 0x25240010  addiu       $a0, $t1, 0x10
    ctx->pc = 0x281cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x281cdc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x281cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x281ce0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x281ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x281ce4: 0x451825  or          $v1, $v0, $a1
    ctx->pc = 0x281ce4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x281ce8: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x281ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x281cec: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x281CECu;
    {
        const bool branch_taken_0x281cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281CECu;
            // 0x281cf0: 0x24430400  addiu       $v1, $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cec) {
            ctx->pc = 0x281D50u;
            goto label_281d50;
        }
    }
    ctx->pc = 0x281CF4u;
label_281cf4:
    // 0x281cf4: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x281cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x281cf8: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x281cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x281cfc: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x281cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x281d00: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x281d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x281d04: 0x68470017  ldl         $a3, 0x17($v0)
    ctx->pc = 0x281d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x281d08: 0x6c470010  ldr         $a3, 0x10($v0)
    ctx->pc = 0x281d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x281d0c: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x281d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x281d10: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x281d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x281d14: 0xb0a40007  sdl         $a0, 0x7($a1)
    ctx->pc = 0x281d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d18: 0xb4a40000  sdr         $a0, 0x0($a1)
    ctx->pc = 0x281d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d1c: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x281d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d20: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x281d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d24: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x281d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d28: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x281d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d2c: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x281d2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d30: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x281d30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281d34: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x281d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x281d38: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x281d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x281d3c: 0x0  nop
    ctx->pc = 0x281d3cu;
    // NOP
    // 0x281d40: 0x1443ffec  bne         $v0, $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x281D40u;
    {
        const bool branch_taken_0x281d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x281d40) {
            ctx->pc = 0x281CF4u;
            runtime->cooperativeGuestYield();
            goto label_281cf4;
        }
    }
    ctx->pc = 0x281D48u;
    // 0x281d48: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x281D48u;
    {
        const bool branch_taken_0x281d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D48u;
            // 0x281d4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d48) {
            ctx->pc = 0x281D9Cu;
            goto label_281d9c;
        }
    }
    ctx->pc = 0x281D50u;
label_281d50:
    // 0x281d50: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x281d50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281d54: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x281d54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x281d58: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x281d58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x281d5c: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x281d5cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x281d60: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x281d60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x281d64: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x281d64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x281d68: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x281d68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x281d6c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x281d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x281d70: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x281d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x281d74: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x281d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x281d78: 0x0  nop
    ctx->pc = 0x281d78u;
    // NOP
    // 0x281d7c: 0x1443fff4  bne         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x281D7Cu;
    {
        const bool branch_taken_0x281d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x281d7c) {
            ctx->pc = 0x281D50u;
            runtime->cooperativeGuestYield();
            goto label_281d50;
        }
    }
    ctx->pc = 0x281D84u;
    // 0x281d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x281D84u;
    {
        const bool branch_taken_0x281d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281D84u;
            // 0x281d88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281d84) {
            ctx->pc = 0x281D9Cu;
            goto label_281d9c;
        }
    }
    ctx->pc = 0x281D8Cu;
label_281d8c:
    // 0x281d8c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x281d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_281d90:
    // 0x281d90: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x281d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d94: 0xc0a05f8  jal         func_2817E0
    ctx->pc = 0x281D94u;
    SET_GPR_U32(ctx, 31, 0x281D9Cu);
    ctx->pc = 0x281D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281D94u;
            // 0x281d98: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817E0u;
    if (runtime->hasFunction(0x2817E0u)) {
        auto targetFn = runtime->lookupFunction(0x2817E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D9Cu; }
        if (ctx->pc != 0x281D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2817e0_0x281820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281D9Cu; }
        if (ctx->pc != 0x281D9Cu) { return; }
    }
    ctx->pc = 0x281D9Cu;
label_281d9c:
    // 0x281d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281da0: 0x3e00008  jr          $ra
    ctx->pc = 0x281DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281DA0u;
            // 0x281da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281CF4u: goto label_281cf4;
            case 0x281D50u: goto label_281d50;
            case 0x281D8Cu: goto label_281d8c;
            case 0x281D90u: goto label_281d90;
            case 0x281D9Cu: goto label_281d9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281DA8u;
}
