#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232F88
// Address: 0x232f88 - 0x232fe0
void sub_00232F88_0x232f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232F88_0x232f88");
#endif

    ctx->pc = 0x232f88u;

    // 0x232f88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x232f8c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x232f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x232f90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232f94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232f94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f98: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x232f98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232f9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232fa0: 0xc060284  jal         func_180A10
    ctx->pc = 0x232FA0u;
    SET_GPR_U32(ctx, 31, 0x232FA8u);
    ctx->pc = 0x232FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FA0u;
            // 0x232fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA8u; }
        if (ctx->pc != 0x232FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA8u; }
        if (ctx->pc != 0x232FA8u) { return; }
    }
    ctx->pc = 0x232FA8u;
    // 0x232fa8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x232fac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x232facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x232fb0: 0x2442ac78  addiu       $v0, $v0, -0x5388
    ctx->pc = 0x232fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945912));
    // 0x232fb4: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x232fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x232fb8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x232fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x232fbc: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x232fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x232fc0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x232fc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232fc4: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x232fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x232fc8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232fc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x232FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232FD4u;
            // 0x232fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232FDCu;
    // 0x232fdc: 0x0  nop
    ctx->pc = 0x232fdcu;
    // NOP
}
