#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018EA18
// Address: 0x18ea18 - 0x18ea58
void sub_0018EA18_0x18ea18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018EA18_0x18ea18");
#endif

    ctx->pc = 0x18ea18u;

    // 0x18ea18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ea18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ea1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ea1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18ea20: 0x3c100030  lui         $s0, 0x30
    ctx->pc = 0x18ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
    // 0x18ea24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ea24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ea28: 0x8e02de5c  lw          $v0, -0x21A4($s0)
    ctx->pc = 0x18ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958684)));
    // 0x18ea2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18EA2Cu;
    {
        const bool branch_taken_0x18ea2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ea2c) {
            ctx->pc = 0x18EA40u;
            goto label_18ea40;
        }
    }
    ctx->pc = 0x18EA34u;
    // 0x18ea34: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x18EA34u;
    SET_GPR_U32(ctx, 31, 0x18EA3Cu);
    ctx->pc = 0x18EA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA34u;
            // 0x18ea38: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA3Cu; }
        if (ctx->pc != 0x18EA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA3Cu; }
        if (ctx->pc != 0x18EA3Cu) { return; }
    }
    ctx->pc = 0x18EA3Cu;
    // 0x18ea3c: 0xae02de5c  sw          $v0, -0x21A4($s0)
    ctx->pc = 0x18ea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294958684), GPR_U32(ctx, 2));
label_18ea40:
    // 0x18ea40: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18EA40u;
    SET_GPR_U32(ctx, 31, 0x18EA48u);
    ctx->pc = 0x18EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA40u;
            // 0x18ea44: 0x8e04de5c  lw          $a0, -0x21A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294958684)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA48u; }
        if (ctx->pc != 0x18EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18EA48u; }
        if (ctx->pc != 0x18EA48u) { return; }
    }
    ctx->pc = 0x18EA48u;
    // 0x18ea48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ea48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ea4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ea50: 0x3e00008  jr          $ra
    ctx->pc = 0x18EA50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18EA50u;
            // 0x18ea54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18EA40u: goto label_18ea40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18EA58u;
}
