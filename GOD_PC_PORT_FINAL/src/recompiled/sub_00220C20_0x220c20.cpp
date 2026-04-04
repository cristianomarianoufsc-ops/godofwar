#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220C20
// Address: 0x220c20 - 0x220c48
void sub_00220C20_0x220c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220C20_0x220c20");
#endif

    ctx->pc = 0x220c20u;

    // 0x220c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220c28: 0x84850022  lh          $a1, 0x22($a0)
    ctx->pc = 0x220c28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x220c2c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220C2Cu;
    {
        const bool branch_taken_0x220c2c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x220C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C2Cu;
            // 0x220c30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c2c) {
            ctx->pc = 0x220C3Cu;
            goto label_220c3c;
        }
    }
    ctx->pc = 0x220C34u;
    // 0x220c34: 0xc07bf84  jal         func_1EFE10
    ctx->pc = 0x220C34u;
    SET_GPR_U32(ctx, 31, 0x220C3Cu);
    ctx->pc = 0x220C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C34u;
            // 0x220c38: 0x8c44e2a4  lw          $a0, -0x1D5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFE10u;
    if (runtime->hasFunction(0x1EFE10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C3Cu; }
        if (ctx->pc != 0x220C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFE10_0x1efe10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C3Cu; }
        if (ctx->pc != 0x220C3Cu) { return; }
    }
    ctx->pc = 0x220C3Cu;
label_220c3c:
    // 0x220c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c40: 0x3e00008  jr          $ra
    ctx->pc = 0x220C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C40u;
            // 0x220c44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220C3Cu: goto label_220c3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220C48u;
}
