#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22f540
// Address: 0x22f540 - 0x22f5a0
void entry_22f540_0x22f5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22f540_0x22f5a0");
#endif

    ctx->pc = 0x22f540u;

    // 0x22f540: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x22f540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x22f544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22f544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f548: 0x24476eb8  addiu       $a3, $v0, 0x6EB8
    ctx->pc = 0x22f548u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 28344));
    // 0x22f54c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22f54cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f550: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x22f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f554: 0x0  nop
    ctx->pc = 0x22f554u;
    // NOP
label_22f558:
    // 0x22f558: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22f558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22f55c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22f560: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x22f560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x22f564: 0x2ca24fff  sltiu       $v0, $a1, 0x4FFF
    ctx->pc = 0x22f564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)20479) ? 1 : 0);
    // 0x22f568: 0x0  nop
    ctx->pc = 0x22f568u;
    // NOP
    // 0x22f56c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F56Cu;
    {
        const bool branch_taken_0x22f56c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F56Cu;
            // 0x22f570: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f56c) {
            ctx->pc = 0x22F558u;
            runtime->cooperativeGuestYield();
            goto label_22f558;
        }
    }
    ctx->pc = 0x22F574u;
    // 0x22f574: 0x24024fff  addiu       $v0, $zero, 0x4FFF
    ctx->pc = 0x22f574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20479));
    // 0x22f578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22f578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22f57c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x22f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x22f580: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x22f580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22f584: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F584u;
    {
        const bool branch_taken_0x22f584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x22F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F584u;
            // 0x22f588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f584) {
            ctx->pc = 0x22F594u;
            goto label_22f594;
        }
    }
    ctx->pc = 0x22F58Cu;
    // 0x22f58c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F58Cu;
    {
        const bool branch_taken_0x22f58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f58c) {
            ctx->pc = 0x22F598u;
            goto label_22f598;
        }
    }
    ctx->pc = 0x22F594u;
label_22f594:
    // 0x22f594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f598:
    // 0x22f598: 0x3e00008  jr          $ra
    ctx->pc = 0x22F598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22F598u;
            // 0x22f59c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22F558u: goto label_22f558;
            case 0x22F594u: goto label_22f594;
            case 0x22F598u: goto label_22f598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22F5A0u;
}
