#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012C178
// Address: 0x12c178 - 0x12c1a8
void sub_0012C178_0x12c178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C178_0x12c178");
#endif

    ctx->pc = 0x12c178u;

    // 0x12c178: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12c17c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c17cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c180: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x12c180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x12c184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c188: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x12C188u;
    SET_GPR_U32(ctx, 31, 0x12C190u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C190u; }
        if (ctx->pc != 0x12C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C190u; }
        if (ctx->pc != 0x12C190u) { return; }
    }
    ctx->pc = 0x12C190u;
    // 0x12c190: 0xc08fd58  jal         func_23F560
    ctx->pc = 0x12C190u;
    SET_GPR_U32(ctx, 31, 0x12C198u);
    ctx->pc = 0x12C194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C190u;
            // 0x12c194: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F560u;
    if (runtime->hasFunction(0x23F560u)) {
        auto targetFn = runtime->lookupFunction(0x23F560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C198u; }
        if (ctx->pc != 0x12C198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023F560_0x23f560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C198u; }
        if (ctx->pc != 0x12C198u) { return; }
    }
    ctx->pc = 0x12C198u;
    // 0x12c198: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c19c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C19Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C19Cu;
            // 0x12c1a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12C1A4u;
    // 0x12c1a4: 0x0  nop
    ctx->pc = 0x12c1a4u;
    // NOP
}
