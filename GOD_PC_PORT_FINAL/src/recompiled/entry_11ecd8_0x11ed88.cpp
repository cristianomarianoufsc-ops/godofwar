#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11ecd8
// Address: 0x11ecd8 - 0x11ed88
void entry_11ecd8_0x11ed88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11ecd8_0x11ed88");
#endif

    ctx->pc = 0x11ecd8u;

    // 0x11ecd8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x11ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11ecdc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11ECDCu;
    {
        const bool branch_taken_0x11ecdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11ECE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECDCu;
            // 0x11ece0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecdc) {
            ctx->pc = 0x11ECF0u;
            goto label_11ecf0;
        }
    }
    ctx->pc = 0x11ECE4u;
    // 0x11ece4: 0x0  nop
    ctx->pc = 0x11ece4u;
    // NOP
label_11ece8:
    // 0x11ece8: 0x3e00008  jr          $ra
    ctx->pc = 0x11ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ECE8u;
            // 0x11ecec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ECE8u: goto label_11ece8;
            case 0x11ECF0u: goto label_11ecf0;
            case 0x11ED20u: goto label_11ed20;
            case 0x11ED80u: goto label_11ed80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ECF0u;
label_11ecf0:
    // 0x11ecf0: 0x8c42ec9c  lw          $v0, -0x1364($v0)
    ctx->pc = 0x11ecf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962332)));
    // 0x11ecf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11ecf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x11ecf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ecfc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x11ecfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x11ed00: 0x1060fff9  beqz        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11ED00u;
    {
        const bool branch_taken_0x11ed00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED00u;
            // 0x11ed04: 0x2c620001  sltiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed00) {
            ctx->pc = 0x11ECE8u;
            runtime->cooperativeGuestYield();
            goto label_11ece8;
        }
    }
    ctx->pc = 0x11ED08u;
    // 0x11ed08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11ED08u;
    {
        const bool branch_taken_0x11ed08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ed08) {
            ctx->pc = 0x11ED0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED08u;
            // 0x11ed0c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11ED20u;
            goto label_11ed20;
        }
    }
    ctx->pc = 0x11ED10u;
    // 0x11ed10: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x11ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x11ed14: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x11ed14u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x11ed18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ed18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ed1c: 0x0  nop
    ctx->pc = 0x11ed1cu;
    // NOP
label_11ed20:
    // 0x11ed20: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11ED20u;
    {
        const bool branch_taken_0x11ed20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED20u;
            // 0x11ed24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed20) {
            ctx->pc = 0x11ED80u;
            goto label_11ed80;
        }
    }
    ctx->pc = 0x11ED28u;
    // 0x11ed28: 0x68a40007  ldl         $a0, 0x7($a1)
    ctx->pc = 0x11ed28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11ed2c: 0x6ca40000  ldr         $a0, 0x0($a1)
    ctx->pc = 0x11ed2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11ed30: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x11ed30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x11ed34: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x11ed34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x11ed38: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x11ed38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11ed3c: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x11ed3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11ed40: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x11ed40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11ed44: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x11ed44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11ed48: 0xb0640027  sdl         $a0, 0x27($v1)
    ctx->pc = 0x11ed48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed4c: 0xb4640020  sdr         $a0, 0x20($v1)
    ctx->pc = 0x11ed4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed50: 0xb066002f  sdl         $a2, 0x2F($v1)
    ctx->pc = 0x11ed50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed54: 0xb4660028  sdr         $a2, 0x28($v1)
    ctx->pc = 0x11ed54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed58: 0xb0670037  sdl         $a3, 0x37($v1)
    ctx->pc = 0x11ed58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed5c: 0xb4670030  sdr         $a3, 0x30($v1)
    ctx->pc = 0x11ed5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed60: 0xb068003f  sdl         $t0, 0x3F($v1)
    ctx->pc = 0x11ed60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed64: 0xb4680038  sdr         $t0, 0x38($v1)
    ctx->pc = 0x11ed64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed68: 0x68a40027  ldl         $a0, 0x27($a1)
    ctx->pc = 0x11ed68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11ed6c: 0x6ca40020  ldr         $a0, 0x20($a1)
    ctx->pc = 0x11ed6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11ed70: 0xb0640047  sdl         $a0, 0x47($v1)
    ctx->pc = 0x11ed70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed74: 0xb4640040  sdr         $a0, 0x40($v1)
    ctx->pc = 0x11ed74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11ed78: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ECE8u: goto label_11ece8;
            case 0x11ECF0u: goto label_11ecf0;
            case 0x11ED20u: goto label_11ed20;
            case 0x11ED80u: goto label_11ed80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ED80u;
label_11ed80:
    // 0x11ed80: 0x3e00008  jr          $ra
    ctx->pc = 0x11ED80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11ED80u;
            // 0x11ed84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11ECE8u: goto label_11ece8;
            case 0x11ECF0u: goto label_11ecf0;
            case 0x11ED20u: goto label_11ed20;
            case 0x11ED80u: goto label_11ed80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11ED88u;
}
