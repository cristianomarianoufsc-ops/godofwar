#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C8F8
// Address: 0x14c8f8 - 0x14c950
void sub_0014C8F8_0x14c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C8F8_0x14c8f8");
#endif

    ctx->pc = 0x14c8f8u;

    // 0x14c8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14c8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14c8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14c900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14c904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c908: 0x8e040038  lw          $a0, 0x38($s0)
    ctx->pc = 0x14c908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x14c90c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x14C90Cu;
    {
        const bool branch_taken_0x14c90c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c90c) {
            ctx->pc = 0x14C910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C90Cu;
            // 0x14c910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C930u;
            goto label_14c930;
        }
    }
    ctx->pc = 0x14C914u;
    // 0x14c914: 0x92020030  lbu         $v0, 0x30($s0)
    ctx->pc = 0x14c914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x14c918: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x14c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x14c91c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C91Cu;
    {
        const bool branch_taken_0x14c91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c91c) {
            ctx->pc = 0x14C920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14C91Cu;
            // 0x14c920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14C930u;
            goto label_14c930;
        }
    }
    ctx->pc = 0x14C924u;
    // 0x14c924: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14C924u;
    SET_GPR_U32(ctx, 31, 0x14C92Cu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C92Cu; }
        if (ctx->pc != 0x14C92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C92Cu; }
        if (ctx->pc != 0x14C92Cu) { return; }
    }
    ctx->pc = 0x14C92Cu;
    // 0x14c92c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14c92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14c930:
    // 0x14c930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14c934: 0xc05337e  jal         func_14CDF8
    ctx->pc = 0x14C934u;
    SET_GPR_U32(ctx, 31, 0x14C93Cu);
    ctx->pc = 0x14C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C934u;
            // 0x14c938: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14CDF8u;
    if (runtime->hasFunction(0x14CDF8u)) {
        auto targetFn = runtime->lookupFunction(0x14CDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C93Cu; }
        if (ctx->pc != 0x14C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014CDF8_0x14cdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C93Cu; }
        if (ctx->pc != 0x14C93Cu) { return; }
    }
    ctx->pc = 0x14C93Cu;
    // 0x14c93c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14c93cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c940: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c944: 0x3e00008  jr          $ra
    ctx->pc = 0x14C944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C944u;
            // 0x14c948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C930u: goto label_14c930;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C94Cu;
    // 0x14c94c: 0x0  nop
    ctx->pc = 0x14c94cu;
    // NOP
}
