#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180A10
// Address: 0x180a10 - 0x180a48
void sub_00180A10_0x180a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A10_0x180a10");
#endif

    ctx->pc = 0x180a10u;

    // 0x180a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180a14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x180a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x180a18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180a1c: 0x24420458  addiu       $v0, $v0, 0x458
    ctx->pc = 0x180a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1112));
    // 0x180a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180a24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180a24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a28: 0xc0602a4  jal         func_180A90
    ctx->pc = 0x180A28u;
    SET_GPR_U32(ctx, 31, 0x180A30u);
    ctx->pc = 0x180A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180A28u;
            // 0x180a2c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A90u;
    if (runtime->hasFunction(0x180A90u)) {
        auto targetFn = runtime->lookupFunction(0x180A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A30u; }
        if (ctx->pc != 0x180A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A90_0x180a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A30u; }
        if (ctx->pc != 0x180A30u) { return; }
    }
    ctx->pc = 0x180A30u;
    // 0x180a30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x180a30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180a38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x180A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180A3Cu;
            // 0x180a40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180A44u;
    // 0x180a44: 0x0  nop
    ctx->pc = 0x180a44u;
    // NOP
}
