#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DEE58
// Address: 0x1dee58 - 0x1df000
void sub_001DEE58_0x1dee58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEE58_0x1dee58");
#endif

    ctx->pc = 0x1dee58u;

    // 0x1dee58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1dee5c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1dee5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1dee60: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1dee60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1dee64: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1dee64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1dee68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1dee68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee6c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1DEE74u);
    ctx->pc = 0x1DEE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE6Cu;
            // 0x1dee70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE74u; }
        if (ctx->pc != 0x1DEE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE74u; }
        if (ctx->pc != 0x1DEE74u) { return; }
    }
    ctx->pc = 0x1DEE74u;
    // 0x1dee74: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1dee74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dee78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1dee78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dee7c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1dee7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dee80: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1dee80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1dee84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dee88:
    // 0x1dee88: 0x0  nop
    ctx->pc = 0x1dee88u;
    // NOP
    // 0x1dee8c: 0x0  nop
    ctx->pc = 0x1dee8cu;
    // NOP
    // 0x1dee90: 0x0  nop
    ctx->pc = 0x1dee90u;
    // NOP
    // 0x1dee94: 0x0  nop
    ctx->pc = 0x1dee94u;
    // NOP
    // 0x1dee98: 0x0  nop
    ctx->pc = 0x1dee98u;
    // NOP
    // 0x1dee9c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DEE9Cu;
    {
        const bool branch_taken_0x1dee9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1dee9c) {
            ctx->pc = 0x1DEEA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE9Cu;
            // 0x1deea0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEE88u;
            runtime->cooperativeGuestYield();
            goto label_1dee88;
        }
    }
    ctx->pc = 0x1DEEA4u;
    // 0x1deea4: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1deea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1deea8: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1deea8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1deeac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEEACu;
    {
        const bool branch_taken_0x1deeac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEACu;
            // 0x1deeb0: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeac) {
            ctx->pc = 0x1DEEF0u;
            goto label_1deef0;
        }
    }
    ctx->pc = 0x1DEEB4u;
    // 0x1deeb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1deeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deeb8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DEEB8u;
    {
        const bool branch_taken_0x1deeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DEEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEB8u;
            // 0x1deebc: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deeb8) {
            ctx->pc = 0x1DEEF4u;
            goto label_1deef4;
        }
    }
    ctx->pc = 0x1DEEC0u;
    // 0x1deec0: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1deec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1deec4: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1deec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1deec8: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1deec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1deecc: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1deeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deed0: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1deed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1deed4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1deed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1deed8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1deed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1deedc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1deedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1deee0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1deee0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1deee4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1deee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1deee8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1deee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1deeec: 0x0  nop
    ctx->pc = 0x1deeecu;
    // NOP
label_1deef0:
    // 0x1deef0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1deef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1deef4:
    // 0x1deef4: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1deef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1deef8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1deef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1deefc: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DEEFCu;
    {
        const bool branch_taken_0x1deefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEFCu;
            // 0x1def00: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deefc) {
            ctx->pc = 0x1DEFF0u;
            goto label_1deff0;
        }
    }
    ctx->pc = 0x1DEF04u;
    // 0x1def04: 0x0  nop
    ctx->pc = 0x1def04u;
    // NOP
label_1def08:
    // 0x1def08: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1def08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1def0c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1def0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1def10: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1def10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1def14: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1def14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1def18: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1def18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1def1c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x1DEF1Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF24u);
    ctx->pc = 0x1DEF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF1Cu;
            // 0x1def20: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF24u; }
        if (ctx->pc != 0x1DEF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF24u; }
        if (ctx->pc != 0x1DEF24u) { return; }
    }
    ctx->pc = 0x1DEF24u;
    // 0x1def24: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1def24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def28: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1def28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1def2c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1def2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1def30: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1def30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1def34: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1def34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1def38: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1def38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1def3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1def3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1def40: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DEF40u;
    {
        const bool branch_taken_0x1def40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF40u;
            // 0x1def44: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def40) {
            ctx->pc = 0x1DEF98u;
            goto label_1def98;
        }
    }
    ctx->pc = 0x1DEF48u;
    // 0x1def48: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEF48u;
    {
        const bool branch_taken_0x1def48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def48) {
            ctx->pc = 0x1DEF4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF48u;
            // 0x1def4c: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEF9Cu;
            goto label_1def9c;
        }
    }
    ctx->pc = 0x1DEF50u;
    // 0x1def50: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1def50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1def54: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEF54u;
    {
        const bool branch_taken_0x1def54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DEF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF54u;
            // 0x1def58: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def54) {
            ctx->pc = 0x1DEF98u;
            goto label_1def98;
        }
    }
    ctx->pc = 0x1DEF5Cu;
    // 0x1def5c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1def5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1def60: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1def60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1def64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1def64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1def68: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1def68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1def6c: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1def6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1def70: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1def70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1def74: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1def74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1def78: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1def7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1def80: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1def80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1def84: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1def84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1def88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1def88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1def8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEF8Cu;
    {
        const bool branch_taken_0x1def8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF8Cu;
            // 0x1def90: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def8c) {
            ctx->pc = 0x1DEFE0u;
            goto label_1defe0;
        }
    }
    ctx->pc = 0x1DEF94u;
    // 0x1def94: 0x0  nop
    ctx->pc = 0x1def94u;
    // NOP
label_1def98:
    // 0x1def98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1def9c:
    // 0x1def9c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1defa0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DEFA0u;
    {
        const bool branch_taken_0x1defa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DEFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFA0u;
            // 0x1defa4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defa0) {
            ctx->pc = 0x1DEFE0u;
            goto label_1defe0;
        }
    }
    ctx->pc = 0x1DEFA8u;
label_1defa8:
    // 0x1defa8: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1defac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1defb0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1defb4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1defb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1defb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEFB8u;
    {
        const bool branch_taken_0x1defb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFB8u;
            // 0x1defbc: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defb8) {
            ctx->pc = 0x1DEFE0u;
            goto label_1defe0;
        }
    }
    ctx->pc = 0x1DEFC0u;
    // 0x1defc0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1defc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1defc4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1defc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1defc8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1defcc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1defd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1defd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1defd4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DEFD4u;
    {
        const bool branch_taken_0x1defd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DEFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFD4u;
            // 0x1defd8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defd4) {
            ctx->pc = 0x1DEFA8u;
            runtime->cooperativeGuestYield();
            goto label_1defa8;
        }
    }
    ctx->pc = 0x1DEFDCu;
    // 0x1defdc: 0x0  nop
    ctx->pc = 0x1defdcu;
    // NOP
label_1defe0:
    // 0x1defe0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1defe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1defe4: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DEFE4u;
    {
        const bool branch_taken_0x1defe4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DEFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFE4u;
            // 0x1defe8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defe4) {
            ctx->pc = 0x1DEF08u;
            runtime->cooperativeGuestYield();
            goto label_1def08;
        }
    }
    ctx->pc = 0x1DEFECu;
    // 0x1defec: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1defecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1deff0:
    // 0x1deff0: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1deff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1deff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFF4u;
            // 0x1deff8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DEE88u: goto label_1dee88;
            case 0x1DEEF0u: goto label_1deef0;
            case 0x1DEEF4u: goto label_1deef4;
            case 0x1DEF08u: goto label_1def08;
            case 0x1DEF98u: goto label_1def98;
            case 0x1DEF9Cu: goto label_1def9c;
            case 0x1DEFA8u: goto label_1defa8;
            case 0x1DEFE0u: goto label_1defe0;
            case 0x1DEFF0u: goto label_1deff0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEFFCu;
    // 0x1deffc: 0x0  nop
    ctx->pc = 0x1deffcu;
    // NOP
}
