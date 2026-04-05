#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0EF8
// Address: 0x1e0ef8 - 0x1e0f58
void sub_001E0EF8_0x1e0ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0EF8_0x1e0ef8");
#endif

    ctx->pc = 0x1e0ef8u;

    // 0x1e0ef8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0efc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e0efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e0f00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e0f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0f08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0f0c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0f0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0f10: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0f14: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F1Cu);
        ctx->pc = 0x1E0F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F14u;
            // 0x1e0f18: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0F1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0F48u: goto label_1e0f48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F1Cu; }
            if (ctx->pc != 0x1E0F1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0F1Cu;
    // 0x1e0f1c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E0F1Cu;
    {
        const bool branch_taken_0x1e0f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0f1c) {
            ctx->pc = 0x1E0F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F1Cu;
            // 0x1e0f20: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E0F48u;
            goto label_1e0f48;
        }
    }
    ctx->pc = 0x1E0F24u;
    // 0x1e0f24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1e0f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e0f28: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1e0f28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1e0f2c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1e0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1e0f30: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0F38u);
        ctx->pc = 0x1E0F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F30u;
            // 0x1e0f34: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0F38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0F48u: goto label_1e0f48;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0F38u; }
            if (ctx->pc != 0x1E0F38u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0F38u;
    // 0x1e0f38: 0x8c4301ac  lw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e0f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 428)));
    // 0x1e0f3c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x1e0f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x1e0f40: 0xac4301ac  sw          $v1, 0x1AC($v0)
    ctx->pc = 0x1e0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 3));
    // 0x1e0f44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e0f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0f48:
    // 0x1e0f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0F4Cu;
            // 0x1e0f50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0F48u: goto label_1e0f48;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0F54u;
    // 0x1e0f54: 0x0  nop
    ctx->pc = 0x1e0f54u;
    // NOP
}
