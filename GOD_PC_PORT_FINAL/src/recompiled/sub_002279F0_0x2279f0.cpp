#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002279F0
// Address: 0x2279f0 - 0x227a30
void sub_002279F0_0x2279f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002279F0_0x2279f0");
#endif

    ctx->pc = 0x2279f0u;

    // 0x2279f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2279f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2279f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2279f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2279f8: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x2279f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x2279fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2279fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x227a00: 0x8e023518  lw          $v0, 0x3518($s0)
    ctx->pc = 0x227a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13592)));
    // 0x227a04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227A04u;
    {
        const bool branch_taken_0x227a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227a04) {
            ctx->pc = 0x227A18u;
            goto label_227a18;
        }
    }
    ctx->pc = 0x227A0Cu;
    // 0x227a0c: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x227A0Cu;
    SET_GPR_U32(ctx, 31, 0x227A14u);
    ctx->pc = 0x227A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A0Cu;
            // 0x227a10: 0x240400a8  addiu       $a0, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A14u; }
        if (ctx->pc != 0x227A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A14u; }
        if (ctx->pc != 0x227A14u) { return; }
    }
    ctx->pc = 0x227A14u;
    // 0x227a14: 0xae023518  sw          $v0, 0x3518($s0)
    ctx->pc = 0x227a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 13592), GPR_U32(ctx, 2));
label_227a18:
    // 0x227a18: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x227A18u;
    SET_GPR_U32(ctx, 31, 0x227A20u);
    ctx->pc = 0x227A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x227A18u;
            // 0x227a1c: 0x8e043518  lw          $a0, 0x3518($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A20u; }
        if (ctx->pc != 0x227A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x227A20u; }
        if (ctx->pc != 0x227A20u) { return; }
    }
    ctx->pc = 0x227A20u;
    // 0x227a20: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x227a20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227a28: 0x3e00008  jr          $ra
    ctx->pc = 0x227A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x227A28u;
            // 0x227a2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x227A18u: goto label_227a18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x227A30u;
}
