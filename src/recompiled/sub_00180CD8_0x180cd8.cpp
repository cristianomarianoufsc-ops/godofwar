#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180CD8
// Address: 0x180cd8 - 0x180d08
void sub_00180CD8_0x180cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180CD8_0x180cd8");
#endif

    ctx->pc = 0x180cd8u;

    // 0x180cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180cdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180ce0: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x180ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x180ce4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x180ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180ce8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x180CE8u;
    {
        const bool branch_taken_0x180ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CE8u;
            // 0x180cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180ce8) {
            ctx->pc = 0x180CFCu;
            goto label_180cfc;
        }
    }
    ctx->pc = 0x180CF0u;
    // 0x180cf0: 0xc060342  jal         func_180D08
    ctx->pc = 0x180CF0u;
    SET_GPR_U32(ctx, 31, 0x180CF8u);
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CF8u; }
        if (ctx->pc != 0x180CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180CF8u; }
        if (ctx->pc != 0x180CF8u) { return; }
    }
    ctx->pc = 0x180CF8u;
    // 0x180cf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180cfc:
    // 0x180cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x180CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180CFCu;
            // 0x180d00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180CFCu: goto label_180cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180D04u;
    // 0x180d04: 0x0  nop
    ctx->pc = 0x180d04u;
    // NOP
}
