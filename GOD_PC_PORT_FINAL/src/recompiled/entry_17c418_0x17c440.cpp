#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_17c418
// Address: 0x17c418 - 0x17c440
void entry_17c418_0x17c440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_17c418_0x17c440");
#endif

    ctx->pc = 0x17c418u;

    // 0x17c418: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17c418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c41c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17c41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c420: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x17c420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x17c424: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x17c424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x17c428: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x17c428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x17c42c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x17c42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x17c430: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x17c430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x17c434: 0x3e00008  jr          $ra
    ctx->pc = 0x17C434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C434u;
            // 0x17c438: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C43Cu;
    // 0x17c43c: 0x0  nop
    ctx->pc = 0x17c43cu;
    // NOP
}
