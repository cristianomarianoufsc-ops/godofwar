#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002a5020
// Address: 0x2a5020 - 0x2a5028
void FUN_002a5020_0x2a5020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002a5020_0x2a5020");
#endif

    ctx->pc = 0x2a5020u;

    // 0x2a5020: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a5020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2a5024: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
}
