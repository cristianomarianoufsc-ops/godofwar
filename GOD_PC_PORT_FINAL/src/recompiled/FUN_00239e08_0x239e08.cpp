#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00239e08
// Address: 0x239e08 - 0x239e58
void FUN_00239e08_0x239e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00239e08_0x239e08");
#endif

    ctx->pc = 0x239e08u;

    // 0x239e08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x239e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x239e0c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x239e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x239e10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x239e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e14: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x239e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x239e18: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x239e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x239e1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x239e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x239e20: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x239e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x239e24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x239e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x239e28: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x239e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x239e2c: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x239e2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x239e30: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x239e30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e34: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x239e34u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x239e38: 0xa3a20002  sb          $v0, 0x2($sp)
    ctx->pc = 0x239e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e3c: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x239e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x239e40: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x239e40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x239e44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x239e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239e48: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x239e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x239e4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x239e4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x239e50: 0x3e00008  jr          $ra
    ctx->pc = 0x239E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239E50u;
            // 0x239e54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239E58u;
}
