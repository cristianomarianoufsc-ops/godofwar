#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6088
// Address: 0x1e6088 - 0x1e60e0
void sub_001E6088_0x1e6088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6088_0x1e6088");
#endif

    ctx->pc = 0x1e6088u;

    // 0x1e6088: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e6088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e608c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e6090: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1e6090u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1e6094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e6094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e6098: 0x8e02d2b0  lw          $v0, -0x2D50($s0)
    ctx->pc = 0x1e6098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294955696)));
    // 0x1e609c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E609Cu;
    {
        const bool branch_taken_0x1e609c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e609c) {
            ctx->pc = 0x1E60A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E609Cu;
            // 0x1e60a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E60CCu;
            goto label_1e60cc;
        }
    }
    ctx->pc = 0x1E60A4u;
    // 0x1e60a4: 0xc06f9a8  jal         func_1BE6A0
    ctx->pc = 0x1E60A4u;
    SET_GPR_U32(ctx, 31, 0x1E60ACu);
    ctx->pc = 0x1BE6A0u;
    if (runtime->hasFunction(0x1BE6A0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60ACu; }
        if (ctx->pc != 0x1E60ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE6A0_0x1be6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60ACu; }
        if (ctx->pc != 0x1E60ACu) { return; }
    }
    ctx->pc = 0x1E60ACu;
    // 0x1e60ac: 0x8c440074  lw          $a0, 0x74($v0)
    ctx->pc = 0x1e60acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1e60b0: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1e60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e60b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1e60b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e60b8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e60b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e60bc: 0xc04f644  jal         func_13D910
    ctx->pc = 0x1E60BCu;
    SET_GPR_U32(ctx, 31, 0x1E60C4u);
    ctx->pc = 0x1E60C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60BCu;
            // 0x1e60c0: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D910u;
    if (runtime->hasFunction(0x13D910u)) {
        auto targetFn = runtime->lookupFunction(0x13D910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60C4u; }
        if (ctx->pc != 0x1E60C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D910_0x13d910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E60C4u; }
        if (ctx->pc != 0x1E60C4u) { return; }
    }
    ctx->pc = 0x1E60C4u;
    // 0x1e60c4: 0xae02d2b0  sw          $v0, -0x2D50($s0)
    ctx->pc = 0x1e60c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294955696), GPR_U32(ctx, 2));
    // 0x1e60c8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e60c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e60cc:
    // 0x1e60cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e60ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e60d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E60D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E60D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E60D0u;
            // 0x1e60d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E60CCu: goto label_1e60cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E60D8u;
    // 0x1e60d8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e60d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e60dc: 0x0  nop
    ctx->pc = 0x1e60dcu;
    // NOP
}
