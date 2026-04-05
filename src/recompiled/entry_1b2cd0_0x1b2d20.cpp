#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1b2cd0
// Address: 0x1b2cd0 - 0x1b2d20
void entry_1b2cd0_0x1b2d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1b2cd0_0x1b2d20");
#endif

    ctx->pc = 0x1b2cd0u;

    // 0x1b2cd0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b2cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cd4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b2cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cd8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cdc: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1b2cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1b2ce0: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x1b2ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x1b2ce4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1b2ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1b2ce8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1b2ce8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cec: 0x3c09002a  lui         $t1, 0x2A
    ctx->pc = 0x1b2cecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cf0: 0x3c0a002a  lui         $t2, 0x2A
    ctx->pc = 0x1b2cf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)42 << 16));
    // 0x1b2cf4: 0xac40cb04  sw          $zero, -0x34FC($v0)
    ctx->pc = 0x1b2cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953732), GPR_U32(ctx, 0));
    // 0x1b2cf8: 0xac60caf4  sw          $zero, -0x350C($v1)
    ctx->pc = 0x1b2cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953716), GPR_U32(ctx, 0));
    // 0x1b2cfc: 0xac80caf8  sw          $zero, -0x3508($a0)
    ctx->pc = 0x1b2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294953720), GPR_U32(ctx, 0));
    // 0x1b2d00: 0xaca0cb14  sw          $zero, -0x34EC($a1)
    ctx->pc = 0x1b2d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953748), GPR_U32(ctx, 0));
    // 0x1b2d04: 0xacc0cb18  sw          $zero, -0x34E8($a2)
    ctx->pc = 0x1b2d04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294953752), GPR_U32(ctx, 0));
    // 0x1b2d08: 0xace0cb00  sw          $zero, -0x3500($a3)
    ctx->pc = 0x1b2d08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294953728), GPR_U32(ctx, 0));
    // 0x1b2d0c: 0xad00cae8  sw          $zero, -0x3518($t0)
    ctx->pc = 0x1b2d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294953704), GPR_U32(ctx, 0));
    // 0x1b2d10: 0xad20caec  sw          $zero, -0x3514($t1)
    ctx->pc = 0x1b2d10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294953708), GPR_U32(ctx, 0));
    // 0x1b2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2D14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D14u;
            // 0x1b2d18: 0xad40cafc  sw          $zero, -0x3504($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 4294953724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2D1Cu;
    // 0x1b2d1c: 0x0  nop
    ctx->pc = 0x1b2d1cu;
    // NOP
}
