#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D0BB0
// Address: 0x1d0bb0 - 0x1d0bf8
void sub_001D0BB0_0x1d0bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BB0_0x1d0bb0");
#endif

    ctx->pc = 0x1d0bb0u;

    // 0x1d0bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0bb4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d0bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d0bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0bc0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1d0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1d0bc4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1d0bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d0bc8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1d0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d0bcc: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1d0bccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1d0bd0: 0xa6030072  sh          $v1, 0x72($s0)
    ctx->pc = 0x1d0bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d0bd4: 0x2484b950  addiu       $a0, $a0, -0x46B0
    ctx->pc = 0x1d0bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
    // 0x1d0bd8: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1d0bdc: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x1D0BDCu;
    SET_GPR_U32(ctx, 31, 0x1D0BE4u);
    ctx->pc = 0x1D0BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BDCu;
            // 0x1d0be0: 0x9445002c  lhu         $a1, 0x2C($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BE4u; }
        if (ctx->pc != 0x1D0BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0BE4u; }
        if (ctx->pc != 0x1D0BE4u) { return; }
    }
    ctx->pc = 0x1D0BE4u;
    // 0x1d0be4: 0xa602006c  sh          $v0, 0x6C($s0)
    ctx->pc = 0x1d0be4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d0be8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0bec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0BF0u;
            // 0x1d0bf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D0BF8u;
}
