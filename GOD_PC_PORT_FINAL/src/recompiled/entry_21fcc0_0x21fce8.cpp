#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_21fcc0
// Address: 0x21fcc0 - 0x21fce8
void entry_21fcc0_0x21fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_21fcc0_0x21fce8");
#endif

    ctx->pc = 0x21fcc0u;

    // 0x21fcc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21fcc4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x21fcc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fcc8: 0xc440e5a4  lwc1        $f0, -0x1A5C($v0)
    ctx->pc = 0x21fcc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294960548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21fcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21fcd0: 0x0  nop
    ctx->pc = 0x21fcd0u;
    // NOP
    // 0x21fcd4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x21FCD4u;
    {
        const bool branch_taken_0x21fcd4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FCD4u;
            // 0x21fcd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcd4) {
            ctx->pc = 0x21FCE0u;
            goto label_21fce0;
        }
    }
    ctx->pc = 0x21FCDCu;
    // 0x21fcdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21fcdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21fce0:
    // 0x21fce0: 0x3e00008  jr          $ra
    ctx->pc = 0x21FCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FCE0u: goto label_21fce0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21FCE8u;
}
