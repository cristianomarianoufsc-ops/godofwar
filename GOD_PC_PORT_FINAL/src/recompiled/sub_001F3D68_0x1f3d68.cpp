#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3D68
// Address: 0x1f3d68 - 0x1f3da8
void sub_001F3D68_0x1f3d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3D68_0x1f3d68");
#endif

    ctx->pc = 0x1f3d68u;

    // 0x1f3d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3d70: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f3d70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f3d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3d78: 0x8e023368  lw          $v0, 0x3368($s0)
    ctx->pc = 0x1f3d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13160)));
    // 0x1f3d7c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3D7Cu;
    {
        const bool branch_taken_0x1f3d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d7c) {
            ctx->pc = 0x1F3D90u;
            goto label_1f3d90;
        }
    }
    ctx->pc = 0x1F3D84u;
    // 0x1f3d84: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F3D84u;
    SET_GPR_U32(ctx, 31, 0x1F3D8Cu);
    ctx->pc = 0x1F3D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D84u;
            // 0x1f3d88: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D8Cu; }
        if (ctx->pc != 0x1F3D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D8Cu; }
        if (ctx->pc != 0x1F3D8Cu) { return; }
    }
    ctx->pc = 0x1F3D8Cu;
    // 0x1f3d8c: 0xae023368  sw          $v0, 0x3368($s0)
    ctx->pc = 0x1f3d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13160), GPR_U32(ctx, 2));
label_1f3d90:
    // 0x1f3d90: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F3D90u;
    SET_GPR_U32(ctx, 31, 0x1F3D98u);
    ctx->pc = 0x1F3D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D90u;
            // 0x1f3d94: 0x8e043368  lw          $a0, 0x3368($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13160)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D98u; }
        if (ctx->pc != 0x1F3D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D98u; }
        if (ctx->pc != 0x1F3D98u) { return; }
    }
    ctx->pc = 0x1F3D98u;
    // 0x1f3d98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3d98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3da0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3DA0u;
            // 0x1f3da4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3D90u: goto label_1f3d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3DA8u;
}
