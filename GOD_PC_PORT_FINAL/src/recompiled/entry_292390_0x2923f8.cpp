#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_292390
// Address: 0x292390 - 0x2923f8
void entry_292390_0x2923f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_292390_0x2923f8");
#endif

    ctx->pc = 0x292390u;

    // 0x292390: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x292390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x292394: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x292394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x292398: 0x3c080029  lui         $t0, 0x29
    ctx->pc = 0x292398u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)41 << 16));
    // 0x29239c: 0x3c090029  lui         $t1, 0x29
    ctx->pc = 0x29239cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)41 << 16));
    // 0x2923a0: 0x2442a3d0  addiu       $v0, $v0, -0x5C30
    ctx->pc = 0x2923a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943696));
    // 0x2923a4: 0x2463a438  addiu       $v1, $v1, -0x5BC8
    ctx->pc = 0x2923a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943800));
    // 0x2923a8: 0x2508a4b8  addiu       $t0, $t0, -0x5B48
    ctx->pc = 0x2923a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943928));
    // 0x2923ac: 0x2529a520  addiu       $t1, $t1, -0x5AE0
    ctx->pc = 0x2923acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944032));
    // 0x2923b0: 0xac870054  sw          $a3, 0x54($a0)
    ctx->pc = 0x2923b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 7));
    // 0x2923b4: 0xa485000c  sh          $a1, 0xC($a0)
    ctx->pc = 0x2923b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x2923b8: 0xa486000e  sh          $a2, 0xE($a0)
    ctx->pc = 0x2923b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 6));
    // 0x2923bc: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x2923bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
    // 0x2923c0: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x2923c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x2923c4: 0xac880028  sw          $t0, 0x28($a0)
    ctx->pc = 0x2923c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 8));
    // 0x2923c8: 0xac89002c  sw          $t1, 0x2C($a0)
    ctx->pc = 0x2923c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 9));
    // 0x2923cc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2923ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2923d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2923d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2923d4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2923d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2923d8: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2923d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x2923dc: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2923dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2923e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2923E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2923E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2923E0u;
            // 0x2923e4: 0xac84001c  sw          $a0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2923E8u;
    // 0x2923e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2923e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2923ec: 0x0  nop
    ctx->pc = 0x2923ecu;
    // NOP
    // 0x2923f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2923f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2923f4: 0x0  nop
    ctx->pc = 0x2923f4u;
    // NOP
}
