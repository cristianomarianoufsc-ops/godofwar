#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23ca90
// Address: 0x23ca90 - 0x23cab8
void entry_23ca90_0x23cab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23ca90_0x23cab8");
#endif

    ctx->pc = 0x23ca90u;

    // 0x23ca90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23ca94: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x23ca94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x23ca98: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x23ca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23ca9c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x23ca9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x23caa0: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x23caa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23caa4: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x23caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23caa8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23caa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x23caac: 0x3e00008  jr          $ra
    ctx->pc = 0x23CAACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23CAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23CAACu;
            // 0x23cab0: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23CAB4u;
    // 0x23cab4: 0x0  nop
    ctx->pc = 0x23cab4u;
    // NOP
}
