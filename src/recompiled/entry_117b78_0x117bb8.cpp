#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_117b78
// Address: 0x117b78 - 0x117bb8
void entry_117b78_0x117bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_117b78_0x117bb8");
#endif

    ctx->pc = 0x117b78u;

    // 0x117b78: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x117b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x117b7c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x117b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x117b80: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x117B80u;
    {
        const bool branch_taken_0x117b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x117b80) {
            ctx->pc = 0x117BACu;
            goto label_117bac;
        }
    }
    ctx->pc = 0x117B88u;
    // 0x117b88: 0xe44c0020  swc1        $f12, 0x20($v0)
    ctx->pc = 0x117b88u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x117b8c: 0x0  nop
    ctx->pc = 0x117b8cu;
    // NOP
label_117b90:
    // 0x117b90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x117b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117b94: 0x0  nop
    ctx->pc = 0x117b94u;
    // NOP
    // 0x117b98: 0x0  nop
    ctx->pc = 0x117b98u;
    // NOP
    // 0x117b9c: 0x0  nop
    ctx->pc = 0x117b9cu;
    // NOP
    // 0x117ba0: 0x0  nop
    ctx->pc = 0x117ba0u;
    // NOP
    // 0x117ba4: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x117BA4u;
    {
        const bool branch_taken_0x117ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x117ba4) {
            ctx->pc = 0x117BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117BA4u;
            // 0x117ba8: 0xe44c0020  swc1        $f12, 0x20($v0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x117B90u;
            runtime->cooperativeGuestYield();
            goto label_117b90;
        }
    }
    ctx->pc = 0x117BACu;
label_117bac:
    // 0x117bac: 0x3e00008  jr          $ra
    ctx->pc = 0x117BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x117B90u: goto label_117b90;
            case 0x117BACu: goto label_117bac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x117BB4u;
    // 0x117bb4: 0x0  nop
    ctx->pc = 0x117bb4u;
    // NOP
}
