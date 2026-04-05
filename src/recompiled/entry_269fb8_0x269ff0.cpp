#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_269fb8
// Address: 0x269fb8 - 0x269ff0
void entry_269fb8_0x269ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_269fb8_0x269ff0");
#endif

    ctx->pc = 0x269fb8u;

    // 0x269fb8: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x269fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x269fbc: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x269fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x269fc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x269fc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x269fc4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x269FC4u;
    {
        const bool branch_taken_0x269fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FC4u;
            // 0x269fc8: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fc4) {
            ctx->pc = 0x269FD0u;
            goto label_269fd0;
        }
    }
    ctx->pc = 0x269FCCu;
    // 0x269fcc: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x269fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269fd0:
    // 0x269fd0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x269fd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x269fd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x269fd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x269fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x269fdc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x269fdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x269fe0: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x269fe0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x269fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x269FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x269FE4u;
            // 0x269fe8: 0x46020029  min.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x269FD0u: goto label_269fd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x269FECu;
    // 0x269fec: 0x0  nop
    ctx->pc = 0x269fecu;
    // NOP
}
