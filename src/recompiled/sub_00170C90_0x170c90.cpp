#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170C90
// Address: 0x170c90 - 0x170cc8
void sub_00170C90_0x170c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170C90_0x170c90");
#endif

    ctx->pc = 0x170c90u;

    // 0x170c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170c94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x170c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x170c98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x170c98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170ca0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x170CA0u;
    SET_GPR_U32(ctx, 31, 0x170CA8u);
    ctx->pc = 0x170CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CA0u;
            // 0x170ca4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA8u; }
        if (ctx->pc != 0x170CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA8u; }
        if (ctx->pc != 0x170CA8u) { return; }
    }
    ctx->pc = 0x170CA8u;
    // 0x170ca8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x170CA8u;
    {
        const bool branch_taken_0x170ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CA8u;
            // 0x170cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ca8) {
            ctx->pc = 0x170CB8u;
            goto label_170cb8;
        }
    }
    ctx->pc = 0x170CB0u;
    // 0x170cb0: 0xc05c302  jal         func_170C08
    ctx->pc = 0x170CB0u;
    SET_GPR_U32(ctx, 31, 0x170CB8u);
    ctx->pc = 0x170CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CB0u;
            // 0x170cb4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170C08u;
    if (runtime->hasFunction(0x170C08u)) {
        auto targetFn = runtime->lookupFunction(0x170C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CB8u; }
        if (ctx->pc != 0x170CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170C08_0x170c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CB8u; }
        if (ctx->pc != 0x170CB8u) { return; }
    }
    ctx->pc = 0x170CB8u;
label_170cb8:
    // 0x170cb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x170cb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170cbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170cbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x170CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CC0u;
            // 0x170cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CB8u: goto label_170cb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170CC8u;
}
