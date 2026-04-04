#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F3CF8
// Address: 0x1f3cf8 - 0x1f3d38
void sub_001F3CF8_0x1f3cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3CF8_0x1f3cf8");
#endif

    ctx->pc = 0x1f3cf8u;

    // 0x1f3cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3cfc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3d00: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x1f3d00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x1f3d04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3d08: 0x8e023364  lw          $v0, 0x3364($s0)
    ctx->pc = 0x1f3d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13156)));
    // 0x1f3d0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3D0Cu;
    {
        const bool branch_taken_0x1f3d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d0c) {
            ctx->pc = 0x1F3D20u;
            goto label_1f3d20;
        }
    }
    ctx->pc = 0x1F3D14u;
    // 0x1f3d14: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1F3D14u;
    SET_GPR_U32(ctx, 31, 0x1F3D1Cu);
    ctx->pc = 0x1F3D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D14u;
            // 0x1f3d18: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D1Cu; }
        if (ctx->pc != 0x1F3D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D1Cu; }
        if (ctx->pc != 0x1F3D1Cu) { return; }
    }
    ctx->pc = 0x1F3D1Cu;
    // 0x1f3d1c: 0xae023364  sw          $v0, 0x3364($s0)
    ctx->pc = 0x1f3d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13156), GPR_U32(ctx, 2));
label_1f3d20:
    // 0x1f3d20: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F3D20u;
    SET_GPR_U32(ctx, 31, 0x1F3D28u);
    ctx->pc = 0x1F3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D20u;
            // 0x1f3d24: 0x8e043364  lw          $a0, 0x3364($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D28u; }
        if (ctx->pc != 0x1F3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3D28u; }
        if (ctx->pc != 0x1F3D28u) { return; }
    }
    ctx->pc = 0x1F3D28u;
    // 0x1f3d28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3d2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3d30: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3D30u;
            // 0x1f3d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F3D20u: goto label_1f3d20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F3D38u;
}
