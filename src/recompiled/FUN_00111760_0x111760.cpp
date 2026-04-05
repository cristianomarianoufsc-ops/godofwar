#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00111760
// Address: 0x111760 - 0x111780
void FUN_00111760_0x111760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00111760_0x111760");
#endif

    ctx->pc = 0x111760u;

    // 0x111760: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x111760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x111764: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x111764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x111768: 0xe7b80130  swc1        $f24, 0x130($sp)
    ctx->pc = 0x111768u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x11176c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x11176cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111770: 0xe7b70128  swc1        $f23, 0x128($sp)
    ctx->pc = 0x111770u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x111774: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x111774u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x111778: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x111778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x11177c: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x11177cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
}
