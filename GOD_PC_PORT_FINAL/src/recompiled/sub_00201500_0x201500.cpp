#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201500
// Address: 0x201500 - 0x201550
void sub_00201500_0x201500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201500_0x201500");
#endif

    ctx->pc = 0x201500u;

    // 0x201500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x201504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x201508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20150c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20150cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201510: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x201510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x201514: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x201514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x201518: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x201518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x20151c: 0xc080592  jal         func_201648
    ctx->pc = 0x20151Cu;
    SET_GPR_U32(ctx, 31, 0x201524u);
    ctx->pc = 0x201520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20151Cu;
            // 0x201520: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201648u;
    if (runtime->hasFunction(0x201648u)) {
        auto targetFn = runtime->lookupFunction(0x201648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201524u; }
        if (ctx->pc != 0x201524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201648_0x201648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201524u; }
        if (ctx->pc != 0x201524u) { return; }
    }
    ctx->pc = 0x201524u;
    // 0x201524: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x201524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x201528: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x201528u;
    {
        const bool branch_taken_0x201528 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x201528) {
            ctx->pc = 0x20152Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201528u;
            // 0x20152c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201544u;
            goto label_201544;
        }
    }
    ctx->pc = 0x201530u;
    // 0x201530: 0xc07f3cc  jal         func_1FCF30
    ctx->pc = 0x201530u;
    SET_GPR_U32(ctx, 31, 0x201538u);
    ctx->pc = 0x1FCF30u;
    if (runtime->hasFunction(0x1FCF30u)) {
        auto targetFn = runtime->lookupFunction(0x1FCF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201538u; }
        if (ctx->pc != 0x201538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FCF30_0x1fcf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201538u; }
        if (ctx->pc != 0x201538u) { return; }
    }
    ctx->pc = 0x201538u;
    // 0x201538: 0xc07f43c  jal         func_1FD0F0
    ctx->pc = 0x201538u;
    SET_GPR_U32(ctx, 31, 0x201540u);
    ctx->pc = 0x20153Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201538u;
            // 0x20153c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0F0u;
    if (runtime->hasFunction(0x1FD0F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201540u; }
        if (ctx->pc != 0x201540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD0F0_0x1fd0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201540u; }
        if (ctx->pc != 0x201540u) { return; }
    }
    ctx->pc = 0x201540u;
    // 0x201540: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x201540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_201544:
    // 0x201544: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201548: 0x3e00008  jr          $ra
    ctx->pc = 0x201548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20154Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201548u;
            // 0x20154c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201544u: goto label_201544;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201550u;
}
