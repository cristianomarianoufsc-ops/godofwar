#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_0021a668
// Address: 0x21a668 - 0x21a67c
void FUN_0021a668_0x21a668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0021a668_0x21a668");
#endif

    ctx->pc = 0x21a668u;

    // 0x21a668: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x21a668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x21a66c: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x21a66cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x21a670: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x21a670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x21a674: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x21a674u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x21a678: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21a678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
}
