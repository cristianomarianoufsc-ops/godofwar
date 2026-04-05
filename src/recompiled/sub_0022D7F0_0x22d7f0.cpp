#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D7F0
// Address: 0x22d7f0 - 0x22d840
void sub_0022D7F0_0x22d7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D7F0_0x22d7f0");
#endif

    ctx->pc = 0x22d7f0u;

    // 0x22d7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22d7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22d7f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22d7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22d7f8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22d7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22d7fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d800: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22d800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22d804: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22D804u;
    {
        const bool branch_taken_0x22d804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22d804) {
            ctx->pc = 0x22D814u;
            goto label_22d814;
        }
    }
    ctx->pc = 0x22D80Cu;
    // 0x22d80c: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22D80Cu;
    SET_GPR_U32(ctx, 31, 0x22D814u);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D814u; }
        if (ctx->pc != 0x22D814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D814u; }
        if (ctx->pc != 0x22D814u) { return; }
    }
    ctx->pc = 0x22D814u;
label_22d814:
    // 0x22d814: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22D814u;
    SET_GPR_U32(ctx, 31, 0x22D81Cu);
    ctx->pc = 0x22D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D814u;
            // 0x22d818: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D81Cu; }
        if (ctx->pc != 0x22D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D81Cu; }
        if (ctx->pc != 0x22D81Cu) { return; }
    }
    ctx->pc = 0x22D81Cu;
    // 0x22d81c: 0xc091586  jal         func_245618
    ctx->pc = 0x22D81Cu;
    SET_GPR_U32(ctx, 31, 0x22D824u);
    ctx->pc = 0x22D820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D81Cu;
            // 0x22d820: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245618u;
    if (runtime->hasFunction(0x245618u)) {
        auto targetFn = runtime->lookupFunction(0x245618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D824u; }
        if (ctx->pc != 0x22D824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245618_0x245618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D824u; }
        if (ctx->pc != 0x22D824u) { return; }
    }
    ctx->pc = 0x22D824u;
    // 0x22d824: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22d824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22d828: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22d828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d82c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d82cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d830: 0xac6253ac  sw          $v0, 0x53AC($v1)
    ctx->pc = 0x22d830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21420), GPR_U32(ctx, 2));
    // 0x22d834: 0x3e00008  jr          $ra
    ctx->pc = 0x22D834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D834u;
            // 0x22d838: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D814u: goto label_22d814;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D83Cu;
    // 0x22d83c: 0x0  nop
    ctx->pc = 0x22d83cu;
    // NOP
}
