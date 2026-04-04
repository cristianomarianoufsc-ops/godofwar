#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224958
// Address: 0x224958 - 0x224998
void sub_00224958_0x224958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224958_0x224958");
#endif

    ctx->pc = 0x224958u;

    // 0x224958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22495c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22495cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x224960: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x224960u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x224964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224968: 0x8e023514  lw          $v0, 0x3514($s0)
    ctx->pc = 0x224968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13588)));
    // 0x22496c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22496Cu;
    {
        const bool branch_taken_0x22496c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22496c) {
            ctx->pc = 0x224980u;
            goto label_224980;
        }
    }
    ctx->pc = 0x224974u;
    // 0x224974: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x224974u;
    SET_GPR_U32(ctx, 31, 0x22497Cu);
    ctx->pc = 0x224978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224974u;
            // 0x224978: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22497Cu; }
        if (ctx->pc != 0x22497Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22497Cu; }
        if (ctx->pc != 0x22497Cu) { return; }
    }
    ctx->pc = 0x22497Cu;
    // 0x22497c: 0xae023514  sw          $v0, 0x3514($s0)
    ctx->pc = 0x22497cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13588), GPR_U32(ctx, 2));
label_224980:
    // 0x224980: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x224980u;
    SET_GPR_U32(ctx, 31, 0x224988u);
    ctx->pc = 0x224984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224980u;
            // 0x224984: 0x8e043514  lw          $a0, 0x3514($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13588)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224988u; }
        if (ctx->pc != 0x224988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224988u; }
        if (ctx->pc != 0x224988u) { return; }
    }
    ctx->pc = 0x224988u;
    // 0x224988: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x224988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22498c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22498cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224990: 0x3e00008  jr          $ra
    ctx->pc = 0x224990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224990u;
            // 0x224994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224980u: goto label_224980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x224998u;
}
