#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187B58
// Address: 0x187b58 - 0x187bb8
void sub_00187B58_0x187b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187B58_0x187b58");
#endif

    ctx->pc = 0x187b58u;

    // 0x187b58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x187b5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x187b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x187b60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x187b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x187b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187b68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x187b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x187b6c: 0xc05d656  jal         func_175958
    ctx->pc = 0x187B6Cu;
    SET_GPR_U32(ctx, 31, 0x187B74u);
    ctx->pc = 0x187B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B6Cu;
            // 0x187b70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B74u; }
        if (ctx->pc != 0x187B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B74u; }
        if (ctx->pc != 0x187B74u) { return; }
    }
    ctx->pc = 0x187B74u;
    // 0x187b74: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x187b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x187b78: 0xc05d71e  jal         func_175C78
    ctx->pc = 0x187B78u;
    SET_GPR_U32(ctx, 31, 0x187B80u);
    ctx->pc = 0x187B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B78u;
            // 0x187b7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C78u;
    if (runtime->hasFunction(0x175C78u)) {
        auto targetFn = runtime->lookupFunction(0x175C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B80u; }
        if (ctx->pc != 0x187B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C78_0x175c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B80u; }
        if (ctx->pc != 0x187B80u) { return; }
    }
    ctx->pc = 0x187B80u;
    // 0x187b80: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x187b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x187b84: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x187B84u;
    {
        const bool branch_taken_0x187b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x187b84) {
            ctx->pc = 0x187B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x187B84u;
            // 0x187b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x187B98u;
            goto label_187b98;
        }
    }
    ctx->pc = 0x187B8Cu;
    // 0x187b8c: 0xc04c4a2  jal         func_131288
    ctx->pc = 0x187B8Cu;
    SET_GPR_U32(ctx, 31, 0x187B94u);
    ctx->pc = 0x187B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B8Cu;
            // 0x187b90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131288u;
    if (runtime->hasFunction(0x131288u)) {
        auto targetFn = runtime->lookupFunction(0x131288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B94u; }
        if (ctx->pc != 0x187B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131288_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187B94u; }
        if (ctx->pc != 0x187B94u) { return; }
    }
    ctx->pc = 0x187B94u;
    // 0x187b94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187b94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_187b98:
    // 0x187b98: 0xc08e218  jal         func_238860
    ctx->pc = 0x187B98u;
    SET_GPR_U32(ctx, 31, 0x187BA0u);
    ctx->pc = 0x187B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187B98u;
            // 0x187b9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BA0u; }
        if (ctx->pc != 0x187BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187BA0u; }
        if (ctx->pc != 0x187BA0u) { return; }
    }
    ctx->pc = 0x187BA0u;
    // 0x187ba0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x187ba0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187ba4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x187ba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187ba8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187bac: 0x3e00008  jr          $ra
    ctx->pc = 0x187BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187BACu;
            // 0x187bb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x187B98u: goto label_187b98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x187BB4u;
    // 0x187bb4: 0x0  nop
    ctx->pc = 0x187bb4u;
    // NOP
}
