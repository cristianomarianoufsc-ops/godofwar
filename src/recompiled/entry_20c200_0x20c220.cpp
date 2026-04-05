#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20c200
// Address: 0x20c200 - 0x20c220
void entry_20c200_0x20c220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20c200_0x20c220");
#endif

    ctx->pc = 0x20c200u;

    // 0x20c200: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x20c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20c204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x20c204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c208: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20c208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20c20c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20c20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20c210: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x20c210u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x20c214: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x20c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x20c218: 0x3e00008  jr          $ra
    ctx->pc = 0x20C218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C218u;
            // 0x20c21c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20C220u;
}
