#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FF5C8
// Address: 0x1ff5c8 - 0x1ff608
void sub_001FF5C8_0x1ff5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF5C8_0x1ff5c8");
#endif

    ctx->pc = 0x1ff5c8u;

    // 0x1ff5c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff5cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff5d0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1ff5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1ff5d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff5d8: 0x8e02e418  lw          $v0, -0x1BE8($s0)
    ctx->pc = 0x1ff5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960152)));
    // 0x1ff5dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF5DCu;
    {
        const bool branch_taken_0x1ff5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff5dc) {
            ctx->pc = 0x1FF5ECu;
            goto label_1ff5ec;
        }
    }
    ctx->pc = 0x1FF5E4u;
    // 0x1ff5e4: 0xc07fd8c  jal         func_1FF630
    ctx->pc = 0x1FF5E4u;
    SET_GPR_U32(ctx, 31, 0x1FF5ECu);
    ctx->pc = 0x1FF630u;
    if (runtime->hasFunction(0x1FF630u)) {
        auto targetFn = runtime->lookupFunction(0x1FF630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5ECu; }
        if (ctx->pc != 0x1FF5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF630_0x1ff630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5ECu; }
        if (ctx->pc != 0x1FF5ECu) { return; }
    }
    ctx->pc = 0x1FF5ECu;
label_1ff5ec:
    // 0x1ff5ec: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FF5ECu;
    SET_GPR_U32(ctx, 31, 0x1FF5F4u);
    ctx->pc = 0x1FF5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5ECu;
            // 0x1ff5f0: 0x8e04e418  lw          $a0, -0x1BE8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5F4u; }
        if (ctx->pc != 0x1FF5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FF5F4u; }
        if (ctx->pc != 0x1FF5F4u) { return; }
    }
    ctx->pc = 0x1FF5F4u;
    // 0x1ff5f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff5f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF5FCu;
            // 0x1ff600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FF5ECu: goto label_1ff5ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FF604u;
    // 0x1ff604: 0x0  nop
    ctx->pc = 0x1ff604u;
    // NOP
}
