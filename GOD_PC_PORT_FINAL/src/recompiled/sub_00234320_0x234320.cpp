#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00234320
// Address: 0x234320 - 0x234358
void sub_00234320_0x234320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00234320_0x234320");
#endif

    ctx->pc = 0x234320u;

    // 0x234320: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x234320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x234324: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x234324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x234328: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x234328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23432c: 0xc08d0a6  jal         func_234298
    ctx->pc = 0x23432Cu;
    SET_GPR_U32(ctx, 31, 0x234334u);
    ctx->pc = 0x234330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23432Cu;
            // 0x234330: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234298u;
    if (runtime->hasFunction(0x234298u)) {
        auto targetFn = runtime->lookupFunction(0x234298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234334u; }
        if (ctx->pc != 0x234334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_234298_0x2342b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234334u; }
        if (ctx->pc != 0x234334u) { return; }
    }
    ctx->pc = 0x234334u;
    // 0x234334: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x234334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x234338: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x234338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23433c: 0x24638cc0  addiu       $v1, $v1, -0x7340
    ctx->pc = 0x23433cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937792));
    // 0x234340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x234340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234344: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x234344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x234348: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x234348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23434c: 0x3e00008  jr          $ra
    ctx->pc = 0x23434Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23434Cu;
            // 0x234350: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x234354u;
    // 0x234354: 0x0  nop
    ctx->pc = 0x234354u;
    // NOP
}
