#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_173510
// Address: 0x173510 - 0x173528
void entry_173510_0x173528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_173510_0x173528");
#endif

    ctx->pc = 0x173510u;

    // 0x173510: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x173510u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x173514: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x173514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x173518: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x173518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x17351c: 0x3e00008  jr          $ra
    ctx->pc = 0x17351Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17351Cu;
            // 0x173520: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173524u;
    // 0x173524: 0x0  nop
    ctx->pc = 0x173524u;
    // NOP
}
