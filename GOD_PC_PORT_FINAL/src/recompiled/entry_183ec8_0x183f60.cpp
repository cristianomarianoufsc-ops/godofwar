#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183ec8
// Address: 0x183ec8 - 0x183f60
void entry_183ec8_0x183f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183ec8_0x183f60");
#endif

    ctx->pc = 0x183ec8u;

    // 0x183ec8: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x183ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x183ecc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x183eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x183ed0: 0x460c0044  c1          0xC0044
    ctx->pc = 0x183ed0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x183ed4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x183ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x183ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183edc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x183edcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x183ee0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x183ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x183ee4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x183ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x183ee8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x183ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x183eec: 0x46010044  c1          0x10044
    ctx->pc = 0x183eecu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x183ef0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x183ef0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x183ef4: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x183ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x183ef8: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x183ef8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x183efc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x183efcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x183f00: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x183f00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x183f04: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x183f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x183f08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x183f08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x183f0c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x183f0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x183f10: 0x46026080  add.s       $f2, $f12, $f2
    ctx->pc = 0x183f10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x183f14: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x183f14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x183f18: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x183f18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x183f1c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x183f1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x183f20: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x183f20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x183f24: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x183f24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x183f28: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x183f28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x183f2c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x183f2cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x183f30: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x183f30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x183f34: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x183f34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x183f38: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x183f38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x183f3c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x183f3cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x183f40: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x183f40u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x183f44: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x183f44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x183f48: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x183f48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x183f4c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x183f4cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x183f50: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x183f50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x183f54: 0x3e00008  jr          $ra
    ctx->pc = 0x183F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F54u;
            // 0x183f58: 0x46040002  mul.s       $f0, $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183F5Cu;
    // 0x183f5c: 0x0  nop
    ctx->pc = 0x183f5cu;
    // NOP
}
