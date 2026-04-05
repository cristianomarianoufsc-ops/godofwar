#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DFBA8
// Address: 0x1dfba8 - 0x1dfd50
void sub_001DFBA8_0x1dfba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFBA8_0x1dfba8");
#endif

    ctx->pc = 0x1dfba8u;

    // 0x1dfba8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dfba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dfbac: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1dfbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1dfbb0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1dfbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1dfbb4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1dfbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1dfbb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dfbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbbc: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DFBBCu;
    SET_GPR_U32(ctx, 31, 0x1DFBC4u);
    ctx->pc = 0x1DFBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBBCu;
            // 0x1dfbc0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBC4u; }
        if (ctx->pc != 0x1DFBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFBC4u; }
        if (ctx->pc != 0x1DFBC4u) { return; }
    }
    ctx->pc = 0x1DFBC4u;
    // 0x1dfbc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dfbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dfbc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dfbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfbcc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1dfbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dfbd0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dfbd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dfbd8:
    // 0x1dfbd8: 0x0  nop
    ctx->pc = 0x1dfbd8u;
    // NOP
    // 0x1dfbdc: 0x0  nop
    ctx->pc = 0x1dfbdcu;
    // NOP
    // 0x1dfbe0: 0x0  nop
    ctx->pc = 0x1dfbe0u;
    // NOP
    // 0x1dfbe4: 0x0  nop
    ctx->pc = 0x1dfbe4u;
    // NOP
    // 0x1dfbe8: 0x0  nop
    ctx->pc = 0x1dfbe8u;
    // NOP
    // 0x1dfbec: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DFBECu;
    {
        const bool branch_taken_0x1dfbec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dfbec) {
            ctx->pc = 0x1DFBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBECu;
            // 0x1dfbf0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFBD8u;
            runtime->cooperativeGuestYield();
            goto label_1dfbd8;
        }
    }
    ctx->pc = 0x1DFBF4u;
    // 0x1dfbf4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1dfbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1dfbf8: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1dfbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1dfbfc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFBFCu;
    {
        const bool branch_taken_0x1dfbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFBFCu;
            // 0x1dfc00: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbfc) {
            ctx->pc = 0x1DFC40u;
            goto label_1dfc40;
        }
    }
    ctx->pc = 0x1DFC04u;
    // 0x1dfc04: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dfc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfc08: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DFC08u;
    {
        const bool branch_taken_0x1dfc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC08u;
            // 0x1dfc0c: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc08) {
            ctx->pc = 0x1DFC44u;
            goto label_1dfc44;
        }
    }
    ctx->pc = 0x1DFC10u;
    // 0x1dfc10: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1dfc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1dfc14: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1dfc14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1dfc18: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1dfc18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1dfc1c: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1dfc1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfc20: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1dfc20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfc24: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1dfc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1dfc28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfc28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfc2c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1dfc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1dfc30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1dfc30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1dfc34: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1dfc34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dfc38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1dfc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1dfc3c: 0x0  nop
    ctx->pc = 0x1dfc3cu;
    // NOP
label_1dfc40:
    // 0x1dfc40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1dfc44:
    // 0x1dfc44: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1dfc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1dfc48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfc48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dfc4c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DFC4Cu;
    {
        const bool branch_taken_0x1dfc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC4Cu;
            // 0x1dfc50: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc4c) {
            ctx->pc = 0x1DFD40u;
            goto label_1dfd40;
        }
    }
    ctx->pc = 0x1DFC54u;
    // 0x1dfc54: 0x0  nop
    ctx->pc = 0x1dfc54u;
    // NOP
label_1dfc58:
    // 0x1dfc58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfc5c: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x1dfc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1dfc60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfc64: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1dfc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfc68: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1dfc68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1dfc6c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DFC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DFC74u);
    ctx->pc = 0x1DFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC6Cu;
            // 0x1dfc70: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC74u; }
        if (ctx->pc != 0x1DFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFC74u; }
        if (ctx->pc != 0x1DFC74u) { return; }
    }
    ctx->pc = 0x1DFC74u;
    // 0x1dfc74: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1dfc74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfc78: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1dfc78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfc7c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1dfc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1dfc80: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1dfc84: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1dfc84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfc88: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1dfc88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfc8c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1dfc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1dfc90: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DFC90u;
    {
        const bool branch_taken_0x1dfc90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC90u;
            // 0x1dfc94: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc90) {
            ctx->pc = 0x1DFCE8u;
            goto label_1dfce8;
        }
    }
    ctx->pc = 0x1DFC98u;
    // 0x1dfc98: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DFC98u;
    {
        const bool branch_taken_0x1dfc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfc98) {
            ctx->pc = 0x1DFC9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFC98u;
            // 0x1dfc9c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DFCECu;
            goto label_1dfcec;
        }
    }
    ctx->pc = 0x1DFCA0u;
    // 0x1dfca0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dfca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfca4: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DFCA4u;
    {
        const bool branch_taken_0x1dfca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DFCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCA4u;
            // 0x1dfca8: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfca4) {
            ctx->pc = 0x1DFCE8u;
            goto label_1dfce8;
        }
    }
    ctx->pc = 0x1DFCACu;
    // 0x1dfcac: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dfcb0: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1dfcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1dfcb4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1dfcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1dfcb8: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1dfcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dfcbc: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1dfcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dfcc0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1dfcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfcc4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1dfcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dfcc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfccc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dfcccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dfcd0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1dfcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1dfcd4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1dfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dfcd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dfcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dfcdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DFCDCu;
    {
        const bool branch_taken_0x1dfcdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCDCu;
            // 0x1dfce0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcdc) {
            ctx->pc = 0x1DFD30u;
            goto label_1dfd30;
        }
    }
    ctx->pc = 0x1DFCE4u;
    // 0x1dfce4: 0x0  nop
    ctx->pc = 0x1dfce4u;
    // NOP
label_1dfce8:
    // 0x1dfce8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dfcec:
    // 0x1dfcec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfcf0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DFCF0u;
    {
        const bool branch_taken_0x1dfcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DFCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFCF0u;
            // 0x1dfcf4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfcf0) {
            ctx->pc = 0x1DFD30u;
            goto label_1dfd30;
        }
    }
    ctx->pc = 0x1DFCF8u;
label_1dfcf8:
    // 0x1dfcf8: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1dfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1dfcfc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1dfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dfd00: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1dfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1dfd04: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dfd04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dfd08: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DFD08u;
    {
        const bool branch_taken_0x1dfd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD08u;
            // 0x1dfd0c: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd08) {
            ctx->pc = 0x1DFD30u;
            goto label_1dfd30;
        }
    }
    ctx->pc = 0x1DFD10u;
    // 0x1dfd10: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dfd14: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1dfd14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1dfd18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dfd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dfd1c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dfd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dfd20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dfd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dfd24: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DFD24u;
    {
        const bool branch_taken_0x1dfd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DFD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD24u;
            // 0x1dfd28: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd24) {
            ctx->pc = 0x1DFCF8u;
            runtime->cooperativeGuestYield();
            goto label_1dfcf8;
        }
    }
    ctx->pc = 0x1DFD2Cu;
    // 0x1dfd2c: 0x0  nop
    ctx->pc = 0x1dfd2cu;
    // NOP
label_1dfd30:
    // 0x1dfd30: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dfd34: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DFD34u;
    {
        const bool branch_taken_0x1dfd34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DFD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD34u;
            // 0x1dfd38: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfd34) {
            ctx->pc = 0x1DFC58u;
            runtime->cooperativeGuestYield();
            goto label_1dfc58;
        }
    }
    ctx->pc = 0x1DFD3Cu;
    // 0x1dfd3c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1dfd3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1dfd40:
    // 0x1dfd40: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dfd40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dfd44: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFD44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFD48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFD44u;
            // 0x1dfd48: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFBD8u: goto label_1dfbd8;
            case 0x1DFC40u: goto label_1dfc40;
            case 0x1DFC44u: goto label_1dfc44;
            case 0x1DFC58u: goto label_1dfc58;
            case 0x1DFCE8u: goto label_1dfce8;
            case 0x1DFCECu: goto label_1dfcec;
            case 0x1DFCF8u: goto label_1dfcf8;
            case 0x1DFD30u: goto label_1dfd30;
            case 0x1DFD40u: goto label_1dfd40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DFD4Cu;
    // 0x1dfd4c: 0x0  nop
    ctx->pc = 0x1dfd4cu;
    // NOP
}
