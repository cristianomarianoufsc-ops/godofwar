#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026A8F8
// Address: 0x26a8f8 - 0x26a960
void sub_0026A8F8_0x26a8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A8F8_0x26a8f8");
#endif

    ctx->pc = 0x26a8f8u;

    // 0x26a8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26a8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26a8fc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26a8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26a900: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a904: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x26a904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a908: 0xc077b96  jal         func_1DEE58
    ctx->pc = 0x26A908u;
    SET_GPR_U32(ctx, 31, 0x26A910u);
    ctx->pc = 0x26A90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A908u;
            // 0x26a90c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE58u;
    if (runtime->hasFunction(0x1DEE58u)) {
        auto targetFn = runtime->lookupFunction(0x1DEE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A910u; }
        if (ctx->pc != 0x26A910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEE58_0x1dee58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A910u; }
        if (ctx->pc != 0x26A910u) { return; }
    }
    ctx->pc = 0x26A910u;
    // 0x26a910: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x26a910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a914: 0xc06b6f0  jal         func_1ADBC0
    ctx->pc = 0x26A914u;
    SET_GPR_U32(ctx, 31, 0x26A91Cu);
    ctx->pc = 0x26A918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A914u;
            // 0x26a918: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ADBC0u;
    if (runtime->hasFunction(0x1ADBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1ADBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A91Cu; }
        if (ctx->pc != 0x26A91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ADBC0_0x1adbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A91Cu; }
        if (ctx->pc != 0x26A91Cu) { return; }
    }
    ctx->pc = 0x26A91Cu;
    // 0x26a91c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x26a91cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x26a920: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26a920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26a924: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x26a924u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x26a928: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x26a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x26a92c: 0x40f809  jalr        $v0
    ctx->pc = 0x26A92Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A934u);
        ctx->pc = 0x26A930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A92Cu;
            // 0x26a930: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A934u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A934u; }
            if (ctx->pc != 0x26A934u) { return; }
        }
        }
    }
    ctx->pc = 0x26A934u;
    // 0x26a934: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x26a934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x26a938: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a93c: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x26a93cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x26a940: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x26a940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x26a944: 0x60f809  jalr        $v1
    ctx->pc = 0x26A944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26A94Cu);
        ctx->pc = 0x26A948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A944u;
            // 0x26a948: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26A94Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26A94Cu; }
            if (ctx->pc != 0x26A94Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26A94Cu;
    // 0x26a94c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26a94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a954: 0x3e00008  jr          $ra
    ctx->pc = 0x26A954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A954u;
            // 0x26a958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A95Cu;
    // 0x26a95c: 0x0  nop
    ctx->pc = 0x26a95cu;
    // NOP
}
