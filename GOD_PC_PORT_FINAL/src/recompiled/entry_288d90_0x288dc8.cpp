#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_288d90
// Address: 0x288d90 - 0x288dc8
void entry_288d90_0x288dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_288d90_0x288dc8");
#endif

    ctx->pc = 0x288d90u;

    // 0x288d90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x288d90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x288d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x288d98: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x288d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288d9c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x288d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x288da0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x288da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x288da4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x288da4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x288da8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x288da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x288dac: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x288dacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x288db0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x288db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x288db4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x288db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x288db8: 0xa22025  or          $a0, $a1, $v0
    ctx->pc = 0x288db8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x288dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x288DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x288DBCu;
            // 0x288dc0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x288DC4u;
    // 0x288dc4: 0x0  nop
    ctx->pc = 0x288dc4u;
    // NOP
}
