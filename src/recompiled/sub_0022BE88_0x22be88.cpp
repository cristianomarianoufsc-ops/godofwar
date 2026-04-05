#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022BE88
// Address: 0x22be88 - 0x22bed8
void sub_0022BE88_0x22be88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE88_0x22be88");
#endif

    ctx->pc = 0x22be88u;

    // 0x22be88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22be88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22be8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22be8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22be90: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22be90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22be94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22be94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22be98: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22be98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22be9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22BE9Cu;
    {
        const bool branch_taken_0x22be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22be9c) {
            ctx->pc = 0x22BEACu;
            goto label_22beac;
        }
    }
    ctx->pc = 0x22BEA4u;
    // 0x22bea4: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22BEA4u;
    SET_GPR_U32(ctx, 31, 0x22BEACu);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEACu; }
        if (ctx->pc != 0x22BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEACu; }
        if (ctx->pc != 0x22BEACu) { return; }
    }
    ctx->pc = 0x22BEACu;
label_22beac:
    // 0x22beac: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22BEACu;
    SET_GPR_U32(ctx, 31, 0x22BEB4u);
    ctx->pc = 0x22BEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEACu;
            // 0x22beb0: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEB4u; }
        if (ctx->pc != 0x22BEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEB4u; }
        if (ctx->pc != 0x22BEB4u) { return; }
    }
    ctx->pc = 0x22BEB4u;
    // 0x22beb4: 0xc0913b6  jal         func_244ED8
    ctx->pc = 0x22BEB4u;
    SET_GPR_U32(ctx, 31, 0x22BEBCu);
    ctx->pc = 0x22BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22BEB4u;
            // 0x22beb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244ED8u;
    if (runtime->hasFunction(0x244ED8u)) {
        auto targetFn = runtime->lookupFunction(0x244ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEBCu; }
        if (ctx->pc != 0x22BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244ED8_0x244ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22BEBCu; }
        if (ctx->pc != 0x22BEBCu) { return; }
    }
    ctx->pc = 0x22BEBCu;
    // 0x22bebc: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22bec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22bec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22bec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22bec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22bec8: 0xac6253c4  sw          $v0, 0x53C4($v1)
    ctx->pc = 0x22bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21444), GPR_U32(ctx, 2));
    // 0x22becc: 0x3e00008  jr          $ra
    ctx->pc = 0x22BECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22BECCu;
            // 0x22bed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22BEACu: goto label_22beac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22BED4u;
    // 0x22bed4: 0x0  nop
    ctx->pc = 0x22bed4u;
    // NOP
}
