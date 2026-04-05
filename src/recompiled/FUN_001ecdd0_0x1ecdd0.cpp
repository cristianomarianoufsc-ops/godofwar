#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_001ecdd0
// Address: 0x1ecdd0 - 0x1ecdec
void FUN_001ecdd0_0x1ecdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ecdd0_0x1ecdd0");
#endif

    ctx->pc = 0x1ecdd0u;

    // 0x1ecdd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ecdd4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECDD4u;
    {
        const bool branch_taken_0x1ecdd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDD4u;
            // 0x1ecdd8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecdd4) {
            ctx->pc = 0x1ECDE4u;
            goto label_1ecde4;
        }
    }
    ctx->pc = 0x1ECDDCu;
    // 0x1ecddc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1ECDDCu;
    {
        const bool branch_taken_0x1ecddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECDDCu;
            // 0x1ecde0: 0xc480017c  lwc1        $f0, 0x17C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecddc) {
            ctx->pc = 0x1ECDF8u;
            return;
        }
    }
    ctx->pc = 0x1ECDE4u;
label_1ecde4:
    // 0x1ecde4: 0xc481017c  lwc1        $f1, 0x17C($a0)
    ctx->pc = 0x1ecde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ecde8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ecde8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
}
