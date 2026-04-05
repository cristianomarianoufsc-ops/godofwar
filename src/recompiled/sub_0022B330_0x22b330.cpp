#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022B330
// Address: 0x22b330 - 0x22b370
void sub_0022B330_0x22b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B330_0x22b330");
#endif

    ctx->pc = 0x22b330u;

    // 0x22b330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22b334: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22b334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22b338: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x22b338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x22b33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b340: 0x8e02361c  lw          $v0, 0x361C($s0)
    ctx->pc = 0x22b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13852)));
    // 0x22b344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22B344u;
    {
        const bool branch_taken_0x22b344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b344) {
            ctx->pc = 0x22B358u;
            goto label_22b358;
        }
    }
    ctx->pc = 0x22B34Cu;
    // 0x22b34c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x22B34Cu;
    SET_GPR_U32(ctx, 31, 0x22B354u);
    ctx->pc = 0x22B350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B34Cu;
            // 0x22b350: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B354u; }
        if (ctx->pc != 0x22B354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B354u; }
        if (ctx->pc != 0x22B354u) { return; }
    }
    ctx->pc = 0x22B354u;
    // 0x22b354: 0xae02361c  sw          $v0, 0x361C($s0)
    ctx->pc = 0x22b354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13852), GPR_U32(ctx, 2));
label_22b358:
    // 0x22b358: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22B358u;
    SET_GPR_U32(ctx, 31, 0x22B360u);
    ctx->pc = 0x22B35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22B358u;
            // 0x22b35c: 0x8e04361c  lw          $a0, 0x361C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B360u; }
        if (ctx->pc != 0x22B360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22B360u; }
        if (ctx->pc != 0x22B360u) { return; }
    }
    ctx->pc = 0x22B360u;
    // 0x22b360: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22b360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b368: 0x3e00008  jr          $ra
    ctx->pc = 0x22B368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22B368u;
            // 0x22b36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22B358u: goto label_22b358;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22B370u;
}
