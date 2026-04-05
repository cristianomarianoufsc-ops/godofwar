#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00243ec0
// Address: 0x243ec0 - 0x243ef8
void FUN_00243ec0_0x243ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00243ec0_0x243ec0");
#endif

    ctx->pc = 0x243ec0u;

    // 0x243ec0: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x243ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x243ec4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x243ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x243ec8: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x243ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x243ecc: 0x8c4700b0  lw          $a3, 0xB0($v0)
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x243ed0: 0x70672389  pcpyld      $a0, $v1, $a3
    ctx->pc = 0x243ed0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 7)));
    // 0x243ed4: 0x8c4800ac  lw          $t0, 0xAC($v0)
    ctx->pc = 0x243ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x243ed8: 0x8c4700b8  lw          $a3, 0xB8($v0)
    ctx->pc = 0x243ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x243edc: 0x71071b89  pcpyld      $v1, $t0, $a3
    ctx->pc = 0x243edcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x243ee0: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x243ee0u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x243ee4: 0x700314a9  por         $v0, $zero, $v1
    ctx->pc = 0x243ee4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x243ee8: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x243ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x243eec: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x243eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x243ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x243EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EF0u;
            // 0x243ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243EF8u;
}
