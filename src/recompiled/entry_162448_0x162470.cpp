#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_162448
// Address: 0x162448 - 0x162470
void entry_162448_0x162470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_162448_0x162470");
#endif

    ctx->pc = 0x162448u;

    // 0x162448: 0x8c820148  lw          $v0, 0x148($a0)
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 328)));
    // 0x16244c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x16244cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x162450: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x162450u;
    {
        const bool branch_taken_0x162450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162450u;
            // 0x162454: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162450) {
            ctx->pc = 0x162460u;
            goto label_162460;
        }
    }
    ctx->pc = 0x162458u;
    // 0x162458: 0x3e00008  jr          $ra
    ctx->pc = 0x162458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162458u;
            // 0x16245c: 0xc4404a54  lwc1        $f0, 0x4A54($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162460u: goto label_162460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162460u;
label_162460:
    // 0x162460: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x162460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x162464: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x162464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162468: 0x3e00008  jr          $ra
    ctx->pc = 0x162468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x162460u: goto label_162460;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162470u;
}
