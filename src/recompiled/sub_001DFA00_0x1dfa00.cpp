#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFA00
// Address: 0x1dfa00 - 0x1dfba8
void sub_001DFA00_0x1dfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFA00_0x1dfa00");
#endif

    ctx->pc = 0x1dfa00u;

    // 0x1dfa00: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dfa04: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1dfa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1dfa08: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1dfa08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1dfa0c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1dfa0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1dfa10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfa10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa14: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DFA14u;
    SET_GPR_U32(ctx, 31, 0x1DFA1Cu);
    ctx->pc = 0x1DFA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA14u;
            // 0x1dfa18: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA1Cu; }
        if (ctx->pc != 0x1DFA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA1Cu; }
        if (ctx->pc != 0x1DFA1Cu) { return; }
    }
    ctx->pc = 0x1DFA1Cu;
    // 0x1dfa1c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dfa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfa20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dfa20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa24: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1dfa24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dfa28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dfa28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dfa2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dfa30:
    // 0x1dfa30: 0x0  nop
    ctx->pc = 0x1dfa30u;
    // NOP
    // 0x1dfa34: 0x0  nop
    ctx->pc = 0x1dfa34u;
    // NOP
    // 0x1dfa38: 0x0  nop
    ctx->pc = 0x1dfa38u;
    // NOP
    // 0x1dfa3c: 0x0  nop
    ctx->pc = 0x1dfa3cu;
    // NOP
    // 0x1dfa40: 0x0  nop
    ctx->pc = 0x1dfa40u;
    // NOP
    // 0x1dfa44: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DFA44u;
    {
        const bool branch_taken_0x1dfa44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfa44) {
            ctx->pc = 0x1DFA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA44u;
            // 0x1dfa48: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFA30u;
            runtime->cooperativeGuestYield();
            goto label_1dfa30;
        }
    }
    ctx->pc = 0x1DFA4Cu;
    // 0x1dfa4c: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1dfa50: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1dfa50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1dfa54: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFA54u;
    {
        const bool branch_taken_0x1dfa54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA54u;
            // 0x1dfa58: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa54) {
            ctx->pc = 0x1DFA98u;
            goto label_1dfa98;
        }
    }
    ctx->pc = 0x1DFA5Cu;
    // 0x1dfa5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfa60: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DFA60u;
    {
        const bool branch_taken_0x1dfa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA60u;
            // 0x1dfa64: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa60) {
            ctx->pc = 0x1DFA9Cu;
            goto label_1dfa9c;
        }
    }
    ctx->pc = 0x1DFA68u;
    // 0x1dfa68: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1dfa68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1dfa6c: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1dfa6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dfa70: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1dfa70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dfa74: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1dfa74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfa78: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1dfa78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfa7c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1dfa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1dfa80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfa80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfa84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dfa84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dfa88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dfa88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1dfa8c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfa90: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1dfa90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1dfa94: 0x0  nop
    ctx->pc = 0x1dfa94u;
    // NOP
label_1dfa98:
    // 0x1dfa98: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1dfa9c:
    // 0x1dfa9c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1dfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1dfaa0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfaa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dfaa4: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DFAA4u;
    {
        const bool branch_taken_0x1dfaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAA4u;
            // 0x1dfaa8: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfaa4) {
            ctx->pc = 0x1DFB98u;
            goto label_1dfb98;
        }
    }
    ctx->pc = 0x1DFAACu;
    // 0x1dfaac: 0x0  nop
    ctx->pc = 0x1dfaacu;
    // NOP
label_1dfab0:
    // 0x1dfab0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfab4: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1dfab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1dfab8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfabc: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1dfabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfac0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dfac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dfac4: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DFAC4u;
    SET_GPR_U32(ctx, 31, 0x1DFACCu);
    ctx->pc = 0x1DFAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAC4u;
            // 0x1dfac8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFACCu; }
        if (ctx->pc != 0x1DFACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFACCu; }
        if (ctx->pc != 0x1DFACCu) { return; }
    }
    ctx->pc = 0x1DFACCu;
    // 0x1dfacc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1dfaccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfad0: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1dfad0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfad4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1dfad8: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1dfad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1dfadc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfae0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1dfae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfae4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1dfae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1dfae8: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFAE8u;
    {
        const bool branch_taken_0x1dfae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAE8u;
            // 0x1dfaec: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfae8) {
            ctx->pc = 0x1DFB40u;
            goto label_1dfb40;
        }
    }
    ctx->pc = 0x1DFAF0u;
    // 0x1dfaf0: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DFAF0u;
    {
        const bool branch_taken_0x1dfaf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfaf0) {
            ctx->pc = 0x1DFAF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAF0u;
            // 0x1dfaf4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFB44u;
            goto label_1dfb44;
        }
    }
    ctx->pc = 0x1DFAF8u;
    // 0x1dfaf8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dfaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfafc: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFAFCu;
    {
        const bool branch_taken_0x1dfafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DFB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAFCu;
            // 0x1dfb00: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfafc) {
            ctx->pc = 0x1DFB40u;
            goto label_1dfb40;
        }
    }
    ctx->pc = 0x1DFB04u;
    // 0x1dfb04: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dfb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dfb08: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1dfb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1dfb0c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1dfb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1dfb10: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1dfb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dfb14: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1dfb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dfb18: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1dfb18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfb1c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1dfb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfb20: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfb24: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfb28: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1dfb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfb2c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dfb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dfb30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dfb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfb34: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DFB34u;
    {
        const bool branch_taken_0x1dfb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB34u;
            // 0x1dfb38: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb34) {
            ctx->pc = 0x1DFB88u;
            goto label_1dfb88;
        }
    }
    ctx->pc = 0x1DFB3Cu;
    // 0x1dfb3c: 0x0  nop
    ctx->pc = 0x1dfb3cu;
    // NOP
label_1dfb40:
    // 0x1dfb40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dfb44:
    // 0x1dfb44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dfb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfb48: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DFB48u;
    {
        const bool branch_taken_0x1dfb48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DFB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB48u;
            // 0x1dfb4c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb48) {
            ctx->pc = 0x1DFB88u;
            goto label_1dfb88;
        }
    }
    ctx->pc = 0x1DFB50u;
label_1dfb50:
    // 0x1dfb50: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1dfb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1dfb54: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1dfb54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dfb58: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1dfb58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1dfb5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfb5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dfb60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFB60u;
    {
        const bool branch_taken_0x1dfb60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB60u;
            // 0x1dfb64: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb60) {
            ctx->pc = 0x1DFB88u;
            goto label_1dfb88;
        }
    }
    ctx->pc = 0x1DFB68u;
    // 0x1dfb68: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dfb68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dfb6c: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1dfb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1dfb70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfb74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dfb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfb78: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfb7c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DFB7Cu;
    {
        const bool branch_taken_0x1dfb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB7Cu;
            // 0x1dfb80: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb7c) {
            ctx->pc = 0x1DFB50u;
            runtime->cooperativeGuestYield();
            goto label_1dfb50;
        }
    }
    ctx->pc = 0x1DFB84u;
    // 0x1dfb84: 0x0  nop
    ctx->pc = 0x1dfb84u;
    // NOP
label_1dfb88:
    // 0x1dfb88: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfb8c: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DFB8Cu;
    {
        const bool branch_taken_0x1dfb8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DFB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB8Cu;
            // 0x1dfb90: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb8c) {
            ctx->pc = 0x1DFAB0u;
            runtime->cooperativeGuestYield();
            goto label_1dfab0;
        }
    }
    ctx->pc = 0x1DFB94u;
    // 0x1dfb94: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1dfb94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1dfb98:
    // 0x1dfb98: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dfb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dfb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFB9Cu;
            // 0x1dfba0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFA30u: goto label_1dfa30;
            case 0x1DFA98u: goto label_1dfa98;
            case 0x1DFA9Cu: goto label_1dfa9c;
            case 0x1DFAB0u: goto label_1dfab0;
            case 0x1DFB40u: goto label_1dfb40;
            case 0x1DFB44u: goto label_1dfb44;
            case 0x1DFB50u: goto label_1dfb50;
            case 0x1DFB88u: goto label_1dfb88;
            case 0x1DFB98u: goto label_1dfb98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFBA4u;
    // 0x1dfba4: 0x0  nop
    ctx->pc = 0x1dfba4u;
    // NOP
}
