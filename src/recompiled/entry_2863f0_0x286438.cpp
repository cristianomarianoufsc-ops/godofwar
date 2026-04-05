#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2863f0
// Address: 0x2863f0 - 0x286438
void entry_2863f0_0x286438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2863f0_0x286438");
#endif

    ctx->pc = 0x2863f0u;

    // 0x2863f0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2863f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2863f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2863f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2863f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2863f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2863fc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2863fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x286400: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x286400u;
    {
        const bool branch_taken_0x286400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286400u;
            // 0x286404: 0x3066007f  andi        $a2, $v1, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x286400) {
            ctx->pc = 0x286428u;
            goto label_286428;
        }
    }
    ctx->pc = 0x286408u;
label_286408:
    // 0x286408: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x286408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28640c: 0x24e70007  addiu       $a3, $a3, 0x7
    ctx->pc = 0x28640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x286410: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x286410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x286414: 0x3062007f  andi        $v0, $v1, 0x7F
    ctx->pc = 0x286414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)127);
    // 0x286418: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x286418u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x28641c: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x28641cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x286420: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x286420u;
    {
        const bool branch_taken_0x286420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x286424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286420u;
            // 0x286424: 0xc23025  or          $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286420) {
            ctx->pc = 0x286408u;
            runtime->cooperativeGuestYield();
            goto label_286408;
        }
    }
    ctx->pc = 0x286428u;
label_286428:
    // 0x286428: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x286428u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x28642c: 0x3e00008  jr          $ra
    ctx->pc = 0x28642Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28642Cu;
            // 0x286430: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286408u: goto label_286408;
            case 0x286428u: goto label_286428;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286434u;
    // 0x286434: 0x0  nop
    ctx->pc = 0x286434u;
    // NOP
}
