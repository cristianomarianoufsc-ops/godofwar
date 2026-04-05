#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_100b20
// Address: 0x100b20 - 0x100b78
void entry_100b20_0x100b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_100b20_0x100b78");
#endif

    ctx->pc = 0x100b20u;

    // 0x100b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100b24: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100b2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x100b2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b30: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x100b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x100b34: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x100b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x100b38: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x100b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x100b3c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x100B3Cu;
    {
        const bool branch_taken_0x100b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x100B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B3Cu;
            // 0x100b40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b3c) {
            ctx->pc = 0x100B68u;
            goto label_100b68;
        }
    }
    ctx->pc = 0x100B44u;
    // 0x100b44: 0x0  nop
    ctx->pc = 0x100b44u;
    // NOP
label_100b48:
    // 0x100b48: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x100b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100b4c: 0xc041d36  jal         func_1074D8
    ctx->pc = 0x100B4Cu;
    SET_GPR_U32(ctx, 31, 0x100B54u);
    ctx->pc = 0x100B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B4Cu;
            // 0x100b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1074D8u;
    if (runtime->hasFunction(0x1074D8u)) {
        auto targetFn = runtime->lookupFunction(0x1074D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B54u; }
        if (ctx->pc != 0x100B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1074d8_0x107538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B54u; }
        if (ctx->pc != 0x100B54u) { return; }
    }
    ctx->pc = 0x100B54u;
    // 0x100b54: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100b58: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100b5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x100b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x100b60: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x100B60u;
    {
        const bool branch_taken_0x100b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B60u;
            // 0x100b64: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b60) {
            ctx->pc = 0x100B48u;
            runtime->cooperativeGuestYield();
            goto label_100b48;
        }
    }
    ctx->pc = 0x100B68u;
label_100b68:
    // 0x100b68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b70: 0x3e00008  jr          $ra
    ctx->pc = 0x100B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B70u;
            // 0x100b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100B48u: goto label_100b48;
            case 0x100B68u: goto label_100b68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x100B78u;
}
