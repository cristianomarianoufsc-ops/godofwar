#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00296300
// Address: 0x296300 - 0x296328
// Bug AA (2026-05-02): funcao estava truncada — faltavam instrucoes 0x29630c..0x296324.
// Reconstruida a partir do corpo identico em sub_00295568_0x295568.cpp (linhas 8094-8150).
// Logica identica a FUN_002962d8 mas chama func_2952C8 em vez de func_295218.
void FUN_00296300_0x296300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00296300_0x296300");
#endif

    ctx->pc = 0x296300u;

    // 0x296300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x296300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x296304: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x296304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296308: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x296308u;
    {
        const bool branch_taken_0x296308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296308u;
            // 0x29630c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296308) {
            ctx->pc = 0x296318u;
            goto label_296318;
        }
    }
    ctx->pc = 0x296310u;
    // 0x296310: 0xc0a54b2  jal         func_2952C8
    ctx->pc = 0x296310u;
    SET_GPR_U32(ctx, 31, 0x296318u);
    ctx->pc = 0x2952C8u;
    if (runtime->hasFunction(0x2952C8u)) {
        auto targetFn = runtime->lookupFunction(0x2952C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296318u; }
        if (ctx->pc != 0x296318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002952C8_0x2952c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296318u; }
        if (ctx->pc != 0x296318u) { return; }
    }
    ctx->pc = 0x296318u;
label_296318:
    // 0x296318: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29631c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296320: 0x3e00008  jr          $ra
    ctx->pc = 0x296320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296320u;
            // 0x296324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x296328u;
}
