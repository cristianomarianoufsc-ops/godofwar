#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180928
// Address: 0x180928 - 0x1809d0
void sub_00180928_0x180928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180928_0x180928");
#endif

    ctx->pc = 0x180928u;

    // 0x180928: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x180928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x18092c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x18092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x180930: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x180930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x180934: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x180934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180938: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x180938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x18093c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18093cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180940: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x180940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x180944: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x180944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x180948: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x180948u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18094c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18094cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180950: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x180950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x180954: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x180954u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x180958: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x180958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x18095c: 0x40f809  jalr        $v0
    ctx->pc = 0x18095Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180964u);
        ctx->pc = 0x180960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18095Cu;
            // 0x180960: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180964u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180970u: goto label_180970;
            case 0x180998u: goto label_180998;
            case 0x1809ACu: goto label_1809ac;
            case 0x1809B0u: goto label_1809b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180964u; }
            if (ctx->pc != 0x180964u) { return; }
        }
        }
    }
    ctx->pc = 0x180964u;
    // 0x180964: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x180964u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180968: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x180968u;
    {
        const bool branch_taken_0x180968 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x18096Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180968u;
            // 0x18096c: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180968) {
            ctx->pc = 0x1809ACu;
            goto label_1809ac;
        }
    }
    ctx->pc = 0x180970u;
label_180970:
    // 0x180970: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x180970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x180974: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180978: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x180978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x18097c: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x18097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x180980: 0x40f809  jalr        $v0
    ctx->pc = 0x180980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180988u);
        ctx->pc = 0x180984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180980u;
            // 0x180984: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180988u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180970u: goto label_180970;
            case 0x180998u: goto label_180998;
            case 0x1809ACu: goto label_1809ac;
            case 0x1809B0u: goto label_1809b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180988u; }
            if (ctx->pc != 0x180988u) { return; }
        }
        }
    }
    ctx->pc = 0x180988u;
    // 0x180988: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x180988u;
    {
        const bool branch_taken_0x180988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x18098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180988u;
            // 0x18098c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180988) {
            ctx->pc = 0x180998u;
            goto label_180998;
        }
    }
    ctx->pc = 0x180990u;
    // 0x180990: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x180990u;
    {
        const bool branch_taken_0x180990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180990u;
            // 0x180994: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180990) {
            ctx->pc = 0x1809B0u;
            goto label_1809b0;
        }
    }
    ctx->pc = 0x180998u;
label_180998:
    // 0x180998: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x180998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x18099c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x18099cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1809a0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1809a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x1809a4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1809A4u;
    {
        const bool branch_taken_0x1809a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1809A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809A4u;
            // 0x1809a8: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809a4) {
            ctx->pc = 0x180970u;
            runtime->cooperativeGuestYield();
            goto label_180970;
        }
    }
    ctx->pc = 0x1809ACu;
label_1809ac:
    // 0x1809ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1809acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1809b0:
    // 0x1809b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1809b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1809b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1809b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1809b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1809b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1809bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1809bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1809c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1809c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1809c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1809c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1809c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1809C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1809CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1809C8u;
            // 0x1809cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180970u: goto label_180970;
            case 0x180998u: goto label_180998;
            case 0x1809ACu: goto label_1809ac;
            case 0x1809B0u: goto label_1809b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1809D0u;
}
