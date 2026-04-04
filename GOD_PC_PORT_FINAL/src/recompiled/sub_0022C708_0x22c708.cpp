#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022C708
// Address: 0x22c708 - 0x22c758
void sub_0022C708_0x22c708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C708_0x22c708");
#endif

    ctx->pc = 0x22c708u;

    // 0x22c708: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22c708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22c70c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22c70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x22c710: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22c710u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22c714: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22c718: 0x8e02be10  lw          $v0, -0x41F0($s0)
    ctx->pc = 0x22c718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
    // 0x22c71c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22C71Cu;
    {
        const bool branch_taken_0x22c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22c71c) {
            ctx->pc = 0x22C72Cu;
            goto label_22c72c;
        }
    }
    ctx->pc = 0x22C724u;
    // 0x22c724: 0xc04e24c  jal         func_138930
    ctx->pc = 0x22C724u;
    SET_GPR_U32(ctx, 31, 0x22C72Cu);
    ctx->pc = 0x138930u;
    if (runtime->hasFunction(0x138930u)) {
        auto targetFn = runtime->lookupFunction(0x138930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C72Cu; }
        if (ctx->pc != 0x22C72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138930_0x138930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C72Cu; }
        if (ctx->pc != 0x22C72Cu) { return; }
    }
    ctx->pc = 0x22C72Cu;
label_22c72c:
    // 0x22c72c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x22C72Cu;
    SET_GPR_U32(ctx, 31, 0x22C734u);
    ctx->pc = 0x22C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C72Cu;
            // 0x22c730: 0x8e04be10  lw          $a0, -0x41F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C734u; }
        if (ctx->pc != 0x22C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C734u; }
        if (ctx->pc != 0x22C734u) { return; }
    }
    ctx->pc = 0x22C734u;
    // 0x22c734: 0xc0914e8  jal         func_2453A0
    ctx->pc = 0x22C734u;
    SET_GPR_U32(ctx, 31, 0x22C73Cu);
    ctx->pc = 0x22C738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22C734u;
            // 0x22c738: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2453A0u;
    if (runtime->hasFunction(0x2453A0u)) {
        auto targetFn = runtime->lookupFunction(0x2453A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C73Cu; }
        if (ctx->pc != 0x22C73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002453A0_0x2453a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22C73Cu; }
        if (ctx->pc != 0x22C73Cu) { return; }
    }
    ctx->pc = 0x22C73Cu;
    // 0x22c73c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22c740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22c744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22c744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22c748: 0xac6253b4  sw          $v0, 0x53B4($v1)
    ctx->pc = 0x22c748u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21428), GPR_U32(ctx, 2));
    // 0x22c74c: 0x3e00008  jr          $ra
    ctx->pc = 0x22C74Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22C750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22C74Cu;
            // 0x22c750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22C72Cu: goto label_22c72c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22C754u;
    // 0x22c754: 0x0  nop
    ctx->pc = 0x22c754u;
    // NOP
}
