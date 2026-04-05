#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b34a0
// Address: 0x1b34a0 - 0x1b3508
void entry_1b34a0_0x1b3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b34a0_0x1b3508");
#endif

    ctx->pc = 0x1b34a0u;

    // 0x1b34a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b34a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b34a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b34a8: 0x2403006c  addiu       $v1, $zero, 0x6C
    ctx->pc = 0x1b34a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b34ac: 0x0  nop
    ctx->pc = 0x1b34acu;
    // NOP
label_1b34b0:
    // 0x1b34b0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b34b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b34b4: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1b34b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b34b8: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b34b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b34bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b34bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b34c0: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1b34c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1b34c4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B34C4u;
    {
        const bool branch_taken_0x1b34c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b34c4) {
            ctx->pc = 0x1B34C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34C4u;
            // 0x1b34c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B34D8u;
            goto label_1b34d8;
        }
    }
    ctx->pc = 0x1B34CCu;
    // 0x1b34cc: 0x10860009  beq         $a0, $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B34CCu;
    {
        const bool branch_taken_0x1b34cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B34D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34CCu;
            // 0x1b34d0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34cc) {
            ctx->pc = 0x1B34F4u;
            goto label_1b34f4;
        }
    }
    ctx->pc = 0x1B34D4u;
    // 0x1b34d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1b34d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1b34d8:
    // 0x1b34d8: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1b34d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b34dc: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B34DCu;
    {
        const bool branch_taken_0x1b34dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b34dc) {
            ctx->pc = 0x1B34E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34DCu;
            // 0x1b34e0: 0x2403006c  addiu       $v1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B34B0u;
            runtime->cooperativeGuestYield();
            goto label_1b34b0;
        }
    }
    ctx->pc = 0x1B34E4u;
    // 0x1b34e4: 0x10860005  beq         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B34E4u;
    {
        const bool branch_taken_0x1b34e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1B34E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34E4u;
            // 0x1b34e8: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b34e4) {
            ctx->pc = 0x1B34FCu;
            goto label_1b34fc;
        }
    }
    ctx->pc = 0x1B34ECu;
    // 0x1b34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B34F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34ECu;
            // 0x1b34f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34FCu: goto label_1b34fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B34F4u;
label_1b34f4:
    // 0x1b34f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B34F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34F4u;
            // 0x1b34f8: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34FCu: goto label_1b34fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B34FCu;
label_1b34fc:
    // 0x1b34fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B34FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B34FCu;
            // 0x1b3500: 0x24422660  addiu       $v0, $v0, 0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B34B0u: goto label_1b34b0;
            case 0x1B34D8u: goto label_1b34d8;
            case 0x1B34F4u: goto label_1b34f4;
            case 0x1B34FCu: goto label_1b34fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B3504u;
    // 0x1b3504: 0x0  nop
    ctx->pc = 0x1b3504u;
    // NOP
}
