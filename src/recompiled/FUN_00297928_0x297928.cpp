#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00297928
// Address: 0x297928 - 0x297938
void FUN_00297928_0x297928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00297928_0x297928");
#endif

    ctx->pc = 0x297928u;

    // 0x297928: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x297928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29792c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29792cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x297930: 0x8c434b48  lw          $v1, 0x4B48($v0)
    ctx->pc = 0x297930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19272)));
    // 0x297934: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
}
