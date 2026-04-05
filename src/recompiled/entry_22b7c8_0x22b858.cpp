#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22b7c8
// Address: 0x22b7c8 - 0x22b858
void entry_22b7c8_0x22b858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22b7c8_0x22b858");
#endif

    ctx->pc = 0x22b7c8u;

    // 0x22b7c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22b7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22b7cc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22b7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7d0: 0x24428bd0  addiu       $v0, $v0, -0x7430
    ctx->pc = 0x22b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937552));
    // 0x22b7d4: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x22b7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x22b7d8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x22b7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x22b7dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b7e0: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x22b7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x22b7e4: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x22b7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x22b7e8: 0xa4c00010  sh          $zero, 0x10($a2)
    ctx->pc = 0x22b7e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x22b7ec: 0x0  nop
    ctx->pc = 0x22b7ecu;
    // NOP
label_22b7f0:
    // 0x22b7f0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x22b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22b7f4: 0xc71821  addu        $v1, $a2, $a3
    ctx->pc = 0x22b7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x22b7f8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22b7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22b7fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b800: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x22b800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x22b804: 0x28e20006  slti        $v0, $a3, 0x6
    ctx->pc = 0x22b804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x22b808: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x22B808u;
    {
        const bool branch_taken_0x22b808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B808u;
            // 0x22b80c: 0xa0600068  sb          $zero, 0x68($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 104), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b808) {
            ctx->pc = 0x22B7F0u;
            runtime->cooperativeGuestYield();
            goto label_22b7f0;
        }
    }
    ctx->pc = 0x22B810u;
    // 0x22b810: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22b810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b814: 0x0  nop
    ctx->pc = 0x22b814u;
    // NOP
label_22b818:
    // 0x22b818: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x22b818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x22b81c: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x22b81cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x22b820: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x22b824: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x22b824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x22b828: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22b82c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22b82cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b830: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22b830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x22b834: 0xa4440018  sh          $a0, 0x18($v0)
    ctx->pc = 0x22b834u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 4));
    // 0x22b838: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x22b838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x22b83c: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x22b83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22b840: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22B840u;
    {
        const bool branch_taken_0x22b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B840u;
            // 0x22b844: 0xaca00038  sw          $zero, 0x38($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b840) {
            ctx->pc = 0x22B818u;
            runtime->cooperativeGuestYield();
            goto label_22b818;
        }
    }
    ctx->pc = 0x22B848u;
    // 0x22b848: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22b848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22b84c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x22b84cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b850: 0x3e00008  jr          $ra
    ctx->pc = 0x22B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B850u;
            // 0x22b854: 0xa4c30020  sh          $v1, 0x20($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 32), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B7F0u: goto label_22b7f0;
            case 0x22B818u: goto label_22b818;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B858u;
}
