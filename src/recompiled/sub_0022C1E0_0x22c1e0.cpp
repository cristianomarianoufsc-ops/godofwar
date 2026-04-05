#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C1E0
// Address: 0x22c1e0 - 0x22c230
void sub_0022C1E0_0x22c1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C1E0_0x22c1e0");
#endif

    ctx->pc = 0x22c1e0u;

    // 0x22c1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c1e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22c1e8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22c1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22c1ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c1f0: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22c1f4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C1F4u;
    {
        const bool branch_taken_0x22c1f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c1f4) {
            ctx->pc = 0x22C204u;
            goto label_22c204;
        }
    }
    ctx->pc = 0x22C1FCu;
    // 0x22c1fc: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22C1FCu;
    SET_GPR_U32(ctx, 31, 0x22C204u);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C204u; }
        if (ctx->pc != 0x22C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C204u; }
        if (ctx->pc != 0x22C204u) { return; }
    }
    ctx->pc = 0x22C204u;
label_22c204:
    // 0x22c204: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22C204u;
    SET_GPR_U32(ctx, 31, 0x22C20Cu);
    ctx->pc = 0x22C208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C204u;
            // 0x22c208: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C20Cu; }
        if (ctx->pc != 0x22C20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C20Cu; }
        if (ctx->pc != 0x22C20Cu) { return; }
    }
    ctx->pc = 0x22C20Cu;
    // 0x22c20c: 0xc0913e6  jal         func_244F98
    ctx->pc = 0x22C20Cu;
    SET_GPR_U32(ctx, 31, 0x22C214u);
    ctx->pc = 0x22C210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C20Cu;
            // 0x22c210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244F98u;
    if (runtime->hasFunction(0x244F98u)) {
        auto targetFn = runtime->lookupFunction(0x244F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C214u; }
        if (ctx->pc != 0x22C214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244F98_0x244f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C214u; }
        if (ctx->pc != 0x22C214u) { return; }
    }
    ctx->pc = 0x22C214u;
    // 0x22c214: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22c214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22c218: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c220: 0xac6253c0  sw          $v0, 0x53C0($v1)
    ctx->pc = 0x22c220u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21440), GPR_U32(ctx, 2));
    // 0x22c224: 0x3e00008  jr          $ra
    ctx->pc = 0x22C224u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C224u;
            // 0x22c228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C204u: goto label_22c204;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C22Cu;
    // 0x22c22c: 0x0  nop
    ctx->pc = 0x22c22cu;
    // NOP
}
