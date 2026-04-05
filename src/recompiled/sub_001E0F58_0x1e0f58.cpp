#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0F58
// Address: 0x1e0f58 - 0x1e0fb8
void sub_001E0F58_0x1e0f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F58_0x1e0f58");
#endif

    ctx->pc = 0x1e0f58u;

    // 0x1e0f58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0f5c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0f60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0f6c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0f6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0f70: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0f74: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F7Cu);
        ctx->pc = 0x1E0F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F74u;
            // 0x1e0f78: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0F7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0FACu: goto label_1e0fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F7Cu; }
            if (ctx->pc != 0x1E0F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0F7Cu;
    // 0x1e0f7c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1E0F7Cu;
    {
        const bool branch_taken_0x1e0f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f7c) {
            ctx->pc = 0x1E0F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F7Cu;
            // 0x1e0f80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0FACu;
            goto label_1e0fac;
        }
    }
    ctx->pc = 0x1E0F84u;
    // 0x1e0f84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0f88: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0f88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0f8c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0f90: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F98u);
        ctx->pc = 0x1E0F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F90u;
            // 0x1e0f94: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0F98u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0FACu: goto label_1e0fac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F98u; }
            if (ctx->pc != 0x1E0F98u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0F98u;
    // 0x1e0f98: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1e0f9c: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x1e0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1e0fa0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e0fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e0fa4: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x1e0fa8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0fac:
    // 0x1e0fac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FB0u;
            // 0x1e0fb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0FACu: goto label_1e0fac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0FB8u;
}
