#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4430
// Address: 0x1c4430 - 0x1c44e8
void sub_001C4430_0x1c4430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4430_0x1c4430");
#endif

    ctx->pc = 0x1c4430u;

    // 0x1c4430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4434: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c4434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c4438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c443c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c443cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4444: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c4444u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4448: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1c4448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c444c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c444cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c4450: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c4450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c4454: 0x40f809  jalr        $v0
    ctx->pc = 0x1C4454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C445Cu);
        ctx->pc = 0x1C4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4454u;
            // 0x1c4458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C445Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C447Cu: goto label_1c447c;
            case 0x1C44D4u: goto label_1c44d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C445Cu; }
            if (ctx->pc != 0x1C445Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1C445Cu;
    // 0x1c445c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c445cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4460: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4460u;
    {
        const bool branch_taken_0x1c4460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4460u;
            // 0x1c4464: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4460) {
            ctx->pc = 0x1C447Cu;
            goto label_1c447c;
        }
    }
    ctx->pc = 0x1C4468u;
    // 0x1c4468: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1c4468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x1c446c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C446Cu;
    {
        const bool branch_taken_0x1c446c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c446c) {
            ctx->pc = 0x1C447Cu;
            goto label_1c447c;
        }
    }
    ctx->pc = 0x1C4474u;
    // 0x1c4474: 0xc085db4  jal         func_2176D0
    ctx->pc = 0x1C4474u;
    SET_GPR_U32(ctx, 31, 0x1C447Cu);
    ctx->pc = 0x2176D0u;
    if (runtime->hasFunction(0x2176D0u)) {
        auto targetFn = runtime->lookupFunction(0x2176D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C447Cu; }
        if (ctx->pc != 0x1C447Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2176d0_0x2176f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C447Cu; }
        if (ctx->pc != 0x1C447Cu) { return; }
    }
    ctx->pc = 0x1C447Cu;
label_1c447c:
    // 0x1c447c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c4480: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c4480u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4484: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c4484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1c4488: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1c4488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1c448c: 0x2404041c  addiu       $a0, $zero, 0x41C
    ctx->pc = 0x1c448cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1052));
    // 0x1c4490: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x1c4490u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x1c4494: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4498: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c449c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c449cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44a0: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1c44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x1c44a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c44a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44a8: 0xc06a160  jal         func_1A8580
    ctx->pc = 0x1C44A8u;
    SET_GPR_U32(ctx, 31, 0x1C44B0u);
    ctx->pc = 0x1C44ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44A8u;
            // 0x1c44ac: 0xe60002a8  swc1        $f0, 0x2A8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8580u;
    if (runtime->hasFunction(0x1A8580u)) {
        auto targetFn = runtime->lookupFunction(0x1A8580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C44B0u; }
        if (ctx->pc != 0x1C44B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a8580_0x1a8690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C44B0u; }
        if (ctx->pc != 0x1C44B0u) { return; }
    }
    ctx->pc = 0x1C44B0u;
    // 0x1c44b0: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C44B0u;
    {
        const bool branch_taken_0x1c44b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c44b0) {
            ctx->pc = 0x1C44B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44B0u;
            // 0x1c44b4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C44D4u;
            goto label_1c44d4;
        }
    }
    ctx->pc = 0x1C44B8u;
    // 0x1c44b8: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c44bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c44bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c44c0: 0x3442f800  ori         $v0, $v0, 0xF800
    ctx->pc = 0x1c44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63488);
    // 0x1c44c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c44c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c44c8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1c44c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1c44cc: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c44ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c44d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c44d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c44d4:
    // 0x1c44d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c44d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c44d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44DCu;
            // 0x1c44e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C447Cu: goto label_1c447c;
            case 0x1C44D4u: goto label_1c44d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C44E4u;
    // 0x1c44e4: 0x0  nop
    ctx->pc = 0x1c44e4u;
    // NOP
}
