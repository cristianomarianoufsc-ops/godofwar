#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_153250
// Address: 0x153250 - 0x153290
void entry_153250_0x153290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_153250_0x153290");
#endif

    ctx->pc = 0x153250u;

    // 0x153250: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x153250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x153254: 0x8c43bc78  lw          $v1, -0x4388($v0)
    ctx->pc = 0x153254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x153258: 0x2445bc78  addiu       $a1, $v0, -0x4388
    ctx->pc = 0x153258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x15325c: 0x10650009  beq         $v1, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15325Cu;
    {
        const bool branch_taken_0x15325c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x15325c) {
            ctx->pc = 0x153284u;
            goto label_153284;
        }
    }
    ctx->pc = 0x153264u;
    // 0x153264: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x153264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_153268:
    // 0x153268: 0x8c8203a4  lw          $v0, 0x3A4($a0)
    ctx->pc = 0x153268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 932)));
    // 0x15326c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15326Cu;
    {
        const bool branch_taken_0x15326c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15326c) {
            ctx->pc = 0x153270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15326Cu;
            // 0x153270: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15327Cu;
            goto label_15327c;
        }
    }
    ctx->pc = 0x153274u;
    // 0x153274: 0x3e00008  jr          $ra
    ctx->pc = 0x153274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153274u;
            // 0x153278: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153268u: goto label_153268;
            case 0x15327Cu: goto label_15327c;
            case 0x153284u: goto label_153284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15327Cu;
label_15327c:
    // 0x15327c: 0x5465fffa  bnel        $v1, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15327Cu;
    {
        const bool branch_taken_0x15327c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x15327c) {
            ctx->pc = 0x153280u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15327Cu;
            // 0x153280: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x153268u;
            runtime->cooperativeGuestYield();
            goto label_153268;
        }
    }
    ctx->pc = 0x153284u;
label_153284:
    // 0x153284: 0x3e00008  jr          $ra
    ctx->pc = 0x153284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x153284u;
            // 0x153288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x153268u: goto label_153268;
            case 0x15327Cu: goto label_15327c;
            case 0x153284u: goto label_153284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15328Cu;
    // 0x15328c: 0x0  nop
    ctx->pc = 0x15328cu;
    // NOP
}
