#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DCC8
// Address: 0x27dcc8 - 0x27de48
void sub_0027DCC8_0x27dcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DCC8_0x27dcc8");
#endif

    ctx->pc = 0x27dcc8u;

    // 0x27dcc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27dcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27dccc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27dcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27dcd0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27dcd4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27dcd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcd8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27dcd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27dcdc: 0x3c118101  lui         $s1, 0x8101
    ctx->pc = 0x27dcdcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)33025 << 16));
    // 0x27dce0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27dce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27dce4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27dce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dce8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27dce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27dcec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27dcecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcf0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27dcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27dcf4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27dcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dcf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27dcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27dcfc: 0x3c140032  lui         $s4, 0x32
    ctx->pc = 0x27dcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)50 << 16));
    // 0x27dd00: 0x36310059  ori         $s1, $s1, 0x59
    ctx->pc = 0x27dd00u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)89);
    // 0x27dd04: 0x0  nop
    ctx->pc = 0x27dd04u;
    // NOP
label_27dd08:
    // 0x27dd08: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x27dd08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x27dd0c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x27DD0Cu;
    {
        const bool branch_taken_0x27dd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD0Cu;
            // 0x27dd10: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd0c) {
            ctx->pc = 0x27DDF4u;
            goto label_27ddf4;
        }
    }
    ctx->pc = 0x27DD14u;
    // 0x27dd14: 0x2691db00  addiu       $s1, $s4, -0x2500
    ctx->pc = 0x27dd14u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957824));
    // 0x27dd18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27dd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dd20: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x27DD20u;
    SET_GPR_U32(ctx, 31, 0x27DD28u);
    ctx->pc = 0x27DD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD20u;
            // 0x27dd24: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD28u; }
        if (ctx->pc != 0x27DD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DD28u; }
        if (ctx->pc != 0x27DD28u) { return; }
    }
    ctx->pc = 0x27DD28u;
    // 0x27dd28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DD28u;
    {
        const bool branch_taken_0x27dd28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DD2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD28u;
            // 0x27dd2c: 0x101a40  sll         $v1, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd28) {
            ctx->pc = 0x27DD3Cu;
            goto label_27dd3c;
        }
    }
    ctx->pc = 0x27DD30u;
    // 0x27dd30: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27dd34: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x27DD34u;
    {
        const bool branch_taken_0x27dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD34u;
            // 0x27dd38: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd34) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DD3Cu;
label_27dd3c:
    // 0x27dd3c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x27dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x27dd40: 0x731025  or          $v0, $v1, $s3
    ctx->pc = 0x27dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x27dd44: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x27dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x27dd48: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27DD48u;
    {
        const bool branch_taken_0x27dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DD48u;
            // 0x27dd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dd48) {
            ctx->pc = 0x27DDB0u;
            goto label_27ddb0;
        }
    }
    ctx->pc = 0x27DD50u;
    // 0x27dd50: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x27dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_27dd54:
    // 0x27dd54: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x27dd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x27dd58: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x27dd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x27dd5c: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x27dd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x27dd60: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x27dd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x27dd64: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x27dd64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x27dd68: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x27dd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x27dd6c: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x27dd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x27dd70: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x27dd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x27dd74: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x27dd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd78: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x27dd78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd7c: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x27dd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd80: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x27dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd84: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x27dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd88: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x27dd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd8c: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x27dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd90: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x27dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27dd94: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27dd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27dd98: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27dd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27dd9c: 0x0  nop
    ctx->pc = 0x27dd9cu;
    // NOP
    // 0x27dda0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x27DDA0u;
    {
        const bool branch_taken_0x27dda0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dda0) {
            ctx->pc = 0x27DD54u;
            runtime->cooperativeGuestYield();
            goto label_27dd54;
        }
    }
    ctx->pc = 0x27DDA8u;
    // 0x27dda8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x27DDA8u;
    {
        const bool branch_taken_0x27dda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDA8u;
            // 0x27ddac: 0xa260005f  sb          $zero, 0x5F($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dda8) {
            ctx->pc = 0x27DDECu;
            goto label_27ddec;
        }
    }
    ctx->pc = 0x27DDB0u;
label_27ddb0:
    // 0x27ddb0: 0x24620200  addiu       $v0, $v1, 0x200
    ctx->pc = 0x27ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_27ddb4:
    // 0x27ddb4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x27ddb4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27ddb8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x27ddb8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27ddbc: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x27ddbcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x27ddc0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x27ddc0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x27ddc4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x27ddc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x27ddc8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x27ddc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x27ddcc: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x27ddccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x27ddd0: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x27ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x27ddd4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x27ddd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x27ddd8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x27ddd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x27dddc: 0x0  nop
    ctx->pc = 0x27dddcu;
    // NOP
    // 0x27dde0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x27DDE0u;
    {
        const bool branch_taken_0x27dde0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27dde0) {
            ctx->pc = 0x27DDB4u;
            runtime->cooperativeGuestYield();
            goto label_27ddb4;
        }
    }
    ctx->pc = 0x27DDE8u;
    // 0x27dde8: 0xa260005f  sb          $zero, 0x5F($s3)
    ctx->pc = 0x27dde8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 95), (uint8_t)GPR_U32(ctx, 0));
label_27ddec:
    // 0x27ddec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27DDECu;
    {
        const bool branch_taken_0x27ddec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDECu;
            // 0x27ddf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ddec) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DDF4u;
label_27ddf4:
    // 0x27ddf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27ddf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ddf8: 0xc09f64a  jal         func_27D928
    ctx->pc = 0x27DDF8u;
    SET_GPR_U32(ctx, 31, 0x27DE00u);
    ctx->pc = 0x27DDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DDF8u;
            // 0x27ddfc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D928u;
    if (runtime->hasFunction(0x27D928u)) {
        auto targetFn = runtime->lookupFunction(0x27D928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE00u; }
        if (ctx->pc != 0x27DE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D928_0x27d928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DE00u; }
        if (ctx->pc != 0x27DE00u) { return; }
    }
    ctx->pc = 0x27DE00u;
    // 0x27de00: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x27de00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27de04: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DE04u;
    {
        const bool branch_taken_0x27de04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x27DE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE04u;
            // 0x27de08: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de04) {
            ctx->pc = 0x27DE18u;
            goto label_27de18;
        }
    }
    ctx->pc = 0x27DE0Cu;
    // 0x27de0c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27de10: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27DE10u;
    {
        const bool branch_taken_0x27de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE10u;
            // 0x27de14: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de10) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DE18u;
label_27de18:
    // 0x27de18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DE18u;
    {
        const bool branch_taken_0x27de18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE18u;
            // 0x27de1c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de18) {
            ctx->pc = 0x27DE28u;
            goto label_27de28;
        }
    }
    ctx->pc = 0x27DE20u;
    // 0x27de20: 0x1000ffb9  b           . + 4 + (-0x47 << 2)
    ctx->pc = 0x27DE20u;
    {
        const bool branch_taken_0x27de20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE20u;
            // 0x27de24: 0x2610fffe  addiu       $s0, $s0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27de20) {
            ctx->pc = 0x27DD08u;
            runtime->cooperativeGuestYield();
            goto label_27dd08;
        }
    }
    ctx->pc = 0x27DE28u;
label_27de28:
    // 0x27de28: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27de28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27de2c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27de2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27de30: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27de30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27de34: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27de34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27de38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27de38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27de3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27de3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27de40: 0x3e00008  jr          $ra
    ctx->pc = 0x27DE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DE40u;
            // 0x27de44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DD08u: goto label_27dd08;
            case 0x27DD3Cu: goto label_27dd3c;
            case 0x27DD54u: goto label_27dd54;
            case 0x27DDB0u: goto label_27ddb0;
            case 0x27DDB4u: goto label_27ddb4;
            case 0x27DDECu: goto label_27ddec;
            case 0x27DDF4u: goto label_27ddf4;
            case 0x27DE18u: goto label_27de18;
            case 0x27DE28u: goto label_27de28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DE48u;
}
