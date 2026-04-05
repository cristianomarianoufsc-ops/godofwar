#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180E50
// Address: 0x180e50 - 0x180e90
void sub_00180E50_0x180e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180E50_0x180e50");
#endif

    ctx->pc = 0x180e50u;

    // 0x180e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180e54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x180e54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x180e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x180e5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x180e5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e68: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x180E68u;
    SET_GPR_U32(ctx, 31, 0x180E70u);
    ctx->pc = 0x180E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E68u;
            // 0x180e6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E70u; }
        if (ctx->pc != 0x180E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E70u; }
        if (ctx->pc != 0x180E70u) { return; }
    }
    ctx->pc = 0x180E70u;
    // 0x180e70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180e74: 0xc060342  jal         func_180D08
    ctx->pc = 0x180E74u;
    SET_GPR_U32(ctx, 31, 0x180E7Cu);
    ctx->pc = 0x180E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180E74u;
            // 0x180e78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180D08u;
    if (runtime->hasFunction(0x180D08u)) {
        auto targetFn = runtime->lookupFunction(0x180D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E7Cu; }
        if (ctx->pc != 0x180E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180D08_0x180d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180E7Cu; }
        if (ctx->pc != 0x180E7Cu) { return; }
    }
    ctx->pc = 0x180E7Cu;
    // 0x180e7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x180e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180e84: 0x3e00008  jr          $ra
    ctx->pc = 0x180E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180E84u;
            // 0x180e88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180E8Cu;
    // 0x180e8c: 0x0  nop
    ctx->pc = 0x180e8cu;
    // NOP
}
