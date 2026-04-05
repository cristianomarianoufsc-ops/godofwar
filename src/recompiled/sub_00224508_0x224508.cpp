#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00224508
// Address: 0x224508 - 0x2245f8
void sub_00224508_0x224508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224508_0x224508");
#endif

    ctx->pc = 0x224508u;

    // 0x224508: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x224508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22450c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22450cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x224510: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x224510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x224514: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x224514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224518: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x224518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22451c: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x22451cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x224520: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x224520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x224524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x224524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_224528:
    // 0x224528: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x224528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22452c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22452cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x224530: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x224530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x224534: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x224534u;
    {
        const bool branch_taken_0x224534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x224538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224534u;
            // 0x224538: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224534) {
            ctx->pc = 0x2245CCu;
            goto label_2245cc;
        }
    }
    ctx->pc = 0x22453Cu;
    // 0x22453c: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x22453cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_224540:
    // 0x224540: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x224540u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x224544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x224544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x224548: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x224548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22454c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x22454cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x224550: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x224550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x224554: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x224554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x224558: 0x40f809  jalr        $v0
    ctx->pc = 0x224558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224560u);
        ctx->pc = 0x22455Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224558u;
            // 0x22455c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224560u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224528u: goto label_224528;
            case 0x224540u: goto label_224540;
            case 0x224588u: goto label_224588;
            case 0x2245C0u: goto label_2245c0;
            case 0x2245CCu: goto label_2245cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224560u; }
            if (ctx->pc != 0x224560u) { return; }
        }
        }
    }
    ctx->pc = 0x224560u;
    // 0x224560: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x224560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x224564: 0x4410016  bgez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x224564u;
    {
        const bool branch_taken_0x224564 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x224568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224564u;
            // 0x224568: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224564) {
            ctx->pc = 0x2245C0u;
            goto label_2245c0;
        }
    }
    ctx->pc = 0x22456Cu;
    // 0x22456c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22456Cu;
    {
        const bool branch_taken_0x22456c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x224570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22456Cu;
            // 0x224570: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22456c) {
            ctx->pc = 0x224588u;
            goto label_224588;
        }
    }
    ctx->pc = 0x224574u;
    // 0x224574: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x224574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x224578: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x224578u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x22457c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x22457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x224580: 0x40f809  jalr        $v0
    ctx->pc = 0x224580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x224588u);
        ctx->pc = 0x224584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224580u;
            // 0x224584: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x224588u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224528u: goto label_224528;
            case 0x224540u: goto label_224540;
            case 0x224588u: goto label_224588;
            case 0x2245C0u: goto label_2245c0;
            case 0x2245CCu: goto label_2245cc;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x224588u; }
            if (ctx->pc != 0x224588u) { return; }
        }
        }
    }
    ctx->pc = 0x224588u;
label_224588:
    // 0x224588: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x224588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22458c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x224590: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x224590u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224594: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x224594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224598: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x224598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x22459c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x22459cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x2245a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2245a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2245a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2245a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2245a8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2245a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2245ac: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2245acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2245b0: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2245B0u;
    SET_GPR_U32(ctx, 31, 0x2245B8u);
    ctx->pc = 0x2245B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2245B0u;
            // 0x2245b4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245B8u; }
        if (ctx->pc != 0x2245B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2245B8u; }
        if (ctx->pc != 0x2245B8u) { return; }
    }
    ctx->pc = 0x2245B8u;
    // 0x2245b8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2245b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2245bc: 0x0  nop
    ctx->pc = 0x2245bcu;
    // NOP
label_2245c0:
    // 0x2245c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2245c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2245c4: 0x5462ffde  bnel        $v1, $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x2245C4u;
    {
        const bool branch_taken_0x2245c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2245c4) {
            ctx->pc = 0x2245C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2245C4u;
            // 0x2245c8: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224540u;
            runtime->cooperativeGuestYield();
            goto label_224540;
        }
    }
    ctx->pc = 0x2245CCu;
label_2245cc:
    // 0x2245cc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2245ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2245d0: 0x661ffd5  bgez        $s3, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2245D0u;
    {
        const bool branch_taken_0x2245d0 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x2245D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245D0u;
            // 0x2245d4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2245d0) {
            ctx->pc = 0x224528u;
            runtime->cooperativeGuestYield();
            goto label_224528;
        }
    }
    ctx->pc = 0x2245D8u;
    // 0x2245d8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2245d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2245dc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2245dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2245e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2245e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2245e4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2245e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2245e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2245e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2245ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2245ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2245F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2245ECu;
            // 0x2245f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x224528u: goto label_224528;
            case 0x224540u: goto label_224540;
            case 0x224588u: goto label_224588;
            case 0x2245C0u: goto label_2245c0;
            case 0x2245CCu: goto label_2245cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2245F4u;
    // 0x2245f4: 0x0  nop
    ctx->pc = 0x2245f4u;
    // NOP
}
