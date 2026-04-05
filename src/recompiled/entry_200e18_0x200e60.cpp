#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200e18
// Address: 0x200e18 - 0x200e60
void entry_200e18_0x200e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200e18_0x200e60");
#endif

    ctx->pc = 0x200e18u;

    // 0x200e18: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x200e18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e1c: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x200e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x200e20: 0x8ce20070  lw          $v0, 0x70($a3)
    ctx->pc = 0x200e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x200e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x200e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x200e2c: 0xace20070  sw          $v0, 0x70($a3)
    ctx->pc = 0x200e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 2));
label_200e30:
    // 0x200e30: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x200e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x200e34: 0x2405fffe  addiu       $a1, $zero, -0x2
    ctx->pc = 0x200e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x200e38: 0xc31018  mult        $v0, $a2, $v1
    ctx->pc = 0x200e38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200e3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x200e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x200e40: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x200e40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x200e44: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x200e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x200e48: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x200e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x200e4c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x200e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x200e50: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x200E50u;
    {
        const bool branch_taken_0x200e50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x200E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E50u;
            // 0x200e54: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e50) {
            ctx->pc = 0x200E30u;
            runtime->cooperativeGuestYield();
            goto label_200e30;
        }
    }
    ctx->pc = 0x200E58u;
    // 0x200e58: 0x3e00008  jr          $ra
    ctx->pc = 0x200E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200E30u: goto label_200e30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200E60u;
}
