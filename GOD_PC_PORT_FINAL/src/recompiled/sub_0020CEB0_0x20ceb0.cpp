#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020CEB0
// Address: 0x20ceb0 - 0x20cf08
void sub_0020CEB0_0x20ceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020CEB0_0x20ceb0");
#endif

    ctx->pc = 0x20ceb0u;

    // 0x20ceb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20ceb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20ceb4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20ceb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20ceb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20cebc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20cebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cec0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20cec4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20cec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cec8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x20CEC8u;
    SET_GPR_U32(ctx, 31, 0x20CED0u);
    ctx->pc = 0x20CECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CEC8u;
            // 0x20cecc: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CED0u; }
        if (ctx->pc != 0x20CED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CED0u; }
        if (ctx->pc != 0x20CED0u) { return; }
    }
    ctx->pc = 0x20CED0u;
    // 0x20ced0: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x20CED0u;
    SET_GPR_U32(ctx, 31, 0x20CED8u);
    ctx->pc = 0x20CED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CED0u;
            // 0x20ced4: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CED8u; }
        if (ctx->pc != 0x20CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CED8u; }
        if (ctx->pc != 0x20CED8u) { return; }
    }
    ctx->pc = 0x20CED8u;
    // 0x20ced8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x20CED8u;
    SET_GPR_U32(ctx, 31, 0x20CEE0u);
    ctx->pc = 0x20CEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CED8u;
            // 0x20cedc: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEE0u; }
        if (ctx->pc != 0x20CEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEE0u; }
        if (ctx->pc != 0x20CEE0u) { return; }
    }
    ctx->pc = 0x20CEE0u;
    // 0x20cee0: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x20cee0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x20cee4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20CEE4u;
    {
        const bool branch_taken_0x20cee4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CEE4u;
            // 0x20cee8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cee4) {
            ctx->pc = 0x20CEF8u;
            goto label_20cef8;
        }
    }
    ctx->pc = 0x20CEECu;
    // 0x20ceec: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x20CEECu;
    SET_GPR_U32(ctx, 31, 0x20CEF4u);
    ctx->pc = 0x20CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20CEECu;
            // 0x20cef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEF4u; }
        if (ctx->pc != 0x20CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEF4u; }
        if (ctx->pc != 0x20CEF4u) { return; }
    }
    ctx->pc = 0x20CEF4u;
    // 0x20cef4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20cef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20cef8:
    // 0x20cef8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20cef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cefc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20cefcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cf00: 0x3e00008  jr          $ra
    ctx->pc = 0x20CF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20CF00u;
            // 0x20cf04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CEF8u: goto label_20cef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CF08u;
}
