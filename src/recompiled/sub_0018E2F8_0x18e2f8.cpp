#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018E2F8
// Address: 0x18e2f8 - 0x18e338
void sub_0018E2F8_0x18e2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E2F8_0x18e2f8");
#endif

    ctx->pc = 0x18e2f8u;

    // 0x18e2f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18e2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18e2fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18e2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18e300: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18e300u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18e304: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18e308: 0x8e02de58  lw          $v0, -0x21A8($s0)
    ctx->pc = 0x18e308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958680)));
    // 0x18e30c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18E30Cu;
    {
        const bool branch_taken_0x18e30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e30c) {
            ctx->pc = 0x18E320u;
            goto label_18e320;
        }
    }
    ctx->pc = 0x18E314u;
    // 0x18e314: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18E314u;
    SET_GPR_U32(ctx, 31, 0x18E31Cu);
    ctx->pc = 0x18E318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E314u;
            // 0x18e318: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E31Cu; }
        if (ctx->pc != 0x18E31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E31Cu; }
        if (ctx->pc != 0x18E31Cu) { return; }
    }
    ctx->pc = 0x18E31Cu;
    // 0x18e31c: 0xae02de58  sw          $v0, -0x21A8($s0)
    ctx->pc = 0x18e31cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958680), GPR_U32(ctx, 2));
label_18e320:
    // 0x18e320: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18E320u;
    SET_GPR_U32(ctx, 31, 0x18E328u);
    ctx->pc = 0x18E324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18E320u;
            // 0x18e324: 0x8e04de58  lw          $a0, -0x21A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958680)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E328u; }
        if (ctx->pc != 0x18E328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18E328u; }
        if (ctx->pc != 0x18E328u) { return; }
    }
    ctx->pc = 0x18E328u;
    // 0x18e328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18e328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18e32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18e330: 0x3e00008  jr          $ra
    ctx->pc = 0x18E330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E330u;
            // 0x18e334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18E320u: goto label_18e320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18E338u;
}
