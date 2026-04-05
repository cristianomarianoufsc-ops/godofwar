#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A49E8
// Address: 0x1a49e8 - 0x1a4a10
void sub_001A49E8_0x1a49e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A49E8_0x1a49e8");
#endif

    ctx->pc = 0x1a49e8u;

    // 0x1a49e8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a49e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a49ec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a49ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a49f0: 0x8c44ca24  lw          $a0, -0x35DC($v0)
    ctx->pc = 0x1a49f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953508)));
    // 0x1a49f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a49f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a49f8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A49F8u;
    SET_GPR_U32(ctx, 31, 0x1A4A00u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A00u; }
        if (ctx->pc != 0x1A4A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4A00u; }
        if (ctx->pc != 0x1A4A00u) { return; }
    }
    ctx->pc = 0x1A4A00u;
    // 0x1a4a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4a04: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4A04u;
            // 0x1a4a08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A4A0Cu;
    // 0x1a4a0c: 0x0  nop
    ctx->pc = 0x1a4a0cu;
    // NOP
}
