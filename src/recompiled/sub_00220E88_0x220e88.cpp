#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220E88
// Address: 0x220e88 - 0x220ec8
void sub_00220E88_0x220e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220E88_0x220e88");
#endif

    ctx->pc = 0x220e88u;

    // 0x220e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x220e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x220e8c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x220e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x220e90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220e94: 0x61c03  sra         $v1, $a2, 16
    ctx->pc = 0x220e94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 16));
    // 0x220e98: 0x700734a9  por         $a2, $zero, $a3
    ctx->pc = 0x220e98u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 7)));
    // 0x220e9c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x220e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x220ea0: 0x70083ca9  por         $a3, $zero, $t0
    ctx->pc = 0x220ea0u;
    SET_GPR_VEC(ctx, 7, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 8)));
    // 0x220ea4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x220ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x220ea8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220EA8u;
    {
        const bool branch_taken_0x220ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EA8u;
            // 0x220eac: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ea8) {
            ctx->pc = 0x220EB8u;
            goto label_220eb8;
        }
    }
    ctx->pc = 0x220EB0u;
    // 0x220eb0: 0xc07e1b0  jal         func_1F86C0
    ctx->pc = 0x220EB0u;
    SET_GPR_U32(ctx, 31, 0x220EB8u);
    ctx->pc = 0x220EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EB0u;
            // 0x220eb4: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F86C0u;
    if (runtime->hasFunction(0x1F86C0u)) {
        auto targetFn = runtime->lookupFunction(0x1F86C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EB8u; }
        if (ctx->pc != 0x220EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F86C0_0x1f86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EB8u; }
        if (ctx->pc != 0x220EB8u) { return; }
    }
    ctx->pc = 0x220EB8u;
label_220eb8:
    // 0x220eb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x220EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EBCu;
            // 0x220ec0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220EB8u: goto label_220eb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220EC4u;
    // 0x220ec4: 0x0  nop
    ctx->pc = 0x220ec4u;
    // NOP
}
