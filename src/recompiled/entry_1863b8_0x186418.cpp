#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1863b8
// Address: 0x1863b8 - 0x186418
void entry_1863b8_0x186418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1863b8_0x186418");
#endif

    ctx->pc = 0x1863b8u;

    // 0x1863b8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1863b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1863bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1863BCu;
    {
        const bool branch_taken_0x1863bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1863C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863BCu;
            // 0x1863c0: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863bc) {
            ctx->pc = 0x1863D0u;
            goto label_1863d0;
        }
    }
    ctx->pc = 0x1863C4u;
    // 0x1863c4: 0x0  nop
    ctx->pc = 0x1863c4u;
    // NOP
label_1863c8:
    // 0x1863c8: 0x11050011  beq         $t0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1863C8u;
    {
        const bool branch_taken_0x1863c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x1863CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863C8u;
            // 0x1863cc: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1863c8) {
            ctx->pc = 0x186410u;
            goto label_186410;
        }
    }
    ctx->pc = 0x1863D0u;
label_1863d0:
    // 0x1863d0: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x1863d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x1863d4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1863d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1863d8: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x1863d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1863dc: 0x24664f60  addiu       $a2, $v1, 0x4F60
    ctx->pc = 0x1863dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 20320));
    // 0x1863e0: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1863e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1863e4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1863e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1863e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1863e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1863ec: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1863ECu;
    {
        const bool branch_taken_0x1863ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1863ec) {
            ctx->pc = 0x1863F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1863ECu;
            // 0x1863f0: 0x82102b  sltu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x186400u;
            goto label_186400;
        }
    }
    ctx->pc = 0x1863F4u;
    // 0x1863f4: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1863f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1863F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863F8u;
            // 0x1863fc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1863C8u: goto label_1863c8;
            case 0x1863D0u: goto label_1863d0;
            case 0x186400u: goto label_186400;
            case 0x186410u: goto label_186410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186400u;
label_186400:
    // 0x186400: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x186400u;
    {
        const bool branch_taken_0x186400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186400) {
            ctx->pc = 0x1863C8u;
            runtime->cooperativeGuestYield();
            goto label_1863c8;
        }
    }
    ctx->pc = 0x186408u;
    // 0x186408: 0x14e5fff1  bne         $a3, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x186408u;
    {
        const bool branch_taken_0x186408 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x18640Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186408u;
            // 0x18640c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186408) {
            ctx->pc = 0x1863D0u;
            runtime->cooperativeGuestYield();
            goto label_1863d0;
        }
    }
    ctx->pc = 0x186410u;
label_186410:
    // 0x186410: 0x3e00008  jr          $ra
    ctx->pc = 0x186410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186410u;
            // 0x186414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1863C8u: goto label_1863c8;
            case 0x1863D0u: goto label_1863d0;
            case 0x186400u: goto label_186400;
            case 0x186410u: goto label_186410;
            default: break;
        }
        return;
    }
    ctx->pc = 0x186418u;
}
