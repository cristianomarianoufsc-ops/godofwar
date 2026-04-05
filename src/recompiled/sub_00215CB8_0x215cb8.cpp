#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215CB8
// Address: 0x215cb8 - 0x215cf8
void sub_00215CB8_0x215cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215CB8_0x215cb8");
#endif

    ctx->pc = 0x215cb8u;

    // 0x215cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x215cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x215cbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x215cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x215cc0: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x215cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x215cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215cc8: 0x8e0234b0  lw          $v0, 0x34B0($s0)
    ctx->pc = 0x215cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13488)));
    // 0x215ccc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x215CCCu;
    {
        const bool branch_taken_0x215ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215ccc) {
            ctx->pc = 0x215CE0u;
            goto label_215ce0;
        }
    }
    ctx->pc = 0x215CD4u;
    // 0x215cd4: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x215CD4u;
    SET_GPR_U32(ctx, 31, 0x215CDCu);
    ctx->pc = 0x215CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215CD4u;
            // 0x215cd8: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CDCu; }
        if (ctx->pc != 0x215CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CDCu; }
        if (ctx->pc != 0x215CDCu) { return; }
    }
    ctx->pc = 0x215CDCu;
    // 0x215cdc: 0xae0234b0  sw          $v0, 0x34B0($s0)
    ctx->pc = 0x215cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13488), GPR_U32(ctx, 2));
label_215ce0:
    // 0x215ce0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x215CE0u;
    SET_GPR_U32(ctx, 31, 0x215CE8u);
    ctx->pc = 0x215CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215CE0u;
            // 0x215ce4: 0x8e0434b0  lw          $a0, 0x34B0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13488)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CE8u; }
        if (ctx->pc != 0x215CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215CE8u; }
        if (ctx->pc != 0x215CE8u) { return; }
    }
    ctx->pc = 0x215CE8u;
    // 0x215ce8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x215ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x215cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x215CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215CF0u;
            // 0x215cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215CE0u: goto label_215ce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215CF8u;
}
