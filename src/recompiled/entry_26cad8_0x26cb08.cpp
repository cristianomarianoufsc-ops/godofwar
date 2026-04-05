#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26cad8
// Address: 0x26cad8 - 0x26cb08
void entry_26cad8_0x26cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26cad8_0x26cb08");
#endif

    ctx->pc = 0x26cad8u;

    // 0x26cad8: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26cad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26cadc: 0x3c080031  lui         $t0, 0x31
    ctx->pc = 0x26cadcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)49 << 16));
    // 0x26cae0: 0x3c090031  lui         $t1, 0x31
    ctx->pc = 0x26cae0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)49 << 16));
    // 0x26cae4: 0x3c0a0031  lui         $t2, 0x31
    ctx->pc = 0x26cae4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49 << 16));
    // 0x26cae8: 0x3c0b0031  lui         $t3, 0x31
    ctx->pc = 0x26cae8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)49 << 16));
    // 0x26caec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26caf0: 0xac64a304  sw          $a0, -0x5CFC($v1)
    ctx->pc = 0x26caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943492), GPR_U32(ctx, 4));
    // 0x26caf4: 0xad05a308  sw          $a1, -0x5CF8($t0)
    ctx->pc = 0x26caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943496), GPR_U32(ctx, 5));
    // 0x26caf8: 0xad26a30c  sw          $a2, -0x5CF4($t1)
    ctx->pc = 0x26caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294943500), GPR_U32(ctx, 6));
    // 0x26cafc: 0xad47a310  sw          $a3, -0x5CF0($t2)
    ctx->pc = 0x26cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294943504), GPR_U32(ctx, 7));
    // 0x26cb00: 0x3e00008  jr          $ra
    ctx->pc = 0x26CB00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CB00u;
            // 0x26cb04: 0xad62a314  sw          $v0, -0x5CEC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294943508), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CB08u;
}
