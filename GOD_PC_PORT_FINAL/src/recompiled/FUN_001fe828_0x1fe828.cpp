#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001fe828
// Address: 0x1fe828 - 0x1fe84c
void FUN_001fe828_0x1fe828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001fe828_0x1fe828");
#endif

    ctx->pc = 0x1fe828u;

    // 0x1fe828: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x1fe828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x1fe82c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1fe82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fe830: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x1fe830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x1fe834: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x1fe834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x1fe838: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe838u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe83c: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x1fe83cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1fe840: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1fe840u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe844: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1fe844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x1fe848: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1fe848u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
}
