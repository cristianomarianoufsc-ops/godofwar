#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002243E0
// Address: 0x2243e0 - 0x224490
void sub_002243E0_0x2243e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002243E0_0x2243e0");
#endif

    ctx->pc = 0x2243e0u;

    // 0x2243e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2243e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2243e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2243e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2243e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2243e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2243ec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2243ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2243f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2243f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2243f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2243f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2243f8: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x2243f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2243fc:
    // 0x2243fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2243fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_224400:
    // 0x224400: 0x1051001d  beq         $v0, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x224400u;
    {
        const bool branch_taken_0x224400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x224404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224400u;
            // 0x224404: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224400) {
            ctx->pc = 0x224478u;
            goto label_224478;
        }
    }
    ctx->pc = 0x224408u;
    // 0x224408: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x224408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22440c: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x22440cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x224410: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x224410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x224414: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x224414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x224418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22441c: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x22441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x224420: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x224420u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x224424: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x224424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224428: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x224428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22442c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x22442cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x224430: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x224430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x224434: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x224434u;
    SET_GPR_U32(ctx, 31, 0x22443Cu);
    ctx->pc = 0x224438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224434u;
            // 0x224438: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22443Cu; }
        if (ctx->pc != 0x22443Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22443Cu; }
        if (ctx->pc != 0x22443Cu) { return; }
    }
    ctx->pc = 0x22443Cu;
    // 0x22443c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224440: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x224440u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x224444: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x224444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x224448: 0x40f809  jalr        $v0
    ctx->pc = 0x224448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224450u);
        ctx->pc = 0x22444Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224448u;
            // 0x22444c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224450u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2243FCu: goto label_2243fc;
            case 0x224400u: goto label_224400;
            case 0x224478u: goto label_224478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224450u; }
            if (ctx->pc != 0x224450u) { return; }
        }
        }
    }
    ctx->pc = 0x224450u;
    // 0x224450: 0x1200ffea  beqz        $s0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x224450u;
    {
        const bool branch_taken_0x224450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224450u;
            // 0x224454: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224450) {
            ctx->pc = 0x2243FCu;
            runtime->cooperativeGuestYield();
            goto label_2243fc;
        }
    }
    ctx->pc = 0x224458u;
    // 0x224458: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x224458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x22445c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x22445cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x224460: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x224460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224464: 0x40f809  jalr        $v0
    ctx->pc = 0x224464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22446Cu);
        ctx->pc = 0x224468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224464u;
            // 0x224468: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22446Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2243FCu: goto label_2243fc;
            case 0x224400u: goto label_224400;
            case 0x224478u: goto label_224478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22446Cu; }
            if (ctx->pc != 0x22446Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22446Cu;
    // 0x22446c: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x22446Cu;
    {
        const bool branch_taken_0x22446c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22446Cu;
            // 0x224470: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22446c) {
            ctx->pc = 0x224400u;
            runtime->cooperativeGuestYield();
            goto label_224400;
        }
    }
    ctx->pc = 0x224474u;
    // 0x224474: 0x0  nop
    ctx->pc = 0x224474u;
    // NOP
label_224478:
    // 0x224478: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x224478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22447c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22447cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224480: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224484: 0x3e00008  jr          $ra
    ctx->pc = 0x224484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224484u;
            // 0x224488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2243FCu: goto label_2243fc;
            case 0x224400u: goto label_224400;
            case 0x224478u: goto label_224478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22448Cu;
    // 0x22448c: 0x0  nop
    ctx->pc = 0x22448cu;
    // NOP
}
