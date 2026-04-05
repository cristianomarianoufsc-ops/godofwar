#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1483a0
// Address: 0x1483a0 - 0x1483e0
void entry_1483a0_0x1483e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1483a0_0x1483e0");
#endif

    ctx->pc = 0x1483a0u;

    // 0x1483a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1483a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1483a4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1483a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1483a8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1483a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1483ac: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1483acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1483b0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1483b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1483b4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1483b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1483b8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1483b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1483bc: 0xac40bffc  sw          $zero, -0x4004($v0)
    ctx->pc = 0x1483bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950908), GPR_U32(ctx, 0));
    // 0x1483c0: 0xac60c000  sw          $zero, -0x4000($v1)
    ctx->pc = 0x1483c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950912), GPR_U32(ctx, 0));
    // 0x1483c4: 0xac80c004  sw          $zero, -0x3FFC($a0)
    ctx->pc = 0x1483c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950916), GPR_U32(ctx, 0));
    // 0x1483c8: 0xaca0c008  sw          $zero, -0x3FF8($a1)
    ctx->pc = 0x1483c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950920), GPR_U32(ctx, 0));
    // 0x1483cc: 0xacc0c00c  sw          $zero, -0x3FF4($a2)
    ctx->pc = 0x1483ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294950924), GPR_U32(ctx, 0));
    // 0x1483d0: 0xace0c010  sw          $zero, -0x3FF0($a3)
    ctx->pc = 0x1483d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294950928), GPR_U32(ctx, 0));
    // 0x1483d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1483D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1483D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1483D4u;
            // 0x1483d8: 0xad00c014  sw          $zero, -0x3FEC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294950932), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1483DCu;
    // 0x1483dc: 0x0  nop
    ctx->pc = 0x1483dcu;
    // NOP
}
