#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001089A8
// Address: 0x1089a8 - 0x1089d8
void sub_001089A8_0x1089a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089A8_0x1089a8");
#endif

    ctx->pc = 0x1089a8u;

    // 0x1089a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1089a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1089ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1089acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1089b0: 0xc041d10  jal         func_107440
    ctx->pc = 0x1089B0u;
    SET_GPR_U32(ctx, 31, 0x1089B8u);
    ctx->pc = 0x107440u;
    if (runtime->hasFunction(0x107440u)) {
        auto targetFn = runtime->lookupFunction(0x107440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1089B8u; }
        if (ctx->pc != 0x1089B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_107440_0x107480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1089B8u; }
        if (ctx->pc != 0x1089B8u) { return; }
    }
    ctx->pc = 0x1089B8u;
    // 0x1089b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1089bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1089bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1089c0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1089C0u;
    {
        const bool branch_taken_0x1089c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1089c0) {
            ctx->pc = 0x1089C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1089C0u;
            // 0x1089c4: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1089C8u;
            goto label_1089c8;
        }
    }
    ctx->pc = 0x1089C8u;
label_1089c8:
    // 0x1089c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1089cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1089CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1089D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1089CCu;
            // 0x1089d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1089C8u: goto label_1089c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1089D4u;
    // 0x1089d4: 0x0  nop
    ctx->pc = 0x1089d4u;
    // NOP
}
