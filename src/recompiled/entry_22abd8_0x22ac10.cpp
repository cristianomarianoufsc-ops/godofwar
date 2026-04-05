#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_22abd8
// Address: 0x22abd8 - 0x22ac10
void entry_22abd8_0x22ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_22abd8_0x22ac10");
#endif

    ctx->pc = 0x22abd8u;

    // 0x22abd8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x22abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x22abdc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x22ABDCu;
    {
        const bool branch_taken_0x22abdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22abdc) {
            ctx->pc = 0x22ABE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABDCu;
            // 0x22abe0: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22AC00u;
            goto label_22ac00;
        }
    }
    ctx->pc = 0x22ABE4u;
    // 0x22abe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22abe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22abe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22abe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22abec: 0xe48c0034  swc1        $f12, 0x34($a0)
    ctx->pc = 0x22abecu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x22abf0: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x22abf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x22abf4: 0x3e00008  jr          $ra
    ctx->pc = 0x22ABF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ABF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ABF4u;
            // 0x22abf8: 0xac800054  sw          $zero, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AC00u: goto label_22ac00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22ABFCu;
    // 0x22abfc: 0x0  nop
    ctx->pc = 0x22abfcu;
    // NOP
label_22ac00:
    // 0x22ac00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22ac00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22ac04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22ac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ac08: 0x3e00008  jr          $ra
    ctx->pc = 0x22AC08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22AC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22AC08u;
            // 0x22ac0c: 0xe4800030  swc1        $f0, 0x30($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22AC00u: goto label_22ac00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22AC10u;
}
