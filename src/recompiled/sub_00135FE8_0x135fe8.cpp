#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135FE8
// Address: 0x135fe8 - 0x136050
void sub_00135FE8_0x135fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135FE8_0x135fe8");
#endif

    ctx->pc = 0x135fe8u;

    // 0x135fe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x135fec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x135fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x135ff0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x135ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x135ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x135ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x135ff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x135ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x135ffc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x135FFCu;
    SET_GPR_U32(ctx, 31, 0x136004u);
    ctx->pc = 0x136000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135FFCu;
            // 0x136000: 0x8c50e84c  lw          $s0, -0x17B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136004u; }
        if (ctx->pc != 0x136004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136004u; }
        if (ctx->pc != 0x136004u) { return; }
    }
    ctx->pc = 0x136004u;
    // 0x136004: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x136004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x136008: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x136008u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x13600c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13600cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136010: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x136010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x136014: 0x40f809  jalr        $v0
    ctx->pc = 0x136014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13601Cu);
        ctx->pc = 0x136018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136014u;
            // 0x136018: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13601Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13601Cu; }
            if (ctx->pc != 0x13601Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13601Cu;
    // 0x13601c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x13601cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x136020: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x136020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136024: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x136024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136028: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x136028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x13602c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x13602cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x136030: 0x40f809  jalr        $v0
    ctx->pc = 0x136030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x136038u);
        ctx->pc = 0x136034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136030u;
            // 0x136034: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x136038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x136038u; }
            if (ctx->pc != 0x136038u) { return; }
        }
        }
    }
    ctx->pc = 0x136038u;
    // 0x136038: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x136038u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13603c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13603cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136040: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x136040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136048: 0x3e00008  jr          $ra
    ctx->pc = 0x136048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136048u;
            // 0x13604c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x136050u;
}
