#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00257280
// Address: 0x257280 - 0x257290
void FUN_00257280_0x257280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00257280_0x257280");
#endif

    ctx->pc = 0x257280u;

    // 0x257280: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x257284: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x257284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x257288: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x257288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x25728c: 0x2571ffff  addiu       $s1, $t3, -0x1
    ctx->pc = 0x25728cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
}
