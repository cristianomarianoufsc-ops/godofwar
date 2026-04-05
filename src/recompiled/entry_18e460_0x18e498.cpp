#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_18e460
// Address: 0x18e460 - 0x18e498
void entry_18e460_0x18e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_18e460_0x18e498");
#endif

    ctx->pc = 0x18e460u;

    // 0x18e460: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x18e460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x18e464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x18e464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18e468: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x18e468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x18e46c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x18e46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18e470: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x18e474: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18e474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18e478: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x18e478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x18e47c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18e47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18e480: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x18e480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x18e484: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x18e484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x18e488: 0xe482001c  swc1        $f2, 0x1C($a0)
    ctx->pc = 0x18e488u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x18e48c: 0x3e00008  jr          $ra
    ctx->pc = 0x18E48Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18E48Cu;
            // 0x18e490: 0xe4830020  swc1        $f3, 0x20($a0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18E494u;
    // 0x18e494: 0x0  nop
    ctx->pc = 0x18e494u;
    // NOP
}
