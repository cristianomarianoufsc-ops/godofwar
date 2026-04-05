#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226580
// Address: 0x226580 - 0x2265c0
void sub_00226580_0x226580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226580_0x226580");
#endif

    ctx->pc = 0x226580u;

    // 0x226580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226584: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x226584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x226588: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x226588u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22658c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22658cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226590: 0x8e0211a8  lw          $v0, 0x11A8($s0)
    ctx->pc = 0x226590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
    // 0x226594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226594u;
    {
        const bool branch_taken_0x226594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226594) {
            ctx->pc = 0x2265A4u;
            goto label_2265a4;
        }
    }
    ctx->pc = 0x22659Cu;
    // 0x22659c: 0xc08997a  jal         func_2265E8
    ctx->pc = 0x22659Cu;
    SET_GPR_U32(ctx, 31, 0x2265A4u);
    ctx->pc = 0x2265E8u;
    if (runtime->hasFunction(0x2265E8u)) {
        auto targetFn = runtime->lookupFunction(0x2265E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265A4u; }
        if (ctx->pc != 0x2265A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002265E8_0x2265e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265A4u; }
        if (ctx->pc != 0x2265A4u) { return; }
    }
    ctx->pc = 0x2265A4u;
label_2265a4:
    // 0x2265a4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2265A4u;
    SET_GPR_U32(ctx, 31, 0x2265ACu);
    ctx->pc = 0x2265A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2265A4u;
            // 0x2265a8: 0x8e0411a8  lw          $a0, 0x11A8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4520)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265ACu; }
        if (ctx->pc != 0x2265ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2265ACu; }
        if (ctx->pc != 0x2265ACu) { return; }
    }
    ctx->pc = 0x2265ACu;
    // 0x2265ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2265acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2265b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2265b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2265b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2265B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265B4u;
            // 0x2265b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2265A4u: goto label_2265a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2265BCu;
    // 0x2265bc: 0x0  nop
    ctx->pc = 0x2265bcu;
    // NOP
}
