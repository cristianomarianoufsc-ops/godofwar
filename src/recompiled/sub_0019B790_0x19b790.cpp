#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B790
// Address: 0x19b790 - 0x19b7d0
void sub_0019B790_0x19b790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B790_0x19b790");
#endif

    ctx->pc = 0x19b790u;

    // 0x19b790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19b794: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19b794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19b798: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x19b798u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x19b79c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b7a0: 0x8e02e1e4  lw          $v0, -0x1E1C($s0)
    ctx->pc = 0x19b7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959588)));
    // 0x19b7a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19B7A4u;
    {
        const bool branch_taken_0x19b7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19b7a4) {
            ctx->pc = 0x19B7B8u;
            goto label_19b7b8;
        }
    }
    ctx->pc = 0x19B7ACu;
    // 0x19b7ac: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x19B7ACu;
    SET_GPR_U32(ctx, 31, 0x19B7B4u);
    ctx->pc = 0x19B7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7ACu;
            // 0x19b7b0: 0x24040078  addiu       $a0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7B4u; }
        if (ctx->pc != 0x19B7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7B4u; }
        if (ctx->pc != 0x19B7B4u) { return; }
    }
    ctx->pc = 0x19B7B4u;
    // 0x19b7b4: 0xae02e1e4  sw          $v0, -0x1E1C($s0)
    ctx->pc = 0x19b7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959588), GPR_U32(ctx, 2));
label_19b7b8:
    // 0x19b7b8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x19B7B8u;
    SET_GPR_U32(ctx, 31, 0x19B7C0u);
    ctx->pc = 0x19B7BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7B8u;
            // 0x19b7bc: 0x8e04e1e4  lw          $a0, -0x1E1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7C0u; }
        if (ctx->pc != 0x19B7C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B7C0u; }
        if (ctx->pc != 0x19B7C0u) { return; }
    }
    ctx->pc = 0x19B7C0u;
    // 0x19b7c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19b7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19b7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x19B7C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B7C8u;
            // 0x19b7cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19B7B8u: goto label_19b7b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19B7D0u;
}
