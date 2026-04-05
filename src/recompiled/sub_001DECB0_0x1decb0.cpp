#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DECB0
// Address: 0x1decb0 - 0x1dee58
void sub_001DECB0_0x1decb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DECB0_0x1decb0");
#endif

    ctx->pc = 0x1decb0u;

    // 0x1decb0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1decb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1decb4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1decb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1decb8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1decb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1decbc: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1decbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1decc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1decc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decc4: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DECC4u;
    SET_GPR_U32(ctx, 31, 0x1DECCCu);
    ctx->pc = 0x1DECC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECC4u;
            // 0x1decc8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECCCu; }
        if (ctx->pc != 0x1DECCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECCCu; }
        if (ctx->pc != 0x1DECCCu) { return; }
    }
    ctx->pc = 0x1DECCCu;
    // 0x1deccc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1decd0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1decd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1decd4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1decd8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1decd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1decdc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1decdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dece0:
    // 0x1dece0: 0x0  nop
    ctx->pc = 0x1dece0u;
    // NOP
    // 0x1dece4: 0x0  nop
    ctx->pc = 0x1dece4u;
    // NOP
    // 0x1dece8: 0x0  nop
    ctx->pc = 0x1dece8u;
    // NOP
    // 0x1decec: 0x0  nop
    ctx->pc = 0x1dececu;
    // NOP
    // 0x1decf0: 0x0  nop
    ctx->pc = 0x1decf0u;
    // NOP
    // 0x1decf4: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DECF4u;
    {
        const bool branch_taken_0x1decf4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1decf4) {
            ctx->pc = 0x1DECF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECF4u;
            // 0x1decf8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DECE0u;
            runtime->cooperativeGuestYield();
            goto label_1dece0;
        }
    }
    ctx->pc = 0x1DECFCu;
    // 0x1decfc: 0x8c6300b4  lw          $v1, 0xB4($v1)
    ctx->pc = 0x1decfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x1ded00: 0xac850080  sw          $a1, 0x80($a0)
    ctx->pc = 0x1ded00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 5));
    // 0x1ded04: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DED04u;
    {
        const bool branch_taken_0x1ded04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED04u;
            // 0x1ded08: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded04) {
            ctx->pc = 0x1DED48u;
            goto label_1ded48;
        }
    }
    ctx->pc = 0x1DED0Cu;
    // 0x1ded0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ded0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ded10: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1DED10u;
    {
        const bool branch_taken_0x1ded10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED10u;
            // 0x1ded14: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded10) {
            ctx->pc = 0x1DED4Cu;
            goto label_1ded4c;
        }
    }
    ctx->pc = 0x1DED18u;
    // 0x1ded18: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1ded18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1ded1c: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1ded1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ded20: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1ded20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ded24: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x1ded24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded28: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x1ded28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ded2c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x1ded2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x1ded30: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ded30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ded34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ded34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ded38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1ded38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1ded3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1ded3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ded40: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1ded40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1ded44: 0x0  nop
    ctx->pc = 0x1ded44u;
    // NOP
label_1ded48:
    // 0x1ded48: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ded48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ded4c:
    // 0x1ded4c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1ded4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1ded50: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1ded50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1ded54: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1DED54u;
    {
        const bool branch_taken_0x1ded54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED54u;
            // 0x1ded58: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded54) {
            ctx->pc = 0x1DEE48u;
            goto label_1dee48;
        }
    }
    ctx->pc = 0x1DED5Cu;
    // 0x1ded5c: 0x0  nop
    ctx->pc = 0x1ded5cu;
    // NOP
label_1ded60:
    // 0x1ded60: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ded60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ded64: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1ded64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ded68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ded68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ded6c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1ded6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ded70: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1ded70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ded74: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x1DED74u;
    SET_GPR_U32(ctx, 31, 0x1DED7Cu);
    ctx->pc = 0x1DED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED74u;
            // 0x1ded78: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED7Cu; }
        if (ctx->pc != 0x1DED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED7Cu; }
        if (ctx->pc != 0x1DED7Cu) { return; }
    }
    ctx->pc = 0x1DED7Cu;
    // 0x1ded7c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1ded7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ded80: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ded84: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1ded84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1ded88: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1ded88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1ded8c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1ded8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1ded90: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1ded90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ded94: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1ded94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1ded98: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1DED98u;
    {
        const bool branch_taken_0x1ded98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DED9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED98u;
            // 0x1ded9c: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded98) {
            ctx->pc = 0x1DEDF0u;
            goto label_1dedf0;
        }
    }
    ctx->pc = 0x1DEDA0u;
    // 0x1deda0: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEDA0u;
    {
        const bool branch_taken_0x1deda0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deda0) {
            ctx->pc = 0x1DEDA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDA0u;
            // 0x1deda4: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DEDF4u;
            goto label_1dedf4;
        }
    }
    ctx->pc = 0x1DEDA8u;
    // 0x1deda8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1deda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dedac: 0x10450010  beq         $v0, $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DEDACu;
    {
        const bool branch_taken_0x1dedac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1DEDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDACu;
            // 0x1dedb0: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedac) {
            ctx->pc = 0x1DEDF0u;
            goto label_1dedf0;
        }
    }
    ctx->pc = 0x1DEDB4u;
    // 0x1dedb4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dedb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dedb8: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1dedbc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1dedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1dedc0: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x1dedc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1dedc4: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x1dedc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1dedc8: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x1dedc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dedcc: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x1dedccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dedd0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dedd4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1dedd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1dedd8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1dedd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1deddc: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1deddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1dede0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dede0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dede4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1DEDE4u;
    {
        const bool branch_taken_0x1dede4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDE4u;
            // 0x1dede8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dede4) {
            ctx->pc = 0x1DEE38u;
            goto label_1dee38;
        }
    }
    ctx->pc = 0x1DEDECu;
    // 0x1dedec: 0x0  nop
    ctx->pc = 0x1dedecu;
    // NOP
label_1dedf0:
    // 0x1dedf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1dedf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1dedf4:
    // 0x1dedf4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dedf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dedf8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1DEDF8u;
    {
        const bool branch_taken_0x1dedf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DEDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDF8u;
            // 0x1dedfc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedf8) {
            ctx->pc = 0x1DEE38u;
            goto label_1dee38;
        }
    }
    ctx->pc = 0x1DEE00u;
label_1dee00:
    // 0x1dee00: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1dee00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1dee04: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1dee04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dee08: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1dee08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1dee0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1dee0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1dee10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEE10u;
    {
        const bool branch_taken_0x1dee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE10u;
            // 0x1dee14: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee10) {
            ctx->pc = 0x1DEE38u;
            goto label_1dee38;
        }
    }
    ctx->pc = 0x1DEE18u;
    // 0x1dee18: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1dee18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1dee1c: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1dee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1dee20: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1dee20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1dee24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1dee24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1dee28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dee2c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DEE2Cu;
    {
        const bool branch_taken_0x1dee2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DEE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE2Cu;
            // 0x1dee30: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee2c) {
            ctx->pc = 0x1DEE00u;
            runtime->cooperativeGuestYield();
            goto label_1dee00;
        }
    }
    ctx->pc = 0x1DEE34u;
    // 0x1dee34: 0x0  nop
    ctx->pc = 0x1dee34u;
    // NOP
label_1dee38:
    // 0x1dee38: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1dee38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1dee3c: 0x441ffc8  bgez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x1DEE3Cu;
    {
        const bool branch_taken_0x1dee3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1DEE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE3Cu;
            // 0x1dee40: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dee3c) {
            ctx->pc = 0x1DED60u;
            runtime->cooperativeGuestYield();
            goto label_1ded60;
        }
    }
    ctx->pc = 0x1DEE44u;
    // 0x1dee44: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1dee44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1dee48:
    // 0x1dee48: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1dee48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1dee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE4Cu;
            // 0x1dee50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DECE0u: goto label_1dece0;
            case 0x1DED48u: goto label_1ded48;
            case 0x1DED4Cu: goto label_1ded4c;
            case 0x1DED60u: goto label_1ded60;
            case 0x1DEDF0u: goto label_1dedf0;
            case 0x1DEDF4u: goto label_1dedf4;
            case 0x1DEE00u: goto label_1dee00;
            case 0x1DEE38u: goto label_1dee38;
            case 0x1DEE48u: goto label_1dee48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DEE54u;
    // 0x1dee54: 0x0  nop
    ctx->pc = 0x1dee54u;
    // NOP
}
