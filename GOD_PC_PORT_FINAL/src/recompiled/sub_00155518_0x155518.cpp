#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00155518
// Address: 0x155518 - 0x155560
void sub_00155518_0x155518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155518_0x155518");
#endif

    ctx->pc = 0x155518u;

    // 0x155518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x155518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15551c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15551cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155520: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x155520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x155524: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x155524u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x155528: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x155528u;
    {
        const bool branch_taken_0x155528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x155528) {
            ctx->pc = 0x15552Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155528u;
            // 0x15552c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155550u;
            goto label_155550;
        }
    }
    ctx->pc = 0x155530u;
    // 0x155530: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x155530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x155534: 0x0  nop
    ctx->pc = 0x155534u;
    // NOP
label_155538:
    // 0x155538: 0xc05552a  jal         func_1554A8
    ctx->pc = 0x155538u;
    SET_GPR_U32(ctx, 31, 0x155540u);
    ctx->pc = 0x15553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x155538u;
            // 0x15553c: 0x10200a  movz        $a0, $zero, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1554A8u;
    if (runtime->hasFunction(0x1554A8u)) {
        auto targetFn = runtime->lookupFunction(0x1554A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155540u; }
        if (ctx->pc != 0x155540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1554a8_0x155518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x155540u; }
        if (ctx->pc != 0x155540u) { return; }
    }
    ctx->pc = 0x155540u;
    // 0x155540: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x155540u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x155544: 0x5600fffc  bnel        $s0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x155544u;
    {
        const bool branch_taken_0x155544 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x155544) {
            ctx->pc = 0x155548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155544u;
            // 0x155548: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155538u;
            runtime->cooperativeGuestYield();
            goto label_155538;
        }
    }
    ctx->pc = 0x15554Cu;
    // 0x15554c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15554cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_155550:
    // 0x155550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x155554: 0x3e00008  jr          $ra
    ctx->pc = 0x155554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x155554u;
            // 0x155558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155538u: goto label_155538;
            case 0x155550u: goto label_155550;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15555Cu;
    // 0x15555c: 0x0  nop
    ctx->pc = 0x15555cu;
    // NOP
}
