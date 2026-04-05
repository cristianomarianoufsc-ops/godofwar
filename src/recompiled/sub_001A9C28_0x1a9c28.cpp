#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9C28
// Address: 0x1a9c28 - 0x1a9c78
void sub_001A9C28_0x1a9c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9C28_0x1a9c28");
#endif

    ctx->pc = 0x1a9c28u;

    // 0x1a9c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a9c2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a9c30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a9c38: 0x8c83008c  lw          $v1, 0x8C($a0)
    ctx->pc = 0x1a9c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 140)));
    // 0x1a9c3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9C3Cu;
    {
        const bool branch_taken_0x1a9c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C3Cu;
            // 0x1a9c40: 0x2490008c  addiu       $s0, $a0, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9c3c) {
            ctx->pc = 0x1A9C64u;
            goto label_1a9c64;
        }
    }
    ctx->pc = 0x1A9C44u;
    // 0x1a9c44: 0x8c850058  lw          $a1, 0x58($a0)
    ctx->pc = 0x1a9c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a9c48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a9c4c: 0xac44cac8  sw          $a0, -0x3538($v0)
    ctx->pc = 0x1a9c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953672), GPR_U32(ctx, 4));
    // 0x1a9c50: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1a9c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a9c54: 0x24840058  addiu       $a0, $a0, 0x58
    ctx->pc = 0x1a9c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
    // 0x1a9c58: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1A9C58u;
    SET_GPR_U32(ctx, 31, 0x1A9C60u);
    ctx->pc = 0x1A9C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C58u;
            // 0x1a9c5c: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C60u; }
        if (ctx->pc != 0x1A9C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9C60u; }
        if (ctx->pc != 0x1A9C60u) { return; }
    }
    ctx->pc = 0x1A9C60u;
    // 0x1a9c60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1a9c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1a9c64:
    // 0x1a9c64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a9c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a9c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9C6Cu;
            // 0x1a9c70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A9C64u: goto label_1a9c64;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9C74u;
    // 0x1a9c74: 0x0  nop
    ctx->pc = 0x1a9c74u;
    // NOP
}
