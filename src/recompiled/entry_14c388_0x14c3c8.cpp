#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_14c388
// Address: 0x14c388 - 0x14c3c8
void entry_14c388_0x14c3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_14c388_0x14c3c8");
#endif

    ctx->pc = 0x14c388u;

    // 0x14c388: 0x73f00  sll         $a3, $a3, 28
    ctx->pc = 0x14c388u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 28));
    // 0x14c38c: 0x84680  sll         $t0, $t0, 26
    ctx->pc = 0x14c38cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 26));
    // 0x14c390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x14c390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c394: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x14c394u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x14c398: 0x94bc0  sll         $t1, $t1, 15
    ctx->pc = 0x14c398u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 15));
    // 0x14c39c: 0xb5bc0  sll         $t3, $t3, 15
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 15));
    // 0x14c3a0: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x14c3a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x14c3a4: 0xa5380  sll         $t2, $t2, 14
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 14));
    // 0x14c3a8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x14c3a8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x14c3ac: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x14c3acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x14c3b0: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x14c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x14c3b4: 0xac8b0000  sw          $t3, 0x0($a0)
    ctx->pc = 0x14c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 11));
    // 0x14c3b8: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x14c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x14c3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x14C3BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3BCu;
            // 0x14c3c0: 0xac860008  sw          $a2, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14C3C4u;
    // 0x14c3c4: 0x0  nop
    ctx->pc = 0x14c3c4u;
    // NOP
}
