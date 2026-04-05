#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121BA8
// Address: 0x121ba8 - 0x121ce0
void sub_00121BA8_0x121ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121BA8_0x121ba8");
#endif

    ctx->pc = 0x121ba8u;

    // 0x121ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121bac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x121bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x121bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x121bb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x121bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x121bb8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121bbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x121bc0: 0xc04bfb8  jal         func_12FEE0
    ctx->pc = 0x121BC0u;
    SET_GPR_U32(ctx, 31, 0x121BC8u);
    ctx->pc = 0x121BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121BC0u;
            // 0x121bc4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEE0u;
    if (runtime->hasFunction(0x12FEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12FEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121BC8u; }
        if (ctx->pc != 0x121BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEE0_0x12fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121BC8u; }
        if (ctx->pc != 0x121BC8u) { return; }
    }
    ctx->pc = 0x121BC8u;
    // 0x121bc8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x121bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x121bcc: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x121bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x121bd0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x121bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x121bd4: 0x851025  or          $v0, $a0, $a1
    ctx->pc = 0x121bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x121bd8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x121bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x121bdc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x121BDCu;
    {
        const bool branch_taken_0x121bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121BDCu;
            // 0x121be0: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121bdc) {
            ctx->pc = 0x121C3Cu;
            goto label_121c3c;
        }
    }
    ctx->pc = 0x121BE4u;
    // 0x121be4: 0x260200c4  addiu       $v0, $s0, 0xC4
    ctx->pc = 0x121be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_121be8:
    // 0x121be8: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x121be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x121bec: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x121becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x121bf0: 0x6886000f  ldl         $a2, 0xF($a0)
    ctx->pc = 0x121bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x121bf4: 0x6c860008  ldr         $a2, 0x8($a0)
    ctx->pc = 0x121bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x121bf8: 0x68870017  ldl         $a3, 0x17($a0)
    ctx->pc = 0x121bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x121bfc: 0x6c870010  ldr         $a3, 0x10($a0)
    ctx->pc = 0x121bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x121c00: 0x6888001f  ldl         $t0, 0x1F($a0)
    ctx->pc = 0x121c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x121c04: 0x6c880018  ldr         $t0, 0x18($a0)
    ctx->pc = 0x121c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x121c08: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x121c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c0c: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x121c0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c10: 0xb0a6000f  sdl         $a2, 0xF($a1)
    ctx->pc = 0x121c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c14: 0xb4a60008  sdr         $a2, 0x8($a1)
    ctx->pc = 0x121c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c18: 0xb0a70017  sdl         $a3, 0x17($a1)
    ctx->pc = 0x121c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c1c: 0xb4a70010  sdr         $a3, 0x10($a1)
    ctx->pc = 0x121c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c20: 0xb0a8001f  sdl         $t0, 0x1F($a1)
    ctx->pc = 0x121c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c24: 0xb4a80018  sdr         $t0, 0x18($a1)
    ctx->pc = 0x121c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c28: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x121c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x121c2c: 0x1482ffee  bne         $a0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x121C2Cu;
    {
        const bool branch_taken_0x121c2c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x121C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121C2Cu;
            // 0x121c30: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c2c) {
            ctx->pc = 0x121BE8u;
            runtime->cooperativeGuestYield();
            goto label_121be8;
        }
    }
    ctx->pc = 0x121C34u;
    // 0x121c34: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x121C34u;
    {
        const bool branch_taken_0x121c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x121c34) {
            ctx->pc = 0x121C6Cu;
            goto label_121c6c;
        }
    }
    ctx->pc = 0x121C3Cu;
label_121c3c:
    // 0x121c3c: 0x260200c4  addiu       $v0, $s0, 0xC4
    ctx->pc = 0x121c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
label_121c40:
    // 0x121c40: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x121c40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x121c44: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x121c44u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x121c48: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x121c48u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x121c4c: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x121c4cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x121c50: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x121c50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x121c54: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x121c54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x121c58: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x121c58u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x121c5c: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x121c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x121c60: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x121c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x121c64: 0x1482fff6  bne         $a0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x121C64u;
    {
        const bool branch_taken_0x121c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x121C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121C64u;
            // 0x121c68: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121c64) {
            ctx->pc = 0x121C40u;
            runtime->cooperativeGuestYield();
            goto label_121c40;
        }
    }
    ctx->pc = 0x121C6Cu;
label_121c6c:
    // 0x121c6c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x121c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x121c70: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x121c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x121c74: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x121c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x121c78: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x121c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x121c7c: 0x68860017  ldl         $a2, 0x17($a0)
    ctx->pc = 0x121c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x121c80: 0x6c860010  ldr         $a2, 0x10($a0)
    ctx->pc = 0x121c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x121c84: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x121c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c88: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x121c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c8c: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x121c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c90: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x121c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c94: 0xb0a60017  sdl         $a2, 0x17($a1)
    ctx->pc = 0x121c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c98: 0xb4a60010  sdr         $a2, 0x10($a1)
    ctx->pc = 0x121c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x121c9c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x121c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x121ca0: 0x26050054  addiu       $a1, $s0, 0x54
    ctx->pc = 0x121ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
    // 0x121ca4: 0xc60000dc  lwc1        $f0, 0xDC($s0)
    ctx->pc = 0x121ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121ca8: 0xe620009c  swc1        $f0, 0x9C($s1)
    ctx->pc = 0x121ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 156), bits); }
    // 0x121cac: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x121cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x121cb0: 0xc0a2644  jal         func_289910
    ctx->pc = 0x121CB0u;
    SET_GPR_U32(ctx, 31, 0x121CB8u);
    ctx->pc = 0x121CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121CB0u;
            // 0x121cb4: 0xe62000a0  swc1        $f0, 0xA0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CB8u; }
        if (ctx->pc != 0x121CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CB8u; }
        if (ctx->pc != 0x121CB8u) { return; }
    }
    ctx->pc = 0x121CB8u;
    // 0x121cb8: 0x2605006c  addiu       $a1, $s0, 0x6C
    ctx->pc = 0x121cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x121cbc: 0xc0a2644  jal         func_289910
    ctx->pc = 0x121CBCu;
    SET_GPR_U32(ctx, 31, 0x121CC4u);
    ctx->pc = 0x121CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121CBCu;
            // 0x121cc0: 0x2624002c  addiu       $a0, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CC4u; }
        if (ctx->pc != 0x121CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121CC4u; }
        if (ctx->pc != 0x121CC4u) { return; }
    }
    ctx->pc = 0x121CC4u;
    // 0x121cc4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x121cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x121cc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121ccc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x121cccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x121CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121CD4u;
            // 0x121cd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x121BE8u: goto label_121be8;
            case 0x121C3Cu: goto label_121c3c;
            case 0x121C40u: goto label_121c40;
            case 0x121C6Cu: goto label_121c6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x121CDCu;
    // 0x121cdc: 0x0  nop
    ctx->pc = 0x121cdcu;
    // NOP
}
