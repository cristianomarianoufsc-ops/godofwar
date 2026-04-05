#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F62E8
// Address: 0x1f62e8 - 0x1f6328
void sub_001F62E8_0x1f62e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F62E8_0x1f62e8");
#endif

    ctx->pc = 0x1f62e8u;

    // 0x1f62e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f62e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f62ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f62ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f62f0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1f62f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1f62f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f62f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f62f8: 0x8e02e398  lw          $v0, -0x1C68($s0)
    ctx->pc = 0x1f62f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960024)));
    // 0x1f62fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F62FCu;
    {
        const bool branch_taken_0x1f62fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f62fc) {
            ctx->pc = 0x1F630Cu;
            goto label_1f630c;
        }
    }
    ctx->pc = 0x1F6304u;
    // 0x1f6304: 0xc07d8d4  jal         func_1F6350
    ctx->pc = 0x1F6304u;
    SET_GPR_U32(ctx, 31, 0x1F630Cu);
    ctx->pc = 0x1F6350u;
    if (runtime->hasFunction(0x1F6350u)) {
        auto targetFn = runtime->lookupFunction(0x1F6350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F630Cu; }
        if (ctx->pc != 0x1F630Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6350_0x1f6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F630Cu; }
        if (ctx->pc != 0x1F630Cu) { return; }
    }
    ctx->pc = 0x1F630Cu;
label_1f630c:
    // 0x1f630c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1F630Cu;
    SET_GPR_U32(ctx, 31, 0x1F6314u);
    ctx->pc = 0x1F6310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F630Cu;
            // 0x1f6310: 0x8e04e398  lw          $a0, -0x1C68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960024)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6314u; }
        if (ctx->pc != 0x1F6314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6314u; }
        if (ctx->pc != 0x1F6314u) { return; }
    }
    ctx->pc = 0x1F6314u;
    // 0x1f6314: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f6314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f631c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F631Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F631Cu;
            // 0x1f6320: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F630Cu: goto label_1f630c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6324u;
    // 0x1f6324: 0x0  nop
    ctx->pc = 0x1f6324u;
    // NOP
}
