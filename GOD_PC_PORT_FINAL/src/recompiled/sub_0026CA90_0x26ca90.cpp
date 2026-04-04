#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026CA90
// Address: 0x26ca90 - 0x26cad8
void sub_0026CA90_0x26ca90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026CA90_0x26ca90");
#endif

    ctx->pc = 0x26ca90u;

    // 0x26ca90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26ca90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26ca94: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x26ca94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ca98: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x26ca98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x26ca9c: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x26ca9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26caa0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x26caa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x26caa4: 0x24c5000c  addiu       $a1, $a2, 0xC
    ctx->pc = 0x26caa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x26caa8: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x26caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x26caac: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x26caacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26cab0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26cab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26cab4: 0x24040068  addiu       $a0, $zero, 0x68
    ctx->pc = 0x26cab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x26cab8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x26cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x26cabc: 0xc09b054  jal         func_26C150
    ctx->pc = 0x26CABCu;
    SET_GPR_U32(ctx, 31, 0x26CAC4u);
    ctx->pc = 0x26CAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26CABCu;
            // 0x26cac0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C150u;
    if (runtime->hasFunction(0x26C150u)) {
        auto targetFn = runtime->lookupFunction(0x26C150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAC4u; }
        if (ctx->pc != 0x26CAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C150_0x26c150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26CAC4u; }
        if (ctx->pc != 0x26CAC4u) { return; }
    }
    ctx->pc = 0x26CAC4u;
    // 0x26cac4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26cac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26cac8: 0x3e00008  jr          $ra
    ctx->pc = 0x26CAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26CACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26CAC8u;
            // 0x26cacc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26CAD0u;
    // 0x26cad0: 0x0  nop
    ctx->pc = 0x26cad0u;
    // NOP
    // 0x26cad4: 0x0  nop
    ctx->pc = 0x26cad4u;
    // NOP
}
