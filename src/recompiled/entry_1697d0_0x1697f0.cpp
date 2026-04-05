#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1697d0
// Address: 0x1697d0 - 0x1697f0
void entry_1697d0_0x1697f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1697d0_0x1697f0");
#endif

    ctx->pc = 0x1697d0u;

    // 0x1697d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1697d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1697d4: 0xe48c0370  swc1        $f12, 0x370($a0)
    ctx->pc = 0x1697d4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 880), bits); }
    // 0x1697d8: 0xac82039c  sw          $v0, 0x39C($a0)
    ctx->pc = 0x1697d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 2));
    // 0x1697dc: 0xe48d0368  swc1        $f13, 0x368($a0)
    ctx->pc = 0x1697dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 872), bits); }
    // 0x1697e0: 0xe48e0374  swc1        $f14, 0x374($a0)
    ctx->pc = 0x1697e0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 884), bits); }
    // 0x1697e4: 0xe48f036c  swc1        $f15, 0x36C($a0)
    ctx->pc = 0x1697e4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 876), bits); }
    // 0x1697e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1697E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1697ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1697E8u;
            // 0x1697ec: 0xe4900378  swc1        $f16, 0x378($a0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 888), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1697F0u;
}
