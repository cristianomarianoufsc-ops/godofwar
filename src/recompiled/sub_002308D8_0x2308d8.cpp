#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002308D8
// Address: 0x2308d8 - 0x230928
void sub_002308D8_0x2308d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002308D8_0x2308d8");
#endif

    ctx->pc = 0x2308d8u;

    // 0x2308d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2308d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2308dc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2308dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2308e0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2308e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2308e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2308e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2308e8: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x2308ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2308ECu;
    {
        const bool branch_taken_0x2308ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2308ec) {
            ctx->pc = 0x2308FCu;
            goto label_2308fc;
        }
    }
    ctx->pc = 0x2308F4u;
    // 0x2308f4: 0xc04e24c  jal         func_138930
    ctx->pc = 0x2308F4u;
    SET_GPR_U32(ctx, 31, 0x2308FCu);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2308FCu; }
        if (ctx->pc != 0x2308FCu) { return; }
    }
    ctx->pc = 0x2308FCu;
label_2308fc:
    // 0x2308fc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2308FCu;
    SET_GPR_U32(ctx, 31, 0x230904u);
    ctx->pc = 0x230900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2308FCu;
            // 0x230900: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230904u; }
        if (ctx->pc != 0x230904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230904u; }
        if (ctx->pc != 0x230904u) { return; }
    }
    ctx->pc = 0x230904u;
    // 0x230904: 0xc0915ae  jal         func_2456B8
    ctx->pc = 0x230904u;
    SET_GPR_U32(ctx, 31, 0x23090Cu);
    ctx->pc = 0x230908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230904u;
            // 0x230908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2456B8u;
    if (runtime->hasFunction(0x2456B8u)) {
        auto targetFn = runtime->lookupFunction(0x2456B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23090Cu; }
        if (ctx->pc != 0x23090Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002456B8_0x2456b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23090Cu; }
        if (ctx->pc != 0x23090Cu) { return; }
    }
    ctx->pc = 0x23090Cu;
    // 0x23090c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x23090cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x230910: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x230910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x230914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230918: 0xac6253a8  sw          $v0, 0x53A8($v1)
    ctx->pc = 0x230918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21416), GPR_U32(ctx, 2));
    // 0x23091c: 0x3e00008  jr          $ra
    ctx->pc = 0x23091Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23091Cu;
            // 0x230920: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2308FCu: goto label_2308fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230924u;
    // 0x230924: 0x0  nop
    ctx->pc = 0x230924u;
    // NOP
}
