#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161648
// Address: 0x161648 - 0x161d70
void sub_00161648_0x161648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161648_0x161648");
#endif

    ctx->pc = 0x161648u;

label_161648:
    // 0x161648: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x161648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16164c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x16164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x161650: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x161650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x161654: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x161654u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x161658: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x161658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x16165c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16165cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161660: 0x8e43c2bc  lw          $v1, -0x3D44($s2)
    ctx->pc = 0x161660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951612)));
    // 0x161664: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x161664u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x161668: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x161668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x16166c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x16166cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x161670: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x161670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x161674: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161678: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16167c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16167Cu;
    {
        const bool branch_taken_0x16167c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16167Cu;
            // 0x161680: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16167c) {
            ctx->pc = 0x161698u;
            goto label_161698;
        }
    }
    ctx->pc = 0x161684u;
    // 0x161684: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161688: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x161688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x16168c: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x16168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161690: 0x40f809  jalr        $v0
    ctx->pc = 0x161690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161698u);
        ctx->pc = 0x161694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161690u;
            // 0x161694: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161698u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161698u; }
            if (ctx->pc != 0x161698u) { return; }
        }
        }
    }
    ctx->pc = 0x161698u;
label_161698:
    // 0x161698: 0x8e42c2bc  lw          $v0, -0x3D44($s2)
    ctx->pc = 0x161698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951612)));
    // 0x16169c: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x16169cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1616a0: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1616a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1616a4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1616a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1616a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1616a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1616ac: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1616ACu;
    {
        const bool branch_taken_0x1616ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616ACu;
            // 0x1616b0: 0x8e43c2bc  lw          $v1, -0x3D44($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ac) {
            ctx->pc = 0x1616F0u;
            goto label_1616f0;
        }
    }
    ctx->pc = 0x1616B4u;
    // 0x1616b4: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1616b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1616b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1616b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1616bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1616bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1616c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1616C0u;
    {
        const bool branch_taken_0x1616c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1616c0) {
            ctx->pc = 0x1616F0u;
            goto label_1616f0;
        }
    }
    ctx->pc = 0x1616C8u;
    // 0x1616c8: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1616cc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1616ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1616d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1616d4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1616D4u;
    {
        const bool branch_taken_0x1616d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1616D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616D4u;
            // 0x1616d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616d4) {
            ctx->pc = 0x1616F4u;
            goto label_1616f4;
        }
    }
    ctx->pc = 0x1616DCu;
    // 0x1616dc: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1616dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1616e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1616e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1616e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1616E8u;
    {
        const bool branch_taken_0x1616e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1616ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616E8u;
            // 0x1616ec: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616e8) {
            ctx->pc = 0x161710u;
            goto label_161710;
        }
    }
    ctx->pc = 0x1616F0u;
label_1616f0:
    // 0x1616f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1616f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1616f4:
    // 0x1616f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1616f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1616f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1616fc: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1616fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x161700: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x161700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161704: 0x40f809  jalr        $v0
    ctx->pc = 0x161704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16170Cu);
        ctx->pc = 0x161708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161704u;
            // 0x161708: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16170Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16170Cu; }
            if (ctx->pc != 0x16170Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16170Cu;
    // 0x16170c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x16170cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
label_161710:
    // 0x161710: 0x8e43c2b8  lw          $v1, -0x3D48($s2)
    ctx->pc = 0x161710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x161714: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x161714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x161718: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16171c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16171Cu;
    {
        const bool branch_taken_0x16171c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16171Cu;
            // 0x161720: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16171c) {
            ctx->pc = 0x16173Cu;
            goto label_16173c;
        }
    }
    ctx->pc = 0x161724u;
    // 0x161724: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161728: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16172c: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x16172cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x161730: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x161730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x161734: 0x40f809  jalr        $v0
    ctx->pc = 0x161734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16173Cu);
        ctx->pc = 0x161738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161734u;
            // 0x161738: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16173Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16173Cu; }
            if (ctx->pc != 0x16173Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16173Cu;
label_16173c:
    // 0x16173c: 0x8e42c2b8  lw          $v0, -0x3D48($s2)
    ctx->pc = 0x16173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
    // 0x161740: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x161740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x161744: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x161744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x161748: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x161748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x16174c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161750: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x161750u;
    {
        const bool branch_taken_0x161750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161750u;
            // 0x161754: 0x8e43c2b8  lw          $v1, -0x3D48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161750) {
            ctx->pc = 0x161794u;
            goto label_161794;
        }
    }
    ctx->pc = 0x161758u;
    // 0x161758: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x161758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x16175c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16175cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161760: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161764: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161764u;
    {
        const bool branch_taken_0x161764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161764) {
            ctx->pc = 0x161794u;
            goto label_161794;
        }
    }
    ctx->pc = 0x16176Cu;
    // 0x16176c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x16176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161770: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161774: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161778: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161778u;
    {
        const bool branch_taken_0x161778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16177Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161778u;
            // 0x16177c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161778) {
            ctx->pc = 0x161798u;
            goto label_161798;
        }
    }
    ctx->pc = 0x161780u;
    // 0x161780: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x161780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x161784: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161788: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16178c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16178Cu;
    {
        const bool branch_taken_0x16178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16178Cu;
            // 0x161790: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16178c) {
            ctx->pc = 0x1617B4u;
            goto label_1617b4;
        }
    }
    ctx->pc = 0x161794u;
label_161794:
    // 0x161794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_161798:
    // 0x161798: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16179c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1617a0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1617a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1617a4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1617a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1617a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1617A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1617B0u);
        ctx->pc = 0x1617ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617A8u;
            // 0x1617ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1617B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1617B0u; }
            if (ctx->pc != 0x1617B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1617B0u;
    // 0x1617b0: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1617b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
label_1617b4:
    // 0x1617b4: 0x8e43c2c0  lw          $v1, -0x3D40($s2)
    ctx->pc = 0x1617b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951616)));
    // 0x1617b8: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1617b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1617bc: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1617bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1617c0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1617C0u;
    {
        const bool branch_taken_0x1617c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1617C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617C0u;
            // 0x1617c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617c0) {
            ctx->pc = 0x1617E0u;
            goto label_1617e0;
        }
    }
    ctx->pc = 0x1617C8u;
    // 0x1617c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1617c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1617cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1617ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617d0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1617d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1617d4: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x1617d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x1617d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1617D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1617E0u);
        ctx->pc = 0x1617DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617D8u;
            // 0x1617dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1617E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1617E0u; }
            if (ctx->pc != 0x1617E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1617E0u;
label_1617e0:
    // 0x1617e0: 0x8e42c2c0  lw          $v0, -0x3D40($s2)
    ctx->pc = 0x1617e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951616)));
    // 0x1617e4: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1617e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1617e8: 0x24440024  addiu       $a0, $v0, 0x24
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x1617ec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1617ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1617f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1617f4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1617F4u;
    {
        const bool branch_taken_0x1617f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1617F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617F4u;
            // 0x1617f8: 0x8e43c2c0  lw          $v1, -0x3D40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617f4) {
            ctx->pc = 0x161838u;
            goto label_161838;
        }
    }
    ctx->pc = 0x1617FCu;
    // 0x1617fc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1617fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x161800: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161804: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161808: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161808u;
    {
        const bool branch_taken_0x161808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161808) {
            ctx->pc = 0x161838u;
            goto label_161838;
        }
    }
    ctx->pc = 0x161810u;
    // 0x161810: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x161810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161814: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161818: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16181c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16181Cu;
    {
        const bool branch_taken_0x16181c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16181Cu;
            // 0x161820: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16181c) {
            ctx->pc = 0x16183Cu;
            goto label_16183c;
        }
    }
    ctx->pc = 0x161824u;
    // 0x161824: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x161824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x161828: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16182c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161830: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x161830u;
    {
        const bool branch_taken_0x161830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161830u;
            // 0x161834: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161830) {
            ctx->pc = 0x161858u;
            goto label_161858;
        }
    }
    ctx->pc = 0x161838u;
label_161838:
    // 0x161838: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x161838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16183c:
    // 0x16183c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16183cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161840: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161844: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x161844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x161848: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x161848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x16184c: 0x40f809  jalr        $v0
    ctx->pc = 0x16184Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161854u);
        ctx->pc = 0x161850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16184Cu;
            // 0x161850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161854u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161854u; }
            if (ctx->pc != 0x161854u) { return; }
        }
        }
    }
    ctx->pc = 0x161854u;
    // 0x161854: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x161854u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_161858:
    // 0x161858: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x161858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_16185c:
    // 0x16185c: 0x2403008c  addiu       $v1, $zero, 0x8C
    ctx->pc = 0x16185cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x161860: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x161860u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x161864: 0x2239018  mult        $s2, $s1, $v1
    ctx->pc = 0x161864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x161868: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x161868u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x16186c: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x16186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
    // 0x161870: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x161870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x161874: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161878: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16187c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16187Cu;
    {
        const bool branch_taken_0x16187c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16187Cu;
            // 0x161880: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16187c) {
            ctx->pc = 0x161894u;
            goto label_161894;
        }
    }
    ctx->pc = 0x161884u;
    // 0x161884: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x161884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161888: 0xc057760  jal         func_15DD80
    ctx->pc = 0x161888u;
    SET_GPR_U32(ctx, 31, 0x161890u);
    ctx->pc = 0x16188Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161888u;
            // 0x16188c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161890u; }
        if (ctx->pc != 0x161890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161890u; }
        if (ctx->pc != 0x161890u) { return; }
    }
    ctx->pc = 0x161890u;
    // 0x161890: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x161890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
label_161894:
    // 0x161894: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x161894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x161898: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x161898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16189c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16189cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1618a0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1618a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1618a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618A4u;
    {
        const bool branch_taken_0x1618a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618A4u;
            // 0x1618a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618a4) {
            ctx->pc = 0x1618B8u;
            goto label_1618b8;
        }
    }
    ctx->pc = 0x1618ACu;
    // 0x1618ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1618acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618b0: 0xc057760  jal         func_15DD80
    ctx->pc = 0x1618B0u;
    SET_GPR_U32(ctx, 31, 0x1618B8u);
    ctx->pc = 0x1618B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618B0u;
            // 0x1618b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618B8u; }
        if (ctx->pc != 0x1618B8u) { return; }
    }
    ctx->pc = 0x1618B8u;
label_1618b8:
    // 0x1618b8: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x1618b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
    // 0x1618bc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x1618bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1618c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1618c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1618c4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1618c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1618c8: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1618c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1618cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1618CCu;
    {
        const bool branch_taken_0x1618cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618CCu;
            // 0x1618d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618cc) {
            ctx->pc = 0x1618E4u;
            goto label_1618e4;
        }
    }
    ctx->pc = 0x1618D4u;
    // 0x1618d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1618d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1618d8: 0xc057760  jal         func_15DD80
    ctx->pc = 0x1618D8u;
    SET_GPR_U32(ctx, 31, 0x1618E0u);
    ctx->pc = 0x1618DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1618D8u;
            // 0x1618dc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618E0u; }
        if (ctx->pc != 0x1618E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1618E0u; }
        if (ctx->pc != 0x1618E0u) { return; }
    }
    ctx->pc = 0x1618E0u;
    // 0x1618e0: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x1618e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
label_1618e4:
    // 0x1618e4: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x1618e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1618e8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1618e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1618ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1618ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1618f0: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1618f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1618f4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1618F4u;
    {
        const bool branch_taken_0x1618f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1618F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1618F4u;
            // 0x1618f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1618f4) {
            ctx->pc = 0x161908u;
            goto label_161908;
        }
    }
    ctx->pc = 0x1618FCu;
    // 0x1618fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1618fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161900: 0xc057760  jal         func_15DD80
    ctx->pc = 0x161900u;
    SET_GPR_U32(ctx, 31, 0x161908u);
    ctx->pc = 0x161904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161900u;
            // 0x161904: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161908u; }
        if (ctx->pc != 0x161908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161908u; }
        if (ctx->pc != 0x161908u) { return; }
    }
    ctx->pc = 0x161908u;
label_161908:
    // 0x161908: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x161908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
    // 0x16190c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x16190cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x161910: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x161910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x161914: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161918: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16191c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16191Cu;
    {
        const bool branch_taken_0x16191c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16191Cu;
            // 0x161920: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16191c) {
            ctx->pc = 0x161934u;
            goto label_161934;
        }
    }
    ctx->pc = 0x161924u;
    // 0x161924: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x161924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161928: 0xc057760  jal         func_15DD80
    ctx->pc = 0x161928u;
    SET_GPR_U32(ctx, 31, 0x161930u);
    ctx->pc = 0x16192Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161928u;
            // 0x16192c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161930u; }
        if (ctx->pc != 0x161930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161930u; }
        if (ctx->pc != 0x161930u) { return; }
    }
    ctx->pc = 0x161930u;
    // 0x161930: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x161930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
label_161934:
    // 0x161934: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x161934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x161938: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x161938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16193c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161940: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x161944: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x161944u;
    {
        const bool branch_taken_0x161944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161944u;
            // 0x161948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161944) {
            ctx->pc = 0x161958u;
            goto label_161958;
        }
    }
    ctx->pc = 0x16194Cu;
    // 0x16194c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16194cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161950: 0xc057760  jal         func_15DD80
    ctx->pc = 0x161950u;
    SET_GPR_U32(ctx, 31, 0x161958u);
    ctx->pc = 0x161954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161950u;
            // 0x161954: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161958u; }
        if (ctx->pc != 0x161958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161958u; }
        if (ctx->pc != 0x161958u) { return; }
    }
    ctx->pc = 0x161958u;
label_161958:
    // 0x161958: 0x8e84c2c4  lw          $a0, -0x3D3C($s4)
    ctx->pc = 0x161958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951620)));
    // 0x16195c: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x16195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x161960: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x161960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x161964: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x161968: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x161968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x16196c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16196Cu;
    {
        const bool branch_taken_0x16196c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16196Cu;
            // 0x161970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16196c) {
            ctx->pc = 0x161980u;
            goto label_161980;
        }
    }
    ctx->pc = 0x161974u;
    // 0x161974: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x161974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161978: 0xc057760  jal         func_15DD80
    ctx->pc = 0x161978u;
    SET_GPR_U32(ctx, 31, 0x161980u);
    ctx->pc = 0x16197Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161978u;
            // 0x16197c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DD80u;
    if (runtime->hasFunction(0x15DD80u)) {
        auto targetFn = runtime->lookupFunction(0x15DD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161980u; }
        if (ctx->pc != 0x161980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dd80_0x15ddb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161980u; }
        if (ctx->pc != 0x161980u) { return; }
    }
    ctx->pc = 0x161980u;
label_161980:
    // 0x161980: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x161980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x161984: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161988: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x161988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16198c: 0x8c44c2c8  lw          $a0, -0x3D38($v0)
    ctx->pc = 0x16198cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951624)));
    // 0x161990: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x161990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x161994: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x161994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x161998: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x161998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16199c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x16199cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x1619a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1619A0u;
    {
        const bool branch_taken_0x1619a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1619A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619A0u;
            // 0x1619a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1619a0) {
            ctx->pc = 0x1619B0u;
            goto label_1619b0;
        }
    }
    ctx->pc = 0x1619A8u;
    // 0x1619a8: 0xc051878  jal         func_1461E0
    ctx->pc = 0x1619A8u;
    SET_GPR_U32(ctx, 31, 0x1619B0u);
    ctx->pc = 0x1619ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1619A8u;
            // 0x1619ac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619B0u; }
        if (ctx->pc != 0x1619B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1461e0_0x146208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1619B0u; }
        if (ctx->pc != 0x1619B0u) { return; }
    }
    ctx->pc = 0x1619B0u;
label_1619b0:
    // 0x1619b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1619b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1619b4: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1619b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1619b8: 0x5440ffa8  bnel        $v0, $zero, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1619B8u;
    {
        const bool branch_taken_0x1619b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1619b8) {
            ctx->pc = 0x1619BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1619B8u;
            // 0x1619bc: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16185Cu;
            runtime->cooperativeGuestYield();
            goto label_16185c;
        }
    }
    ctx->pc = 0x1619C0u;
    // 0x1619c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1619c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1619c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1619c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1619c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1619c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1619cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1619ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1619d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1619d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1619d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1619d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1619d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1619D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1619DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1619D8u;
            // 0x1619dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1619E0u;
    // 0x1619e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1619e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1619e4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1619e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1619e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1619e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1619ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1619ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1619f0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1619f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1619f4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1619f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1619f8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1619f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1619fc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1619fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x161a00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x161a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x161a04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x161a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x161a08: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x161a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x161a0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x161a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x161a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161a14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x161a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x161a18: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x161a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x161a1c: 0x8c501048  lw          $s0, 0x1048($v0)
    ctx->pc = 0x161a1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4168)));
    // 0x161a20: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x161a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x161a24: 0xac83c078  sw          $v1, -0x3F88($a0)
    ctx->pc = 0x161a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951032), GPR_U32(ctx, 3));
    // 0x161a28: 0xac40c298  sw          $zero, -0x3D68($v0)
    ctx->pc = 0x161a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951576), GPR_U32(ctx, 0));
    // 0x161a2c: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x161a2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x161a30: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x161a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
    // 0x161a34: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x161a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x161a38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x161a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x161a3c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161A3Cu;
    {
        const bool branch_taken_0x161a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x161A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161A3Cu;
            // 0x161a40: 0x3c170033  lui         $s7, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161a3c) {
            ctx->pc = 0x161A68u;
            goto label_161a68;
        }
    }
    ctx->pc = 0x161A44u;
    // 0x161a44: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x161a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x161a48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x161a48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161a4c: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x161a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x161a50: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x161a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x161a54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161a58: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x161a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x161a5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x161a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161a60: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x161a60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x161a64: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x161a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_161a68:
    // 0x161a68: 0x26e5ed68  addiu       $a1, $s7, -0x1298
    ctx->pc = 0x161a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962536));
    // 0x161a6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x161a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161a70: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x161a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x161a74: 0x3c1e002d  lui         $fp, 0x2D
    ctx->pc = 0x161a74u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)45 << 16));
    // 0x161a78: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161a7c: 0xaec3ed60  sw          $v1, -0x12A0($s6)
    ctx->pc = 0x161a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 3));
    // 0x161a80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x161a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161a84: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x161A84u;
    SET_GPR_U32(ctx, 31, 0x161A8Cu);
    ctx->pc = 0x161A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161A84u;
            // 0x161a88: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A8Cu; }
        if (ctx->pc != 0x161A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161A8Cu; }
        if (ctx->pc != 0x161A8Cu) { return; }
    }
    ctx->pc = 0x161A8Cu;
    // 0x161a8c: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x161a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x161a90: 0x27c5bb98  addiu       $a1, $fp, -0x4468
    ctx->pc = 0x161a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x161a94: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x161a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x161a98: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x161a98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x161a9c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x161a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x161aa0: 0x8e044a48  lw          $a0, 0x4A48($s0)
    ctx->pc = 0x161aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19016)));
    // 0x161aa4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x161aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x161aa8: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x161aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x161aac: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x161aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161ab0: 0xc05a75c  jal         func_169D70
    ctx->pc = 0x161AB0u;
    SET_GPR_U32(ctx, 31, 0x161AB8u);
    ctx->pc = 0x161AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161AB0u;
            // 0x161ab4: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x169D70u;
    if (runtime->hasFunction(0x169D70u)) {
        auto targetFn = runtime->lookupFunction(0x169D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB8u; }
        if (ctx->pc != 0x161AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169d70_0x169df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161AB8u; }
        if (ctx->pc != 0x161AB8u) { return; }
    }
    ctx->pc = 0x161AB8u;
    // 0x161ab8: 0x8e054a48  lw          $a1, 0x4A48($s0)
    ctx->pc = 0x161ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 19016)));
    // 0x161abc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x161ac0: 0x8c63c2a4  lw          $v1, -0x3D5C($v1)
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951588)));
    // 0x161ac4: 0xaca203b0  sw          $v0, 0x3B0($a1)
    ctx->pc = 0x161ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 944), GPR_U32(ctx, 2));
    // 0x161ac8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x161acc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x161accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x161ad0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x161AD0u;
    {
        const bool branch_taken_0x161ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AD0u;
            // 0x161ad4: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ad0) {
            ctx->pc = 0x161AF0u;
            goto label_161af0;
        }
    }
    ctx->pc = 0x161AD8u;
    // 0x161ad8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x161adc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x161ae0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x161ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x161ae4: 0x40f809  jalr        $v0
    ctx->pc = 0x161AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161AECu);
        ctx->pc = 0x161AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161AE4u;
            // 0x161ae8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161AECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161AECu; }
            if (ctx->pc != 0x161AECu) { return; }
        }
        }
    }
    ctx->pc = 0x161AECu;
    // 0x161aec: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x161aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_161af0:
    // 0x161af0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x161af0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x161af4: 0x8e03c2b8  lw          $v1, -0x3D48($s0)
    ctx->pc = 0x161af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951608)));
    // 0x161af8: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x161af8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x161afc: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x161afcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x161b00: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x161b00u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x161b04: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161b08: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x161b08u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x161b0c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x161b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x161b10: 0x40f809  jalr        $v0
    ctx->pc = 0x161B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B18u);
        ctx->pc = 0x161B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B10u;
            // 0x161b14: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161B18u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161B18u; }
            if (ctx->pc != 0x161B18u) { return; }
        }
        }
    }
    ctx->pc = 0x161B18u;
    // 0x161b18: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x161b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x161b1c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161b20: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x161b20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x161b24: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x161b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x161b28: 0x40f809  jalr        $v0
    ctx->pc = 0x161B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B30u);
        ctx->pc = 0x161B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B28u;
            // 0x161b2c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161B30u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161B30u; }
            if (ctx->pc != 0x161B30u) { return; }
        }
        }
    }
    ctx->pc = 0x161B30u;
    // 0x161b30: 0x8e43c2c0  lw          $v1, -0x3D40($s2)
    ctx->pc = 0x161b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951616)));
    // 0x161b34: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161b38: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x161b38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x161b3c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x161b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x161b40: 0x40f809  jalr        $v0
    ctx->pc = 0x161B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161B48u);
        ctx->pc = 0x161B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161B40u;
            // 0x161b44: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161B48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161B48u; }
            if (ctx->pc != 0x161B48u) { return; }
        }
        }
    }
    ctx->pc = 0x161B48u;
    // 0x161b48: 0xc057706  jal         func_15DC18
    ctx->pc = 0x161B48u;
    SET_GPR_U32(ctx, 31, 0x161B50u);
    ctx->pc = 0x161B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B48u;
            // 0x161b4c: 0x8e64c2c4  lw          $a0, -0x3D3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DC18u;
    if (runtime->hasFunction(0x15DC18u)) {
        auto targetFn = runtime->lookupFunction(0x15DC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B50u; }
        if (ctx->pc != 0x161B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15dc18_0x15dc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B50u; }
        if (ctx->pc != 0x161B50u) { return; }
    }
    ctx->pc = 0x161B50u;
    // 0x161b50: 0xc051876  jal         func_1461D8
    ctx->pc = 0x161B50u;
    SET_GPR_U32(ctx, 31, 0x161B58u);
    ctx->pc = 0x161B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B50u;
            // 0x161b54: 0x8e84c2c8  lw          $a0, -0x3D38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461D8u;
    if (runtime->hasFunction(0x1461D8u)) {
        auto targetFn = runtime->lookupFunction(0x1461D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B58u; }
        if (ctx->pc != 0x161B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1461d8_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B58u; }
        if (ctx->pc != 0x161B58u) { return; }
    }
    ctx->pc = 0x161B58u;
    // 0x161b58: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x161b58u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x161b5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161b68: 0xc058308  jal         func_160C20
    ctx->pc = 0x161B68u;
    SET_GPR_U32(ctx, 31, 0x161B70u);
    ctx->pc = 0x161B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B68u;
            // 0x161b6c: 0x34e700aa  ori         $a3, $a3, 0xAA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B70u; }
        if (ctx->pc != 0x161B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B70u; }
        if (ctx->pc != 0x161B70u) { return; }
    }
    ctx->pc = 0x161B70u;
    // 0x161b70: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x161b70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x161b74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161b80: 0xc058308  jal         func_160C20
    ctx->pc = 0x161B80u;
    SET_GPR_U32(ctx, 31, 0x161B88u);
    ctx->pc = 0x161B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B80u;
            // 0x161b84: 0x34e700aa  ori         $a3, $a3, 0xAA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B88u; }
        if (ctx->pc != 0x161B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161B88u; }
        if (ctx->pc != 0x161B88u) { return; }
    }
    ctx->pc = 0x161B88u;
    // 0x161b88: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x161b88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x161b8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161b94: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x161b94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161b98: 0xc058308  jal         func_160C20
    ctx->pc = 0x161B98u;
    SET_GPR_U32(ctx, 31, 0x161BA0u);
    ctx->pc = 0x161B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161B98u;
            // 0x161b9c: 0x34e700aa  ori         $a3, $a3, 0xAA (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BA0u; }
        if (ctx->pc != 0x161BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BA0u; }
        if (ctx->pc != 0x161BA0u) { return; }
    }
    ctx->pc = 0x161BA0u;
    // 0x161ba0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x161ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x161ba4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161ba8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161bac: 0x34e700aa  ori         $a3, $a3, 0xAA
    ctx->pc = 0x161bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)170);
    // 0x161bb0: 0xc058308  jal         func_160C20
    ctx->pc = 0x161BB0u;
    SET_GPR_U32(ctx, 31, 0x161BB8u);
    ctx->pc = 0x161BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BB0u;
            // 0x161bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BB8u; }
        if (ctx->pc != 0x161BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BB8u; }
        if (ctx->pc != 0x161BB8u) { return; }
    }
    ctx->pc = 0x161BB8u;
    // 0x161bb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bbc: 0xc058592  jal         func_161648
    ctx->pc = 0x161BBCu;
    SET_GPR_U32(ctx, 31, 0x161BC4u);
    ctx->pc = 0x161BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BBCu;
            // 0x161bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161648u;
    runtime->cooperativeGuestYield();
    goto label_161648;
    ctx->pc = 0x161BC4u;
label_161bc4:
    // 0x161bc4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x161bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bd0: 0xc0581c0  jal         func_160700
    ctx->pc = 0x161BD0u;
    SET_GPR_U32(ctx, 31, 0x161BD8u);
    ctx->pc = 0x161BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BD0u;
            // 0x161bd4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160700u;
    if (runtime->hasFunction(0x160700u)) {
        auto targetFn = runtime->lookupFunction(0x160700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BD8u; }
        if (ctx->pc != 0x161BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160700_0x160700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BD8u; }
        if (ctx->pc != 0x161BD8u) { return; }
    }
    ctx->pc = 0x161BD8u;
    // 0x161bd8: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x161bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x161bdc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161be0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161be4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161be8: 0xc058308  jal         func_160C20
    ctx->pc = 0x161BE8u;
    SET_GPR_U32(ctx, 31, 0x161BF0u);
    ctx->pc = 0x161BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BE8u;
            // 0x161bec: 0x34e70055  ori         $a3, $a3, 0x55 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)85);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BF0u; }
        if (ctx->pc != 0x161BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161BF0u; }
        if (ctx->pc != 0x161BF0u) { return; }
    }
    ctx->pc = 0x161BF0u;
    // 0x161bf0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x161bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161bf8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x161bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161bfc: 0xc0581c0  jal         func_160700
    ctx->pc = 0x161BFCu;
    SET_GPR_U32(ctx, 31, 0x161C04u);
    ctx->pc = 0x161C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161BFCu;
            // 0x161c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160700u;
    if (runtime->hasFunction(0x160700u)) {
        auto targetFn = runtime->lookupFunction(0x160700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C04u; }
        if (ctx->pc != 0x161C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160700_0x160700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C04u; }
        if (ctx->pc != 0x161C04u) { return; }
    }
    ctx->pc = 0x161C04u;
    // 0x161c04: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x161c04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x161c08: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c10: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x161c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161c14: 0xc058308  jal         func_160C20
    ctx->pc = 0x161C14u;
    SET_GPR_U32(ctx, 31, 0x161C1Cu);
    ctx->pc = 0x161C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C14u;
            // 0x161c18: 0x34e70055  ori         $a3, $a3, 0x55 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)85);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C1Cu; }
        if (ctx->pc != 0x161C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C1Cu; }
        if (ctx->pc != 0x161C1Cu) { return; }
    }
    ctx->pc = 0x161C1Cu;
    // 0x161c1c: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x161c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x161c20: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c28: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x161c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x161c2c: 0xc058308  jal         func_160C20
    ctx->pc = 0x161C2Cu;
    SET_GPR_U32(ctx, 31, 0x161C34u);
    ctx->pc = 0x161C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C2Cu;
            // 0x161c30: 0x34e70055  ori         $a3, $a3, 0x55 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)85);
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C34u; }
        if (ctx->pc != 0x161C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C34u; }
        if (ctx->pc != 0x161C34u) { return; }
    }
    ctx->pc = 0x161C34u;
    // 0x161c34: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x161c34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
    // 0x161c38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x161c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161c3c: 0x34e70055  ori         $a3, $a3, 0x55
    ctx->pc = 0x161c3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)85);
    // 0x161c40: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x161c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161c44: 0xc058308  jal         func_160C20
    ctx->pc = 0x161C44u;
    SET_GPR_U32(ctx, 31, 0x161C4Cu);
    ctx->pc = 0x161C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C44u;
            // 0x161c48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C20u;
    if (runtime->hasFunction(0x160C20u)) {
        auto targetFn = runtime->lookupFunction(0x160C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C4Cu; }
        if (ctx->pc != 0x161C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C20_0x160c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161C4Cu; }
        if (ctx->pc != 0x161C4Cu) { return; }
    }
    ctx->pc = 0x161C4Cu;
    // 0x161c4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x161c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161c50: 0xc058592  jal         func_161648
    ctx->pc = 0x161C50u;
    SET_GPR_U32(ctx, 31, 0x161C58u);
    ctx->pc = 0x161C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161C50u;
            // 0x161c54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161648u;
    runtime->cooperativeGuestYield();
    goto label_161648;
    ctx->pc = 0x161C58u;
label_161c58:
    // 0x161c58: 0x8e03c2b8  lw          $v1, -0x3D48($s0)
    ctx->pc = 0x161c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951608)));
    // 0x161c5c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161c60: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x161c60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x161c64: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x161c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x161c68: 0x40f809  jalr        $v0
    ctx->pc = 0x161C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161C70u);
        ctx->pc = 0x161C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C68u;
            // 0x161c6c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161C70u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161C70u; }
            if (ctx->pc != 0x161C70u) { return; }
        }
        }
    }
    ctx->pc = 0x161C70u;
    // 0x161c70: 0x8e23c2bc  lw          $v1, -0x3D44($s1)
    ctx->pc = 0x161c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951612)));
    // 0x161c74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161c78: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x161c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x161c7c: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x161c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x161c80: 0x40f809  jalr        $v0
    ctx->pc = 0x161C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161C88u);
        ctx->pc = 0x161C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C80u;
            // 0x161c84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161C88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161C88u; }
            if (ctx->pc != 0x161C88u) { return; }
        }
        }
    }
    ctx->pc = 0x161C88u;
    // 0x161c88: 0x8e43c2c0  lw          $v1, -0x3D40($s2)
    ctx->pc = 0x161c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951616)));
    // 0x161c8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x161c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x161c90: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x161c90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x161c94: 0x8c4200b4  lw          $v0, 0xB4($v0)
    ctx->pc = 0x161c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x161c98: 0x40f809  jalr        $v0
    ctx->pc = 0x161C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x161CA0u);
        ctx->pc = 0x161C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161C98u;
            // 0x161c9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x161CA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x161CA0u; }
            if (ctx->pc != 0x161CA0u) { return; }
        }
        }
    }
    ctx->pc = 0x161CA0u;
    // 0x161ca0: 0xc057b4a  jal         func_15ED28
    ctx->pc = 0x161CA0u;
    SET_GPR_U32(ctx, 31, 0x161CA8u);
    ctx->pc = 0x161CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CA0u;
            // 0x161ca4: 0x8e64c2c4  lw          $a0, -0x3D3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294951620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ED28u;
    if (runtime->hasFunction(0x15ED28u)) {
        auto targetFn = runtime->lookupFunction(0x15ED28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA8u; }
        if (ctx->pc != 0x161CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15ed28_0x15ed98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CA8u; }
        if (ctx->pc != 0x161CA8u) { return; }
    }
    ctx->pc = 0x161CA8u;
    // 0x161ca8: 0xc051b66  jal         func_146D98
    ctx->pc = 0x161CA8u;
    SET_GPR_U32(ctx, 31, 0x161CB0u);
    ctx->pc = 0x161CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161CA8u;
            // 0x161cac: 0x8e84c2c8  lw          $a0, -0x3D38($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294951624)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146D98u;
    if (runtime->hasFunction(0x146D98u)) {
        auto targetFn = runtime->lookupFunction(0x146D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB0u; }
        if (ctx->pc != 0x161CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_146d98_0x146de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB0u; }
        if (ctx->pc != 0x161CB0u) { return; }
    }
    ctx->pc = 0x161CB0u;
    // 0x161cb0: 0xc0580e0  jal         func_160380
    ctx->pc = 0x161CB0u;
    SET_GPR_U32(ctx, 31, 0x161CB8u);
    ctx->pc = 0x160380u;
    if (runtime->hasFunction(0x160380u)) {
        auto targetFn = runtime->lookupFunction(0x160380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB8u; }
        if (ctx->pc != 0x161CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160380_0x160380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161CB8u; }
        if (ctx->pc != 0x161CB8u) { return; }
    }
    ctx->pc = 0x161CB8u;
    // 0x161cb8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x161cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x161cbc: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x161cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x161cc0: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x161cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x161cc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x161CC4u;
    {
        const bool branch_taken_0x161cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161CC4u;
            // 0x161cc8: 0x8ec2ed60  lw          $v0, -0x12A0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161cc4) {
            ctx->pc = 0x161CF0u;
            goto label_161cf0;
        }
    }
    ctx->pc = 0x161CCCu;
    // 0x161ccc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x161cccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_161cd0:
    // 0x161cd0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x161cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x161cd4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x161cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x161cd8: 0x0  nop
    ctx->pc = 0x161cd8u;
    // NOP
    // 0x161cdc: 0x0  nop
    ctx->pc = 0x161cdcu;
    // NOP
    // 0x161ce0: 0x0  nop
    ctx->pc = 0x161ce0u;
    // NOP
    // 0x161ce4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x161CE4u;
    {
        const bool branch_taken_0x161ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x161ce4) {
            ctx->pc = 0x161CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x161CE4u;
            // 0x161ce8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x161CD0u;
            runtime->cooperativeGuestYield();
            goto label_161cd0;
        }
    }
    ctx->pc = 0x161CECu;
    // 0x161cec: 0x8ec2ed60  lw          $v0, -0x12A0($s6)
    ctx->pc = 0x161cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_161cf0:
    // 0x161cf0: 0x26e5ed68  addiu       $a1, $s7, -0x1298
    ctx->pc = 0x161cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294962536));
    // 0x161cf4: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x161cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x161cf8: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x161cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161cfc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161d00: 0xaec6ed60  sw          $a2, -0x12A0($s6)
    ctx->pc = 0x161d00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 6));
    // 0x161d04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x161d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161d08: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x161d08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x161d0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x161d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x161d10: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x161D10u;
    {
        const bool branch_taken_0x161d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x161D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D10u;
            // 0x161d14: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161d10) {
            ctx->pc = 0x161D28u;
            goto label_161d28;
        }
    }
    ctx->pc = 0x161D18u;
    // 0x161d18: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x161d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x161d1c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x161d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x161d20: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x161D20u;
    SET_GPR_U32(ctx, 31, 0x161D28u);
    ctx->pc = 0x161D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161D20u;
            // 0x161d24: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D28u; }
        if (ctx->pc != 0x161D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161D28u; }
        if (ctx->pc != 0x161D28u) { return; }
    }
    ctx->pc = 0x161D28u;
label_161d28:
    // 0x161d28: 0x27c3bb98  addiu       $v1, $fp, -0x4468
    ctx->pc = 0x161d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4294949784));
    // 0x161d2c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x161d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x161d30: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x161d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x161d34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x161d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x161d38: 0xac80c078  sw          $zero, -0x3F88($a0)
    ctx->pc = 0x161d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294951032), GPR_U32(ctx, 0));
    // 0x161d3c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x161d3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x161d40: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x161d40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x161d44: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x161d44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x161d48: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x161d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x161d4c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x161d4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161d50: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x161d50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x161d54: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x161d54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161d58: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x161d58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161d5c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x161d5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161d64: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x161d64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x161d68: 0x3e00008  jr          $ra
    ctx->pc = 0x161D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161D68u;
            // 0x161d6c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x161648u: goto label_161648;
            case 0x161698u: goto label_161698;
            case 0x1616F0u: goto label_1616f0;
            case 0x1616F4u: goto label_1616f4;
            case 0x161710u: goto label_161710;
            case 0x16173Cu: goto label_16173c;
            case 0x161794u: goto label_161794;
            case 0x161798u: goto label_161798;
            case 0x1617B4u: goto label_1617b4;
            case 0x1617E0u: goto label_1617e0;
            case 0x161838u: goto label_161838;
            case 0x16183Cu: goto label_16183c;
            case 0x161858u: goto label_161858;
            case 0x16185Cu: goto label_16185c;
            case 0x161894u: goto label_161894;
            case 0x1618B8u: goto label_1618b8;
            case 0x1618E4u: goto label_1618e4;
            case 0x161908u: goto label_161908;
            case 0x161934u: goto label_161934;
            case 0x161958u: goto label_161958;
            case 0x161980u: goto label_161980;
            case 0x1619B0u: goto label_1619b0;
            case 0x161A68u: goto label_161a68;
            case 0x161AF0u: goto label_161af0;
            case 0x161BC4u: goto label_161bc4;
            case 0x161C58u: goto label_161c58;
            case 0x161CD0u: goto label_161cd0;
            case 0x161CF0u: goto label_161cf0;
            case 0x161D28u: goto label_161d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x161D70u;
}
