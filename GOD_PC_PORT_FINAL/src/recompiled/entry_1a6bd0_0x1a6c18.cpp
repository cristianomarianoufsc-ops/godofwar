#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a6bd0
// Address: 0x1a6bd0 - 0x1a6c18
void entry_1a6bd0_0x1a6c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a6bd0_0x1a6c18");
#endif

    ctx->pc = 0x1a6bd0u;

    // 0x1a6bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a6bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6bd4: 0x0  nop
    ctx->pc = 0x1a6bd4u;
    // NOP
label_1a6bd8:
    // 0x1a6bd8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a6bdc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1a6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a6be0: 0x24425078  addiu       $v0, $v0, 0x5078
    ctx->pc = 0x1a6be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20600));
    // 0x1a6be4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a6be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a6be8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1a6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a6bec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1a6becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a6bf0: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x1a6bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a6bf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a6bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a6bf8: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x1a6bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x1a6bfc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1a6bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1a6c00: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x1a6c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a6c04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1A6C04u;
    {
        const bool branch_taken_0x1a6c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A6C04u;
            // 0x1a6c08: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6c04) {
            ctx->pc = 0x1A6BD8u;
            runtime->cooperativeGuestYield();
            goto label_1a6bd8;
        }
    }
    ctx->pc = 0x1A6C0Cu;
    // 0x1a6c0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6C0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A6BD8u: goto label_1a6bd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A6C14u;
    // 0x1a6c14: 0x0  nop
    ctx->pc = 0x1a6c14u;
    // NOP
}
