#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FB10
// Address: 0x18fb10 - 0x18fb58
void sub_0018FB10_0x18fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FB10_0x18fb10");
#endif

    ctx->pc = 0x18fb10u;

    // 0x18fb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fb14: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18fb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18fb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18fb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18fb1c: 0xc05d656  jal         func_175958
    ctx->pc = 0x18FB1Cu;
    SET_GPR_U32(ctx, 31, 0x18FB24u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB24u; }
        if (ctx->pc != 0x18FB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB24u; }
        if (ctx->pc != 0x18FB24u) { return; }
    }
    ctx->pc = 0x18FB24u;
    // 0x18fb24: 0xc063ad0  jal         func_18EB40
    ctx->pc = 0x18FB24u;
    SET_GPR_U32(ctx, 31, 0x18FB2Cu);
    ctx->pc = 0x18FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB24u;
            // 0x18fb28: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EB40u;
    if (runtime->hasFunction(0x18EB40u)) {
        auto targetFn = runtime->lookupFunction(0x18EB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB2Cu; }
        if (ctx->pc != 0x18FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18eb40_0x18ed40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB2Cu; }
        if (ctx->pc != 0x18FB2Cu) { return; }
    }
    ctx->pc = 0x18FB2Cu;
    // 0x18fb2c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18fb2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18fb30: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18fb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18fb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fb38: 0x24a532a8  addiu       $a1, $a1, 0x32A8
    ctx->pc = 0x18fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12968));
    // 0x18fb3c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18FB3Cu;
    SET_GPR_U32(ctx, 31, 0x18FB44u);
    ctx->pc = 0x18FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB3Cu;
            // 0x18fb40: 0x24c6f930  addiu       $a2, $a2, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB44u; }
        if (ctx->pc != 0x18FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FB44u; }
        if (ctx->pc != 0x18FB44u) { return; }
    }
    ctx->pc = 0x18FB44u;
    // 0x18fb44: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18fb44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fb48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18fb48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fb4c: 0x3e00008  jr          $ra
    ctx->pc = 0x18FB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FB4Cu;
            // 0x18fb50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FB54u;
    // 0x18fb54: 0x0  nop
    ctx->pc = 0x18fb54u;
    // NOP
}
