#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001315F0
// Address: 0x1315f0 - 0x131618
void sub_001315F0_0x1315f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001315F0_0x1315f0");
#endif

    ctx->pc = 0x1315f0u;

    // 0x1315f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1315f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1315f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1315f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1315f8: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x1315f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x1315fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1315FCu;
    {
        const bool branch_taken_0x1315fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x131600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1315FCu;
            // 0x131600: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1315fc) {
            ctx->pc = 0x131610u;
            goto label_131610;
        }
    }
    ctx->pc = 0x131604u;
    // 0x131604: 0x40f809  jalr        $v0
    ctx->pc = 0x131604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13160Cu);
        ctx->pc = 0x131608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131604u;
            // 0x131608: 0x8c86010c  lw          $a2, 0x10C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13160Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131610u: goto label_131610;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13160Cu; }
            if (ctx->pc != 0x13160Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13160Cu;
    // 0x13160c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13160cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131610:
    // 0x131610: 0x3e00008  jr          $ra
    ctx->pc = 0x131610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131610u;
            // 0x131614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131610u: goto label_131610;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131618u;
}
