#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170B60
// Address: 0x170b60 - 0x170b98
void sub_00170B60_0x170b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B60_0x170b60");
#endif

    ctx->pc = 0x170b60u;

    // 0x170b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170b64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170b68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170b70: 0xc05e996  jal         func_17A658
    ctx->pc = 0x170B70u;
    SET_GPR_U32(ctx, 31, 0x170B78u);
    ctx->pc = 0x170B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B70u;
            // 0x170b74: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B78u; }
        if (ctx->pc != 0x170B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B78u; }
        if (ctx->pc != 0x170B78u) { return; }
    }
    ctx->pc = 0x170B78u;
    // 0x170b78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170B78u;
    {
        const bool branch_taken_0x170b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B78u;
            // 0x170b7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170b78) {
            ctx->pc = 0x170B88u;
            goto label_170b88;
        }
    }
    ctx->pc = 0x170B80u;
    // 0x170b80: 0xc05c294  jal         func_170A50
    ctx->pc = 0x170B80u;
    SET_GPR_U32(ctx, 31, 0x170B88u);
    ctx->pc = 0x170B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B80u;
            // 0x170b84: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B88u; }
        if (ctx->pc != 0x170B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B88u; }
        if (ctx->pc != 0x170B88u) { return; }
    }
    ctx->pc = 0x170B88u;
label_170b88:
    // 0x170b88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170b88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170b90: 0x3e00008  jr          $ra
    ctx->pc = 0x170B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170B90u;
            // 0x170b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170B88u: goto label_170b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170B98u;
}
