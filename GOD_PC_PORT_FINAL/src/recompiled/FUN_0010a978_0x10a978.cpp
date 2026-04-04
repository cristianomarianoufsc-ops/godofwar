#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0010a978
// Address: 0x10a978 - 0x10a988
void FUN_0010a978_0x10a978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010a978_0x10a978");
#endif

    ctx->pc = 0x10a978u;

    // 0x10a978: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x10a978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x10a97c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x10a97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x10a980: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x10a980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x10a984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10a984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
}
