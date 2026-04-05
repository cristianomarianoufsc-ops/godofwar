#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00121F80
// Address: 0x121f80 - 0x121fc0
void sub_00121F80_0x121f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121F80_0x121f80");
#endif

    ctx->pc = 0x121f80u;

    // 0x121f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121f84: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x121f84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x121f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x121f8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x121f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121f94: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x121f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121f98: 0x78470020  lq          $a3, 0x20($v0)
    ctx->pc = 0x121f98u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x121f9c: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x121f9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x121fa0: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x121FA0u;
    SET_GPR_U32(ctx, 31, 0x121FA8u);
    ctx->pc = 0x121FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x121FA0u;
            // 0x121fa4: 0x78460010  lq          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121FA8u; }
        if (ctx->pc != 0x121FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x121FA8u; }
        if (ctx->pc != 0x121FA8u) { return; }
    }
    ctx->pc = 0x121FA8u;
    // 0x121fa8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x121fa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121fac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121fb0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x121fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x121fb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x121fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x121FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x121FB8u;
            // 0x121fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x121FC0u;
}
