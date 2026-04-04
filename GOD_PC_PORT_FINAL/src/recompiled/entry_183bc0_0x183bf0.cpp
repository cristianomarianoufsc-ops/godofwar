#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_183bc0
// Address: 0x183bc0 - 0x183bf0
void entry_183bc0_0x183bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_183bc0_0x183bf0");
#endif

    ctx->pc = 0x183bc0u;

    // 0x183bc0: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x183bc0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x183bc4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x183bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x183bc8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x183bc8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bcc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x183bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x183bd0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x183bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x183bd4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x183bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x183bd8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x183bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x183bdc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x183bdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x183be0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183be4: 0x3e00008  jr          $ra
    ctx->pc = 0x183BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x183BECu;
    // 0x183bec: 0x0  nop
    ctx->pc = 0x183becu;
    // NOP
}
