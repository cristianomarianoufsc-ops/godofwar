#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_208860
// Address: 0x208860 - 0x2088e8
void entry_208860_0x2088e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_208860_0x2088e8");
#endif

    ctx->pc = 0x208860u;

    // 0x208860: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x208860u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x208864: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x208864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x208868: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x208868u;
    {
        const bool branch_taken_0x208868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20886Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x208868u;
            // 0x20886c: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208868) {
            ctx->pc = 0x2088DCu;
            goto label_2088dc;
        }
    }
    ctx->pc = 0x208870u;
    // 0x208870: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x208870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x208874: 0xe7ac0004  swc1        $f12, 0x4($sp)
    ctx->pc = 0x208874u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x208878: 0x248501c0  addiu       $a1, $a0, 0x1C0
    ctx->pc = 0x208878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 448));
    // 0x20887c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x20887cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x208880: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x208880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x208884: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x208884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x208888: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x208888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20888c: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x20888cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x208890: 0x8c8301c0  lw          $v1, 0x1C0($a0)
    ctx->pc = 0x208890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
    // 0x208894: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x208894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x208898: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x208898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20889c: 0x6ba30017  ldl         $v1, 0x17($sp)
    ctx->pc = 0x20889cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2088a0: 0x6fa30010  ldr         $v1, 0x10($sp)
    ctx->pc = 0x2088a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2088a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2088a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2088a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2088a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2088ac: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x2088acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x2088b0: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2088b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2088b4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2088B4u;
    {
        const bool branch_taken_0x2088b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2088b4) {
            ctx->pc = 0x2088B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2088B4u;
            // 0x2088b8: 0x90a30006  lbu         $v1, 0x6($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2088C8u;
            goto label_2088c8;
        }
    }
    ctx->pc = 0x2088BCu;
    // 0x2088bc: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x2088bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2088c0: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2088c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x2088c4: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x2088c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
label_2088c8:
    // 0x2088c8: 0x90a20004  lbu         $v0, 0x4($a1)
    ctx->pc = 0x2088c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2088cc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2088ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2088d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2088d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2088d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2088d8: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x2088d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_2088dc:
    // 0x2088dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2088DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2088E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2088DCu;
            // 0x2088e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2088C8u: goto label_2088c8;
            case 0x2088DCu: goto label_2088dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2088E4u;
    // 0x2088e4: 0x0  nop
    ctx->pc = 0x2088e4u;
    // NOP
}
