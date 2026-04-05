#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00289F30
// Address: 0x289f30 - 0x289f60
void sub_00289F30_0x289f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289F30_0x289f30");
#endif

    ctx->pc = 0x289f30u;

    // 0x289f30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x289f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x289f34: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289f38: 0x8c444294  lw          $a0, 0x4294($v0)
    ctx->pc = 0x289f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17044)));
    // 0x289f3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x289f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x289f40: 0xc0a27c4  jal         func_289F10
    ctx->pc = 0x289F40u;
    SET_GPR_U32(ctx, 31, 0x289F48u);
    ctx->pc = 0x289F10u;
    if (runtime->hasFunction(0x289F10u)) {
        auto targetFn = runtime->lookupFunction(0x289F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F48u; }
        if (ctx->pc != 0x289F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289f10_0x289f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289F48u; }
        if (ctx->pc != 0x289F48u) { return; }
    }
    ctx->pc = 0x289F48u;
    // 0x289f48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x289f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289f4c: 0x3e00008  jr          $ra
    ctx->pc = 0x289F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289F4Cu;
            // 0x289f50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x289F54u;
    // 0x289f54: 0x0  nop
    ctx->pc = 0x289f54u;
    // NOP
    // 0x289f58: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x289f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x289f5c: 0x0  nop
    ctx->pc = 0x289f5cu;
    // NOP
}
