#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EB48
// Address: 0x13eb48 - 0x13eba8
void sub_0013EB48_0x13eb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EB48_0x13eb48");
#endif

    ctx->pc = 0x13eb48u;

    // 0x13eb48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13eb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13eb4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13eb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13eb50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eb54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13eb54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb58: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x13eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13eb5c: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13EB5Cu;
    {
        const bool branch_taken_0x13eb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eb5c) {
            ctx->pc = 0x13EB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB5Cu;
            // 0x13eb60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13EB90u;
            goto label_13eb90;
        }
    }
    ctx->pc = 0x13EB64u;
    // 0x13eb64: 0xc05e996  jal         func_17A658
    ctx->pc = 0x13EB64u;
    SET_GPR_U32(ctx, 31, 0x13EB6Cu);
    ctx->pc = 0x13EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB64u;
            // 0x13eb68: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB6Cu; }
        if (ctx->pc != 0x13EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB6Cu; }
        if (ctx->pc != 0x13EB6Cu) { return; }
    }
    ctx->pc = 0x13EB6Cu;
    // 0x13eb6c: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13EB6Cu;
    {
        const bool branch_taken_0x13eb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13EB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB6Cu;
            // 0x13eb70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb6c) {
            ctx->pc = 0x13EB90u;
            goto label_13eb90;
        }
    }
    ctx->pc = 0x13EB74u;
    // 0x13eb74: 0xc05d656  jal         func_175958
    ctx->pc = 0x13EB74u;
    SET_GPR_U32(ctx, 31, 0x13EB7Cu);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB7Cu; }
        if (ctx->pc != 0x13EB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB7Cu; }
        if (ctx->pc != 0x13EB7Cu) { return; }
    }
    ctx->pc = 0x13EB7Cu;
    // 0x13eb7c: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13eb80: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb84: 0xc05d702  jal         func_175C08
    ctx->pc = 0x13EB84u;
    SET_GPR_U32(ctx, 31, 0x13EB8Cu);
    ctx->pc = 0x13EB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB84u;
            // 0x13eb88: 0x24a50078  addiu       $a1, $a1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175C08u;
    if (runtime->hasFunction(0x175C08u)) {
        auto targetFn = runtime->lookupFunction(0x175C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB8Cu; }
        if (ctx->pc != 0x13EB8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175C08_0x175c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB8Cu; }
        if (ctx->pc != 0x13EB8Cu) { return; }
    }
    ctx->pc = 0x13EB8Cu;
    // 0x13eb8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13eb90:
    // 0x13eb90: 0xc08e4b2  jal         func_2392C8
    ctx->pc = 0x13EB90u;
    SET_GPR_U32(ctx, 31, 0x13EB98u);
    ctx->pc = 0x13EB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EB90u;
            // 0x13eb94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2392C8u;
    if (runtime->hasFunction(0x2392C8u)) {
        auto targetFn = runtime->lookupFunction(0x2392C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB98u; }
        if (ctx->pc != 0x13EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002392C8_0x2392c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EB98u; }
        if (ctx->pc != 0x13EB98u) { return; }
    }
    ctx->pc = 0x13EB98u;
    // 0x13eb98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13eb98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eb9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eba0: 0x3e00008  jr          $ra
    ctx->pc = 0x13EBA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EBA0u;
            // 0x13eba4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13EB90u: goto label_13eb90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13EBA8u;
}
