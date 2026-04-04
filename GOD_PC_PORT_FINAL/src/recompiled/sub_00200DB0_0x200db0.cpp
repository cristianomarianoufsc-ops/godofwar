#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200DB0
// Address: 0x200db0 - 0x200e08
void sub_00200DB0_0x200db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200DB0_0x200db0");
#endif

    ctx->pc = 0x200db0u;

    // 0x200db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x200db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x200db4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x200db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x200db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x200db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x200dbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200dc4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200dc8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x200dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x200dcc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x200dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x200dd0: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x200dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x200dd4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x200dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_200dd8:
    // 0x200dd8: 0x2241018  mult        $v0, $s1, $a0
    ctx->pc = 0x200dd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x200ddc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x200ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x200de0: 0xc080540  jal         func_201500
    ctx->pc = 0x200DE0u;
    SET_GPR_U32(ctx, 31, 0x200DE8u);
    ctx->pc = 0x200DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200DE0u;
            // 0x200de4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201500u;
    if (runtime->hasFunction(0x201500u)) {
        auto targetFn = runtime->lookupFunction(0x201500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DE8u; }
        if (ctx->pc != 0x200DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201500_0x201500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200DE8u; }
        if (ctx->pc != 0x200DE8u) { return; }
    }
    ctx->pc = 0x200DE8u;
    // 0x200de8: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x200de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x200dec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200DECu;
    {
        const bool branch_taken_0x200dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200dec) {
            ctx->pc = 0x200DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200DECu;
            // 0x200df0: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200DD8u;
            runtime->cooperativeGuestYield();
            goto label_200dd8;
        }
    }
    ctx->pc = 0x200DF4u;
    // 0x200df4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x200df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200df8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x200df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200dfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200e00: 0x3e00008  jr          $ra
    ctx->pc = 0x200E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E00u;
            // 0x200e04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200DD8u: goto label_200dd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200E08u;
}
