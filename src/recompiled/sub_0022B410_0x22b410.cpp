#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B410
// Address: 0x22b410 - 0x22b450
void sub_0022B410_0x22b410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B410_0x22b410");
#endif

    ctx->pc = 0x22b410u;

    // 0x22b410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22b418: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x22b418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x22b41c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b420: 0x8e023624  lw          $v0, 0x3624($s0)
    ctx->pc = 0x22b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
    // 0x22b424: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B424u;
    {
        const bool branch_taken_0x22b424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b424) {
            ctx->pc = 0x22B438u;
            goto label_22b438;
        }
    }
    ctx->pc = 0x22B42Cu;
    // 0x22b42c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22B42Cu;
    SET_GPR_U32(ctx, 31, 0x22B434u);
    ctx->pc = 0x22B430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B42Cu;
            // 0x22b430: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B434u; }
        if (ctx->pc != 0x22B434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B434u; }
        if (ctx->pc != 0x22B434u) { return; }
    }
    ctx->pc = 0x22B434u;
    // 0x22b434: 0xae023624  sw          $v0, 0x3624($s0)
    ctx->pc = 0x22b434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13860), GPR_U32(ctx, 2));
label_22b438:
    // 0x22b438: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22B438u;
    SET_GPR_U32(ctx, 31, 0x22B440u);
    ctx->pc = 0x22B43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B438u;
            // 0x22b43c: 0x8e043624  lw          $a0, 0x3624($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B440u; }
        if (ctx->pc != 0x22B440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B440u; }
        if (ctx->pc != 0x22B440u) { return; }
    }
    ctx->pc = 0x22B440u;
    // 0x22b440: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22b440u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b448: 0x3e00008  jr          $ra
    ctx->pc = 0x22B448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B448u;
            // 0x22b44c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B438u: goto label_22b438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B450u;
}
