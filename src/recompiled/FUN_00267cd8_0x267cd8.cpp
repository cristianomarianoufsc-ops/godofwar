#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00267cd8
// Address: 0x267cd8 - 0x267cf8
void FUN_00267cd8_0x267cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00267cd8_0x267cd8");
#endif

    ctx->pc = 0x267cd8u;

    // 0x267cd8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x267cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x267cdc: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x267cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x267ce0: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x267ce0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x267ce4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x267ce4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267ce8: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x267ce8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x267cec: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x267cecu;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x267cf0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x267cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x267cf4: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x267cf4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
}
