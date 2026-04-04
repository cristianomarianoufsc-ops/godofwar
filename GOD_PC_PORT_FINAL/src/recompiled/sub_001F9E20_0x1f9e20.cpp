#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9E20
// Address: 0x1f9e20 - 0x1f9e58
void sub_001F9E20_0x1f9e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9E20_0x1f9e20");
#endif

    ctx->pc = 0x1f9e20u;

    // 0x1f9e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9e24: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f9e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f9e28: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x1f9e28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x1f9e2c: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x1f9e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
    // 0x1f9e30: 0x3c08002b  lui         $t0, 0x2B
    ctx->pc = 0x1f9e30u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)43 << 16));
    // 0x1f9e34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f9e38: 0x24a57898  addiu       $a1, $a1, 0x7898
    ctx->pc = 0x1f9e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30872));
    // 0x1f9e3c: 0x24c61530  addiu       $a2, $a2, 0x1530
    ctx->pc = 0x1f9e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5424));
    // 0x1f9e40: 0x24e77820  addiu       $a3, $a3, 0x7820
    ctx->pc = 0x1f9e40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30752));
    // 0x1f9e44: 0xc07e796  jal         func_1F9E58
    ctx->pc = 0x1F9E44u;
    SET_GPR_U32(ctx, 31, 0x1F9E4Cu);
    ctx->pc = 0x1F9E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E44u;
            // 0x1f9e48: 0x25087830  addiu       $t0, $t0, 0x7830 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9E58u;
    if (runtime->hasFunction(0x1F9E58u)) {
        auto targetFn = runtime->lookupFunction(0x1F9E58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E4Cu; }
        if (ctx->pc != 0x1F9E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F9E58_0x1f9e58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9E4Cu; }
        if (ctx->pc != 0x1F9E4Cu) { return; }
    }
    ctx->pc = 0x1F9E4Cu;
    // 0x1f9e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f9e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9E50u;
            // 0x1f9e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F9E58u;
}
