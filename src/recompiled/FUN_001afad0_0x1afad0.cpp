#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001afad0
// Address: 0x1afad0 - 0x1afae0
void FUN_001afad0_0x1afad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001afad0_0x1afad0");
#endif

    ctx->pc = 0x1afad0u;

    // 0x1afad0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1afad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1afad4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x1afad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1afad8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1afad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1afadc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1afadcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
}
