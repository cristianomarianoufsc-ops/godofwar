#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002342B0
// Address: 0x2342b0 - 0x2342e8
void sub_002342B0_0x2342b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002342B0_0x2342b0");
#endif

    ctx->pc = 0x2342b0u;

    // 0x2342b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2342b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2342b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2342b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2342b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2342b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2342bc: 0xc08d0a6  jal         func_234298
    ctx->pc = 0x2342BCu;
    SET_GPR_U32(ctx, 31, 0x2342C4u);
    ctx->pc = 0x2342C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2342BCu;
            // 0x2342c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234298u;
    if (runtime->hasFunction(0x234298u)) {
        auto targetFn = runtime->lookupFunction(0x234298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342C4u; }
        if (ctx->pc != 0x2342C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_234298_0x2342b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2342C4u; }
        if (ctx->pc != 0x2342C4u) { return; }
    }
    ctx->pc = 0x2342C4u;
    // 0x2342c4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2342c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2342c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2342c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2342cc: 0x24638d20  addiu       $v1, $v1, -0x72E0
    ctx->pc = 0x2342ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937888));
    // 0x2342d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2342d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2342d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2342d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2342d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2342d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2342dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2342DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2342E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2342DCu;
            // 0x2342e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2342E4u;
    // 0x2342e4: 0x0  nop
    ctx->pc = 0x2342e4u;
    // NOP
}
