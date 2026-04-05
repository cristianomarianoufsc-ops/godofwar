#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197850
// Address: 0x197850 - 0x198398
void sub_00197850_0x197850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197850_0x197850");
#endif

    ctx->pc = 0x197850u;

label_197850:
    // 0x197850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197854: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197858: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x197858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19785c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19785cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x197860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x197864: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x197864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197868: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x19786c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x19786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x197870: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x197870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197874: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x197878: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x197878u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x19787c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x19787cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x197880: 0x40f809  jalr        $v0
    ctx->pc = 0x197880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197888u);
        ctx->pc = 0x197884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197880u;
            // 0x197884: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197888u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197888u; }
            if (ctx->pc != 0x197888u) { return; }
        }
        }
    }
    ctx->pc = 0x197888u;
    // 0x197888: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x197888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19788c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x19788cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x197890: 0xc061a06  jal         func_186818
    ctx->pc = 0x197890u;
    SET_GPR_U32(ctx, 31, 0x197898u);
    ctx->pc = 0x197894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197890u;
            // 0x197894: 0x24a53938  addiu       $a1, $a1, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197898u; }
        if (ctx->pc != 0x197898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197898u; }
        if (ctx->pc != 0x197898u) { return; }
    }
    ctx->pc = 0x197898u;
    // 0x197898: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x197898u;
    {
        const bool branch_taken_0x197898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197898) {
            ctx->pc = 0x19789Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197898u;
            // 0x19789c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1978B0u;
            goto label_1978b0;
        }
    }
    ctx->pc = 0x1978A0u;
    // 0x1978a0: 0x8e0401a0  lw          $a0, 0x1A0($s0)
    ctx->pc = 0x1978a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x1978a4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1978A4u;
    SET_GPR_U32(ctx, 31, 0x1978ACu);
    ctx->pc = 0x1978A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1978A4u;
            // 0x1978a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978ACu; }
        if (ctx->pc != 0x1978ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1978ACu; }
        if (ctx->pc != 0x1978ACu) { return; }
    }
    ctx->pc = 0x1978ACu;
    // 0x1978ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1978acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1978b0:
    // 0x1978b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1978b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1978b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1978B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1978B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978B4u;
            // 0x1978b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1978BCu;
    // 0x1978bc: 0x0  nop
    ctx->pc = 0x1978bcu;
    // NOP
    // 0x1978c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1978c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1978c4: 0x8c62c9a0  lw          $v0, -0x3660($v1)
    ctx->pc = 0x1978c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953376)));
    // 0x1978c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1978c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1978cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1978CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1978D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1978CCu;
            // 0x1978d0: 0xac62c9a0  sw          $v0, -0x3660($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1978D4u;
    // 0x1978d4: 0x0  nop
    ctx->pc = 0x1978d4u;
    // NOP
    // 0x1978d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1978d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1978dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1978dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1978e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1978e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1978e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1978e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1978e8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1978e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1978ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1978ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1978f0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1978f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1978f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1978f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1978f8: 0x94c20044  lhu         $v0, 0x44($a2)
    ctx->pc = 0x1978f8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1978fc: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1978fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x197900: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x197900u;
    {
        const bool branch_taken_0x197900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197900u;
            // 0x197904: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197900) {
            ctx->pc = 0x197940u;
            goto label_197940;
        }
    }
    ctx->pc = 0x197908u;
    // 0x197908: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x197908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x19790c: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x19790cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x197910: 0x8ca3c9a0  lw          $v1, -0x3660($a1)
    ctx->pc = 0x197910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953376)));
    // 0x197914: 0x244278c0  addiu       $v0, $v0, 0x78C0
    ctx->pc = 0x197914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30912));
    // 0x197918: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x197918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x19791c: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x19791cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
    // 0x197920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x197920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x197924: 0xa4c40044  sh          $a0, 0x44($a2)
    ctx->pc = 0x197924u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 68), (uint16_t)GPR_U32(ctx, 4));
    // 0x197928: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19792c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19792Cu;
    {
        const bool branch_taken_0x19792c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x197930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19792Cu;
            // 0x197930: 0xaca3c9a0  sw          $v1, -0x3660($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19792c) {
            ctx->pc = 0x19793Cu;
            goto label_19793c;
        }
    }
    ctx->pc = 0x197934u;
    // 0x197934: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197938: 0xac40c9a4  sw          $zero, -0x365C($v0)
    ctx->pc = 0x197938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953380), GPR_U32(ctx, 0));
label_19793c:
    // 0x19793c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19793cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_197940:
    // 0x197940: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x197940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x197944: 0x8c53cd58  lw          $s3, -0x32A8($v0)
    ctx->pc = 0x197944u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x197948: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x197948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x19794c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19794cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197950: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x197950u;
    SET_GPR_U32(ctx, 31, 0x197958u);
    ctx->pc = 0x197954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197950u;
            // 0x197954: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197958u; }
        if (ctx->pc != 0x197958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197958u; }
        if (ctx->pc != 0x197958u) { return; }
    }
    ctx->pc = 0x197958u;
    // 0x197958: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x197958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x19795c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19795cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x197960: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x197960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x197964: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x197964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x197968: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x197968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19796c: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x19796cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x197970: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x197970u;
    {
        const bool branch_taken_0x197970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197970) {
            ctx->pc = 0x197974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197970u;
            // 0x197974: 0x8e420028  lw          $v0, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1979A4u;
            goto label_1979a4;
        }
    }
    ctx->pc = 0x197978u;
    // 0x197978: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x197978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x19797c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x19797cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x197980: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x197980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x197984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x197984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x197988: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x197988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x19798c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19798Cu;
    {
        const bool branch_taken_0x19798c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19798Cu;
            // 0x197990: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19798c) {
            ctx->pc = 0x1979A0u;
            goto label_1979a0;
        }
    }
    ctx->pc = 0x197994u;
    // 0x197994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197998: 0xac62c9a4  sw          $v0, -0x365C($v1)
    ctx->pc = 0x197998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953380), GPR_U32(ctx, 2));
    // 0x19799c: 0x0  nop
    ctx->pc = 0x19799cu;
    // NOP
label_1979a0:
    // 0x1979a0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1979a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1979a4:
    // 0x1979a4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1979A4u;
    {
        const bool branch_taken_0x1979a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979A4u;
            // 0x1979a8: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979a4) {
            ctx->pc = 0x1979D0u;
            goto label_1979d0;
        }
    }
    ctx->pc = 0x1979ACu;
    // 0x1979ac: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x1979acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1979b0: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x1979B0u;
    SET_GPR_U32(ctx, 31, 0x1979B8u);
    ctx->pc = 0x1979B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979B0u;
            // 0x1979b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979B8u; }
        if (ctx->pc != 0x1979B8u) { return; }
    }
    ctx->pc = 0x1979B8u;
    // 0x1979b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1979B8u;
    {
        const bool branch_taken_0x1979b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979b8) {
            ctx->pc = 0x1979D0u;
            goto label_1979d0;
        }
    }
    ctx->pc = 0x1979C0u;
    // 0x1979c0: 0xc0783ee  jal         func_1E0FB8
    ctx->pc = 0x1979C0u;
    SET_GPR_U32(ctx, 31, 0x1979C8u);
    ctx->pc = 0x1979C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979C0u;
            // 0x1979c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0FB8u;
    if (runtime->hasFunction(0x1E0FB8u)) {
        auto targetFn = runtime->lookupFunction(0x1E0FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979C8u; }
        if (ctx->pc != 0x1979C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0FB8_0x1e0fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979C8u; }
        if (ctx->pc != 0x1979C8u) { return; }
    }
    ctx->pc = 0x1979C8u;
    // 0x1979c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1979C8u;
    {
        const bool branch_taken_0x1979c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1979CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1979C8u;
            // 0x1979cc: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1979c8) {
            ctx->pc = 0x1979E0u;
            goto label_1979e0;
        }
    }
    ctx->pc = 0x1979D0u;
label_1979d0:
    // 0x1979d0: 0xc078406  jal         func_1E1018
    ctx->pc = 0x1979D0u;
    SET_GPR_U32(ctx, 31, 0x1979D8u);
    ctx->pc = 0x1979D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1979D0u;
            // 0x1979d4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E1018u;
    if (runtime->hasFunction(0x1E1018u)) {
        auto targetFn = runtime->lookupFunction(0x1E1018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D8u; }
        if (ctx->pc != 0x1979D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E1018_0x1e1018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1979D8u; }
        if (ctx->pc != 0x1979D8u) { return; }
    }
    ctx->pc = 0x1979D8u;
    // 0x1979d8: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1979d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1979dc: 0x0  nop
    ctx->pc = 0x1979dcu;
    // NOP
label_1979e0:
    // 0x1979e0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x1979e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1979e4: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x1979e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x1979e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1979e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1979ec: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1979ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1979f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1979F0u;
    {
        const bool branch_taken_0x1979f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979f0) {
            ctx->pc = 0x1979F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1979F0u;
            // 0x1979f4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197A24u;
            goto label_197a24;
        }
    }
    ctx->pc = 0x1979F8u;
    // 0x1979f8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1979f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1979fc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1979FCu;
    {
        const bool branch_taken_0x1979fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1979fc) {
            ctx->pc = 0x197A00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1979FCu;
            // 0x197a00: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197A24u;
            goto label_197a24;
        }
    }
    ctx->pc = 0x197A04u;
    // 0x197a04: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x197a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x197a08: 0xc076fd8  jal         func_1DBF60
    ctx->pc = 0x197A08u;
    SET_GPR_U32(ctx, 31, 0x197A10u);
    ctx->pc = 0x197A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197A08u;
            // 0x197a0c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBF60u;
    if (runtime->hasFunction(0x1DBF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DBF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A10u; }
        if (ctx->pc != 0x197A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBF60_0x1dbf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197A10u; }
        if (ctx->pc != 0x197A10u) { return; }
    }
    ctx->pc = 0x197A10u;
    // 0x197a10: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197A10u;
    {
        const bool branch_taken_0x197a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197a10) {
            ctx->pc = 0x197A14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197A10u;
            // 0x197a14: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197A24u;
            goto label_197a24;
        }
    }
    ctx->pc = 0x197A18u;
    // 0x197a18: 0xc065e14  jal         func_197850
    ctx->pc = 0x197A18u;
    SET_GPR_U32(ctx, 31, 0x197A20u);
    ctx->pc = 0x197850u;
    runtime->cooperativeGuestYield();
    goto label_197850;
    ctx->pc = 0x197A20u;
label_197a20:
    // 0x197a20: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x197a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_197a24:
    // 0x197a24: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x197a24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x197a28: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x197a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x197a2c: 0x40f809  jalr        $v0
    ctx->pc = 0x197A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197A34u);
        ctx->pc = 0x197A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A2Cu;
            // 0x197a30: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197A34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197A34u; }
            if (ctx->pc != 0x197A34u) { return; }
        }
        }
    }
    ctx->pc = 0x197A34u;
    // 0x197a34: 0x8c450080  lw          $a1, 0x80($v0)
    ctx->pc = 0x197a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x197a38: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x197a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x197a3c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197A3Cu;
    {
        const bool branch_taken_0x197a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A3Cu;
            // 0x197a40: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a3c) {
            ctx->pc = 0x197A74u;
            goto label_197a74;
        }
    }
    ctx->pc = 0x197A44u;
    // 0x197a44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x197a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x197a48: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x197a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x197a4c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x197a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197a50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197a54: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x197a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x197a58: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197a5c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197a60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197a64: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197A64u;
    {
        const bool branch_taken_0x197a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x197A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A64u;
            // 0x197a68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a64) {
            ctx->pc = 0x197A70u;
            goto label_197a70;
        }
    }
    ctx->pc = 0x197A6Cu;
    // 0x197a6c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x197a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_197a70:
    // 0x197a70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197a74:
    // 0x197a74: 0x12200054  beqz        $s1, . + 4 + (0x54 << 2)
    ctx->pc = 0x197A74u;
    {
        const bool branch_taken_0x197a74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A74u;
            // 0x197a78: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a74) {
            ctx->pc = 0x197BC8u;
            goto label_197bc8;
        }
    }
    ctx->pc = 0x197A7Cu;
    // 0x197a7c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x197a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197a80: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x197a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x197a84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x197a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x197a88: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x197A88u;
    {
        const bool branch_taken_0x197a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197A88u;
            // 0x197a8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197a88) {
            ctx->pc = 0x197BCCu;
            goto label_197bcc;
        }
    }
    ctx->pc = 0x197A90u;
    // 0x197a90: 0xc621028c  lwc1        $f1, 0x28C($s1)
    ctx->pc = 0x197a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 652)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197a94: 0x3c01476a  lui         $at, 0x476A
    ctx->pc = 0x197a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18282 << 16));
    // 0x197a98: 0x34216000  ori         $at, $at, 0x6000
    ctx->pc = 0x197a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)24576);
    // 0x197a9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197aa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x197aa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197aa4: 0x0  nop
    ctx->pc = 0x197aa4u;
    // NOP
    // 0x197aa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x197AA8u;
    {
        const bool branch_taken_0x197aa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x197AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AA8u;
            // 0x197aac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197aa8) {
            ctx->pc = 0x197AB4u;
            goto label_197ab4;
        }
    }
    ctx->pc = 0x197AB0u;
    // 0x197ab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197ab4:
    // 0x197ab4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x197AB4u;
    {
        const bool branch_taken_0x197ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AB4u;
            // 0x197ab8: 0x3c030030  lui         $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ab4) {
            ctx->pc = 0x197AFCu;
            goto label_197afc;
        }
    }
    ctx->pc = 0x197ABCu;
    // 0x197abc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x197abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x197ac0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x197ac0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x197ac4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197ac4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197ac8: 0x9642002c  lhu         $v0, 0x2C($s2)
    ctx->pc = 0x197ac8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x197acc: 0xc6220288  lwc1        $f2, 0x288($s1)
    ctx->pc = 0x197accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x197ad0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x197ad0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x197ad4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x197ad4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x197ad8: 0xc4612d1c  lwc1        $f1, 0x2D1C($v1)
    ctx->pc = 0x197ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197adc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x197adcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x197ae0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x197ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197ae4: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x197ae4u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[3];
    // 0x197ae8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x197ae8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x197aec: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x197aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197af0: 0x0  nop
    ctx->pc = 0x197af0u;
    // NOP
    // 0x197af4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x197AF4u;
    {
        const bool branch_taken_0x197af4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197AF4u;
            // 0x197af8: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197af4) {
            ctx->pc = 0x197B04u;
            goto label_197b04;
        }
    }
    ctx->pc = 0x197AFCu;
label_197afc:
    // 0x197afc: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x197afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x197b00: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x197b00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_197b04:
    // 0x197b04: 0x8e02c994  lw          $v0, -0x366C($s0)
    ctx->pc = 0x197b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953364)));
    // 0x197b08: 0x50400030  beql        $v0, $zero, . + 4 + (0x30 << 2)
    ctx->pc = 0x197B08u;
    {
        const bool branch_taken_0x197b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197b08) {
            ctx->pc = 0x197B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B08u;
            // 0x197b0c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197BCCu;
            goto label_197bcc;
        }
    }
    ctx->pc = 0x197B10u;
    // 0x197b10: 0xc0909c4  jal         func_242710
    ctx->pc = 0x197B10u;
    SET_GPR_U32(ctx, 31, 0x197B18u);
    ctx->pc = 0x197B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B10u;
            // 0x197b14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B18u; }
        if (ctx->pc != 0x197B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B18u; }
        if (ctx->pc != 0x197B18u) { return; }
    }
    ctx->pc = 0x197B18u;
    // 0x197b18: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x197b18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x197b1c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x197b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x197b20: 0x8e10c994  lw          $s0, -0x366C($s0)
    ctx->pc = 0x197b20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953364)));
    // 0x197b24: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x197b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x197b28: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x197b28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x197b2c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B2Cu;
    {
        const bool branch_taken_0x197b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x197b2c) {
            ctx->pc = 0x197B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197B2Cu;
            // 0x197b30: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197B40u;
            goto label_197b40;
        }
    }
    ctx->pc = 0x197B34u;
    // 0x197b34: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x197B34u;
    {
        const bool branch_taken_0x197b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B34u;
            // 0x197b38: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b34) {
            ctx->pc = 0x197B5Cu;
            goto label_197b5c;
        }
    }
    ctx->pc = 0x197B3Cu;
    // 0x197b3c: 0x0  nop
    ctx->pc = 0x197b3cu;
    // NOP
label_197b40:
    // 0x197b40: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x197b40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x197b44: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x197b44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x197b48: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197B48u;
    {
        const bool branch_taken_0x197b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x197B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197B48u;
            // 0x197b4c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197b48) {
            ctx->pc = 0x197B5Cu;
            goto label_197b5c;
        }
    }
    ctx->pc = 0x197B50u;
    // 0x197b50: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x197B50u;
    SET_GPR_U32(ctx, 31, 0x197B58u);
    ctx->pc = 0x197B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B50u;
            // 0x197b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B58u; }
        if (ctx->pc != 0x197B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B58u; }
        if (ctx->pc != 0x197B58u) { return; }
    }
    ctx->pc = 0x197B58u;
    // 0x197b58: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x197b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_197b5c:
    // 0x197b5c: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x197b5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x197b60: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x197b60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197b64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197b68: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x197b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197b6c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x197B6Cu;
    SET_GPR_U32(ctx, 31, 0x197B74u);
    ctx->pc = 0x197B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197B6Cu;
            // 0x197b70: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B74u; }
        if (ctx->pc != 0x197B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197B74u; }
        if (ctx->pc != 0x197B74u) { return; }
    }
    ctx->pc = 0x197B74u;
    // 0x197b74: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x197b74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x197b78: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x197b78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197b7c: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x197b7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197b80: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x197b80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x197b84: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x197b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197b88: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x197b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197b8c: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x197b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x197b90: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x197b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x197b94: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197b98: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x197b98u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x197b9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x197b9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197ba0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x197ba0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x197ba4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x197ba4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x197ba8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x197ba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197bac: 0x0  nop
    ctx->pc = 0x197bacu;
    // NOP
    // 0x197bb0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x197BB0u;
    {
        const bool branch_taken_0x197bb0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x197BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BB0u;
            // 0x197bb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bb0) {
            ctx->pc = 0x197BC0u;
            goto label_197bc0;
        }
    }
    ctx->pc = 0x197BB8u;
    // 0x197bb8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x197bb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197bbc: 0x0  nop
    ctx->pc = 0x197bbcu;
    // NOP
label_197bc0:
    // 0x197bc0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x197BC0u;
    {
        const bool branch_taken_0x197bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197bc0) {
            ctx->pc = 0x197BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197BC0u;
            // 0x197bc4: 0xae600084  sw          $zero, 0x84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197BC8u;
            goto label_197bc8;
        }
    }
    ctx->pc = 0x197BC8u;
label_197bc8:
    // 0x197bc8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x197bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_197bcc:
    // 0x197bcc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x197bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197bd0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x197bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197bd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x197bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x197bd8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x197bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197bdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x197bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197be0: 0x3e00008  jr          $ra
    ctx->pc = 0x197BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BE0u;
            // 0x197be4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197BE8u;
    // 0x197be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x197be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x197bec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197bf0: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x197bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x197bf4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x197bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x197bf8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197BF8u;
    {
        const bool branch_taken_0x197bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197BF8u;
            // 0x197bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197bf8) {
            ctx->pc = 0x197C30u;
            goto label_197c30;
        }
    }
    ctx->pc = 0x197C00u;
    // 0x197c00: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x197c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x197c04: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x197c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x197c08: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x197c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197c0c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197c10: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x197c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x197c14: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197c18: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197c1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197c20: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x197C20u;
    {
        const bool branch_taken_0x197c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x197c20) {
            ctx->pc = 0x197C30u;
            goto label_197c30;
        }
    }
    ctx->pc = 0x197C28u;
    // 0x197c28: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x197c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x197c2c: 0x0  nop
    ctx->pc = 0x197c2cu;
    // NOP
label_197c30:
    // 0x197c30: 0xc0658e6  jal         func_196398
    ctx->pc = 0x197C30u;
    SET_GPR_U32(ctx, 31, 0x197C38u);
    ctx->pc = 0x196398u;
    if (runtime->hasFunction(0x196398u)) {
        auto targetFn = runtime->lookupFunction(0x196398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C38u; }
        if (ctx->pc != 0x197C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196398_0x196398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C38u; }
        if (ctx->pc != 0x197C38u) { return; }
    }
    ctx->pc = 0x197C38u;
    // 0x197c38: 0xc06599c  jal         func_196670
    ctx->pc = 0x197C38u;
    SET_GPR_U32(ctx, 31, 0x197C40u);
    ctx->pc = 0x196670u;
    if (runtime->hasFunction(0x196670u)) {
        auto targetFn = runtime->lookupFunction(0x196670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C40u; }
        if (ctx->pc != 0x197C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196670_0x196670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C40u; }
        if (ctx->pc != 0x197C40u) { return; }
    }
    ctx->pc = 0x197C40u;
    // 0x197c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197c44: 0x3e00008  jr          $ra
    ctx->pc = 0x197C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197C44u;
            // 0x197c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197C4Cu;
    // 0x197c4c: 0x0  nop
    ctx->pc = 0x197c4cu;
    // NOP
    // 0x197c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x197c54: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x197c58: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x197c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x197c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c60: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x197c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x197c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197c68: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x197c68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x197c6c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x197c6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x197c70: 0xc065aba  jal         func_196AE8
    ctx->pc = 0x197C70u;
    SET_GPR_U32(ctx, 31, 0x197C78u);
    ctx->pc = 0x197C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C70u;
            // 0x197c74: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AE8u;
    if (runtime->hasFunction(0x196AE8u)) {
        auto targetFn = runtime->lookupFunction(0x196AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C78u; }
        if (ctx->pc != 0x197C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_196ae8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C78u; }
        if (ctx->pc != 0x197C78u) { return; }
    }
    ctx->pc = 0x197C78u;
    // 0x197c78: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x197C78u;
    {
        const bool branch_taken_0x197c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x197c78) {
            ctx->pc = 0x197C7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197C78u;
            // 0x197c7c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197F94u;
            goto label_197f94;
        }
    }
    ctx->pc = 0x197C80u;
    // 0x197c80: 0xc065abe  jal         func_196AF8
    ctx->pc = 0x197C80u;
    SET_GPR_U32(ctx, 31, 0x197C88u);
    ctx->pc = 0x197C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197C80u;
            // 0x197c84: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AF8u;
    if (runtime->hasFunction(0x196AF8u)) {
        auto targetFn = runtime->lookupFunction(0x196AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C88u; }
        if (ctx->pc != 0x197C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AF8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197C88u; }
        if (ctx->pc != 0x197C88u) { return; }
    }
    ctx->pc = 0x197C88u;
    // 0x197c88: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x197c88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x197c8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197c90: 0x2644e848  addiu       $a0, $s2, -0x17B8
    ctx->pc = 0x197c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x197c94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x197c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x197c98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x197c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197c9c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ca0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x197ca4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x197ca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x197ca8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x197ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x197cac: 0x40f809  jalr        $v0
    ctx->pc = 0x197CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197CB4u);
        ctx->pc = 0x197CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CACu;
            // 0x197cb0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197CB4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197CB4u; }
            if (ctx->pc != 0x197CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x197CB4u;
    // 0x197cb4: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x197cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x197cb8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x197cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x197cbc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x197CBCu;
    {
        const bool branch_taken_0x197cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CBCu;
            // 0x197cc0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cbc) {
            ctx->pc = 0x197CF4u;
            goto label_197cf4;
        }
    }
    ctx->pc = 0x197CC4u;
    // 0x197cc4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x197cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x197cc8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x197cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x197ccc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x197cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197cd0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197cd4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x197cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x197cd8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197cdc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197ce4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x197CE4u;
    {
        const bool branch_taken_0x197ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x197CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CE4u;
            // 0x197ce8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ce4) {
            ctx->pc = 0x197CF0u;
            goto label_197cf0;
        }
    }
    ctx->pc = 0x197CECu;
    // 0x197cec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x197cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_197cf0:
    // 0x197cf0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x197cf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_197cf4:
    // 0x197cf4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x197cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x197cf8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x197CF8u;
    {
        const bool branch_taken_0x197cf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197CF8u;
            // 0x197cfc: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197cf8) {
            ctx->pc = 0x197D54u;
            goto label_197d54;
        }
    }
    ctx->pc = 0x197D00u;
    // 0x197d00: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x197d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x197d04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x197d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197d08: 0x24427be8  addiu       $v0, $v0, 0x7BE8
    ctx->pc = 0x197d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31720));
    // 0x197d0c: 0xc065774  jal         func_195DD0
    ctx->pc = 0x197D0Cu;
    SET_GPR_U32(ctx, 31, 0x197D14u);
    ctx->pc = 0x197D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D0Cu;
            // 0x197d10: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195DD0u;
    if (runtime->hasFunction(0x195DD0u)) {
        auto targetFn = runtime->lookupFunction(0x195DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D14u; }
        if (ctx->pc != 0x197D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195DD0_0x195dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D14u; }
        if (ctx->pc != 0x197D14u) { return; }
    }
    ctx->pc = 0x197D14u;
    // 0x197d14: 0xc0659ac  jal         func_1966B0
    ctx->pc = 0x197D14u;
    SET_GPR_U32(ctx, 31, 0x197D1Cu);
    ctx->pc = 0x1966B0u;
    if (runtime->hasFunction(0x1966B0u)) {
        auto targetFn = runtime->lookupFunction(0x1966B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D1Cu; }
        if (ctx->pc != 0x197D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001966B0_0x1966b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D1Cu; }
        if (ctx->pc != 0x197D1Cu) { return; }
    }
    ctx->pc = 0x197D1Cu;
    // 0x197d1c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197d20: 0xc0659d2  jal         func_196748
    ctx->pc = 0x197D20u;
    SET_GPR_U32(ctx, 31, 0x197D28u);
    ctx->pc = 0x197D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D20u;
            // 0x197d24: 0xac40c990  sw          $zero, -0x3670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196748u;
    if (runtime->hasFunction(0x196748u)) {
        auto targetFn = runtime->lookupFunction(0x196748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D28u; }
        if (ctx->pc != 0x197D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196748_0x196748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D28u; }
        if (ctx->pc != 0x197D28u) { return; }
    }
    ctx->pc = 0x197D28u;
    // 0x197d28: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x197d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x197d2c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x197d2cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x197d30: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x197d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x197d34: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x197d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x197d38: 0x40f809  jalr        $v0
    ctx->pc = 0x197D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197D40u);
        ctx->pc = 0x197D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D38u;
            // 0x197d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197D40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197D40u; }
            if (ctx->pc != 0x197D40u) { return; }
        }
        }
    }
    ctx->pc = 0x197D40u;
    // 0x197d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197d44: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x197d44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x197d48: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x197d48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x197d4c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x197d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x197d50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_197d54:
    // 0x197d54: 0x8c42c994  lw          $v0, -0x366C($v0)
    ctx->pc = 0x197d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953364)));
    // 0x197d58: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x197D58u;
    {
        const bool branch_taken_0x197d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D58u;
            // 0x197d5c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d58) {
            ctx->pc = 0x197F94u;
            goto label_197f94;
        }
    }
    ctx->pc = 0x197D60u;
    // 0x197d60: 0xc065afa  jal         func_196BE8
    ctx->pc = 0x197D60u;
    SET_GPR_U32(ctx, 31, 0x197D68u);
    ctx->pc = 0x197D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197D60u;
            // 0x197d64: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE8u;
    if (runtime->hasFunction(0x196BE8u)) {
        auto targetFn = runtime->lookupFunction(0x196BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D68u; }
        if (ctx->pc != 0x197D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196BE8_0x196be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D68u; }
        if (ctx->pc != 0x197D68u) { return; }
    }
    ctx->pc = 0x197D68u;
    // 0x197d68: 0x8e02c9a4  lw          $v0, -0x365C($s0)
    ctx->pc = 0x197d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953380)));
    // 0x197d6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x197D6Cu;
    {
        const bool branch_taken_0x197d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D6Cu;
            // 0x197d70: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197d6c) {
            ctx->pc = 0x197D8Cu;
            goto label_197d8c;
        }
    }
    ctx->pc = 0x197D74u;
    // 0x197d74: 0x8c42c990  lw          $v0, -0x3670($v0)
    ctx->pc = 0x197d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953360)));
    // 0x197d78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197D78u;
    {
        const bool branch_taken_0x197d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x197d78) {
            ctx->pc = 0x197D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197D78u;
            // 0x197d7c: 0xae00c9a4  sw          $zero, -0x365C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197D8Cu;
            goto label_197d8c;
        }
    }
    ctx->pc = 0x197D80u;
    // 0x197d80: 0xc065cd2  jal         func_197348
    ctx->pc = 0x197D80u;
    SET_GPR_U32(ctx, 31, 0x197D88u);
    ctx->pc = 0x197348u;
    if (runtime->hasFunction(0x197348u)) {
        auto targetFn = runtime->lookupFunction(0x197348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D88u; }
        if (ctx->pc != 0x197D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197348_0x197348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197D88u; }
        if (ctx->pc != 0x197D88u) { return; }
    }
    ctx->pc = 0x197D88u;
    // 0x197d88: 0xae00c9a4  sw          $zero, -0x365C($s0)
    ctx->pc = 0x197d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953380), GPR_U32(ctx, 0));
label_197d8c:
    // 0x197d8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x197d90: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x197d90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x197d94: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x197d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x197d98: 0x40f809  jalr        $v0
    ctx->pc = 0x197D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197DA0u);
        ctx->pc = 0x197D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197D98u;
            // 0x197d9c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197DA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197DA0u; }
            if (ctx->pc != 0x197DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x197DA0u;
    // 0x197da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x197da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197da4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x197da8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197dac: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x197db0: 0xc443c658  lwc1        $f3, -0x39A8($v0)
    ctx->pc = 0x197db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x197db4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x197db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x197db8: 0xc461c98c  lwc1        $f1, -0x3674($v1)
    ctx->pc = 0x197db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294953356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197dbc: 0xc480c988  lwc1        $f0, -0x3678($a0)
    ctx->pc = 0x197dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294953352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197dc0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x197dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x197dc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197dc8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x197dc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x197dcc: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x197dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197dd0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x197dd0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x197dd4: 0x8ca2c990  lw          $v0, -0x3670($a1)
    ctx->pc = 0x197dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953360)));
    // 0x197dd8: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x197dd8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    // 0x197ddc: 0xc6160024  lwc1        $f22, 0x24($s0)
    ctx->pc = 0x197ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x197de0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x197DE0u;
    {
        const bool branch_taken_0x197de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197DE0u;
            // 0x197de4: 0x46000040  add.s       $f1, $f0, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197de0) {
            ctx->pc = 0x197E1Cu;
            goto label_197e1c;
        }
    }
    ctx->pc = 0x197DE8u;
    // 0x197de8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x197de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197dec: 0x0  nop
    ctx->pc = 0x197decu;
    // NOP
    // 0x197df0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x197DF0u;
    {
        const bool branch_taken_0x197df0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x197df0) {
            ctx->pc = 0x197DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197DF0u;
            // 0x197df4: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x197DF8u;
            goto label_197df8;
        }
    }
    ctx->pc = 0x197DF8u;
label_197df8:
    // 0x197df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x197dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197e00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x197e00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197e04: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x197E04u;
    {
        const bool branch_taken_0x197e04 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197e04) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197E0Cu;
    // 0x197e0c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x197e10: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x197e10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x197e14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x197E14u;
    {
        const bool branch_taken_0x197e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E14u;
            // 0x197e18: 0xaca0c990  sw          $zero, -0x3670($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197e14) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197E1Cu;
label_197e1c:
    // 0x197e1c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x197e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197e20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x197E20u;
    {
        const bool branch_taken_0x197e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x197e20) {
            ctx->pc = 0x197E38u;
            goto label_197e38;
        }
    }
    ctx->pc = 0x197E28u;
    // 0x197e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x197e2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197e30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x197e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x197e34: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x197e34u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_197e38:
    // 0x197e38: 0xc0659d2  jal         func_196748
    ctx->pc = 0x197E38u;
    SET_GPR_U32(ctx, 31, 0x197E40u);
    ctx->pc = 0x196748u;
    if (runtime->hasFunction(0x196748u)) {
        auto targetFn = runtime->lookupFunction(0x196748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E40u; }
        if (ctx->pc != 0x197E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196748_0x196748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E40u; }
        if (ctx->pc != 0x197E40u) { return; }
    }
    ctx->pc = 0x197E40u;
    // 0x197e40: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x197e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x197e44: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x197e44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x197e48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197e4c: 0xc441c980  lwc1        $f1, -0x3680($v0)
    ctx->pc = 0x197e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x197e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x197e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197e58: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x197e58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x197e5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x197e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x197e60: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x197e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x197e64: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x197e64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x197e68: 0xc081504  jal         func_205410
    ctx->pc = 0x197E68u;
    SET_GPR_U32(ctx, 31, 0x197E70u);
    ctx->pc = 0x197E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E68u;
            // 0x197e6c: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E70u; }
        if (ctx->pc != 0x197E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E70u; }
        if (ctx->pc != 0x197E70u) { return; }
    }
    ctx->pc = 0x197E70u;
    // 0x197e70: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x197e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x197e74: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x197e74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x197e78: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x197e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x197e7c: 0x40f809  jalr        $v0
    ctx->pc = 0x197E7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197E84u);
        ctx->pc = 0x197E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197E7Cu;
            // 0x197e80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197E84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197E84u; }
            if (ctx->pc != 0x197E84u) { return; }
        }
        }
    }
    ctx->pc = 0x197E84u;
    // 0x197e84: 0xc44401b8  lwc1        $f4, 0x1B8($v0)
    ctx->pc = 0x197e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x197e88: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x197e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x197e8c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x197e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x197e90: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x197e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x197e94: 0x46002005  abs.s       $f0, $f4
    ctx->pc = 0x197e94u;
    ctx->f[0] = FPU_ABS_S(ctx->f[4]);
    // 0x197e98: 0x3c013f05  lui         $at, 0x3F05
    ctx->pc = 0x197e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16133 << 16));
    // 0x197e9c: 0x34211eb9  ori         $at, $at, 0x1EB9
    ctx->pc = 0x197e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7865);
    // 0x197ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197ea4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x197ea4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x197ea8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x197eac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197eb0: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x197eb0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x197eb4: 0x46150028  max.s       $f0, $f0, $f21
    ctx->pc = 0x197eb4u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[21]);
    // 0x197eb8: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x197eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x197ebc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x197ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x197ec0: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x197ec0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x197ec4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x197ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x197ec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x197ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x197ecc: 0x46041836  c.le.s      $f3, $f4
    ctx->pc = 0x197eccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197ed0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x197ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x197ed4: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x197ED4u;
    {
        const bool branch_taken_0x197ed4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197ED4u;
            // 0x197ed8: 0x46010500  add.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ed4) {
            ctx->pc = 0x197F10u;
            goto label_197f10;
        }
    }
    ctx->pc = 0x197EDCu;
    // 0x197edc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197ee0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x197ee0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x197ee4: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x197EE4u;
    SET_GPR_U32(ctx, 31, 0x197EECu);
    ctx->pc = 0x197EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EE4u;
            // 0x197ee8: 0x8444505c  lh          $a0, 0x505C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20572)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EECu; }
        if (ctx->pc != 0x197EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EECu; }
        if (ctx->pc != 0x197EECu) { return; }
    }
    ctx->pc = 0x197EECu;
    // 0x197eec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197ef0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x197ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x197ef4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x197ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x197ef8: 0x8444505e  lh          $a0, 0x505E($v0)
    ctx->pc = 0x197ef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20574)));
    // 0x197efc: 0xc065928  jal         func_1964A0
    ctx->pc = 0x197EFCu;
    SET_GPR_U32(ctx, 31, 0x197F04u);
    ctx->pc = 0x197F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EFCu;
            // 0x197f00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964A0u;
    if (runtime->hasFunction(0x1964A0u)) {
        auto targetFn = runtime->lookupFunction(0x1964A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F04u; }
        if (ctx->pc != 0x197F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964A0_0x1964a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F04u; }
        if (ctx->pc != 0x197F04u) { return; }
    }
    ctx->pc = 0x197F04u;
    // 0x197f04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x197F04u;
    {
        const bool branch_taken_0x197f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F04u;
            // 0x197f08: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f04) {
            ctx->pc = 0x197F78u;
            goto label_197f78;
        }
    }
    ctx->pc = 0x197F0Cu;
    // 0x197f0c: 0x0  nop
    ctx->pc = 0x197f0cu;
    // NOP
label_197f10:
    // 0x197f10: 0x3c01bda3  lui         $at, 0xBDA3
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48547 << 16));
    // 0x197f14: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x197f14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x197f18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197f18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x197f1c: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x197f1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x197f20: 0x0  nop
    ctx->pc = 0x197f20u;
    // NOP
    // 0x197f24: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x197F24u;
    {
        const bool branch_taken_0x197f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x197F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F24u;
            // 0x197f28: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f24) {
            ctx->pc = 0x197F58u;
            goto label_197f58;
        }
    }
    ctx->pc = 0x197F2Cu;
    // 0x197f2c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x197f30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x197f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x197f34: 0x8444505c  lh          $a0, 0x505C($v0)
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20572)));
    // 0x197f38: 0xc065928  jal         func_1964A0
    ctx->pc = 0x197F38u;
    SET_GPR_U32(ctx, 31, 0x197F40u);
    ctx->pc = 0x197F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F38u;
            // 0x197f3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1964A0u;
    if (runtime->hasFunction(0x1964A0u)) {
        auto targetFn = runtime->lookupFunction(0x1964A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F40u; }
        if (ctx->pc != 0x197F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964A0_0x1964a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F40u; }
        if (ctx->pc != 0x197F40u) { return; }
    }
    ctx->pc = 0x197F40u;
    // 0x197f40: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197f44: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x197f44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x197f48: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x197F48u;
    SET_GPR_U32(ctx, 31, 0x197F50u);
    ctx->pc = 0x197F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F48u;
            // 0x197f4c: 0x8444505e  lh          $a0, 0x505E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20574)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F50u; }
        if (ctx->pc != 0x197F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F50u; }
        if (ctx->pc != 0x197F50u) { return; }
    }
    ctx->pc = 0x197F50u;
    // 0x197f50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x197F50u;
    {
        const bool branch_taken_0x197f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F50u;
            // 0x197f54: 0x2642e848  addiu       $v0, $s2, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f50) {
            ctx->pc = 0x197F78u;
            goto label_197f78;
        }
    }
    ctx->pc = 0x197F58u;
label_197f58:
    // 0x197f58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x197f58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x197f5c: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x197F5Cu;
    SET_GPR_U32(ctx, 31, 0x197F64u);
    ctx->pc = 0x197F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F5Cu;
            // 0x197f60: 0x8444505c  lh          $a0, 0x505C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20572)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F64u; }
        if (ctx->pc != 0x197F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F64u; }
        if (ctx->pc != 0x197F64u) { return; }
    }
    ctx->pc = 0x197F64u;
    // 0x197f64: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x197f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x197f68: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x197f68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x197f6c: 0xc06596a  jal         func_1965A8
    ctx->pc = 0x197F6Cu;
    SET_GPR_U32(ctx, 31, 0x197F74u);
    ctx->pc = 0x197F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F6Cu;
            // 0x197f70: 0x8444505e  lh          $a0, 0x505E($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20574)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1965A8u;
    if (runtime->hasFunction(0x1965A8u)) {
        auto targetFn = runtime->lookupFunction(0x1965A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F74u; }
        if (ctx->pc != 0x197F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001965A8_0x1965a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F74u; }
        if (ctx->pc != 0x197F74u) { return; }
    }
    ctx->pc = 0x197F74u;
    // 0x197f74: 0x2642e848  addiu       $v0, $s2, -0x17B8
    ctx->pc = 0x197f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
label_197f78:
    // 0x197f78: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x197f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x197f7c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x197f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x197f80: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x197f80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x197f84: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x197f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x197f88: 0x40f809  jalr        $v0
    ctx->pc = 0x197F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x197F90u);
        ctx->pc = 0x197F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F88u;
            // 0x197f8c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x197F90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x197F90u; }
            if (ctx->pc != 0x197F90u) { return; }
        }
        }
    }
    ctx->pc = 0x197F90u;
    // 0x197f90: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x197f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_197f94:
    // 0x197f94: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x197f94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x197f98: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x197f98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x197f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x197f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x197fa0: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x197fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x197fa4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x197fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x197fa8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x197fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x197fac: 0x3e00008  jr          $ra
    ctx->pc = 0x197FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x197FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FACu;
            // 0x197fb0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x197FB4u;
    // 0x197fb4: 0x0  nop
    ctx->pc = 0x197fb4u;
    // NOP
    // 0x197fb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x197fbc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x197fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x197fc0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x197fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x197fc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x197fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x197fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x197fcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x197fd0: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x197fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x197fd4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x197fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x197fd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x197FD8u;
    {
        const bool branch_taken_0x197fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x197FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FD8u;
            // 0x197fdc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fd8) {
            ctx->pc = 0x198014u;
            goto label_198014;
        }
    }
    ctx->pc = 0x197FE0u;
    // 0x197fe0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x197fe4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x197fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x197fe8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x197fe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x197fec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x197fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x197ff0: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x197ff4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x197ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x197ff8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x197ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197ffc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x197ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198000: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x198000u;
    {
        const bool branch_taken_0x198000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x198004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198000u;
            // 0x198004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198000) {
            ctx->pc = 0x198010u;
            goto label_198010;
        }
    }
    ctx->pc = 0x198008u;
    // 0x198008: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19800c: 0x0  nop
    ctx->pc = 0x19800cu;
    // NOP
label_198010:
    // 0x198010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198014:
    // 0x198014: 0xc065aba  jal         func_196AE8
    ctx->pc = 0x198014u;
    SET_GPR_U32(ctx, 31, 0x19801Cu);
    ctx->pc = 0x196AE8u;
    if (runtime->hasFunction(0x196AE8u)) {
        auto targetFn = runtime->lookupFunction(0x196AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19801Cu; }
        if (ctx->pc != 0x19801Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_196ae8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19801Cu; }
        if (ctx->pc != 0x19801Cu) { return; }
    }
    ctx->pc = 0x19801Cu;
    // 0x19801c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19801Cu;
    {
        const bool branch_taken_0x19801c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19801Cu;
            // 0x198020: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19801c) {
            ctx->pc = 0x198088u;
            goto label_198088;
        }
    }
    ctx->pc = 0x198024u;
    // 0x198024: 0xc065abe  jal         func_196AF8
    ctx->pc = 0x198024u;
    SET_GPR_U32(ctx, 31, 0x19802Cu);
    ctx->pc = 0x198028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198024u;
            // 0x198028: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196AF8u;
    if (runtime->hasFunction(0x196AF8u)) {
        auto targetFn = runtime->lookupFunction(0x196AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19802Cu; }
        if (ctx->pc != 0x19802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AF8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19802Cu; }
        if (ctx->pc != 0x19802Cu) { return; }
    }
    ctx->pc = 0x19802Cu;
    // 0x19802c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19802cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198030: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x198030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x198034: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198038: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19803c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198040: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198044: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x198044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198048: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x198048u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19804c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19804cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x198050: 0x40f809  jalr        $v0
    ctx->pc = 0x198050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198058u);
        ctx->pc = 0x198054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198050u;
            // 0x198054: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198058u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198058u; }
            if (ctx->pc != 0x198058u) { return; }
        }
        }
    }
    ctx->pc = 0x198058u;
    // 0x198058: 0xc065774  jal         func_195DD0
    ctx->pc = 0x198058u;
    SET_GPR_U32(ctx, 31, 0x198060u);
    ctx->pc = 0x19805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198058u;
            // 0x19805c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195DD0u;
    if (runtime->hasFunction(0x195DD0u)) {
        auto targetFn = runtime->lookupFunction(0x195DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198060u; }
        if (ctx->pc != 0x198060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00195DD0_0x195dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198060u; }
        if (ctx->pc != 0x198060u) { return; }
    }
    ctx->pc = 0x198060u;
    // 0x198060: 0xc065cd2  jal         func_197348
    ctx->pc = 0x198060u;
    SET_GPR_U32(ctx, 31, 0x198068u);
    ctx->pc = 0x197348u;
    if (runtime->hasFunction(0x197348u)) {
        auto targetFn = runtime->lookupFunction(0x197348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198068u; }
        if (ctx->pc != 0x198068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197348_0x197348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198068u; }
        if (ctx->pc != 0x198068u) { return; }
    }
    ctx->pc = 0x198068u;
    // 0x198068: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x19806c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198070: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x198074: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x198078: 0x40f809  jalr        $v0
    ctx->pc = 0x198078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198080u);
        ctx->pc = 0x19807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198078u;
            // 0x19807c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198080u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198080u; }
            if (ctx->pc != 0x198080u) { return; }
        }
        }
    }
    ctx->pc = 0x198080u;
    // 0x198080: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x198080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198084: 0x0  nop
    ctx->pc = 0x198084u;
    // NOP
label_198088:
    // 0x198088: 0xa642002a  sh          $v0, 0x2A($s2)
    ctx->pc = 0x198088u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19808c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x19808cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198090: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198094: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198098: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19809c: 0x3e00008  jr          $ra
    ctx->pc = 0x19809Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1980A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19809Cu;
            // 0x1980a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1980A4u;
    // 0x1980a4: 0x0  nop
    ctx->pc = 0x1980a4u;
    // NOP
    // 0x1980a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1980a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1980ac: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1980acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1980b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1980b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1980b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1980b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1980b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1980b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1980bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1980bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1980c0: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1980c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1980c4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1980c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1980c8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x1980c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1980cc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x1980d0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1980D0u;
    {
        const bool branch_taken_0x1980d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1980D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980D0u;
            // 0x1980d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d0) {
            ctx->pc = 0x19810Cu;
            goto label_19810c;
        }
    }
    ctx->pc = 0x1980D8u;
    // 0x1980d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1980d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1980dc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1980dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1980e0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1980e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1980e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1980e8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1980e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1980ec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1980ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1980f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1980f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1980f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1980f8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1980F8u;
    {
        const bool branch_taken_0x1980f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1980FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980F8u;
            // 0x1980fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980f8) {
            ctx->pc = 0x198108u;
            goto label_198108;
        }
    }
    ctx->pc = 0x198100u;
    // 0x198100: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x198104: 0x0  nop
    ctx->pc = 0x198104u;
    // NOP
label_198108:
    // 0x198108: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19810c:
    // 0x19810c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198110: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x198110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x198114: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x198118: 0x40f809  jalr        $v0
    ctx->pc = 0x198118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198120u);
        ctx->pc = 0x19811Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198118u;
            // 0x19811c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198120u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198120u; }
            if (ctx->pc != 0x198120u) { return; }
        }
        }
    }
    ctx->pc = 0x198120u;
    // 0x198120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198124: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x198124u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x198128: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x198128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x19812c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19812Cu;
    {
        const bool branch_taken_0x19812c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19812Cu;
            // 0x198130: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19812c) {
            ctx->pc = 0x1981A0u;
            goto label_1981a0;
        }
    }
    ctx->pc = 0x198134u;
    // 0x198134: 0xc0659d2  jal         func_196748
    ctx->pc = 0x198134u;
    SET_GPR_U32(ctx, 31, 0x19813Cu);
    ctx->pc = 0x198138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198134u;
            // 0x198138: 0xa6420044  sh          $v0, 0x44($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196748u;
    if (runtime->hasFunction(0x196748u)) {
        auto targetFn = runtime->lookupFunction(0x196748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19813Cu; }
        if (ctx->pc != 0x19813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196748_0x196748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19813Cu; }
        if (ctx->pc != 0x19813Cu) { return; }
    }
    ctx->pc = 0x19813Cu;
    // 0x19813c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x19813cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x198140: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x198140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x198144: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x198144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198148: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198148u;
    {
        const bool branch_taken_0x198148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19814Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198148u;
            // 0x19814c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198148) {
            ctx->pc = 0x198154u;
            goto label_198154;
        }
    }
    ctx->pc = 0x198150u;
    // 0x198150: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x198150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_198154:
    // 0x198154: 0xc4740008  lwc1        $f20, 0x8($v1)
    ctx->pc = 0x198154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x198158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19815c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19815cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198160: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x198160u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[1];
    // 0x198164: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x198168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x198168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19816c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x19816cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x198170: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x198170u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x198174: 0x4601a528  max.s       $f20, $f20, $f1
    ctx->pc = 0x198174u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[1]);
    // 0x198178: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19817c: 0x4600a529  min.s       $f20, $f20, $f0
    ctx->pc = 0x19817cu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[0]);
    // 0x198180: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x198180u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x198184: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x198184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x198188: 0x40f809  jalr        $v0
    ctx->pc = 0x198188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198190u);
        ctx->pc = 0x19818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198188u;
            // 0x19818c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198190u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198190u; }
            if (ctx->pc != 0x198190u) { return; }
        }
        }
    }
    ctx->pc = 0x198190u;
    // 0x198190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198194: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x198194u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x198198: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x198198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x19819c: 0xe4550024  swc1        $f21, 0x24($v0)
    ctx->pc = 0x19819cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1981a0:
    // 0x1981a0: 0xc0659d2  jal         func_196748
    ctx->pc = 0x1981A0u;
    SET_GPR_U32(ctx, 31, 0x1981A8u);
    ctx->pc = 0x1981A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1981A0u;
            // 0x1981a4: 0xc6140024  lwc1        $f20, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196748u;
    if (runtime->hasFunction(0x196748u)) {
        auto targetFn = runtime->lookupFunction(0x196748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981A8u; }
        if (ctx->pc != 0x1981A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196748_0x196748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1981A8u; }
        if (ctx->pc != 0x1981A8u) { return; }
    }
    ctx->pc = 0x1981A8u;
    // 0x1981a8: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1981a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1981ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1981acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1981b0: 0xc441c980  lwc1        $f1, -0x3680($v0)
    ctx->pc = 0x1981b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1981b4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x1981b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1981b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1981b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1981bc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x1981bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1981c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1981c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1981c4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1981C4u;
    {
        const bool branch_taken_0x1981c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981C4u;
            // 0x1981c8: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c4) {
            ctx->pc = 0x1981D0u;
            goto label_1981d0;
        }
    }
    ctx->pc = 0x1981CCu;
    // 0x1981cc: 0xc462001c  lwc1        $f2, 0x1C($v1)
    ctx->pc = 0x1981ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1981d0:
    // 0x1981d0: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1981d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1981d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1981d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1981d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1981d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1981dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1981dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x1981e0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1981e4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1981e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1981e8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1981e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1981ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1981ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1981f0: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1981f0u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1981f4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1981f4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1981f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1981f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1981fc: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1981fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x198200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198204: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x198204u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x198208: 0xc081504  jal         func_205410
    ctx->pc = 0x198208u;
    SET_GPR_U32(ctx, 31, 0x198210u);
    ctx->pc = 0x19820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198208u;
            // 0x19820c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198210u; }
        if (ctx->pc != 0x198210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198210u; }
        if (ctx->pc != 0x198210u) { return; }
    }
    ctx->pc = 0x198210u;
    // 0x198210: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x198210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198214: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x198214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198218: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x198218u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19821c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19821cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198220: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x198220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x198224: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x198224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x198228: 0x3e00008  jr          $ra
    ctx->pc = 0x198228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198228u;
            // 0x19822c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198230u;
    // 0x198230: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x198234: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x198234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x198238: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x198238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x19823c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19823cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x198240: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x198240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198244: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x198244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x198248: 0x8e04cd58  lw          $a0, -0x32A8($s0)
    ctx->pc = 0x198248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954328)));
    // 0x19824c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x19824cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x198250: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x198250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x198254: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x198254u;
    SET_GPR_U32(ctx, 31, 0x19825Cu);
    ctx->pc = 0x198258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198254u;
            // 0x198258: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19825Cu; }
        if (ctx->pc != 0x19825Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19825Cu; }
        if (ctx->pc != 0x19825Cu) { return; }
    }
    ctx->pc = 0x19825Cu;
    // 0x19825c: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x19825cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x198260: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x198260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198264: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x198268: 0x2463e040  addiu       $v1, $v1, -0x1FC0
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959168));
    // 0x19826c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x198270: 0x8e720060  lw          $s2, 0x60($s3)
    ctx->pc = 0x198270u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x198274: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x198274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x198278: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x198278u;
    {
        const bool branch_taken_0x198278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19827Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198278u;
            // 0x19827c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198278) {
            ctx->pc = 0x1982B4u;
            goto label_1982b4;
        }
    }
    ctx->pc = 0x198280u;
    // 0x198280: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x198280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x198284: 0x121dc2  srl         $v1, $s2, 23
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 23));
    // 0x198288: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x198288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19828c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x198290: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x198290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x198294: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x198298: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19829c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1982a0: 0x14520003  bne         $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1982A0u;
    {
        const bool branch_taken_0x1982a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1982A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982A0u;
            // 0x1982a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a0) {
            ctx->pc = 0x1982B0u;
            goto label_1982b0;
        }
    }
    ctx->pc = 0x1982A8u;
    // 0x1982a8: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1982a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1982ac: 0x0  nop
    ctx->pc = 0x1982acu;
    // NOP
label_1982b0:
    // 0x1982b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1982b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1982b4:
    // 0x1982b4: 0x8e04cd58  lw          $a0, -0x32A8($s0)
    ctx->pc = 0x1982b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954328)));
    // 0x1982b8: 0xc4ac0024  lwc1        $f12, 0x24($a1)
    ctx->pc = 0x1982b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1982bc: 0xc076fa6  jal         func_1DBE98
    ctx->pc = 0x1982BCu;
    SET_GPR_U32(ctx, 31, 0x1982C4u);
    ctx->pc = 0x1982C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1982BCu;
            // 0x1982c0: 0x8e700068  lw          $s0, 0x68($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DBE98u;
    if (runtime->hasFunction(0x1DBE98u)) {
        auto targetFn = runtime->lookupFunction(0x1DBE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982C4u; }
        if (ctx->pc != 0x1982C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DBE98_0x1dbe98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982C4u; }
        if (ctx->pc != 0x1982C4u) { return; }
    }
    ctx->pc = 0x1982C4u;
    // 0x1982c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1982c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1982c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982cc: 0x8c44c8d8  lw          $a0, -0x3728($v0)
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953176)));
    // 0x1982d0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1982D0u;
    SET_GPR_U32(ctx, 31, 0x1982D8u);
    ctx->pc = 0x1982D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1982D0u;
            // 0x1982d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982D8u; }
        if (ctx->pc != 0x1982D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1982D8u; }
        if (ctx->pc != 0x1982D8u) { return; }
    }
    ctx->pc = 0x1982D8u;
    // 0x1982d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1982dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1982dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982e0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1982e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1982e4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1982e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1982e8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1982e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1982ec: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1982ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1982f0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1982f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1982f4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1982f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1982f8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1982f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1982fc: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x1982fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x198300: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x198300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x198304: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x198304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x198308: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x198308u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19830c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19830cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x198310: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x198310u;
    {
        const bool branch_taken_0x198310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198310) {
            ctx->pc = 0x198348u;
            goto label_198348;
        }
    }
    ctx->pc = 0x198318u;
    // 0x198318: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x198318u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x19831c: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x19831cu;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x198320: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x198320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198324: 0x4be1133d  vmr32.xyzw  $vf1, $vf2
    ctx->pc = 0x198324u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x198328: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x198328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19832c: 0x4be30b3d  vmr32.xyzw  $vf3, $vf1
    ctx->pc = 0x19832cu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x198330: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x198330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198334: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x198334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x198338: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x198338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19833c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x19833cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x198340: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x198340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x198344: 0x0  nop
    ctx->pc = 0x198344u;
    // NOP
label_198348:
    // 0x198348: 0xc065abe  jal         func_196AF8
    ctx->pc = 0x198348u;
    SET_GPR_U32(ctx, 31, 0x198350u);
    ctx->pc = 0x196AF8u;
    if (runtime->hasFunction(0x196AF8u)) {
        auto targetFn = runtime->lookupFunction(0x196AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198350u; }
        if (ctx->pc != 0x198350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AF8_0x196af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198350u; }
        if (ctx->pc != 0x198350u) { return; }
    }
    ctx->pc = 0x198350u;
    // 0x198350: 0x82030031  lb          $v1, 0x31($s0)
    ctx->pc = 0x198350u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 49)));
    // 0x198354: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x198354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x198358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19835c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x19835cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198360: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x198360u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x198364: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x198364u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x198368: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19836c: 0xc064408  jal         func_191020
    ctx->pc = 0x19836Cu;
    SET_GPR_U32(ctx, 31, 0x198374u);
    ctx->pc = 0x198370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19836Cu;
            // 0x198370: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x191020u;
    if (runtime->hasFunction(0x191020u)) {
        auto targetFn = runtime->lookupFunction(0x191020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00191020_0x191020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    }
    ctx->pc = 0x198374u;
    // 0x198374: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198378: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x198378u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19837c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x19837cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x198380: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x198380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198384: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x198384u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x198388: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x198388u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19838c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x19838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198390: 0x3e00008  jr          $ra
    ctx->pc = 0x198390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198390u;
            // 0x198394: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x197850u: goto label_197850;
            case 0x1978B0u: goto label_1978b0;
            case 0x19793Cu: goto label_19793c;
            case 0x197940u: goto label_197940;
            case 0x1979A0u: goto label_1979a0;
            case 0x1979A4u: goto label_1979a4;
            case 0x1979D0u: goto label_1979d0;
            case 0x1979E0u: goto label_1979e0;
            case 0x197A20u: goto label_197a20;
            case 0x197A24u: goto label_197a24;
            case 0x197A70u: goto label_197a70;
            case 0x197A74u: goto label_197a74;
            case 0x197AB4u: goto label_197ab4;
            case 0x197AFCu: goto label_197afc;
            case 0x197B04u: goto label_197b04;
            case 0x197B40u: goto label_197b40;
            case 0x197B5Cu: goto label_197b5c;
            case 0x197BC0u: goto label_197bc0;
            case 0x197BC8u: goto label_197bc8;
            case 0x197BCCu: goto label_197bcc;
            case 0x197C30u: goto label_197c30;
            case 0x197CF0u: goto label_197cf0;
            case 0x197CF4u: goto label_197cf4;
            case 0x197D54u: goto label_197d54;
            case 0x197D8Cu: goto label_197d8c;
            case 0x197DF8u: goto label_197df8;
            case 0x197E1Cu: goto label_197e1c;
            case 0x197E38u: goto label_197e38;
            case 0x197F10u: goto label_197f10;
            case 0x197F58u: goto label_197f58;
            case 0x197F78u: goto label_197f78;
            case 0x197F94u: goto label_197f94;
            case 0x198010u: goto label_198010;
            case 0x198014u: goto label_198014;
            case 0x198088u: goto label_198088;
            case 0x198108u: goto label_198108;
            case 0x19810Cu: goto label_19810c;
            case 0x198154u: goto label_198154;
            case 0x1981A0u: goto label_1981a0;
            case 0x1981D0u: goto label_1981d0;
            case 0x1982B0u: goto label_1982b0;
            case 0x1982B4u: goto label_1982b4;
            case 0x198348u: goto label_198348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x198398u;
}
