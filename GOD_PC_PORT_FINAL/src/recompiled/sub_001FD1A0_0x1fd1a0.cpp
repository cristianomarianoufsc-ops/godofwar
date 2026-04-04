#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD1A0
// Address: 0x1fd1a0 - 0x1fd1e0
void sub_001FD1A0_0x1fd1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD1A0_0x1fd1a0");
#endif

    ctx->pc = 0x1fd1a0u;

    // 0x1fd1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd1a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd1a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1fd1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1fd1ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd1b0: 0x8e02e3f0  lw          $v0, -0x1C10($s0)
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960112)));
    // 0x1fd1b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD1B4u;
    {
        const bool branch_taken_0x1fd1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1b4) {
            ctx->pc = 0x1FD1C4u;
            goto label_1fd1c4;
        }
    }
    ctx->pc = 0x1FD1BCu;
    // 0x1fd1bc: 0xc07f482  jal         func_1FD208
    ctx->pc = 0x1FD1BCu;
    SET_GPR_U32(ctx, 31, 0x1FD1C4u);
    ctx->pc = 0x1FD208u;
    if (runtime->hasFunction(0x1FD208u)) {
        auto targetFn = runtime->lookupFunction(0x1FD208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1C4u; }
        if (ctx->pc != 0x1FD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD208_0x1fd208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1C4u; }
        if (ctx->pc != 0x1FD1C4u) { return; }
    }
    ctx->pc = 0x1FD1C4u;
label_1fd1c4:
    // 0x1fd1c4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1FD1C4u;
    SET_GPR_U32(ctx, 31, 0x1FD1CCu);
    ctx->pc = 0x1FD1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1C4u;
            // 0x1fd1c8: 0x8e04e3f0  lw          $a0, -0x1C10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1CCu; }
        if (ctx->pc != 0x1FD1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD1CCu; }
        if (ctx->pc != 0x1FD1CCu) { return; }
    }
    ctx->pc = 0x1FD1CCu;
    // 0x1fd1cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd1d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD1D4u;
            // 0x1fd1d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD1C4u: goto label_1fd1c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD1DCu;
    // 0x1fd1dc: 0x0  nop
    ctx->pc = 0x1fd1dcu;
    // NOP
}
