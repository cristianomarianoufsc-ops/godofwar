#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f1a80
// Address: 0x1f1a80 - 0x1f1ab8
void entry_1f1a80_0x1f1ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f1a80_0x1f1ab8");
#endif

    ctx->pc = 0x1f1a80u;

    // 0x1f1a80: 0x24a30030  addiu       $v1, $a1, 0x30
    ctx->pc = 0x1f1a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1f1a84: 0x24820070  addiu       $v0, $a0, 0x70
    ctx->pc = 0x1f1a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1f1a88: 0x248600f0  addiu       $a2, $a0, 0xF0
    ctx->pc = 0x1f1a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
    // 0x1f1a8c: 0x0  nop
    ctx->pc = 0x1f1a8cu;
    // NOP
label_1f1a90:
    // 0x1f1a90: 0x78470000  lq          $a3, 0x0($v0)
    ctx->pc = 0x1f1a90u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1a94: 0x78480010  lq          $t0, 0x10($v0)
    ctx->pc = 0x1f1a94u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1a98: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1f1a98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1f1a9c: 0x7c680010  sq          $t0, 0x10($v1)
    ctx->pc = 0x1f1a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 8));
    // 0x1f1aa0: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f1aa4: 0x1446fffa  bne         $v0, $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F1AA4u;
    {
        const bool branch_taken_0x1f1aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F1AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AA4u;
            // 0x1f1aa8: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1aa4) {
            ctx->pc = 0x1F1A90u;
            runtime->cooperativeGuestYield();
            goto label_1f1a90;
        }
    }
    ctx->pc = 0x1F1AACu;
    // 0x1f1aac: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x1f1aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1AB0u;
            // 0x1f1ab4: 0xe4a000b4  swc1        $f0, 0xB4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F1A90u: goto label_1f1a90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1AB8u;
}
