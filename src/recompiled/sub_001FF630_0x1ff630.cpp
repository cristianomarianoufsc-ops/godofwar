#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF630
// Address: 0x1ff630 - 0x1ff688
void sub_001FF630_0x1ff630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF630_0x1ff630");
#endif

    ctx->pc = 0x1ff630u;

    // 0x1ff630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff638: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ff638u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ff63c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff640: 0x8e02e418  lw          $v0, -0x1BE8($s0)
    ctx->pc = 0x1ff640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960152)));
    // 0x1ff644: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF644u;
    {
        const bool branch_taken_0x1ff644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff644) {
            ctx->pc = 0x1FF648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF644u;
            // 0x1ff648: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FF674u;
            goto label_1ff674;
        }
    }
    ctx->pc = 0x1FF64Cu;
    // 0x1ff64c: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1FF64Cu;
    SET_GPR_U32(ctx, 31, 0x1FF654u);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF654u; }
        if (ctx->pc != 0x1FF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF654u; }
        if (ctx->pc != 0x1FF654u) { return; }
    }
    ctx->pc = 0x1FF654u;
    // 0x1ff654: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1ff654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1ff658: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x1ff658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1ff65c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1ff65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1ff660: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1ff660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ff664: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1FF664u;
    SET_GPR_U32(ctx, 31, 0x1FF66Cu);
    ctx->pc = 0x1FF668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF664u;
            // 0x1ff668: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF66Cu; }
        if (ctx->pc != 0x1FF66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF66Cu; }
        if (ctx->pc != 0x1FF66Cu) { return; }
    }
    ctx->pc = 0x1FF66Cu;
    // 0x1ff66c: 0xae02e418  sw          $v0, -0x1BE8($s0)
    ctx->pc = 0x1ff66cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960152), GPR_U32(ctx, 2));
    // 0x1ff670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ff674:
    // 0x1ff674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff678: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF678u;
            // 0x1ff67c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF674u: goto label_1ff674;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF680u;
    // 0x1ff680: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ff684: 0x0  nop
    ctx->pc = 0x1ff684u;
    // NOP
}
