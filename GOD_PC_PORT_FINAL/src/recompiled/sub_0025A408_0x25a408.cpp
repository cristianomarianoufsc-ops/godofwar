#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0025A408
// Address: 0x25a408 - 0x25a440
void sub_0025A408_0x25a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A408_0x25a408");
#endif

    ctx->pc = 0x25a408u;

    // 0x25a408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a40c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25a40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25a410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25a414: 0xc06a398  jal         func_1A8E60
    ctx->pc = 0x25A414u;
    SET_GPR_U32(ctx, 31, 0x25A41Cu);
    ctx->pc = 0x25A418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A414u;
            // 0x25a418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E60u;
    if (runtime->hasFunction(0x1A8E60u)) {
        auto targetFn = runtime->lookupFunction(0x1A8E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A41Cu; }
        if (ctx->pc != 0x25A41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8e60_0x1a8ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A41Cu; }
        if (ctx->pc != 0x25A41Cu) { return; }
    }
    ctx->pc = 0x25A41Cu;
    // 0x25a41c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x25a41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x25a420: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a424: 0x24638d90  addiu       $v1, $v1, -0x7270
    ctx->pc = 0x25a424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938000));
    // 0x25a428: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25a428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a42c: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x25a42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
    // 0x25a430: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25a430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a434: 0x3e00008  jr          $ra
    ctx->pc = 0x25A434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A434u;
            // 0x25a438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A43Cu;
    // 0x25a43c: 0x0  nop
    ctx->pc = 0x25a43cu;
    // NOP
}
