#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_11ee40
// Address: 0x11ee40 - 0x11ee88
void entry_11ee40_0x11ee88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_11ee40_0x11ee88");
#endif

    ctx->pc = 0x11ee40u;

    // 0x11ee40: 0x8c821060  lw          $v0, 0x1060($a0)
    ctx->pc = 0x11ee40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4192)));
    // 0x11ee44: 0x21823  negu        $v1, $v0
    ctx->pc = 0x11ee44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11ee48: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x11ee48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x11ee4c: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11ee50: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EE50u;
    {
        const bool branch_taken_0x11ee50 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11EE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE50u;
            // 0x11ee54: 0xac821060  sw          $v0, 0x1060($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ee50) {
            ctx->pc = 0x11EE60u;
            goto label_11ee60;
        }
    }
    ctx->pc = 0x11EE58u;
    // 0x11ee58: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE58u;
            // 0x11ee5c: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EE60u: goto label_11ee60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EE60u;
label_11ee60:
    // 0x11ee60: 0x70601804  plzcw       $v1, $v1
    ctx->pc = 0x11ee60u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 3, out); }
    // 0x11ee64: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x11ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11ee68: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x11ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11ee6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11ee70: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11ee70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ee74: 0x3e00008  jr          $ra
    ctx->pc = 0x11EE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EE74u;
            // 0x11ee78: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EE60u: goto label_11ee60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EE7Cu;
    // 0x11ee7c: 0x0  nop
    ctx->pc = 0x11ee7cu;
    // NOP
    // 0x11ee80: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x11ee80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x11ee84: 0x0  nop
    ctx->pc = 0x11ee84u;
    // NOP
}
