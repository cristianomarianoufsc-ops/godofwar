#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22d608
// Address: 0x22d608 - 0x22d638
void entry_22d608_0x22d638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22d608_0x22d638");
#endif

    ctx->pc = 0x22d608u;

    // 0x22d608: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x22d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22d60c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d610: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x22d610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d614: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x22d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x22d618: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x22d618u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22d61c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22d620: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22d624: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22d624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22d628: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x22d628u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x22d62c: 0x3e00008  jr          $ra
    ctx->pc = 0x22D62Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D62Cu;
            // 0x22d630: 0xac801270  sw          $zero, 0x1270($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22D634u;
    // 0x22d634: 0x0  nop
    ctx->pc = 0x22d634u;
    // NOP
}
