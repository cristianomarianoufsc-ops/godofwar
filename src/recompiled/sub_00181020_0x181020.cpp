#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181020
// Address: 0x181020 - 0x181068
void sub_00181020_0x181020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181020_0x181020");
#endif

    ctx->pc = 0x181020u;

    // 0x181020: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x181020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x181024: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181024u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181028: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x181028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18102c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x181030: 0xc0603a4  jal         func_180E90
    ctx->pc = 0x181030u;
    SET_GPR_U32(ctx, 31, 0x181038u);
    ctx->pc = 0x181034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181030u;
            // 0x181034: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180E90u;
    if (runtime->hasFunction(0x180E90u)) {
        auto targetFn = runtime->lookupFunction(0x180E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181038u; }
        if (ctx->pc != 0x181038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180E90_0x180e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181038u; }
        if (ctx->pc != 0x181038u) { return; }
    }
    ctx->pc = 0x181038u;
    // 0x181038: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x181038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18103c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18103cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181040: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x181040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181044: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x181044u;
    SET_GPR_U32(ctx, 31, 0x18104Cu);
    ctx->pc = 0x181048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x181044u;
            // 0x181048: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18104Cu; }
        if (ctx->pc != 0x18104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18104Cu; }
        if (ctx->pc != 0x18104Cu) { return; }
    }
    ctx->pc = 0x18104Cu;
    // 0x18104c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18104cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181054: 0x3e00008  jr          $ra
    ctx->pc = 0x181054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181054u;
            // 0x181058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18105Cu;
    // 0x18105c: 0x0  nop
    ctx->pc = 0x18105cu;
    // NOP
    // 0x181060: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x181064: 0x0  nop
    ctx->pc = 0x181064u;
    // NOP
}
