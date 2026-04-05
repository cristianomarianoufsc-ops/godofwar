#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178DF8
// Address: 0x178df8 - 0x178e50
void sub_00178DF8_0x178df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178DF8_0x178df8");
#endif

    ctx->pc = 0x178df8u;

    // 0x178df8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x178df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x178dfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x178e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178e04: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x178e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x178e08: 0x8c6200dc  lw          $v0, 0xDC($v1)
    ctx->pc = 0x178e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 220)));
    // 0x178e0c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x178E0Cu;
    {
        const bool branch_taken_0x178e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E0Cu;
            // 0x178e10: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e0c) {
            ctx->pc = 0x178E48u;
            goto label_178e48;
        }
    }
    ctx->pc = 0x178E14u;
    // 0x178e14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x178e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x178e18: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x178e18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x178e1c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x178e20: 0x40f809  jalr        $v0
    ctx->pc = 0x178E20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178E28u);
        ctx->pc = 0x178E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E20u;
            // 0x178e24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178E28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178E38u: goto label_178e38;
            case 0x178E48u: goto label_178e48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178E28u; }
            if (ctx->pc != 0x178E28u) { return; }
        }
        }
    }
    ctx->pc = 0x178E28u;
    // 0x178e28: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x178E28u;
    {
        const bool branch_taken_0x178e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e28) {
            ctx->pc = 0x178E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178E28u;
            // 0x178e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178E38u;
            goto label_178e38;
        }
    }
    ctx->pc = 0x178E30u;
    // 0x178e30: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x178e34: 0x0  nop
    ctx->pc = 0x178e34u;
    // NOP
label_178e38:
    // 0x178e38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x178E38u;
    {
        const bool branch_taken_0x178e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E38u;
            // 0x178e3c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e38) {
            ctx->pc = 0x178E48u;
            goto label_178e48;
        }
    }
    ctx->pc = 0x178E40u;
    // 0x178e40: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x178e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x178e44: 0x8c42c4c0  lw          $v0, -0x3B40($v0)
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952128)));
label_178e48:
    // 0x178e48: 0x3e00008  jr          $ra
    ctx->pc = 0x178E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E48u;
            // 0x178e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x178E38u: goto label_178e38;
            case 0x178E48u: goto label_178e48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178E50u;
}
