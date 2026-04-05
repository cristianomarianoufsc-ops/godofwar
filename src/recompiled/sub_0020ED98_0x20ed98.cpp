#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020ED98
// Address: 0x20ed98 - 0x20edd8
void sub_0020ED98_0x20ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED98_0x20ed98");
#endif

    ctx->pc = 0x20ed98u;

    // 0x20ed98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20ed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20ed9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20ed9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20eda0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x20eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x20eda4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20eda8: 0x8e02e460  lw          $v0, -0x1BA0($s0)
    ctx->pc = 0x20eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960224)));
    // 0x20edac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20EDACu;
    {
        const bool branch_taken_0x20edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20edac) {
            ctx->pc = 0x20EDBCu;
            goto label_20edbc;
        }
    }
    ctx->pc = 0x20EDB4u;
    // 0x20edb4: 0xc083b80  jal         func_20EE00
    ctx->pc = 0x20EDB4u;
    SET_GPR_U32(ctx, 31, 0x20EDBCu);
    ctx->pc = 0x20EE00u;
    if (runtime->hasFunction(0x20EE00u)) {
        auto targetFn = runtime->lookupFunction(0x20EE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDBCu; }
        if (ctx->pc != 0x20EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020EE00_0x20ee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDBCu; }
        if (ctx->pc != 0x20EDBCu) { return; }
    }
    ctx->pc = 0x20EDBCu;
label_20edbc:
    // 0x20edbc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x20EDBCu;
    SET_GPR_U32(ctx, 31, 0x20EDC4u);
    ctx->pc = 0x20EDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDBCu;
            // 0x20edc0: 0x8e04e460  lw          $a0, -0x1BA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960224)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDC4u; }
        if (ctx->pc != 0x20EDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EDC4u; }
        if (ctx->pc != 0x20EDC4u) { return; }
    }
    ctx->pc = 0x20EDC4u;
    // 0x20edc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20edc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20edc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20edc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20edcc: 0x3e00008  jr          $ra
    ctx->pc = 0x20EDCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EDCCu;
            // 0x20edd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20EDBCu: goto label_20edbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20EDD4u;
    // 0x20edd4: 0x0  nop
    ctx->pc = 0x20edd4u;
    // NOP
}
