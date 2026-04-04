#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1fd320
// Address: 0x1fd320 - 0x1fd340
void entry_1fd320_0x1fd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1fd320_0x1fd340");
#endif

    ctx->pc = 0x1fd320u;

    // 0x1fd320: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1fd320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1fd324: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fd324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd328: 0x246396e8  addiu       $v1, $v1, -0x6918
    ctx->pc = 0x1fd328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940392));
    // 0x1fd32c: 0xfc800000  sd          $zero, 0x0($a0)
    ctx->pc = 0x1fd32cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 0));
    // 0x1fd330: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x1fd330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x1fd334: 0xfc800008  sd          $zero, 0x8($a0)
    ctx->pc = 0x1fd334u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 0));
    // 0x1fd338: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD338u;
            // 0x1fd33c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FD340u;
}
