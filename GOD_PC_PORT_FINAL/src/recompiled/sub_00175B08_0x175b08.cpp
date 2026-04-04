#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00175B08
// Address: 0x175b08 - 0x175b38
void sub_00175B08_0x175b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175B08_0x175b08");
#endif

    ctx->pc = 0x175b08u;

    // 0x175b08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175b0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x175b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x175b10: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x175b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175b14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175b18: 0xc05d60a  jal         func_175828
    ctx->pc = 0x175B18u;
    SET_GPR_U32(ctx, 31, 0x175B20u);
    ctx->pc = 0x175B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175B18u;
            // 0x175b1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175828u;
    if (runtime->hasFunction(0x175828u)) {
        auto targetFn = runtime->lookupFunction(0x175828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B20u; }
        if (ctx->pc != 0x175B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175828_0x175828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175B20u; }
        if (ctx->pc != 0x175B20u) { return; }
    }
    ctx->pc = 0x175B20u;
    // 0x175b20: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x175b20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x175b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x175b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175b28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175b2c: 0x3e00008  jr          $ra
    ctx->pc = 0x175B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175B2Cu;
            // 0x175b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175B34u;
    // 0x175b34: 0x0  nop
    ctx->pc = 0x175b34u;
    // NOP
}
