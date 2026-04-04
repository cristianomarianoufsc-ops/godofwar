#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0FB8
// Address: 0x1e0fb8 - 0x1e1018
void sub_001E0FB8_0x1e0fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0FB8_0x1e0fb8");
#endif

    ctx->pc = 0x1e0fb8u;

    // 0x1e0fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0fbc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0fc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0fc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0fc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0fc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0fcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0fccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0fd0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0fd4: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0FDCu);
        ctx->pc = 0x1E0FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FD4u;
            // 0x1e0fd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0FDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1008u: goto label_1e1008;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FDCu; }
            if (ctx->pc != 0x1E0FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0FDCu;
    // 0x1e0fdc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0FDCu;
    {
        const bool branch_taken_0x1e0fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0fdc) {
            ctx->pc = 0x1E0FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FDCu;
            // 0x1e0fe0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1008u;
            goto label_1e1008;
        }
    }
    ctx->pc = 0x1E0FE4u;
    // 0x1e0fe4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0fe8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0fec: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0ff0: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0FF8u);
        ctx->pc = 0x1E0FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0FF0u;
            // 0x1e0ff4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0FF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1008u: goto label_1e1008;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0FF8u; }
            if (ctx->pc != 0x1E0FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0FF8u;
    // 0x1e0ff8: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e0ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1e0ffc: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x1e0ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x1e1000: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e1000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x1e1004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e1004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e1008:
    // 0x1e1008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e1008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e100c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E100Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E100Cu;
            // 0x1e1010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1008u: goto label_1e1008;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1014u;
    // 0x1e1014: 0x0  nop
    ctx->pc = 0x1e1014u;
    // NOP
}
