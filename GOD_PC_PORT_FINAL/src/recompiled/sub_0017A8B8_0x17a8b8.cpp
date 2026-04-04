#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A8B8
// Address: 0x17a8b8 - 0x17a910
void sub_0017A8B8_0x17a8b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A8B8_0x17a8b8");
#endif

    ctx->pc = 0x17a8b8u;

    // 0x17a8b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a8b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a8bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17a8c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a8c4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x17a8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x17a8c8: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x17a8c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x17a8cc: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x17a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17a8d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a8d4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x17a8d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17a8d8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x17a8dc: 0x40f809  jalr        $v0
    ctx->pc = 0x17A8DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A8E4u);
        ctx->pc = 0x17A8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8DCu;
            // 0x17a8e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A8E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A8E4u; }
            if (ctx->pc != 0x17A8E4u) { return; }
        }
        }
    }
    ctx->pc = 0x17A8E4u;
    // 0x17a8e4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x17a8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17a8e8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x17a8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17a8ec: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x17a8ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x17a8f0: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x17a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x17a8f4: 0x40f809  jalr        $v0
    ctx->pc = 0x17A8F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A8FCu);
        ctx->pc = 0x17A8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A8F4u;
            // 0x17a8f8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A8FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A8FCu; }
            if (ctx->pc != 0x17A8FCu) { return; }
        }
        }
    }
    ctx->pc = 0x17A8FCu;
    // 0x17a8fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a900: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a904: 0x3e00008  jr          $ra
    ctx->pc = 0x17A904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A904u;
            // 0x17a908: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A90Cu;
    // 0x17a90c: 0x0  nop
    ctx->pc = 0x17a90cu;
    // NOP
}
