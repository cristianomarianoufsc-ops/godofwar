#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002341B8
// Address: 0x2341b8 - 0x2341e0
void sub_002341B8_0x2341b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002341B8_0x2341b8");
#endif

    ctx->pc = 0x2341b8u;

    // 0x2341b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2341b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2341bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2341bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2341c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2341c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2341c4: 0xc05eb30  jal         func_17ACC0
    ctx->pc = 0x2341C4u;
    SET_GPR_U32(ctx, 31, 0x2341CCu);
    ctx->pc = 0x2341C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2341C4u;
            // 0x2341c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ACC0u;
    if (runtime->hasFunction(0x17ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x17ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341CCu; }
        if (ctx->pc != 0x2341CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17acc0_0x17ace0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2341CCu; }
        if (ctx->pc != 0x2341CCu) { return; }
    }
    ctx->pc = 0x2341CCu;
    // 0x2341cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2341ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2341d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2341d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2341d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2341d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2341d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2341D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2341DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2341D8u;
            // 0x2341dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2341E0u;
}
