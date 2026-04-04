#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298F30
// Address: 0x298f30 - 0x298f78
void sub_00298F30_0x298f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298F30_0x298f30");
#endif

    ctx->pc = 0x298f30u;

    // 0x298f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298f34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x298f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298f38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298f3c: 0xc0a6342  jal         func_298D08
    ctx->pc = 0x298F3Cu;
    SET_GPR_U32(ctx, 31, 0x298F44u);
    ctx->pc = 0x298F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298F3Cu;
            // 0x298f40: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298D08u;
    if (runtime->hasFunction(0x298D08u)) {
        auto targetFn = runtime->lookupFunction(0x298D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F44u; }
        if (ctx->pc != 0x298F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00298D08_0x298d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298F44u; }
        if (ctx->pc != 0x298F44u) { return; }
    }
    ctx->pc = 0x298F44u;
    // 0x298f44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298f48: 0x3e00008  jr          $ra
    ctx->pc = 0x298F48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298F48u;
            // 0x298f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298F50u;
    // 0x298f50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298f54: 0x0  nop
    ctx->pc = 0x298f54u;
    // NOP
    // 0x298f58: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x298f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x298f5c: 0x0  nop
    ctx->pc = 0x298f5cu;
    // NOP
    // 0x298f60: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x298f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x298f64: 0x0  nop
    ctx->pc = 0x298f64u;
    // NOP
    // 0x298f68: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x298f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x298f6c: 0x0  nop
    ctx->pc = 0x298f6cu;
    // NOP
    // 0x298f70: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x298f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x298f74: 0x0  nop
    ctx->pc = 0x298f74u;
    // NOP
}
