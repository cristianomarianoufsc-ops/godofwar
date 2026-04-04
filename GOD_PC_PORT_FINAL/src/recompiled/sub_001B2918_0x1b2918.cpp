#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2918
// Address: 0x1b2918 - 0x1b2958
void sub_001B2918_0x1b2918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2918_0x1b2918");
#endif

    ctx->pc = 0x1b2918u;

    // 0x1b2918: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b291c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b291cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2920: 0x8c44caa4  lw          $a0, -0x355C($v0)
    ctx->pc = 0x1b2920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953636)));
    // 0x1b2924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2928: 0xc04c658  jal         func_131960
    ctx->pc = 0x1B2928u;
    SET_GPR_U32(ctx, 31, 0x1B2930u);
    ctx->pc = 0x1B292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2928u;
            // 0x1b292c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131960u;
    if (runtime->hasFunction(0x131960u)) {
        auto targetFn = runtime->lookupFunction(0x131960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2930u; }
        if (ctx->pc != 0x1B2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131960_0x131960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2930u; }
        if (ctx->pc != 0x1B2930u) { return; }
    }
    ctx->pc = 0x1B2930u;
    // 0x1b2930: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2934: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b2934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b2938: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x1b2938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x1b293c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b2940: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2948: 0xaca3caf0  sw          $v1, -0x3510($a1)
    ctx->pc = 0x1b2948u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953712), GPR_U32(ctx, 3));
    // 0x1b294c: 0xac82caac  sw          $v0, -0x3554($a0)
    ctx->pc = 0x1b294cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953644), GPR_U32(ctx, 2));
    // 0x1b2950: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2950u;
            // 0x1b2954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2958u;
}
