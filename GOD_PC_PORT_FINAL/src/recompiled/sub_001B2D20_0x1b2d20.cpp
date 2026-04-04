#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2D20
// Address: 0x1b2d20 - 0x1b2d70
void sub_001B2D20_0x1b2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2D20_0x1b2d20");
#endif

    ctx->pc = 0x1b2d20u;

    // 0x1b2d20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2d24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2d2c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1b2d2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b2d30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2D30u;
    {
        const bool branch_taken_0x1b2d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D30u;
            // 0x1b2d34: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d30) {
            ctx->pc = 0x1B2D40u;
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2D38u;
    // 0x1b2d38: 0xc06cb5c  jal         func_1B2D70
    ctx->pc = 0x1B2D38u;
    SET_GPR_U32(ctx, 31, 0x1B2D40u);
    ctx->pc = 0x1B2D70u;
    if (runtime->hasFunction(0x1B2D70u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D40u; }
        if (ctx->pc != 0x1B2D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D70_0x1b2d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D40u; }
        if (ctx->pc != 0x1B2D40u) { return; }
    }
    ctx->pc = 0x1B2D40u;
label_1b2d40:
    // 0x1b2d40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b2d44: 0x24445078  addiu       $a0, $v0, 0x5078
    ctx->pc = 0x1b2d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1b2d48: 0x80820026  lb          $v0, 0x26($a0)
    ctx->pc = 0x1b2d48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x1b2d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2D4Cu;
    {
        const bool branch_taken_0x1b2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D4Cu;
            // 0x1b2d50: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d4c) {
            ctx->pc = 0x1B2D60u;
            goto label_1b2d60;
        }
    }
    ctx->pc = 0x1B2D54u;
    // 0x1b2d54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d58: 0xac50cb10  sw          $s0, -0x34F0($v0)
    ctx->pc = 0x1b2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953744), GPR_U32(ctx, 16));
    // 0x1b2d5c: 0xa0830024  sb          $v1, 0x24($a0)
    ctx->pc = 0x1b2d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
label_1b2d60:
    // 0x1b2d60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2d64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2d68: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D68u;
            // 0x1b2d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B2D40u: goto label_1b2d40;
            case 0x1B2D60u: goto label_1b2d60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B2D70u;
}
