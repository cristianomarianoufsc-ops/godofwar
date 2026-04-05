#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A7F0
// Address: 0x17a7f0 - 0x17a830
void sub_0017A7F0_0x17a7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A7F0_0x17a7f0");
#endif

    ctx->pc = 0x17a7f0u;

    // 0x17a7f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17a7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17a7f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17a7f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a7f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17a7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a804: 0xc05d656  jal         func_175958
    ctx->pc = 0x17A804u;
    SET_GPR_U32(ctx, 31, 0x17A80Cu);
    ctx->pc = 0x17A808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A804u;
            // 0x17a808: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A80Cu; }
        if (ctx->pc != 0x17A80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A80Cu; }
        if (ctx->pc != 0x17A80Cu) { return; }
    }
    ctx->pc = 0x17A80Cu;
    // 0x17a80c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a810: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17a810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a814: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x17A814u;
    SET_GPR_U32(ctx, 31, 0x17A81Cu);
    ctx->pc = 0x17A818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A814u;
            // 0x17a818: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A81Cu; }
        if (ctx->pc != 0x17A81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A81Cu; }
        if (ctx->pc != 0x17A81Cu) { return; }
    }
    ctx->pc = 0x17A81Cu;
    // 0x17a81c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17a81cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a820: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a820u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a828: 0x3e00008  jr          $ra
    ctx->pc = 0x17A828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A828u;
            // 0x17a82c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17A830u;
}
