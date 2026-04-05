#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002117f8
// Address: 0x2117f8 - 0x211810
void FUN_002117f8_0x2117f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002117f8_0x2117f8");
#endif

    ctx->pc = 0x2117f8u;

    // 0x2117f8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x2117f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x2117fc: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x2117fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x211800: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x211800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x211804: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x211804u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211808: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x211808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x21180c: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21180cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
}
