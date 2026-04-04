#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1528
// Address: 0x1a1528 - 0x1a1568
void sub_001A1528_0x1a1528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1528_0x1a1528");
#endif

    ctx->pc = 0x1a1528u;

    // 0x1a1528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a1528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a152c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a152cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a1530: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1a1530u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1a1534: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1538: 0x8e02e6b0  lw          $v0, -0x1950($s0)
    ctx->pc = 0x1a1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960816)));
    // 0x1a153c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A153Cu;
    {
        const bool branch_taken_0x1a153c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a153c) {
            ctx->pc = 0x1A1550u;
            goto label_1a1550;
        }
    }
    ctx->pc = 0x1A1544u;
    // 0x1a1544: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1A1544u;
    SET_GPR_U32(ctx, 31, 0x1A154Cu);
    ctx->pc = 0x1A1548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1544u;
            // 0x1a1548: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A154Cu; }
        if (ctx->pc != 0x1A154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A154Cu; }
        if (ctx->pc != 0x1A154Cu) { return; }
    }
    ctx->pc = 0x1A154Cu;
    // 0x1a154c: 0xae02e6b0  sw          $v0, -0x1950($s0)
    ctx->pc = 0x1a154cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960816), GPR_U32(ctx, 2));
label_1a1550:
    // 0x1a1550: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A1550u;
    SET_GPR_U32(ctx, 31, 0x1A1558u);
    ctx->pc = 0x1A1554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1550u;
            // 0x1a1554: 0x8e04e6b0  lw          $a0, -0x1950($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960816)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1558u; }
        if (ctx->pc != 0x1A1558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1558u; }
        if (ctx->pc != 0x1A1558u) { return; }
    }
    ctx->pc = 0x1A1558u;
    // 0x1a1558: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a1558u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a155c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a155cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1560: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1560u;
            // 0x1a1564: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1550u: goto label_1a1550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1568u;
}
