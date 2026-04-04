#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278c18
// Address: 0x278c18 - 0x278de8
void entry_278c18_0x278de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278c18_0x278de8");
#endif

    ctx->pc = 0x278c18u;

    // 0x278c18: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x278c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x278c1c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x278c20: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x278c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x278c24: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x278c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x278c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278c2c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x278c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x278c30: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x278c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x278c34: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x278c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x278c38: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x278c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x278c3c: 0x24474858  addiu       $a3, $v0, 0x4858
    ctx->pc = 0x278c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 18520));
    // 0x278c40: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x278c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x278c44: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x278c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x278c48: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x278c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x278c4c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x278c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x278c50: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x278c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x278c54: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x278c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x278c58: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x278c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c5c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x278c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c60: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x278c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c64: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x278c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c68: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x278c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c6c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x278c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c70: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x278c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x278c74: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x278c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x278c78: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x278c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x278c7c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x278c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x278c80: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x278c80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x278c84: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x278c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c88: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x278c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c8c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x278c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c90: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x278c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x278c94: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x278c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x278c98: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x278C98u;
    SET_GPR_U32(ctx, 31, 0x278CA0u);
    ctx->pc = 0x278C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278C98u;
            // 0x278c9c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F88u;
    if (runtime->hasFunction(0x278F88u)) {
        auto targetFn = runtime->lookupFunction(0x278F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CA0u; }
        if (ctx->pc != 0x278CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f88_0x278fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CA0u; }
        if (ctx->pc != 0x278CA0u) { return; }
    }
    ctx->pc = 0x278CA0u;
    // 0x278ca0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278CA0u;
    {
        const bool branch_taken_0x278ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CA0u;
            // 0x278ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ca0) {
            ctx->pc = 0x278CB4u;
            goto label_278cb4;
        }
    }
    ctx->pc = 0x278CA8u;
label_278ca8:
    // 0x278ca8: 0xc09e388  jal         func_278E20
    ctx->pc = 0x278CA8u;
    SET_GPR_U32(ctx, 31, 0x278CB0u);
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CB0u; }
        if (ctx->pc != 0x278CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CB0u; }
        if (ctx->pc != 0x278CB0u) { return; }
    }
    ctx->pc = 0x278CB0u;
    // 0x278cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278cb4:
    // 0x278cb4: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x278CB4u;
    SET_GPR_U32(ctx, 31, 0x278CBCu);
    ctx->pc = 0x278CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278CB4u;
            // 0x278cb8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CBCu; }
        if (ctx->pc != 0x278CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CBCu; }
        if (ctx->pc != 0x278CBCu) { return; }
    }
    ctx->pc = 0x278CBCu;
    // 0x278cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cc0: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278CC0u;
    {
        const bool branch_taken_0x278cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x278CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CC0u;
            // 0x278cc4: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cc0) {
            ctx->pc = 0x278CD4u;
            goto label_278cd4;
        }
    }
    ctx->pc = 0x278CC8u;
    // 0x278cc8: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x278cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x278ccc: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x278CCCu;
    {
        const bool branch_taken_0x278ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ccc) {
            ctx->pc = 0x278CA8u;
            runtime->cooperativeGuestYield();
            goto label_278ca8;
        }
    }
    ctx->pc = 0x278CD4u;
label_278cd4:
    // 0x278cd4: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x278cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
    // 0x278cd8: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x278cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
    // 0x278cdc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x278CDCu;
    {
        const bool branch_taken_0x278cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CDCu;
            // 0x278ce0: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cdc) {
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278CE4u;
    // 0x278ce4: 0x0  nop
    ctx->pc = 0x278ce4u;
    // NOP
label_278ce8:
    // 0x278ce8: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x278CE8u;
    {
        const bool branch_taken_0x278ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x278CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278CE8u;
            // 0x278cec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ce8) {
            ctx->pc = 0x278D64u;
            goto label_278d64;
        }
    }
    ctx->pc = 0x278CF0u;
label_278cf0:
    // 0x278cf0: 0xc09e3e0  jal         func_278F80
    ctx->pc = 0x278CF0u;
    SET_GPR_U32(ctx, 31, 0x278CF8u);
    ctx->pc = 0x278CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278CF0u;
            // 0x278cf4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F80u;
    if (runtime->hasFunction(0x278F80u)) {
        auto targetFn = runtime->lookupFunction(0x278F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CF8u; }
        if (ctx->pc != 0x278CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f80_0x278f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278CF8u; }
        if (ctx->pc != 0x278CF8u) { return; }
    }
    ctx->pc = 0x278CF8u;
    // 0x278cf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278cfc: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278CFCu;
    SET_GPR_U32(ctx, 31, 0x278D04u);
    ctx->pc = 0x278D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278CFCu;
            // 0x278d00: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D04u; }
        if (ctx->pc != 0x278D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D04u; }
        if (ctx->pc != 0x278D04u) { return; }
    }
    ctx->pc = 0x278D04u;
    // 0x278d04: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x278d04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x278d08: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x278d08u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x278d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x278d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x278d10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x278d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x278d14: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x278d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x278d18: 0x40f809  jalr        $v0
    ctx->pc = 0x278D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x278D20u);
        ctx->pc = 0x278D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D18u;
            // 0x278d1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x278D20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278CA8u: goto label_278ca8;
            case 0x278CB4u: goto label_278cb4;
            case 0x278CD4u: goto label_278cd4;
            case 0x278CE8u: goto label_278ce8;
            case 0x278CF0u: goto label_278cf0;
            case 0x278D30u: goto label_278d30;
            case 0x278D3Cu: goto label_278d3c;
            case 0x278D64u: goto label_278d64;
            case 0x278D80u: goto label_278d80;
            case 0x278D8Cu: goto label_278d8c;
            case 0x278DACu: goto label_278dac;
            case 0x278DB0u: goto label_278db0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x278D20u; }
            if (ctx->pc != 0x278D20u) { return; }
        }
        }
    }
    ctx->pc = 0x278D20u;
    // 0x278d20: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x278D20u;
    SET_GPR_U32(ctx, 31, 0x278D28u);
    ctx->pc = 0x278D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D20u;
            // 0x278d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F88u;
    if (runtime->hasFunction(0x278F88u)) {
        auto targetFn = runtime->lookupFunction(0x278F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D28u; }
        if (ctx->pc != 0x278D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f88_0x278fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D28u; }
        if (ctx->pc != 0x278D28u) { return; }
    }
    ctx->pc = 0x278D28u;
    // 0x278d28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278D28u;
    {
        const bool branch_taken_0x278d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D28u;
            // 0x278d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d28) {
            ctx->pc = 0x278D3Cu;
            goto label_278d3c;
        }
    }
    ctx->pc = 0x278D30u;
label_278d30:
    // 0x278d30: 0xc09e388  jal         func_278E20
    ctx->pc = 0x278D30u;
    SET_GPR_U32(ctx, 31, 0x278D38u);
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D38u; }
        if (ctx->pc != 0x278D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D38u; }
        if (ctx->pc != 0x278D38u) { return; }
    }
    ctx->pc = 0x278D38u;
    // 0x278d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d3c:
    // 0x278d3c: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x278D3Cu;
    SET_GPR_U32(ctx, 31, 0x278D44u);
    ctx->pc = 0x278D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D3Cu;
            // 0x278d40: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D44u; }
        if (ctx->pc != 0x278D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D44u; }
        if (ctx->pc != 0x278D44u) { return; }
    }
    ctx->pc = 0x278D44u;
    // 0x278d44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d48: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x278D48u;
    {
        const bool branch_taken_0x278d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x278D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D48u;
            // 0x278d4c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d48) {
            ctx->pc = 0x278DB0u;
            goto label_278db0;
        }
    }
    ctx->pc = 0x278D50u;
    // 0x278d50: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x278d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x278d54: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x278D54u;
    {
        const bool branch_taken_0x278d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d54) {
            ctx->pc = 0x278D30u;
            runtime->cooperativeGuestYield();
            goto label_278d30;
        }
    }
    ctx->pc = 0x278D5Cu;
    // 0x278d5c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x278D5Cu;
    {
        const bool branch_taken_0x278d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278d5c) {
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278D64u;
label_278d64:
    // 0x278d64: 0xc09e3e0  jal         func_278F80
    ctx->pc = 0x278D64u;
    SET_GPR_U32(ctx, 31, 0x278D6Cu);
    ctx->pc = 0x278D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D64u;
            // 0x278d68: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F80u;
    if (runtime->hasFunction(0x278F80u)) {
        auto targetFn = runtime->lookupFunction(0x278F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D6Cu; }
        if (ctx->pc != 0x278D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f80_0x278f88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D6Cu; }
        if (ctx->pc != 0x278D6Cu) { return; }
    }
    ctx->pc = 0x278D6Cu;
    // 0x278d6c: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x278D6Cu;
    SET_GPR_U32(ctx, 31, 0x278D74u);
    ctx->pc = 0x278D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D6Cu;
            // 0x278d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F88u;
    if (runtime->hasFunction(0x278F88u)) {
        auto targetFn = runtime->lookupFunction(0x278F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D74u; }
        if (ctx->pc != 0x278D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f88_0x278fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D74u; }
        if (ctx->pc != 0x278D74u) { return; }
    }
    ctx->pc = 0x278D74u;
    // 0x278d74: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278D74u;
    {
        const bool branch_taken_0x278d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D74u;
            // 0x278d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d74) {
            ctx->pc = 0x278D8Cu;
            goto label_278d8c;
        }
    }
    ctx->pc = 0x278D7Cu;
    // 0x278d7c: 0x0  nop
    ctx->pc = 0x278d7cu;
    // NOP
label_278d80:
    // 0x278d80: 0xc09e388  jal         func_278E20
    ctx->pc = 0x278D80u;
    SET_GPR_U32(ctx, 31, 0x278D88u);
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D88u; }
        if (ctx->pc != 0x278D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D88u; }
        if (ctx->pc != 0x278D88u) { return; }
    }
    ctx->pc = 0x278D88u;
    // 0x278d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d8c:
    // 0x278d8c: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x278D8Cu;
    SET_GPR_U32(ctx, 31, 0x278D94u);
    ctx->pc = 0x278D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278D8Cu;
            // 0x278d90: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D94u; }
        if (ctx->pc != 0x278D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278D94u; }
        if (ctx->pc != 0x278D94u) { return; }
    }
    ctx->pc = 0x278D94u;
    // 0x278d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278d98: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278D98u;
    {
        const bool branch_taken_0x278d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x278D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278D98u;
            // 0x278d9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d98) {
            ctx->pc = 0x278DB0u;
            goto label_278db0;
        }
    }
    ctx->pc = 0x278DA0u;
    // 0x278da0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x278da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x278da4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x278DA4u;
    {
        const bool branch_taken_0x278da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278da4) {
            ctx->pc = 0x278D80u;
            runtime->cooperativeGuestYield();
            goto label_278d80;
        }
    }
    ctx->pc = 0x278DACu;
label_278dac:
    // 0x278dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278db0:
    // 0x278db0: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x278DB0u;
    SET_GPR_U32(ctx, 31, 0x278DB8u);
    ctx->pc = 0x278DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278DB0u;
            // 0x278db4: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DB8u; }
        if (ctx->pc != 0x278DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278DB8u; }
        if (ctx->pc != 0x278DB8u) { return; }
    }
    ctx->pc = 0x278DB8u;
    // 0x278db8: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x278DB8u;
    {
        const bool branch_taken_0x278db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x278DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DB8u;
            // 0x278dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278db8) {
            ctx->pc = 0x278CF0u;
            runtime->cooperativeGuestYield();
            goto label_278cf0;
        }
    }
    ctx->pc = 0x278DC0u;
    // 0x278dc0: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x278DC0u;
    {
        const bool branch_taken_0x278dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x278DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DC0u;
            // 0x278dc4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278dc0) {
            ctx->pc = 0x278CE8u;
            runtime->cooperativeGuestYield();
            goto label_278ce8;
        }
    }
    ctx->pc = 0x278DC8u;
    // 0x278dc8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x278dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x278dcc: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x278dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278dd0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x278dd0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278dd4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x278dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278dd8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x278dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x278DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278DDCu;
            // 0x278de0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278CA8u: goto label_278ca8;
            case 0x278CB4u: goto label_278cb4;
            case 0x278CD4u: goto label_278cd4;
            case 0x278CE8u: goto label_278ce8;
            case 0x278CF0u: goto label_278cf0;
            case 0x278D30u: goto label_278d30;
            case 0x278D3Cu: goto label_278d3c;
            case 0x278D64u: goto label_278d64;
            case 0x278D80u: goto label_278d80;
            case 0x278D8Cu: goto label_278d8c;
            case 0x278DACu: goto label_278dac;
            case 0x278DB0u: goto label_278db0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278DE4u;
    // 0x278de4: 0x0  nop
    ctx->pc = 0x278de4u;
    // NOP
}
