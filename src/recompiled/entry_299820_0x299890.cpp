#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299820
// Address: 0x299820 - 0x299890
void entry_299820_0x299890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299820_0x299890");
#endif

    ctx->pc = 0x299820u;

    // 0x299820: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x299820u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x299824: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x299828: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x299828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29982c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29982Cu;
    {
        const bool branch_taken_0x29982c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29982Cu;
            // 0x299830: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29982c) {
            ctx->pc = 0x29985Cu;
            goto label_29985c;
        }
    }
    ctx->pc = 0x299834u;
    // 0x299834: 0x0  nop
    ctx->pc = 0x299834u;
    // NOP
label_299838:
    // 0x299838: 0x42000039  di
    ctx->pc = 0x299838u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x29983c: 0x40f  sync.p
    ctx->pc = 0x29983cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299840: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x299840u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x299844: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x299844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x299848: 0x0  nop
    ctx->pc = 0x299848u;
    // NOP
    // 0x29984c: 0x0  nop
    ctx->pc = 0x29984cu;
    // NOP
    // 0x299850: 0x0  nop
    ctx->pc = 0x299850u;
    // NOP
    // 0x299854: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x299854u;
    {
        const bool branch_taken_0x299854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299854) {
            ctx->pc = 0x299838u;
            runtime->cooperativeGuestYield();
            goto label_299838;
        }
    }
    ctx->pc = 0x29985Cu;
label_29985c:
    // 0x29985c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x29985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x299860: 0x40f  sync.p
    ctx->pc = 0x299860u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299864: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x299864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x299868: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x299868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x29986c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x29986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x299870: 0x40826000  mtc0        $v0, Status
    ctx->pc = 0x299870u;
    ctx->cop0_status = GPR_U32(ctx, 2) & 0xFF57FFFF;
    // 0x299874: 0x40f  sync.p
    ctx->pc = 0x299874u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299878: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x299878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x29987c: 0x409ff000  mtc0        $ra, ErrorEPC
    ctx->pc = 0x29987cu;
    ctx->cop0_errorepc = GPR_U32(ctx, 31);
    // 0x299880: 0x40f  sync.p
    ctx->pc = 0x299880u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x299884: 0x42000018  eret
    ctx->pc = 0x299884u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
    // 0x299888: 0x3e00008  jr          $ra
    ctx->pc = 0x299888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299838u: goto label_299838;
            case 0x29985Cu: goto label_29985c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299890u;
}
