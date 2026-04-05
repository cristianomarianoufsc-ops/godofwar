#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3DD8
// Address: 0x1f3dd8 - 0x1f3e18
void sub_001F3DD8_0x1f3dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3DD8_0x1f3dd8");
#endif

    ctx->pc = 0x1f3dd8u;

    // 0x1f3dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3ddc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3de0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f3de0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f3de4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3de8: 0x8e02336c  lw          $v0, 0x336C($s0)
    ctx->pc = 0x1f3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13164)));
    // 0x1f3dec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3DECu;
    {
        const bool branch_taken_0x1f3dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3dec) {
            ctx->pc = 0x1F3E00u;
            goto label_1f3e00;
        }
    }
    ctx->pc = 0x1F3DF4u;
    // 0x1f3df4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F3DF4u;
    SET_GPR_U32(ctx, 31, 0x1F3DFCu);
    ctx->pc = 0x1F3DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DF4u;
            // 0x1f3df8: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DFCu; }
        if (ctx->pc != 0x1F3DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3DFCu; }
        if (ctx->pc != 0x1F3DFCu) { return; }
    }
    ctx->pc = 0x1F3DFCu;
    // 0x1f3dfc: 0xae02336c  sw          $v0, 0x336C($s0)
    ctx->pc = 0x1f3dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13164), GPR_U32(ctx, 2));
label_1f3e00:
    // 0x1f3e00: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F3E00u;
    SET_GPR_U32(ctx, 31, 0x1F3E08u);
    ctx->pc = 0x1F3E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E00u;
            // 0x1f3e04: 0x8e04336c  lw          $a0, 0x336C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E08u; }
        if (ctx->pc != 0x1F3E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3E08u; }
        if (ctx->pc != 0x1F3E08u) { return; }
    }
    ctx->pc = 0x1F3E08u;
    // 0x1f3e08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3E10u;
            // 0x1f3e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3E00u: goto label_1f3e00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3E18u;
}
