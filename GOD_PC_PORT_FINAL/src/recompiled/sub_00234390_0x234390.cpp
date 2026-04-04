#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234390
// Address: 0x234390 - 0x2343c8
void sub_00234390_0x234390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234390_0x234390");
#endif

    ctx->pc = 0x234390u;

    // 0x234390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x234394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x234398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23439c: 0xc08eb96  jal         func_23AE58
    ctx->pc = 0x23439Cu;
    SET_GPR_U32(ctx, 31, 0x2343A4u);
    ctx->pc = 0x2343A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23439Cu;
            // 0x2343a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AE58u;
    if (runtime->hasFunction(0x23AE58u)) {
        auto targetFn = runtime->lookupFunction(0x23AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A4u; }
        if (ctx->pc != 0x2343A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ae58_0x23ae70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2343A4u; }
        if (ctx->pc != 0x2343A4u) { return; }
    }
    ctx->pc = 0x2343A4u;
    // 0x2343a4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x2343a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x2343a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2343a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2343ac: 0x24631f08  addiu       $v1, $v1, 0x1F08
    ctx->pc = 0x2343acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7944));
    // 0x2343b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2343b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2343b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2343b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2343b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2343b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2343bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2343BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2343C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2343BCu;
            // 0x2343c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2343C4u;
    // 0x2343c4: 0x0  nop
    ctx->pc = 0x2343c4u;
    // NOP
}
