#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002249C0
// Address: 0x2249c0 - 0x224a00
void sub_002249C0_0x2249c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002249C0_0x2249c0");
#endif

    ctx->pc = 0x2249c0u;

    // 0x2249c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2249c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2249c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2249c8: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x2249cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2249ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2249d0: 0x8e0211a4  lw          $v0, 0x11A4($s0)
    ctx->pc = 0x2249d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
    // 0x2249d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2249D4u;
    {
        const bool branch_taken_0x2249d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2249d4) {
            ctx->pc = 0x2249E4u;
            goto label_2249e4;
        }
    }
    ctx->pc = 0x2249DCu;
    // 0x2249dc: 0xc08928a  jal         func_224A28
    ctx->pc = 0x2249DCu;
    SET_GPR_U32(ctx, 31, 0x2249E4u);
    ctx->pc = 0x224A28u;
    if (runtime->hasFunction(0x224A28u)) {
        auto targetFn = runtime->lookupFunction(0x224A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249E4u; }
        if (ctx->pc != 0x2249E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A28_0x224a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249E4u; }
        if (ctx->pc != 0x2249E4u) { return; }
    }
    ctx->pc = 0x2249E4u;
label_2249e4:
    // 0x2249e4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2249E4u;
    SET_GPR_U32(ctx, 31, 0x2249ECu);
    ctx->pc = 0x2249E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249E4u;
            // 0x2249e8: 0x8e0411a4  lw          $a0, 0x11A4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4516)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249ECu; }
        if (ctx->pc != 0x2249ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249ECu; }
        if (ctx->pc != 0x2249ECu) { return; }
    }
    ctx->pc = 0x2249ECu;
    // 0x2249ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2249ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2249f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2249f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2249f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2249F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2249F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2249F4u;
            // 0x2249f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2249E4u: goto label_2249e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2249FCu;
    // 0x2249fc: 0x0  nop
    ctx->pc = 0x2249fcu;
    // NOP
}
