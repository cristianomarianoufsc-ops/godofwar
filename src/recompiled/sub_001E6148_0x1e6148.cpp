#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6148
// Address: 0x1e6148 - 0x1e61a0
void sub_001E6148_0x1e6148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6148_0x1e6148");
#endif

    ctx->pc = 0x1e6148u;

    // 0x1e6148: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e614c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6150: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1e6150u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1e6154: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6158: 0x8e02d2b4  lw          $v0, -0x2D4C($s0)
    ctx->pc = 0x1e6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955700)));
    // 0x1e615c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E615Cu;
    {
        const bool branch_taken_0x1e615c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e615c) {
            ctx->pc = 0x1E6160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E615Cu;
            // 0x1e6160: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E618Cu;
            goto label_1e618c;
        }
    }
    ctx->pc = 0x1E6164u;
    // 0x1e6164: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1E6164u;
    SET_GPR_U32(ctx, 31, 0x1E616Cu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E616Cu; }
        if (ctx->pc != 0x1E616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E616Cu; }
        if (ctx->pc != 0x1E616Cu) { return; }
    }
    ctx->pc = 0x1E616Cu;
    // 0x1e616c: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1e616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1e6170: 0x24050360  addiu       $a1, $zero, 0x360
    ctx->pc = 0x1e6170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 864));
    // 0x1e6174: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1e6174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1e6178: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e6178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e617c: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1E617Cu;
    SET_GPR_U32(ctx, 31, 0x1E6184u);
    ctx->pc = 0x1E6180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E617Cu;
            // 0x1e6180: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6184u; }
        if (ctx->pc != 0x1E6184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6184u; }
        if (ctx->pc != 0x1E6184u) { return; }
    }
    ctx->pc = 0x1E6184u;
    // 0x1e6184: 0xae02d2b4  sw          $v0, -0x2D4C($s0)
    ctx->pc = 0x1e6184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955700), GPR_U32(ctx, 2));
    // 0x1e6188: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e618c:
    // 0x1e618c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e618cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6190: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6190u;
            // 0x1e6194: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E618Cu: goto label_1e618c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E6198u;
    // 0x1e6198: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e6198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e619c: 0x0  nop
    ctx->pc = 0x1e619cu;
    // NOP
}
