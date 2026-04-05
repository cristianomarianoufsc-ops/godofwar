#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001311E0
// Address: 0x1311e0 - 0x131248
void sub_001311E0_0x1311e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001311E0_0x1311e0");
#endif

    ctx->pc = 0x1311e0u;

    // 0x1311e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1311e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1311e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1311e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1311e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1311e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1311ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1311ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1311f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1311f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1311f4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1311f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1311f8: 0x2610ec58  addiu       $s0, $s0, -0x13A8
    ctx->pc = 0x1311f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
    // 0x1311fc: 0xc04c45a  jal         func_131168
    ctx->pc = 0x1311FCu;
    SET_GPR_U32(ctx, 31, 0x131204u);
    ctx->pc = 0x131200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1311FCu;
            // 0x131200: 0x8e05005c  lw          $a1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131168u;
    if (runtime->hasFunction(0x131168u)) {
        auto targetFn = runtime->lookupFunction(0x131168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131204u; }
        if (ctx->pc != 0x131204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131168_0x131168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131204u; }
        if (ctx->pc != 0x131204u) { return; }
    }
    ctx->pc = 0x131204u;
    // 0x131204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x131204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131208: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x131208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x13120c: 0xc04c45a  jal         func_131168
    ctx->pc = 0x13120Cu;
    SET_GPR_U32(ctx, 31, 0x131214u);
    ctx->pc = 0x131210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13120Cu;
            // 0x131210: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131168u;
    if (runtime->hasFunction(0x131168u)) {
        auto targetFn = runtime->lookupFunction(0x131168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131214u; }
        if (ctx->pc != 0x131214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131168_0x131168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131214u; }
        if (ctx->pc != 0x131214u) { return; }
    }
    ctx->pc = 0x131214u;
    // 0x131214: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_131218:
    // 0x131218: 0xc04c45a  jal         func_131168
    ctx->pc = 0x131218u;
    SET_GPR_U32(ctx, 31, 0x131220u);
    ctx->pc = 0x13121Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131218u;
            // 0x13121c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131168u;
    if (runtime->hasFunction(0x131168u)) {
        auto targetFn = runtime->lookupFunction(0x131168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131220u; }
        if (ctx->pc != 0x131220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131168_0x131168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131220u; }
        if (ctx->pc != 0x131220u) { return; }
    }
    ctx->pc = 0x131220u;
    // 0x131220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x131220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x131224: 0x2e02000d  sltiu       $v0, $s0, 0xD
    ctx->pc = 0x131224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x131228: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131228u;
    {
        const bool branch_taken_0x131228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x131228u;
            // 0x13122c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131228) {
            ctx->pc = 0x131218u;
            runtime->cooperativeGuestYield();
            goto label_131218;
        }
    }
    ctx->pc = 0x131230u;
    // 0x131230: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x131230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131234: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13123c: 0x3e00008  jr          $ra
    ctx->pc = 0x13123Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13123Cu;
            // 0x131240: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x131218u: goto label_131218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x131244u;
    // 0x131244: 0x0  nop
    ctx->pc = 0x131244u;
    // NOP
}
