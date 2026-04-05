#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292048
// Address: 0x292048 - 0x2920a0
void sub_00292048_0x292048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292048_0x292048");
#endif

    ctx->pc = 0x292048u;

    // 0x292048: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x292048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29204c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x29204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x292050: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x292050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x292054: 0x3c100036  lui         $s0, 0x36
    ctx->pc = 0x292054u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)54 << 16));
    // 0x292058: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x292058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29205c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292060: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x292060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292064: 0xc0a50b8  jal         func_2942E0
    ctx->pc = 0x292064u;
    SET_GPR_U32(ctx, 31, 0x29206Cu);
    ctx->pc = 0x292068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292064u;
            // 0x292068: 0xae00c1a4  sw          $zero, -0x3E5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294951332), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2942E0u;
    if (runtime->hasFunction(0x2942E0u)) {
        auto targetFn = runtime->lookupFunction(0x2942E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29206Cu; }
        if (ctx->pc != 0x29206Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2942e0_0x2942e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29206Cu; }
        if (ctx->pc != 0x29206Cu) { return; }
    }
    ctx->pc = 0x29206Cu;
    // 0x29206c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29206cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292070: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x292070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x292074: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292074u;
    {
        const bool branch_taken_0x292074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x292074) {
            ctx->pc = 0x292078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292074u;
            // 0x292078: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29208Cu;
            goto label_29208c;
        }
    }
    ctx->pc = 0x29207Cu;
    // 0x29207c: 0x8e02c1a4  lw          $v0, -0x3E5C($s0)
    ctx->pc = 0x29207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951332)));
    // 0x292080: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x292080u;
    {
        const bool branch_taken_0x292080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292080) {
            ctx->pc = 0x292084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292080u;
            // 0x292084: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292088u;
            goto label_292088;
        }
    }
    ctx->pc = 0x292088u;
label_292088:
    // 0x292088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x292088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29208c:
    // 0x29208c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x29208cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292098: 0x3e00008  jr          $ra
    ctx->pc = 0x292098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29209Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292098u;
            // 0x29209c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292088u: goto label_292088;
            case 0x29208Cu: goto label_29208c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2920A0u;
}
