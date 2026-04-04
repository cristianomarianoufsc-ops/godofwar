#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125170
// Address: 0x125170 - 0x1251a0
void sub_00125170_0x125170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125170_0x125170");
#endif

    ctx->pc = 0x125170u;

    // 0x125170: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x125170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x125174: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125174u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125178: 0x8c44bdec  lw          $a0, -0x4214($v0)
    ctx->pc = 0x125178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950380)));
    // 0x12517c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12517cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125180: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x125180u;
    SET_GPR_U32(ctx, 31, 0x125188u);
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125188u; }
        if (ctx->pc != 0x125188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125188u; }
        if (ctx->pc != 0x125188u) { return; }
    }
    ctx->pc = 0x125188u;
    // 0x125188: 0xc08fbd6  jal         func_23EF58
    ctx->pc = 0x125188u;
    SET_GPR_U32(ctx, 31, 0x125190u);
    ctx->pc = 0x12518Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125188u;
            // 0x12518c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF58u;
    if (runtime->hasFunction(0x23EF58u)) {
        auto targetFn = runtime->lookupFunction(0x23EF58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125190u; }
        if (ctx->pc != 0x125190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023EF58_0x23ef58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125190u; }
        if (ctx->pc != 0x125190u) { return; }
    }
    ctx->pc = 0x125190u;
    // 0x125190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125194: 0x3e00008  jr          $ra
    ctx->pc = 0x125194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125194u;
            // 0x125198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12519Cu;
    // 0x12519c: 0x0  nop
    ctx->pc = 0x12519cu;
    // NOP
}
