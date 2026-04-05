#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28d550
// Address: 0x28d550 - 0x28d5c0
void entry_28d550_0x28d5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28d550_0x28d5c0");
#endif

    ctx->pc = 0x28d550u;

    // 0x28d550: 0x18a00018  blez        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x28D550u;
    {
        const bool branch_taken_0x28d550 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D550u;
            // 0x28d554: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d550) {
            ctx->pc = 0x28D5B4u;
            goto label_28d5b4;
        }
    }
    ctx->pc = 0x28D558u;
    // 0x28d558: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x28d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28d55c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x28d55cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d560: 0x28420035  slti        $v0, $v0, 0x35
    ctx->pc = 0x28d560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)53) ? 1 : 0);
    // 0x28d564: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28D564u;
    {
        const bool branch_taken_0x28d564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D564u;
            // 0x28d568: 0x24070030  addiu       $a3, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d564) {
            ctx->pc = 0x28D5B4u;
            goto label_28d5b4;
        }
    }
    ctx->pc = 0x28D56Cu;
    // 0x28d56c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x28d56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x28d570: 0xa0670000  sb          $a3, 0x0($v1)
    ctx->pc = 0x28d570u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x28d574: 0x0  nop
    ctx->pc = 0x28d574u;
    // NOP
label_28d578:
    // 0x28d578: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28d578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28d57c: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D57Cu;
    {
        const bool branch_taken_0x28d57c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D57Cu;
            // 0x28d580: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d57c) {
            ctx->pc = 0x28D590u;
            goto label_28d590;
        }
    }
    ctx->pc = 0x28D584u;
    // 0x28d584: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x28d584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28d588: 0x5046fffb  beql        $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28D588u;
    {
        const bool branch_taken_0x28d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x28d588) {
            ctx->pc = 0x28D58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28D588u;
            // 0x28d58c: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28D578u;
            runtime->cooperativeGuestYield();
            goto label_28d578;
        }
    }
    ctx->pc = 0x28D590u;
label_28d590:
    // 0x28d590: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x28d590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28d594: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x28d594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x28d598: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28d598u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28d59c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D59Cu;
    {
        const bool branch_taken_0x28d59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28D5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D59Cu;
            // 0x28d5a0: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d59c) {
            ctx->pc = 0x28D5ACu;
            goto label_28d5ac;
        }
    }
    ctx->pc = 0x28D5A4u;
    // 0x28d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5A4u;
            // 0x28d5a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D578u: goto label_28d578;
            case 0x28D590u: goto label_28d590;
            case 0x28D5ACu: goto label_28d5ac;
            case 0x28D5B4u: goto label_28d5b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D5ACu;
label_28d5ac:
    // 0x28d5ac: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x28d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28d5b0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28d5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_28d5b4:
    // 0x28d5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D5B4u;
            // 0x28d5b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28D578u: goto label_28d578;
            case 0x28D590u: goto label_28d590;
            case 0x28D5ACu: goto label_28d5ac;
            case 0x28D5B4u: goto label_28d5b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28D5BCu;
    // 0x28d5bc: 0x0  nop
    ctx->pc = 0x28d5bcu;
    // NOP
}
