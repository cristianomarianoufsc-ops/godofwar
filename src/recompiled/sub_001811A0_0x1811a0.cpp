#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001811A0
// Address: 0x1811a0 - 0x1811e0
void sub_001811A0_0x1811a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001811A0_0x1811a0");
#endif

    ctx->pc = 0x1811a0u;

    // 0x1811a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1811a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1811a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1811a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1811a8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1811a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1811ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1811acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1811b0: 0x8e02c7bc  lw          $v0, -0x3844($s0)
    ctx->pc = 0x1811b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952892)));
    // 0x1811b4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1811B4u;
    {
        const bool branch_taken_0x1811b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1811b4) {
            ctx->pc = 0x1811B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1811B4u;
            // 0x1811b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1811CCu;
            goto label_1811cc;
        }
    }
    ctx->pc = 0x1811BCu;
    // 0x1811bc: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1811BCu;
    SET_GPR_U32(ctx, 31, 0x1811C4u);
    ctx->pc = 0x1811C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1811BCu;
            // 0x1811c0: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811C4u; }
        if (ctx->pc != 0x1811C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1811C4u; }
        if (ctx->pc != 0x1811C4u) { return; }
    }
    ctx->pc = 0x1811C4u;
    // 0x1811c4: 0xae02c7bc  sw          $v0, -0x3844($s0)
    ctx->pc = 0x1811c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952892), GPR_U32(ctx, 2));
    // 0x1811c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1811c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1811cc:
    // 0x1811cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1811ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1811d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1811D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1811D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1811D0u;
            // 0x1811d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1811CCu: goto label_1811cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1811D8u;
    // 0x1811d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1811d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1811dc: 0x0  nop
    ctx->pc = 0x1811dcu;
    // NOP
}
