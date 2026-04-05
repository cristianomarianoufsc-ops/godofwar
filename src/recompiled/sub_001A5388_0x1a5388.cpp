#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5388
// Address: 0x1a5388 - 0x1a53b0
void sub_001A5388_0x1a5388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5388_0x1a5388");
#endif

    ctx->pc = 0x1a5388u;

    // 0x1a5388: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a5388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a538c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a538cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5390: 0x8c44ca38  lw          $a0, -0x35C8($v0)
    ctx->pc = 0x1a5390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953528)));
    // 0x1a5394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5398: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A5398u;
    SET_GPR_U32(ctx, 31, 0x1A53A0u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53A0u; }
        if (ctx->pc != 0x1A53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A53A0u; }
        if (ctx->pc != 0x1A53A0u) { return; }
    }
    ctx->pc = 0x1A53A0u;
    // 0x1a53a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a53a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a53a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A53A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A53A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A53A4u;
            // 0x1a53a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A53ACu;
    // 0x1a53ac: 0x0  nop
    ctx->pc = 0x1a53acu;
    // NOP
}
