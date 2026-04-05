#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001569C8
// Address: 0x1569c8 - 0x156a30
void sub_001569C8_0x1569c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001569C8_0x1569c8");
#endif

    ctx->pc = 0x1569c8u;

    // 0x1569c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1569c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1569cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1569ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1569d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1569d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1569d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1569d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1569d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1569d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1569dc: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x1569dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1569e0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1569E0u;
    {
        const bool branch_taken_0x1569e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1569E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1569E0u;
            // 0x1569e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1569e0) {
            ctx->pc = 0x156A08u;
            goto label_156a08;
        }
    }
    ctx->pc = 0x1569E8u;
    // 0x1569e8: 0xc055a64  jal         func_156990
    ctx->pc = 0x1569E8u;
    SET_GPR_U32(ctx, 31, 0x1569F0u);
    ctx->pc = 0x156990u;
    if (runtime->hasFunction(0x156990u)) {
        auto targetFn = runtime->lookupFunction(0x156990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F0u; }
        if (ctx->pc != 0x1569F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156990_0x156990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F0u; }
        if (ctx->pc != 0x1569F0u) { return; }
    }
    ctx->pc = 0x1569F0u;
    // 0x1569f0: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1569F0u;
    SET_GPR_U32(ctx, 31, 0x1569F8u);
    ctx->pc = 0x1569F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1569F0u;
            // 0x1569f4: 0x8c440064  lw          $a0, 0x64($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F8u; }
        if (ctx->pc != 0x1569F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1569F8u; }
        if (ctx->pc != 0x1569F8u) { return; }
    }
    ctx->pc = 0x1569F8u;
    // 0x1569f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1569f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1569fc: 0xae020110  sw          $v0, 0x110($s0)
    ctx->pc = 0x1569fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 2));
    // 0x156a00: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x156a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x156a04: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x156a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_156a08:
    // 0x156a08: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x156a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x156a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x156a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x156a10: 0xc05426a  jal         func_1509A8
    ctx->pc = 0x156A10u;
    SET_GPR_U32(ctx, 31, 0x156A18u);
    ctx->pc = 0x156A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x156A10u;
            // 0x156a14: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1509A8u;
    if (runtime->hasFunction(0x1509A8u)) {
        auto targetFn = runtime->lookupFunction(0x1509A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A18u; }
        if (ctx->pc != 0x156A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001509A8_0x1509a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x156A18u; }
        if (ctx->pc != 0x156A18u) { return; }
    }
    ctx->pc = 0x156A18u;
    // 0x156a18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x156a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x156a1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x156a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x156a20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x156a24: 0x3e00008  jr          $ra
    ctx->pc = 0x156A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x156A24u;
            // 0x156a28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x156A08u: goto label_156a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x156A2Cu;
    // 0x156a2c: 0x0  nop
    ctx->pc = 0x156a2cu;
    // NOP
}
