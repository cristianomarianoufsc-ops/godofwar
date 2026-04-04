#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C550
// Address: 0x22c550 - 0x22c5a0
void sub_0022C550_0x22c550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C550_0x22c550");
#endif

    ctx->pc = 0x22c550u;

    // 0x22c550: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c554: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22c558: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22c558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22c55c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c560: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22c560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22c564: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C564u;
    {
        const bool branch_taken_0x22c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c564) {
            ctx->pc = 0x22C574u;
            goto label_22c574;
        }
    }
    ctx->pc = 0x22C56Cu;
    // 0x22c56c: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22C56Cu;
    SET_GPR_U32(ctx, 31, 0x22C574u);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C574u; }
        if (ctx->pc != 0x22C574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C574u; }
        if (ctx->pc != 0x22C574u) { return; }
    }
    ctx->pc = 0x22C574u;
label_22c574:
    // 0x22c574: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22C574u;
    SET_GPR_U32(ctx, 31, 0x22C57Cu);
    ctx->pc = 0x22C578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C574u;
            // 0x22c578: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C57Cu; }
        if (ctx->pc != 0x22C57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C57Cu; }
        if (ctx->pc != 0x22C57Cu) { return; }
    }
    ctx->pc = 0x22C57Cu;
    // 0x22c57c: 0xc0914b6  jal         func_2452D8
    ctx->pc = 0x22C57Cu;
    SET_GPR_U32(ctx, 31, 0x22C584u);
    ctx->pc = 0x22C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C57Cu;
            // 0x22c580: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2452D8u;
    if (runtime->hasFunction(0x2452D8u)) {
        auto targetFn = runtime->lookupFunction(0x2452D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C584u; }
        if (ctx->pc != 0x22C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002452D8_0x2452d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C584u; }
        if (ctx->pc != 0x22C584u) { return; }
    }
    ctx->pc = 0x22C584u;
    // 0x22c584: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22c584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22c588: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c590: 0xac6253b8  sw          $v0, 0x53B8($v1)
    ctx->pc = 0x22c590u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21432), GPR_U32(ctx, 2));
    // 0x22c594: 0x3e00008  jr          $ra
    ctx->pc = 0x22C594u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C594u;
            // 0x22c598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C574u: goto label_22c574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C59Cu;
    // 0x22c59c: 0x0  nop
    ctx->pc = 0x22c59cu;
    // NOP
}
