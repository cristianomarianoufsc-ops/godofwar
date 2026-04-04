#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011C2E0
// Address: 0x11c2e0 - 0x11c5d8
void sub_0011C2E0_0x11c2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011C2E0_0x11c2e0");
#endif

    ctx->pc = 0x11c2e0u;

    // 0x11c2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c2e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c2e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c2ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c2f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c2f4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x11c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c2f8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11C2F8u;
    {
        const bool branch_taken_0x11c2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C2F8u;
            // 0x11c2fc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c2f8) {
            ctx->pc = 0x11C35Cu;
            goto label_11c35c;
        }
    }
    ctx->pc = 0x11C300u;
    // 0x11c300: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x11c300u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c304: 0x1100000d  beqz        $t0, . + 4 + (0xD << 2)
    ctx->pc = 0x11C304u;
    {
        const bool branch_taken_0x11c304 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C304u;
            // 0x11c308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c304) {
            ctx->pc = 0x11C33Cu;
            goto label_11c33c;
        }
    }
    ctx->pc = 0x11C30Cu;
    // 0x11c30c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11c310: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x11c310u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c314: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c318: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11c318u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c31c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x11c31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11c320: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c324: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11c324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11c328: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11c328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11c32c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x11c32cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c330: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x11c334: 0x40f809  jalr        $v0
    ctx->pc = 0x11C334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C33Cu);
        ctx->pc = 0x11C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C334u;
            // 0x11c338: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C33Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C33Cu; }
            if (ctx->pc != 0x11C33Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11C33Cu;
label_11c33c:
    // 0x11c33c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x11c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c340: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C340u;
    {
        const bool branch_taken_0x11c340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C340u;
            // 0x11c344: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c340) {
            ctx->pc = 0x11C35Cu;
            goto label_11c35c;
        }
    }
    ctx->pc = 0x11C348u;
    // 0x11c348: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c34c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x11c34cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c350: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11c350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11c354: 0x40f809  jalr        $v0
    ctx->pc = 0x11C354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C35Cu);
        ctx->pc = 0x11C358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C354u;
            // 0x11c358: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C35Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C35Cu; }
            if (ctx->pc != 0x11C35Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11C35Cu;
label_11c35c:
    // 0x11c35c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x11c35cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x11c360: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x11c360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x11c364: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x11c364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x11c368: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x11c368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x11c36c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C36Cu;
    {
        const bool branch_taken_0x11c36c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C36Cu;
            // 0x11c370: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c36c) {
            ctx->pc = 0x11C388u;
            goto label_11c388;
        }
    }
    ctx->pc = 0x11C374u;
    // 0x11c374: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11c378: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x11c378u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11c37c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x11c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x11c380: 0x40f809  jalr        $v0
    ctx->pc = 0x11C380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C388u);
        ctx->pc = 0x11C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C380u;
            // 0x11c384: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C388u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C388u; }
            if (ctx->pc != 0x11C388u) { return; }
        }
        }
    }
    ctx->pc = 0x11C388u;
label_11c388:
    // 0x11c388: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11c388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c38c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11c38cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c390: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c394: 0x3e00008  jr          $ra
    ctx->pc = 0x11C394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C394u;
            // 0x11c398: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C39Cu;
    // 0x11c39c: 0x0  nop
    ctx->pc = 0x11c39cu;
    // NOP
    // 0x11c3a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c3a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11c3a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c3ac: 0x2442e958  addiu       $v0, $v0, -0x16A8
    ctx->pc = 0x11c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961496));
    // 0x11c3b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c3bc: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x11c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x11c3c0: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x11c3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c3c4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x11C3C4u;
    {
        const bool branch_taken_0x11c3c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3C4u;
            // 0x11c3c8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3c4) {
            ctx->pc = 0x11C428u;
            goto label_11c428;
        }
    }
    ctx->pc = 0x11C3CCu;
    // 0x11c3cc: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x11c3ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c3d0: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x11C3D0u;
    {
        const bool branch_taken_0x11c3d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C3D0u;
            // 0x11c3d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c3d0) {
            ctx->pc = 0x11C40Cu;
            goto label_11c40c;
        }
    }
    ctx->pc = 0x11C3D8u;
    // 0x11c3d8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11c3dc: 0xa7a00000  sh          $zero, 0x0($sp)
    ctx->pc = 0x11c3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x11c3e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x11c3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x11c3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c3e8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x11c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x11c3ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c3f0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11c3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11c3f4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11c3f8: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x11c3f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c3fc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x11c400: 0x40f809  jalr        $v0
    ctx->pc = 0x11C400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C408u);
        ctx->pc = 0x11C404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C400u;
            // 0x11c404: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C408u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C408u; }
            if (ctx->pc != 0x11C408u) { return; }
        }
        }
    }
    ctx->pc = 0x11C408u;
    // 0x11c408: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x11c408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_11c40c:
    // 0x11c40c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11C40Cu;
    {
        const bool branch_taken_0x11c40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C40Cu;
            // 0x11c410: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c40c) {
            ctx->pc = 0x11C428u;
            goto label_11c428;
        }
    }
    ctx->pc = 0x11C414u;
    // 0x11c414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c418: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x11c418u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c41c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11c420: 0x40f809  jalr        $v0
    ctx->pc = 0x11C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C428u);
        ctx->pc = 0x11C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C420u;
            // 0x11c424: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C428u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C428u; }
            if (ctx->pc != 0x11C428u) { return; }
        }
        }
    }
    ctx->pc = 0x11C428u;
label_11c428:
    // 0x11c428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11c428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c42c: 0xc047030  jal         func_11C0C0
    ctx->pc = 0x11C42Cu;
    SET_GPR_U32(ctx, 31, 0x11C434u);
    ctx->pc = 0x11C430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C42Cu;
            // 0x11c430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C0C0u;
    if (runtime->hasFunction(0x11C0C0u)) {
        auto targetFn = runtime->lookupFunction(0x11C0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C434u; }
        if (ctx->pc != 0x11C434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C0C0_0x11c0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C434u; }
        if (ctx->pc != 0x11C434u) { return; }
    }
    ctx->pc = 0x11C434u;
    // 0x11c434: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11c434u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c438: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11c438u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c43c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c440: 0x3e00008  jr          $ra
    ctx->pc = 0x11C440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C440u;
            // 0x11c444: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C448u;
    // 0x11c448: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11c448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11c44c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11c44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11c450: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11c450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11c454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11c454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c458: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11c458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11c45c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11c45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11c460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11c460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11c464: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x11c464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11c468: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x11C468u;
    {
        const bool branch_taken_0x11c468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C468u;
            // 0x11c46c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c468) {
            ctx->pc = 0x11C4D0u;
            goto label_11c4d0;
        }
    }
    ctx->pc = 0x11C470u;
    // 0x11c470: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x11c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x11c474: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11C474u;
    {
        const bool branch_taken_0x11c474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C474u;
            // 0x11c478: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c474) {
            ctx->pc = 0x11C4D0u;
            goto label_11c4d0;
        }
    }
    ctx->pc = 0x11C47Cu;
    // 0x11c47c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x11c47cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x11c480: 0x8e53bcf4  lw          $s3, -0x430C($s2)
    ctx->pc = 0x11c480u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950132)));
    // 0x11c484: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11C484u;
    {
        const bool branch_taken_0x11c484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C484u;
            // 0x11c488: 0xae51bcf4  sw          $s1, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c484) {
            ctx->pc = 0x11C4CCu;
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C48Cu;
    // 0x11c48c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11c490: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11c490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c494: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x11c494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c498: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x11c498u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11c49c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x11c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x11c4a0: 0x40f809  jalr        $v0
    ctx->pc = 0x11C4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C4A8u);
        ctx->pc = 0x11C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4A0u;
            // 0x11c4a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C4A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C4A8u; }
            if (ctx->pc != 0x11C4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x11C4A8u;
    // 0x11c4a8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C4A8u;
    {
        const bool branch_taken_0x11c4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c4a8) {
            ctx->pc = 0x11C4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4A8u;
            // 0x11c4ac: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C4CCu;
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C4B0u;
    // 0x11c4b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11c4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11c4b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C4B4u;
    {
        const bool branch_taken_0x11c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4B4u;
            // 0x11c4b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4b4) {
            ctx->pc = 0x11C4CCu;
            goto label_11c4cc;
        }
    }
    ctx->pc = 0x11C4BCu;
    // 0x11c4bc: 0x40f809  jalr        $v0
    ctx->pc = 0x11C4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C4C4u);
        ctx->pc = 0x11C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4BCu;
            // 0x11c4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C4C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C4C4u; }
            if (ctx->pc != 0x11C4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x11C4C4u;
    // 0x11c4c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11C4C4u;
    {
        const bool branch_taken_0x11c4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4C4u;
            // 0x11c4c8: 0xae53bcf4  sw          $s3, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c4c4) {
            ctx->pc = 0x11C4D0u;
            goto label_11c4d0;
        }
    }
    ctx->pc = 0x11C4CCu;
label_11c4cc:
    // 0x11c4cc: 0xae53bcf4  sw          $s3, -0x430C($s2)
    ctx->pc = 0x11c4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 19));
label_11c4d0:
    // 0x11c4d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11c4d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c4d4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11c4d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c4d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11c4d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c4dc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11c4dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11c4e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11c4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11c4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11C4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C4E4u;
            // 0x11c4e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C4ECu;
    // 0x11c4ec: 0x0  nop
    ctx->pc = 0x11c4ecu;
    // NOP
    // 0x11c4f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11c4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11c4f4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x11c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x11c4f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x11c4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x11c4fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11c4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c500: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x11c500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x11c504: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11c504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11c508: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x11c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x11c50c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11C50Cu;
    {
        const bool branch_taken_0x11c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11c50c) {
            ctx->pc = 0x11C510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C50Cu;
            // 0x11c510: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C530u;
            goto label_11c530;
        }
    }
    ctx->pc = 0x11C514u;
    // 0x11c514: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x11c514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x11c518: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11C518u;
    {
        const bool branch_taken_0x11c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11c518) {
            ctx->pc = 0x11C51Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11C518u;
            // 0x11c51c: 0x8e420034  lw          $v0, 0x34($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11C530u;
            goto label_11c530;
        }
    }
    ctx->pc = 0x11C520u;
    // 0x11c520: 0xc04e23c  jal         func_1388F0
    ctx->pc = 0x11C520u;
    SET_GPR_U32(ctx, 31, 0x11C528u);
    ctx->pc = 0x11C524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11C520u;
            // 0x11c524: 0x80440008  lb          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1388F0u;
    if (runtime->hasFunction(0x1388F0u)) {
        auto targetFn = runtime->lookupFunction(0x1388F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C528u; }
        if (ctx->pc != 0x11C528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001388F0_0x1388f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11C528u; }
        if (ctx->pc != 0x11C528u) { return; }
    }
    ctx->pc = 0x11C528u;
    // 0x11c528: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x11c528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x11c52c: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x11c52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_11c530:
    // 0x11c530: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x11C530u;
    {
        const bool branch_taken_0x11c530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11C534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C530u;
            // 0x11c534: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c530) {
            ctx->pc = 0x11C590u;
            goto label_11c590;
        }
    }
    ctx->pc = 0x11C538u;
    // 0x11c538: 0x8e470030  lw          $a3, 0x30($s2)
    ctx->pc = 0x11c538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x11c53c: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x11C53Cu;
    {
        const bool branch_taken_0x11c53c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11C540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C53Cu;
            // 0x11c540: 0x24020066  addiu       $v0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11c53c) {
            ctx->pc = 0x11C590u;
            goto label_11c590;
        }
    }
    ctx->pc = 0x11C544u;
    // 0x11c544: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x11c544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x11c548: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x11c548u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x11c54c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x11c54cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x11c550: 0x8e11bcf4  lw          $s1, -0x430C($s0)
    ctx->pc = 0x11c550u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950132)));
    // 0x11c554: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11c554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c558: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x11c558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11c55c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11c55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11c560: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x11c560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x11c564: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11c564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11c568: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11c568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11c56c: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x11c56cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11c570: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x11c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x11c574: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x11c574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x11c578: 0x40f809  jalr        $v0
    ctx->pc = 0x11C578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11C580u);
        ctx->pc = 0x11C57Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C578u;
            // 0x11c57c: 0xae1dbcf4  sw          $sp, -0x430C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294950132), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11C580u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11C580u; }
            if (ctx->pc != 0x11C580u) { return; }
        }
        }
    }
    ctx->pc = 0x11C580u;
    // 0x11c580: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x11c580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
    // 0x11c584: 0xae11bcf4  sw          $s1, -0x430C($s0)
    ctx->pc = 0x11c584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950132), GPR_U32(ctx, 17));
    // 0x11c588: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x11c588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11c58c: 0x0  nop
    ctx->pc = 0x11c58cu;
    // NOP
label_11c590:
    // 0x11c590: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x11c590u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11c594: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x11c594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11c598: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11c598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11c59c: 0x3e00008  jr          $ra
    ctx->pc = 0x11C59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C59Cu;
            // 0x11c5a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C5A4u;
    // 0x11c5a4: 0x0  nop
    ctx->pc = 0x11c5a4u;
    // NOP
    // 0x11c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x11C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11C5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11C5A8u;
            // 0x11c5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C5B0u;
    // 0x11c5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x11C5B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11C33Cu: goto label_11c33c;
            case 0x11C35Cu: goto label_11c35c;
            case 0x11C388u: goto label_11c388;
            case 0x11C40Cu: goto label_11c40c;
            case 0x11C428u: goto label_11c428;
            case 0x11C4CCu: goto label_11c4cc;
            case 0x11C4D0u: goto label_11c4d0;
            case 0x11C530u: goto label_11c530;
            case 0x11C590u: goto label_11c590;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11C5B8u;
    // 0x11c5b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11c5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c5bc: 0x0  nop
    ctx->pc = 0x11c5bcu;
    // NOP
    // 0x11c5c0: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x11c5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x11c5c4: 0x0  nop
    ctx->pc = 0x11c5c4u;
    // NOP
    // 0x11c5c8: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x11c5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11c5cc: 0x0  nop
    ctx->pc = 0x11c5ccu;
    // NOP
    // 0x11c5d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x11c5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11c5d4: 0x0  nop
    ctx->pc = 0x11c5d4u;
    // NOP
}
