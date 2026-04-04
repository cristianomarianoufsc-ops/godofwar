#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0020cab0
// Address: 0x20cab0 - 0x20cac8
void FUN_0020cab0_0x20cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0020cab0_0x20cab0");
#endif

    ctx->pc = 0x20cab0u;

    // 0x20cab0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x20cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20cab4: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x20cab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x20cab8: 0x8c42bde0  lw          $v0, -0x4220($v0)
    ctx->pc = 0x20cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x20cabc: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x20cabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x20cac0: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x20cac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x20cac4: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x20cac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
}
