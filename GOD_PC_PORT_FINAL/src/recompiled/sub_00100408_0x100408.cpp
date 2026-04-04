#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100408
// Address: 0x100408 - 0x1004b8
void sub_00100408_0x100408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100408_0x100408");
#endif

    ctx->pc = 0x100408u;

    // 0x100408: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x100408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10040c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10040cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100410: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x100410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x100414: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x100414u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100418: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x100418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10041c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x10041cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x100420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100424: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x100424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x100428: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x100428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x10042c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10042Cu;
    {
        const bool branch_taken_0x10042c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x100430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10042Cu;
            // 0x100430: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10042c) {
            ctx->pc = 0x1004A0u;
            goto label_1004a0;
        }
    }
    ctx->pc = 0x100434u;
    // 0x100434: 0x8fb00004  lw          $s0, 0x4($sp)
    ctx->pc = 0x100434u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_100438:
    // 0x100438: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10043c: 0x8e110028  lw          $s1, 0x28($s0)
    ctx->pc = 0x10043cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x100440: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x100440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x100444: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x100444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x100448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x100448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10044c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x10044cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x100450: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x100450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x100454: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x100454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x100458: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x100458u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x10045c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x10045cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x100460: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x100460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x100464: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x100464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x100468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x100468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10046c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x10046cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x100470: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x100470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x100474: 0x40f809  jalr        $v0
    ctx->pc = 0x100474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10047Cu);
        ctx->pc = 0x100478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100474u;
            // 0x100478: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10047Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100438u: goto label_100438;
            case 0x1004A0u: goto label_1004a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10047Cu; }
            if (ctx->pc != 0x10047Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10047Cu;
    // 0x10047c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10047cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100480: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x100480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100484: 0xc04038a  jal         func_100E28
    ctx->pc = 0x100484u;
    SET_GPR_U32(ctx, 31, 0x10048Cu);
    ctx->pc = 0x100488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100484u;
            // 0x100488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100E28u;
    if (runtime->hasFunction(0x100E28u)) {
        auto targetFn = runtime->lookupFunction(0x100E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10048Cu; }
        if (ctx->pc != 0x10048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100E28_0x100e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10048Cu; }
        if (ctx->pc != 0x10048Cu) { return; }
    }
    ctx->pc = 0x10048Cu;
    // 0x10048c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x10048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x100490: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x100490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100494: 0x1462ffe8  bne         $v1, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x100494u;
    {
        const bool branch_taken_0x100494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x100498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100494u;
            // 0x100498: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100494) {
            ctx->pc = 0x100438u;
            runtime->cooperativeGuestYield();
            goto label_100438;
        }
    }
    ctx->pc = 0x10049Cu;
    // 0x10049c: 0x0  nop
    ctx->pc = 0x10049cu;
    // NOP
label_1004a0:
    // 0x1004a0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1004a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1004a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1004a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1004a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1004a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1004ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1004acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1004b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1004B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1004B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1004B0u;
            // 0x1004b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x100438u: goto label_100438;
            case 0x1004A0u: goto label_1004a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1004B8u;
}
