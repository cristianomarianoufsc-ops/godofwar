#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D5DA0
// Address: 0x1d5da0 - 0x1d5df0
void sub_001D5DA0_0x1d5da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5DA0_0x1d5da0");
#endif

    ctx->pc = 0x1d5da0u;

    // 0x1d5da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5da4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1d5da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1d5da8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d5da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d5dac: 0x2442a430  addiu       $v0, $v0, -0x5BD0
    ctx->pc = 0x1d5dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943792));
    // 0x1d5db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d5db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d5db4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d5db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5db8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1d5db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1d5dbc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1d5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1d5dc0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1d5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1d5dc4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d5dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d5dc8: 0xc0827ca  jal         func_209F28
    ctx->pc = 0x1D5DC8u;
    SET_GPR_U32(ctx, 31, 0x1D5DD0u);
    ctx->pc = 0x1D5DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DC8u;
            // 0x1d5dcc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209F28u;
    if (runtime->hasFunction(0x209F28u)) {
        auto targetFn = runtime->lookupFunction(0x209F28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209F28_0x209f28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5DD0u; }
        if (ctx->pc != 0x1D5DD0u) { return; }
    }
    ctx->pc = 0x1D5DD0u;
    // 0x1d5dd0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d5dd4: 0xac50cd58  sw          $s0, -0x32A8($v0)
    ctx->pc = 0x1d5dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954328), GPR_U32(ctx, 16));
    // 0x1d5dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d5dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d5de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d5de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d5de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D5DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D5DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5DE4u;
            // 0x1d5de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D5DECu;
    // 0x1d5dec: 0x0  nop
    ctx->pc = 0x1d5decu;
    // NOP
}
