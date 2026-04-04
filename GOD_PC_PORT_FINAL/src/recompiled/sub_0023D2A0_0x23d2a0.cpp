#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023D2A0
// Address: 0x23d2a0 - 0x23d690
void sub_0023D2A0_0x23d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D2A0_0x23d2a0");
#endif

    ctx->pc = 0x23d2a0u;

    // 0x23d2a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d2a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x23d2a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d2ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23d2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23d2b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d2b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d2b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d2b8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x23d2b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x23d2bc: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x23d2bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x23d2c0: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23D2C0u;
    {
        const bool branch_taken_0x23d2c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2C0u;
            // 0x23d2c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2c0) {
            ctx->pc = 0x23D310u;
            goto label_23d310;
        }
    }
    ctx->pc = 0x23D2C8u;
    // 0x23d2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23d2cc: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x23d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x23d2d0: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x23d2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x23d2d4: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x23d2d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x23d2d8: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D2D8u;
    {
        const bool branch_taken_0x23d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x23d2d8) {
            ctx->pc = 0x23D2DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2D8u;
            // 0x23d2dc: 0xde040040  ld          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D2F0u;
            goto label_23d2f0;
        }
    }
    ctx->pc = 0x23D2E0u;
    // 0x23d2e0: 0xc04da64  jal         func_136990
    ctx->pc = 0x23D2E0u;
    SET_GPR_U32(ctx, 31, 0x23D2E8u);
    ctx->pc = 0x23D2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2E0u;
            // 0x23d2e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2E8u; }
        if (ctx->pc != 0x23D2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D2E8u; }
        if (ctx->pc != 0x23D2E8u) { return; }
    }
    ctx->pc = 0x23D2E8u;
    // 0x23d2e8: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x23d2e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x23d2ec: 0x0  nop
    ctx->pc = 0x23d2ecu;
    // NOP
label_23d2f0:
    // 0x23d2f0: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x23d2f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x23d2f4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x23d2f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x23d2f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D2F8u;
    {
        const bool branch_taken_0x23d2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D2F8u;
            // 0x23d2fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2f8) {
            ctx->pc = 0x23D310u;
            goto label_23d310;
        }
    }
    ctx->pc = 0x23D300u;
    // 0x23d300: 0xfe240080  sd          $a0, 0x80($s1)
    ctx->pc = 0x23d300u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 4));
    // 0x23d304: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x23D304u;
    SET_GPR_U32(ctx, 31, 0x23D30Cu);
    ctx->pc = 0x23D308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D304u;
            // 0x23d308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (runtime->hasFunction(0x13AA68u)) {
        auto targetFn = runtime->lookupFunction(0x13AA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D30Cu; }
        if (ctx->pc != 0x23D30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA68_0x13aa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D30Cu; }
        if (ctx->pc != 0x23D30Cu) { return; }
    }
    ctx->pc = 0x23D30Cu;
    // 0x23d30c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23d30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23d310:
    // 0x23d310: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d318: 0x3e00008  jr          $ra
    ctx->pc = 0x23D318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D318u;
            // 0x23d31c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D320u;
    // 0x23d320: 0x3e00008  jr          $ra
    ctx->pc = 0x23D320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D320u;
            // 0x23d324: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D328u;
    // 0x23d328: 0x3e00008  jr          $ra
    ctx->pc = 0x23D328u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D328u;
            // 0x23d32c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D330u;
    // 0x23d330: 0x3e00008  jr          $ra
    ctx->pc = 0x23D330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D330u;
            // 0x23d334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D338u;
    // 0x23d338: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23d338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23d33c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23d340: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23d340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23d344: 0x24422b38  addiu       $v0, $v0, 0x2B38
    ctx->pc = 0x23d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11064));
    // 0x23d348: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23d348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23d34c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23d34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23d350: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d358: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x23d358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x23d35c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x23d35cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x23d360: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23d360u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d364: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x23d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x23d368: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x23d368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x23d36c: 0x1070000b  beq         $v1, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x23D36Cu;
    {
        const bool branch_taken_0x23d36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D36Cu;
            // 0x23d370: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d36c) {
            ctx->pc = 0x23D39Cu;
            goto label_23d39c;
        }
    }
    ctx->pc = 0x23D374u;
    // 0x23d374: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_23d378:
    // 0x23d378: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23d378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23d37c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x23d37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x23d380: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d384: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23D384u;
    SET_GPR_U32(ctx, 31, 0x23D38Cu);
    ctx->pc = 0x23D388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D384u;
            // 0x23d388: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D38Cu; }
        if (ctx->pc != 0x23D38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D38Cu; }
        if (ctx->pc != 0x23D38Cu) { return; }
    }
    ctx->pc = 0x23D38Cu;
    // 0x23d38c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x23d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x23d390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x23d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d394: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D394u;
    {
        const bool branch_taken_0x23d394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D394u;
            // 0x23d398: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d394) {
            ctx->pc = 0x23D378u;
            runtime->cooperativeGuestYield();
            goto label_23d378;
        }
    }
    ctx->pc = 0x23D39Cu;
label_23d39c:
    // 0x23d39c: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x23d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x23d3a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23d3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3a4: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x23d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x23d3a8: 0xc096490  jal         func_259240
    ctx->pc = 0x23D3A8u;
    SET_GPR_U32(ctx, 31, 0x23D3B0u);
    ctx->pc = 0x23D3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3A8u;
            // 0x23d3ac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259240u;
    if (runtime->hasFunction(0x259240u)) {
        auto targetFn = runtime->lookupFunction(0x259240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D3B0u; }
        if (ctx->pc != 0x23D3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00259240_0x259240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D3B0u; }
        if (ctx->pc != 0x23D3B0u) { return; }
    }
    ctx->pc = 0x23D3B0u;
    // 0x23d3b0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23d3b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23d3b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23d3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d3b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23d3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d3bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d3bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x23D3C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3C0u;
            // 0x23d3c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D3C8u;
    // 0x23d3c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23d3cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23d3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23d3d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23d3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23d3d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23d3d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d3d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23d3dc: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x23d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x23d3e0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x23D3E0u;
    {
        const bool branch_taken_0x23d3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3E0u;
            // 0x23d3e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d3e0) {
            ctx->pc = 0x23D464u;
            goto label_23d464;
        }
    }
    ctx->pc = 0x23D3E8u;
    // 0x23d3e8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23d3ec: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x23d3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x23d3f0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23d3f4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x23d3f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x23d3f8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x23d3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x23d3fc: 0x40f809  jalr        $v0
    ctx->pc = 0x23D3FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D404u);
        ctx->pc = 0x23D400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D3FCu;
            // 0x23d400: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D404u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D404u; }
            if (ctx->pc != 0x23D404u) { return; }
        }
        }
    }
    ctx->pc = 0x23D404u;
    // 0x23d404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23d408:
    // 0x23d408: 0x8c430184  lw          $v1, 0x184($v0)
    ctx->pc = 0x23d408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x23d40c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D40Cu;
    {
        const bool branch_taken_0x23d40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d40c) {
            ctx->pc = 0x23D410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D40Cu;
            // 0x23d410: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D41Cu;
            goto label_23d41c;
        }
    }
    ctx->pc = 0x23D414u;
    // 0x23d414: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x23D414u;
    {
        const bool branch_taken_0x23d414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D414u;
            // 0x23d418: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d414) {
            ctx->pc = 0x23D408u;
            runtime->cooperativeGuestYield();
            goto label_23d408;
        }
    }
    ctx->pc = 0x23D41Cu;
label_23d41c:
    // 0x23d41c: 0x24420084  addiu       $v0, $v0, 0x84
    ctx->pc = 0x23d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 132));
    // 0x23d420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23d424: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23d424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23d428: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d42c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D42Cu;
    {
        const bool branch_taken_0x23d42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d42c) {
            ctx->pc = 0x23D430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23D42Cu;
            // 0x23d430: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23D454u;
            goto label_23d454;
        }
    }
    ctx->pc = 0x23D434u;
    // 0x23d434: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x23d434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23d438: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x23d438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x23d43c: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x23d43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23d440: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23d444: 0xc061e1a  jal         func_187868
    ctx->pc = 0x23D444u;
    SET_GPR_U32(ctx, 31, 0x23D44Cu);
    ctx->pc = 0x23D448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D444u;
            // 0x23d448: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D44Cu; }
        if (ctx->pc != 0x23D44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D44Cu; }
        if (ctx->pc != 0x23D44Cu) { return; }
    }
    ctx->pc = 0x23D44Cu;
    // 0x23d44c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D44Cu;
    {
        const bool branch_taken_0x23d44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D44Cu;
            // 0x23d450: 0xae02008c  sw          $v0, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d44c) {
            ctx->pc = 0x23D464u;
            goto label_23d464;
        }
    }
    ctx->pc = 0x23D454u;
label_23d454:
    // 0x23d454: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x23d454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23d458: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x23d458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d45c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23d45cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x23d460: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x23d460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_23d464:
    // 0x23d464: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x23D464u;
    SET_GPR_U32(ctx, 31, 0x23D46Cu);
    ctx->pc = 0x23D468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D464u;
            // 0x23d468: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D46Cu; }
        if (ctx->pc != 0x23D46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D46Cu; }
        if (ctx->pc != 0x23D46Cu) { return; }
    }
    ctx->pc = 0x23D46Cu;
    // 0x23d46c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d470: 0xc04ca22  jal         func_132888
    ctx->pc = 0x23D470u;
    SET_GPR_U32(ctx, 31, 0x23D478u);
    ctx->pc = 0x23D474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D470u;
            // 0x23d474: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132888u;
    if (runtime->hasFunction(0x132888u)) {
        auto targetFn = runtime->lookupFunction(0x132888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D478u; }
        if (ctx->pc != 0x23D478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132888_0x132888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D478u; }
        if (ctx->pc != 0x23D478u) { return; }
    }
    ctx->pc = 0x23D478u;
    // 0x23d478: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23d478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23d47c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23d47cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23d480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d484: 0x3e00008  jr          $ra
    ctx->pc = 0x23D484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D484u;
            // 0x23d488: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D48Cu;
    // 0x23d48c: 0x0  nop
    ctx->pc = 0x23d48cu;
    // NOP
    // 0x23d490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d494: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23d494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23d498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d49c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d49cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23d4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d4a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4ac: 0xc04cb70  jal         func_132DC0
    ctx->pc = 0x23D4ACu;
    SET_GPR_U32(ctx, 31, 0x23D4B4u);
    ctx->pc = 0x23D4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4ACu;
            // 0x23d4b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DC0u;
    if (runtime->hasFunction(0x132DC0u)) {
        auto targetFn = runtime->lookupFunction(0x132DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4B4u; }
        if (ctx->pc != 0x23D4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DC0_0x132dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4B4u; }
        if (ctx->pc != 0x23D4B4u) { return; }
    }
    ctx->pc = 0x23D4B4u;
    // 0x23d4b4: 0x8e24008c  lw          $a0, 0x8C($s1)
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x23d4b8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x23D4B8u;
    SET_GPR_U32(ctx, 31, 0x23D4C0u);
    ctx->pc = 0x23D4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4B8u;
            // 0x23d4bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4C0u; }
        if (ctx->pc != 0x23D4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4C0u; }
        if (ctx->pc != 0x23D4C0u) { return; }
    }
    ctx->pc = 0x23D4C0u;
    // 0x23d4c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23d4c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d4c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d4c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d4c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d4c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d4cc: 0x3e00008  jr          $ra
    ctx->pc = 0x23D4CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4CCu;
            // 0x23d4d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D4D4u;
    // 0x23d4d4: 0x0  nop
    ctx->pc = 0x23d4d4u;
    // NOP
    // 0x23d4d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d4d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d4dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d4e0: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23D4E0u;
    SET_GPR_U32(ctx, 31, 0x23D4E8u);
    ctx->pc = 0x23D4E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D4E0u;
            // 0x23d4e4: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4E8u; }
        if (ctx->pc != 0x23D4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D4E8u; }
        if (ctx->pc != 0x23D4E8u) { return; }
    }
    ctx->pc = 0x23D4E8u;
    // 0x23d4e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23d4e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23d4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d4f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x23d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23d4f4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x23d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x23d4f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x23d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x23d4fc: 0xa4600008  sh          $zero, 0x8($v1)
    ctx->pc = 0x23d4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x23d500: 0xa460000a  sh          $zero, 0xA($v1)
    ctx->pc = 0x23d500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x23d504: 0xa4600022  sh          $zero, 0x22($v1)
    ctx->pc = 0x23d504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x23d508: 0xa4600020  sh          $zero, 0x20($v1)
    ctx->pc = 0x23d508u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x23d50c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x23d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x23d510: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x23d510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23d514: 0x0  nop
    ctx->pc = 0x23d514u;
    // NOP
label_23d518:
    // 0x23d518: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23d51c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x23d520: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x23d520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x23d524: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x23d524u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x23d528: 0x0  nop
    ctx->pc = 0x23d528u;
    // NOP
    // 0x23d52c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D52Cu;
    {
        const bool branch_taken_0x23d52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D52Cu;
            // 0x23d530: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d52c) {
            ctx->pc = 0x23D518u;
            runtime->cooperativeGuestYield();
            goto label_23d518;
        }
    }
    ctx->pc = 0x23D534u;
    // 0x23d534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d538: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x23d538u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d53c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x23d53cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x23d540: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x23d540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x23d544: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x23d544u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x23d548: 0x3e00008  jr          $ra
    ctx->pc = 0x23D548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D548u;
            // 0x23d54c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D550u;
    // 0x23d550: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23d550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23d554: 0x0  nop
    ctx->pc = 0x23d554u;
    // NOP
    // 0x23d558: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23d558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23d55c: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x23d55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x23d560: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23d560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23d564: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23d564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23d568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23d56c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x23D56Cu;
    SET_GPR_U32(ctx, 31, 0x23D574u);
    ctx->pc = 0x23D570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D56Cu;
            // 0x23d570: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D574u; }
        if (ctx->pc != 0x23D574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D574u; }
        if (ctx->pc != 0x23D574u) { return; }
    }
    ctx->pc = 0x23D574u;
    // 0x23d574: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x23d574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23d578: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23d578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d57c: 0x3c06dead  lui         $a2, 0xDEAD
    ctx->pc = 0x23d57cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)57005 << 16));
    // 0x23d580: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x23d580u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x23d584: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x23d584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x23d588: 0x24e70978  addiu       $a3, $a3, 0x978
    ctx->pc = 0x23d588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2424));
    // 0x23d58c: 0x34c6beef  ori         $a2, $a2, 0xBEEF
    ctx->pc = 0x23d58cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48879);
    // 0x23d590: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x23d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x23d594: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x23d594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x23d598: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x23d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x23d59c: 0xae070020  sw          $a3, 0x20($s0)
    ctx->pc = 0x23d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 7));
    // 0x23d5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5a4: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x23d5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x23d5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5ac: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23d5b0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x23d5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d5b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x23d5b8: 0xc08e222  jal         func_238888
    ctx->pc = 0x23D5B8u;
    SET_GPR_U32(ctx, 31, 0x23D5C0u);
    ctx->pc = 0x23D5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5B8u;
            // 0x23d5bc: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5C0u; }
        if (ctx->pc != 0x23D5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5C0u; }
        if (ctx->pc != 0x23D5C0u) { return; }
    }
    ctx->pc = 0x23D5C0u;
    // 0x23d5c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23d5c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d5c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23d5c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5cc: 0xc08e222  jal         func_238888
    ctx->pc = 0x23D5CCu;
    SET_GPR_U32(ctx, 31, 0x23D5D4u);
    ctx->pc = 0x23D5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D5CCu;
            // 0x23d5d0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238888u;
    if (runtime->hasFunction(0x238888u)) {
        auto targetFn = runtime->lookupFunction(0x238888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5D4u; }
        if (ctx->pc != 0x23D5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238888_0x238890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D5D4u; }
        if (ctx->pc != 0x23D5D4u) { return; }
    }
    ctx->pc = 0x23D5D4u;
    // 0x23d5d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x23d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d5d8: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23d5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23d5dc: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x23d5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x23d5e0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x23d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x23d5e4: 0x24632b38  addiu       $v1, $v1, 0x2B38
    ctx->pc = 0x23d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11064));
    // 0x23d5e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x23d5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d5ec: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x23d5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x23d5f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x23d5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x23d5f4: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x23d5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x23d5f8: 0xae05006c  sw          $a1, 0x6C($s0)
    ctx->pc = 0x23d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 5));
    // 0x23d5fc: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x23d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x23d600: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x23d600u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x23d604: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x23d604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x23d608: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x23d608u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x23d60c: 0xc08e43a  jal         func_2390E8
    ctx->pc = 0x23D60Cu;
    SET_GPR_U32(ctx, 31, 0x23D614u);
    ctx->pc = 0x23D610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23D60Cu;
            // 0x23d610: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390E8u;
    if (runtime->hasFunction(0x2390E8u)) {
        auto targetFn = runtime->lookupFunction(0x2390E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D614u; }
        if (ctx->pc != 0x23D614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390e8_0x2390f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23D614u; }
        if (ctx->pc != 0x23D614u) { return; }
    }
    ctx->pc = 0x23D614u;
    // 0x23d614: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x23d614u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23d618: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d61c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x23d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x23d620: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x23d620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x23d624: 0x2463dab0  addiu       $v1, $v1, -0x2550
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957744));
    // 0x23d628: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23d628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d62c: 0xa6050002  sh          $a1, 0x2($s0)
    ctx->pc = 0x23d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x23d630: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23d630u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d634: 0xae040074  sw          $a0, 0x74($s0)
    ctx->pc = 0x23d634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 4));
    // 0x23d638: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x23d638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x23d63c: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x23d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x23d640: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x23d640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x23d644: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23d644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23d648: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23d648u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23d64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d650: 0x3e00008  jr          $ra
    ctx->pc = 0x23D650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D650u;
            // 0x23d654: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D658u;
    // 0x23d658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d65c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x23d65cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d660: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23D660u;
    {
        const bool branch_taken_0x23d660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D660u;
            // 0x23d664: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d660) {
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D668u;
    // 0x23d668: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x23d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x23d66c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23d670: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23d670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23d674: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23d678: 0x40f809  jalr        $v0
    ctx->pc = 0x23D678u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D680u);
        ctx->pc = 0x23D67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D678u;
            // 0x23d67c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23D680u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23D680u; }
            if (ctx->pc != 0x23D680u) { return; }
        }
        }
    }
    ctx->pc = 0x23D680u;
label_23d680:
    // 0x23d680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23d680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d684: 0x3e00008  jr          $ra
    ctx->pc = 0x23D684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23D684u;
            // 0x23d688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23D2F0u: goto label_23d2f0;
            case 0x23D310u: goto label_23d310;
            case 0x23D378u: goto label_23d378;
            case 0x23D39Cu: goto label_23d39c;
            case 0x23D408u: goto label_23d408;
            case 0x23D41Cu: goto label_23d41c;
            case 0x23D454u: goto label_23d454;
            case 0x23D464u: goto label_23d464;
            case 0x23D518u: goto label_23d518;
            case 0x23D680u: goto label_23d680;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23D68Cu;
    // 0x23d68c: 0x0  nop
    ctx->pc = 0x23d68cu;
    // NOP
}
