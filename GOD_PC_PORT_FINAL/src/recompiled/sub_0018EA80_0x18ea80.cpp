#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018EA80
// Address: 0x18ea80 - 0x18eac0
void sub_0018EA80_0x18ea80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EA80_0x18ea80");
#endif

    ctx->pc = 0x18ea80u;

    // 0x18ea80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ea80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ea84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ea88: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x18ea88u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x18ea8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ea8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ea90: 0x8e02c8d4  lw          $v0, -0x372C($s0)
    ctx->pc = 0x18ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953172)));
    // 0x18ea94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18EA94u;
    {
        const bool branch_taken_0x18ea94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ea94) {
            ctx->pc = 0x18EAA4u;
            goto label_18eaa4;
        }
    }
    ctx->pc = 0x18EA9Cu;
    // 0x18ea9c: 0xc063aba  jal         func_18EAE8
    ctx->pc = 0x18EA9Cu;
    SET_GPR_U32(ctx, 31, 0x18EAA4u);
    ctx->pc = 0x18EAE8u;
    if (runtime->hasFunction(0x18EAE8u)) {
        auto targetFn = runtime->lookupFunction(0x18EAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAA4u; }
        if (ctx->pc != 0x18EAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018EAE8_0x18eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAA4u; }
        if (ctx->pc != 0x18EAA4u) { return; }
    }
    ctx->pc = 0x18EAA4u;
label_18eaa4:
    // 0x18eaa4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18EAA4u;
    SET_GPR_U32(ctx, 31, 0x18EAACu);
    ctx->pc = 0x18EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAA4u;
            // 0x18eaa8: 0x8e04c8d4  lw          $a0, -0x372C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAACu; }
        if (ctx->pc != 0x18EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EAACu; }
        if (ctx->pc != 0x18EAACu) { return; }
    }
    ctx->pc = 0x18EAACu;
    // 0x18eaac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18eaacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18eab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18eab4: 0x3e00008  jr          $ra
    ctx->pc = 0x18EAB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EAB4u;
            // 0x18eab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EAA4u: goto label_18eaa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EABCu;
    // 0x18eabc: 0x0  nop
    ctx->pc = 0x18eabcu;
    // NOP
}
