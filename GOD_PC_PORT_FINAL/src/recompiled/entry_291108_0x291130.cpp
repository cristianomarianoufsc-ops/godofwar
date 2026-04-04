#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_291108
// Address: 0x291108 - 0x291130
void entry_291108_0x291130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_291108_0x291130");
#endif

    ctx->pc = 0x291108u;

    // 0x291108: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x291108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29110c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29110cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291110: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x291114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x291114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x291118: 0xc0a443c  jal         func_2910F0
    ctx->pc = 0x291118u;
    SET_GPR_U32(ctx, 31, 0x291120u);
    ctx->pc = 0x2910F0u;
    if (runtime->hasFunction(0x2910F0u)) {
        auto targetFn = runtime->lookupFunction(0x2910F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291120u; }
        if (ctx->pc != 0x291120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2910f0_0x291108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291120u; }
        if (ctx->pc != 0x291120u) { return; }
    }
    ctx->pc = 0x291120u;
    // 0x291120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291124: 0x3e00008  jr          $ra
    ctx->pc = 0x291124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291124u;
            // 0x291128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29112Cu;
    // 0x29112c: 0x0  nop
    ctx->pc = 0x29112cu;
    // NOP
}
