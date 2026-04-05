#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206F98
// Address: 0x206f98 - 0x207078
void sub_00206F98_0x206f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206F98_0x206f98");
#endif

    ctx->pc = 0x206f98u;

    // 0x206f98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x206f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x206f9c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x206f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x206fa0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x206fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x206fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x206fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206fa8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x206fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x206fac: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x206facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x206fb0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x206fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x206fb4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x206FB4u;
    {
        const bool branch_taken_0x206fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FB4u;
            // 0x206fb8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fb4) {
            ctx->pc = 0x206FECu;
            goto label_206fec;
        }
    }
    ctx->pc = 0x206FBCu;
    // 0x206fbc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x206fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x206fc0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x206fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x206fc4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x206fc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x206fc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x206fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x206fcc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x206fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x206fd0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x206fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x206fd4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x206fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x206fd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x206fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206fdc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x206FDCu;
    {
        const bool branch_taken_0x206fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x206FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FDCu;
            // 0x206fe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fdc) {
            ctx->pc = 0x206FE8u;
            goto label_206fe8;
        }
    }
    ctx->pc = 0x206FE4u;
    // 0x206fe4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x206fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_206fe8:
    // 0x206fe8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_206fec:
    // 0x206fec: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x206FECu;
    {
        const bool branch_taken_0x206fec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206FECu;
            // 0x206ff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206fec) {
            ctx->pc = 0x207064u;
            goto label_207064;
        }
    }
    ctx->pc = 0x206FF4u;
    // 0x206ff4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x206ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x206ff8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x206ff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x206ffc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x206ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x207000: 0x40f809  jalr        $v0
    ctx->pc = 0x207000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x207008u);
        ctx->pc = 0x207004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207000u;
            // 0x207004: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x207008u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206FE8u: goto label_206fe8;
            case 0x206FECu: goto label_206fec;
            case 0x207030u: goto label_207030;
            case 0x207058u: goto label_207058;
            case 0x207064u: goto label_207064;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x207008u; }
            if (ctx->pc != 0x207008u) { return; }
        }
        }
    }
    ctx->pc = 0x207008u;
    // 0x207008: 0x8c450084  lw          $a1, 0x84($v0)
    ctx->pc = 0x207008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x20700c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x20700cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x207010: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207014: 0x8c4400fc  lw          $a0, 0xFC($v0)
    ctx->pc = 0x207014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x207018: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x207018u;
    {
        const bool branch_taken_0x207018 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207018u;
            // 0x20701c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207018) {
            ctx->pc = 0x207058u;
            goto label_207058;
        }
    }
    ctx->pc = 0x207020u;
    // 0x207020: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x207020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x207024: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x207024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207028: 0x1044000b  beq         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x207028u;
    {
        const bool branch_taken_0x207028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20702Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207028u;
            // 0x20702c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207028) {
            ctx->pc = 0x207058u;
            goto label_207058;
        }
    }
    ctx->pc = 0x207030u;
label_207030:
    // 0x207030: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x207030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x207034: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x207034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x207038: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x207038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x20703c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20703Cu;
    {
        const bool branch_taken_0x20703c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20703c) {
            ctx->pc = 0x207058u;
            goto label_207058;
        }
    }
    ctx->pc = 0x207044u;
    // 0x207044: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x207044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x207048: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x207048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20704c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20704Cu;
    {
        const bool branch_taken_0x20704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20704Cu;
            // 0x207050: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20704c) {
            ctx->pc = 0x207030u;
            runtime->cooperativeGuestYield();
            goto label_207030;
        }
    }
    ctx->pc = 0x207054u;
    // 0x207054: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x207054u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207058:
    // 0x207058: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x207058u;
    {
        const bool branch_taken_0x207058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x20705Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207058u;
            // 0x20705c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207058) {
            ctx->pc = 0x207064u;
            goto label_207064;
        }
    }
    ctx->pc = 0x207060u;
    // 0x207060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x207060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207064:
    // 0x207064: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x207064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x207068: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x207068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20706c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20706cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207070: 0x3e00008  jr          $ra
    ctx->pc = 0x207070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207070u;
            // 0x207074: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206FE8u: goto label_206fe8;
            case 0x206FECu: goto label_206fec;
            case 0x207030u: goto label_207030;
            case 0x207058u: goto label_207058;
            case 0x207064u: goto label_207064;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207078u;
}
