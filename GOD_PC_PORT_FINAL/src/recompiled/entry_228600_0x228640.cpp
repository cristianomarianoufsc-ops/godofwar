#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_228600
// Address: 0x228600 - 0x228640
void entry_228600_0x228640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_228600_0x228640");
#endif

    ctx->pc = 0x228600u;

    // 0x228600: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x228600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x228604: 0x24830018  addiu       $v1, $a0, 0x18
    ctx->pc = 0x228604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x228608: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x228608u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x22860c: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x22860cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x228610: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x228610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x228614: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x228614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x228618: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x228618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x22861c: 0x24c6a2c0  addiu       $a2, $a2, -0x5D40
    ctx->pc = 0x22861cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943424));
    // 0x228620: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x228620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x228624: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x228624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228628: 0xac850020  sw          $a1, 0x20($a0)
    ctx->pc = 0x228628u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
    // 0x22862c: 0xaca50004  sw          $a1, 0x4($a1)
    ctx->pc = 0x22862cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 5));
    // 0x228630: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x228630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x228634: 0x3e00008  jr          $ra
    ctx->pc = 0x228634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228634u;
            // 0x228638: 0xa0800000  sb          $zero, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22863Cu;
    // 0x22863c: 0x0  nop
    ctx->pc = 0x22863cu;
    // NOP
}
