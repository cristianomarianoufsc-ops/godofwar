#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C398
// Address: 0x22c398 - 0x22c3e8
void sub_0022C398_0x22c398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C398_0x22c398");
#endif

    ctx->pc = 0x22c398u;

    // 0x22c398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c39c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22c3a0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22c3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22c3a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c3a8: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22c3ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C3ACu;
    {
        const bool branch_taken_0x22c3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c3ac) {
            ctx->pc = 0x22C3BCu;
            goto label_22c3bc;
        }
    }
    ctx->pc = 0x22C3B4u;
    // 0x22c3b4: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22C3B4u;
    SET_GPR_U32(ctx, 31, 0x22C3BCu);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3BCu; }
        if (ctx->pc != 0x22C3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3BCu; }
        if (ctx->pc != 0x22C3BCu) { return; }
    }
    ctx->pc = 0x22C3BCu;
label_22c3bc:
    // 0x22c3bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22C3BCu;
    SET_GPR_U32(ctx, 31, 0x22C3C4u);
    ctx->pc = 0x22C3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3BCu;
            // 0x22c3c0: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3C4u; }
        if (ctx->pc != 0x22C3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3C4u; }
        if (ctx->pc != 0x22C3C4u) { return; }
    }
    ctx->pc = 0x22C3C4u;
    // 0x22c3c4: 0xc091484  jal         func_245210
    ctx->pc = 0x22C3C4u;
    SET_GPR_U32(ctx, 31, 0x22C3CCu);
    ctx->pc = 0x22C3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3C4u;
            // 0x22c3c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245210u;
    if (runtime->hasFunction(0x245210u)) {
        auto targetFn = runtime->lookupFunction(0x245210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3CCu; }
        if (ctx->pc != 0x22C3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245210_0x245210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C3CCu; }
        if (ctx->pc != 0x22C3CCu) { return; }
    }
    ctx->pc = 0x22C3CCu;
    // 0x22c3cc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22c3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22c3d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c3d8: 0xac6253bc  sw          $v0, 0x53BC($v1)
    ctx->pc = 0x22c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21436), GPR_U32(ctx, 2));
    // 0x22c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C3DCu;
            // 0x22c3e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C3BCu: goto label_22c3bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C3E4u;
    // 0x22c3e4: 0x0  nop
    ctx->pc = 0x22c3e4u;
    // NOP
}
