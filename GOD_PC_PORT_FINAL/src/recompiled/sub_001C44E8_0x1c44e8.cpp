#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C44E8
// Address: 0x1c44e8 - 0x1c4558
void sub_001C44E8_0x1c44e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C44E8_0x1c44e8");
#endif

    ctx->pc = 0x1c44e8u;

    // 0x1c44e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c44e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c44ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c44ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c44f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c44f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c44f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c44f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c44f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c44fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c44fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4500: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c4500u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c4504: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c4504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c4508: 0x40f809  jalr        $v0
    ctx->pc = 0x1C4508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4510u);
        ctx->pc = 0x1C450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4508u;
            // 0x1c450c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C4510u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4548u: goto label_1c4548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C4510u; }
            if (ctx->pc != 0x1C4510u) { return; }
        }
        }
    }
    ctx->pc = 0x1C4510u;
    // 0x1c4510: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4510u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4514: 0x5220000c  beql        $s1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4514u;
    {
        const bool branch_taken_0x1c4514 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c4514) {
            ctx->pc = 0x1C4518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4514u;
            // 0x1c4518: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4548u;
            goto label_1c4548;
        }
    }
    ctx->pc = 0x1C451Cu;
    // 0x1c451c: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1c451cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1c4520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4524: 0xc085e04  jal         func_217810
    ctx->pc = 0x1C4524u;
    SET_GPR_U32(ctx, 31, 0x1C452Cu);
    ctx->pc = 0x1C4528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4524u;
            // 0x1c4528: 0xc60c0294  lwc1        $f12, 0x294($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x217810u;
    if (runtime->hasFunction(0x217810u)) {
        auto targetFn = runtime->lookupFunction(0x217810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C452Cu; }
        if (ctx->pc != 0x1C452Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_217810_0x2178d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C452Cu; }
        if (ctx->pc != 0x1C452Cu) { return; }
    }
    ctx->pc = 0x1C452Cu;
    // 0x1c452c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1c4530: 0xe6000294  swc1        $f0, 0x294($s0)
    ctx->pc = 0x1c4530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 660), bits); }
    // 0x1c4534: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1c4534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c4538: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1c4538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1c453c: 0x40f809  jalr        $v0
    ctx->pc = 0x1C453Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C4544u);
        ctx->pc = 0x1C4540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C453Cu;
            // 0x1c4540: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C4544u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4548u: goto label_1c4548;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C4544u; }
            if (ctx->pc != 0x1C4544u) { return; }
        }
        }
    }
    ctx->pc = 0x1C4544u;
    // 0x1c4544: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c4544u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c4548:
    // 0x1c4548: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4548u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c454c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4550: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4550u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4550u;
            // 0x1c4554: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C4548u: goto label_1c4548;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C4558u;
}
