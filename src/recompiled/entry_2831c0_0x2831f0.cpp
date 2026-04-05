#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2831c0
// Address: 0x2831c0 - 0x2831f0
void entry_2831c0_0x2831f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2831c0_0x2831f0");
#endif

    ctx->pc = 0x2831c0u;

    // 0x2831c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2831c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2831c4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2831c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2831c8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2831c8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2831cc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2831ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2831d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2831D0u;
    {
        const bool branch_taken_0x2831d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2831d0) {
            ctx->pc = 0x2831D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2831D0u;
            // 0x2831d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2831D8u;
            goto label_2831d8;
        }
    }
    ctx->pc = 0x2831D8u;
label_2831d8:
    // 0x2831d8: 0x1012  mflo        $v0
    ctx->pc = 0x2831d8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2831dc: 0x451818  mult        $v1, $v0, $a1
    ctx->pc = 0x2831dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2831e0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2831e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2831e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2831E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2831E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2831E4u;
            // 0x2831e8: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2831D8u: goto label_2831d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2831ECu;
    // 0x2831ec: 0x0  nop
    ctx->pc = 0x2831ecu;
    // NOP
}
