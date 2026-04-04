#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199538
// Address: 0x199538 - 0x199578
void sub_00199538_0x199538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199538_0x199538");
#endif

    ctx->pc = 0x199538u;

    // 0x199538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19953c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199540: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x199540u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x199544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199548: 0x8e02e188  lw          $v0, -0x1E78($s0)
    ctx->pc = 0x199548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959496)));
    // 0x19954c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19954Cu;
    {
        const bool branch_taken_0x19954c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19954c) {
            ctx->pc = 0x199560u;
            goto label_199560;
        }
    }
    ctx->pc = 0x199554u;
    // 0x199554: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x199554u;
    SET_GPR_U32(ctx, 31, 0x19955Cu);
    ctx->pc = 0x199558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199554u;
            // 0x199558: 0x2404007c  addiu       $a0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19955Cu; }
        if (ctx->pc != 0x19955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19955Cu; }
        if (ctx->pc != 0x19955Cu) { return; }
    }
    ctx->pc = 0x19955Cu;
    // 0x19955c: 0xae02e188  sw          $v0, -0x1E78($s0)
    ctx->pc = 0x19955cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294959496), GPR_U32(ctx, 2));
label_199560:
    // 0x199560: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x199560u;
    SET_GPR_U32(ctx, 31, 0x199568u);
    ctx->pc = 0x199564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199560u;
            // 0x199564: 0x8e04e188  lw          $a0, -0x1E78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294959496)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199568u; }
        if (ctx->pc != 0x199568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199568u; }
        if (ctx->pc != 0x199568u) { return; }
    }
    ctx->pc = 0x199568u;
    // 0x199568: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19956c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199570: 0x3e00008  jr          $ra
    ctx->pc = 0x199570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199570u;
            // 0x199574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x199560u: goto label_199560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x199578u;
}
