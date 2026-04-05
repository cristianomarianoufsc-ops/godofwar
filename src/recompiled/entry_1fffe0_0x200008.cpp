#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1fffe0
// Address: 0x1fffe0 - 0x200008
void entry_1fffe0_0x200008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1fffe0_0x200008");
#endif

    ctx->pc = 0x1fffe0u;

    // 0x1fffe0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fffe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fffe4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1fffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1fffe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fffe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fffec: 0x8c44e420  lw          $a0, -0x1BE0($v0)
    ctx->pc = 0x1fffecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960160)));
    // 0x1ffff0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ffff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ffff4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x1FFFF4u;
    SET_GPR_U32(ctx, 31, 0x1FFFFCu);
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFFCu; }
        if (ctx->pc != 0x1FFFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FFFFCu; }
        if (ctx->pc != 0x1FFFFCu) { return; }
    }
    ctx->pc = 0x1FFFFCu;
    // 0x1ffffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ffffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200000: 0x3e00008  jr          $ra
    ctx->pc = 0x200000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200000u;
            // 0x200004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200008u;
}
