#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2910b0
// Address: 0x2910b0 - 0x2910d0
void entry_2910b0_0x2910d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2910b0_0x2910d0");
#endif

    ctx->pc = 0x2910b0u;

    // 0x2910b0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2910b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2910b4: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x2910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2910b8: 0x24a55a19  addiu       $a1, $a1, 0x5A19
    ctx->pc = 0x2910b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23065));
    // 0x2910bc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2910bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2910c0: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2910c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2910c4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2910c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2910c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2910C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2910CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2910C8u;
            // 0x2910cc: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2910D0u;
}
