#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_28c0c8
// Address: 0x28c0c8 - 0x28c0f8
void entry_28c0c8_0x28c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_28c0c8_0x28c0f8");
#endif

    ctx->pc = 0x28c0c8u;

    // 0x28c0c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x28c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x28c0cc: 0x3c0441c6  lui         $a0, 0x41C6
    ctx->pc = 0x28c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16838 << 16));
    // 0x28c0d0: 0x8c454294  lw          $a1, 0x4294($v0)
    ctx->pc = 0x28c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x28c0d4: 0x34844e6d  ori         $a0, $a0, 0x4E6D
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20077);
    // 0x28c0d8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x28c0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x28c0dc: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x28c0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x28c0e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28c0e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28c0e4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x28c0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28c0e8: 0x24633039  addiu       $v1, $v1, 0x3039
    ctx->pc = 0x28c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12345));
    // 0x28c0ec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28c0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x28c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28C0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0F0u;
            // 0x28c0f4: 0xaca30058  sw          $v1, 0x58($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C0F8u;
}
