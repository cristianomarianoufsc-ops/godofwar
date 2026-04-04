#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2132c0
// Address: 0x2132c0 - 0x2132f0
void entry_2132c0_0x2132f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2132c0_0x2132f0");
#endif

    ctx->pc = 0x2132c0u;

    // 0x2132c0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2132c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2132c4: 0x8c627524  lw          $v0, 0x7524($v1)
    ctx->pc = 0x2132c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29988)));
    // 0x2132c8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2132C8u;
    {
        const bool branch_taken_0x2132c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2132c8) {
            ctx->pc = 0x2132CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2132C8u;
            // 0x2132cc: 0xc48001e4  lwc1        $f0, 0x1E4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2132DCu;
            goto label_2132dc;
        }
    }
    ctx->pc = 0x2132D0u;
    // 0x2132d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2132d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2132d4: 0xac627524  sw          $v0, 0x7524($v1)
    ctx->pc = 0x2132d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 29988), GPR_U32(ctx, 2));
    // 0x2132d8: 0xc48001e4  lwc1        $f0, 0x1E4($a0)
    ctx->pc = 0x2132d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2132dc:
    // 0x2132dc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2132e0: 0x24627520  addiu       $v0, $v1, 0x7520
    ctx->pc = 0x2132e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29984));
    // 0x2132e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2132E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2132E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2132E4u;
            // 0x2132e8: 0xe4607520  swc1        $f0, 0x7520($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 29984), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2132DCu: goto label_2132dc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2132ECu;
    // 0x2132ec: 0x0  nop
    ctx->pc = 0x2132ecu;
    // NOP
}
