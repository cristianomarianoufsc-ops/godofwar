#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14b8c8
// Address: 0x14b8c8 - 0x14b910
void entry_14b8c8_0x14b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14b8c8_0x14b910");
#endif

    ctx->pc = 0x14b8c8u;

    // 0x14b8c8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x14b8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14b8cc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x14b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x14b8d0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x14b8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b8d4: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b8d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x14b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x14b8dc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x14b8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x14b8e0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x14b8e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x14b8e4: 0x94a30002  lhu         $v1, 0x2($a1)
    ctx->pc = 0x14b8e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x14b8e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14b8e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8ec: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x14b8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b8f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14b8f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8f4: 0xc3400b  movn        $t0, $a2, $v1
    ctx->pc = 0x14b8f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
    // 0x14b8f8: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x14b8f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b8fc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x14b8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x14b900: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x14b900u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14b904: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x14b904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x14b908: 0x3e00008  jr          $ra
    ctx->pc = 0x14B908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B908u;
            // 0x14b90c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B910u;
}
