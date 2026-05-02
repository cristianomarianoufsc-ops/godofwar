#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_002962d8
// Address: 0x2962d8 - 0x296300
// Bug AA (2026-05-02): funcao estava truncada — faltavam instrucoes 0x2962e4..0x2962fc.
// Reconstruida a partir do corpo identico em sub_00295568_0x295568.cpp (linhas 7910-7965).
// Logica: if ($a2 == 0) return 1; else call func_295218($a0,$a1,...); return 1;
void FUN_002962d8_0x2962d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_002962d8_0x2962d8");
#endif

    ctx->pc = 0x2962d8u;

    // 0x2962d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2962d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2962dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2962dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2962e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2962E0u;
    {
        const bool branch_taken_0x2962e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2962E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962E0u;
            // 0x2962e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2962e0) {
            ctx->pc = 0x2962F0u;
            goto label_2962f0;
        }
    }
    ctx->pc = 0x2962E8u;
    // 0x2962e8: 0xc0a5486  jal         func_295218
    ctx->pc = 0x2962E8u;
    SET_GPR_U32(ctx, 31, 0x2962F0u);
    ctx->pc = 0x295218u;
    if (runtime->hasFunction(0x295218u)) {
        auto targetFn = runtime->lookupFunction(0x295218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F0u; }
        if (ctx->pc != 0x2962F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295218_0x295218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2962F0u; }
        if (ctx->pc != 0x2962F0u) { return; }
    }
    ctx->pc = 0x2962F0u;
label_2962f0:
    // 0x2962f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2962f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2962f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2962f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2962f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2962F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2962FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2962F8u;
            // 0x2962fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296300u;
}
