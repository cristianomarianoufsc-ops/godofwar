#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00296a50
// Address: 0x296a50 - 0x296a58
void FUN_00296a50_0x296a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00296a50_0x296a50");
#endif

    ctx->pc = 0x296a50u;

    // 0x296a50: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x296a54: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
}
