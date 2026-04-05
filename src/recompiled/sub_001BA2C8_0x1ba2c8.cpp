#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA2C8
// Address: 0x1ba2c8 - 0x1ba4f8
void sub_001BA2C8_0x1ba2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA2C8_0x1ba2c8");
#endif

    ctx->pc = 0x1ba2c8u;

    // 0x1ba2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ba2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ba2cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ba2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ba2d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ba2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ba2d8: 0x8e021520  lw          $v0, 0x1520($s0)
    ctx->pc = 0x1ba2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5408)));
    // 0x1ba2dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA2DCu;
    {
        const bool branch_taken_0x1ba2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2DCu;
            // 0x1ba2e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2dc) {
            ctx->pc = 0x1BA2F4u;
            goto label_1ba2f4;
        }
    }
    ctx->pc = 0x1BA2E4u;
    // 0x1ba2e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba2e8: 0x8c42cbf4  lw          $v0, -0x340C($v0)
    ctx->pc = 0x1ba2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953972)));
    // 0x1ba2ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA2ECu;
    {
        const bool branch_taken_0x1ba2ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2ECu;
            // 0x1ba2f0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba2ec) {
            ctx->pc = 0x1BA2FCu;
            goto label_1ba2fc;
        }
    }
    ctx->pc = 0x1BA2F4u;
label_1ba2f4:
    // 0x1ba2f4: 0x54a2007c  bnel        $a1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x1BA2F4u;
    {
        const bool branch_taken_0x1ba2f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ba2f4) {
            ctx->pc = 0x1BA2F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA2F4u;
            // 0x1ba2f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA2FCu;
label_1ba2fc:
    // 0x1ba2fc: 0x2ca20008  sltiu       $v0, $a1, 0x8
    ctx->pc = 0x1ba2fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1ba300: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x1BA300u;
    {
        const bool branch_taken_0x1ba300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA300u;
            // 0x1ba304: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba300) {
            ctx->pc = 0x1BA4E4u;
            goto label_1ba4e4;
        }
    }
    ctx->pc = 0x1BA308u;
    // 0x1ba308: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1ba308u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1ba30c: 0x24425870  addiu       $v0, $v0, 0x5870
    ctx->pc = 0x1ba30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x1ba310: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ba310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ba314: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ba314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ba318: 0x400008  jr          $v0
    ctx->pc = 0x1BA318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA488u: goto label_1ba488;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA320u;
label_1ba320:
    // 0x1ba320: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba328: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA328u;
    {
        const bool branch_taken_0x1ba328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA328u;
            // 0x1ba32c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba328) {
            ctx->pc = 0x1BA33Cu;
            goto label_1ba33c;
        }
    }
    ctx->pc = 0x1BA330u;
label_1ba330:
    // 0x1ba330: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ba330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ba334: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ba334u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ba338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba33c:
    // 0x1ba33c: 0x8e0314fc  lw          $v1, 0x14FC($s0)
    ctx->pc = 0x1ba33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5372)));
    // 0x1ba340: 0xae021500  sw          $v0, 0x1500($s0)
    ctx->pc = 0x1ba340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5376), GPR_U32(ctx, 2));
    // 0x1ba344: 0xe600150c  swc1        $f0, 0x150C($s0)
    ctx->pc = 0x1ba344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5388), bits); }
    // 0x1ba348: 0xae031504  sw          $v1, 0x1504($s0)
    ctx->pc = 0x1ba348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5380), GPR_U32(ctx, 3));
    // 0x1ba34c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1BA34Cu;
    {
        const bool branch_taken_0x1ba34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA34Cu;
            // 0x1ba350: 0xae001508  sw          $zero, 0x1508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba34c) {
            ctx->pc = 0x1BA4E4u;
            goto label_1ba4e4;
        }
    }
    ctx->pc = 0x1BA354u;
label_1ba354:
    // 0x1ba354: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1BA354u;
    {
        const bool branch_taken_0x1ba354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA354u;
            // 0x1ba358: 0xae001500  sw          $zero, 0x1500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba354) {
            ctx->pc = 0x1BA4E4u;
            goto label_1ba4e4;
        }
    }
    ctx->pc = 0x1BA35Cu;
label_1ba35c:
    // 0x1ba35c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ba35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba360: 0xae001500  sw          $zero, 0x1500($s0)
    ctx->pc = 0x1ba360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5376), GPR_U32(ctx, 0));
    // 0x1ba364: 0xae021508  sw          $v0, 0x1508($s0)
    ctx->pc = 0x1ba364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5384), GPR_U32(ctx, 2));
    // 0x1ba368: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1ba368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1ba36c: 0xae001518  sw          $zero, 0x1518($s0)
    ctx->pc = 0x1ba36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5400), GPR_U32(ctx, 0));
    // 0x1ba370: 0xac40cbf4  sw          $zero, -0x340C($v0)
    ctx->pc = 0x1ba370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953972), GPR_U32(ctx, 0));
    // 0x1ba374: 0xae001524  sw          $zero, 0x1524($s0)
    ctx->pc = 0x1ba374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5412), GPR_U32(ctx, 0));
    // 0x1ba378: 0xae001514  sw          $zero, 0x1514($s0)
    ctx->pc = 0x1ba378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5396), GPR_U32(ctx, 0));
    // 0x1ba37c: 0xae00151c  sw          $zero, 0x151C($s0)
    ctx->pc = 0x1ba37cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5404), GPR_U32(ctx, 0));
    // 0x1ba380: 0xc087a40  jal         func_21E900
    ctx->pc = 0x1BA380u;
    SET_GPR_U32(ctx, 31, 0x1BA388u);
    ctx->pc = 0x1BA384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA380u;
            // 0x1ba384: 0xae001520  sw          $zero, 0x1520($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E900u;
    if (runtime->hasFunction(0x21E900u)) {
        auto targetFn = runtime->lookupFunction(0x21E900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA388u; }
        if (ctx->pc != 0x1BA388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_21e900_0x21e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA388u; }
        if (ctx->pc != 0x1BA388u) { return; }
    }
    ctx->pc = 0x1BA388u;
    // 0x1ba388: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1BA388u;
    {
        const bool branch_taken_0x1ba388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA388u;
            // 0x1ba38c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba388) {
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA390u;
label_1ba390:
    // 0x1ba390: 0x8e021500  lw          $v0, 0x1500($s0)
    ctx->pc = 0x1ba390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x1ba394: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x1BA394u;
    {
        const bool branch_taken_0x1ba394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba394) {
            ctx->pc = 0x1BA398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA394u;
            // 0x1ba398: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA39Cu;
    // 0x1ba39c: 0x8e041510  lw          $a0, 0x1510($s0)
    ctx->pc = 0x1ba39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba3a0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x1ba3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1ba3a4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x1ba3a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba3a8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA3A8u;
    {
        const bool branch_taken_0x1ba3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3A8u;
            // 0x1ba3ac: 0x28620048  slti        $v0, $v1, 0x48 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)72) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3a8) {
            ctx->pc = 0x1BA410u;
            goto label_1ba410;
        }
    }
    ctx->pc = 0x1BA3B0u;
    // 0x1ba3b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA3B0u;
    {
        const bool branch_taken_0x1ba3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3B0u;
            // 0x1ba3b4: 0x24020041  addiu       $v0, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3b0) {
            ctx->pc = 0x1BA3C8u;
            goto label_1ba3c8;
        }
    }
    ctx->pc = 0x1BA3B8u;
    // 0x1ba3b8: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BA3B8u;
    {
        const bool branch_taken_0x1ba3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3B8u;
            // 0x1ba3bc: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3b8) {
            ctx->pc = 0x1BA404u;
            goto label_1ba404;
        }
    }
    ctx->pc = 0x1BA3C0u;
    // 0x1ba3c0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1BA3C0u;
    {
        const bool branch_taken_0x1ba3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3C0u;
            // 0x1ba3c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3c0) {
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA3C8u;
label_1ba3c8:
    // 0x1ba3c8: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x1ba3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ba3cc: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BA3CCu;
    {
        const bool branch_taken_0x1ba3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ba3cc) {
            ctx->pc = 0x1BA3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3CCu;
            // 0x1ba3d0: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA3E8u;
            goto label_1ba3e8;
        }
    }
    ctx->pc = 0x1BA3D4u;
    // 0x1ba3d4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x1ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x1ba3d8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1BA3D8u;
    {
        const bool branch_taken_0x1ba3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BA3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3D8u;
            // 0x1ba3dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3d8) {
            ctx->pc = 0x1BA428u;
            goto label_1ba428;
        }
    }
    ctx->pc = 0x1BA3E0u;
    // 0x1ba3e0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1BA3E0u;
    {
        const bool branch_taken_0x1ba3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3E0u;
            // 0x1ba3e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3e0) {
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA3E8u;
label_1ba3e8:
    // 0x1ba3e8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba3ec: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x1ba3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x1ba3f0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba3f4: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x1ba3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ba3f8: 0x8e021510  lw          $v0, 0x1510($s0)
    ctx->pc = 0x1ba3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba3fc: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1BA3FCu;
    {
        const bool branch_taken_0x1ba3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA3FCu;
            // 0x1ba400: 0x90420002  lbu         $v0, 0x2($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba3fc) {
            ctx->pc = 0x1BA4D8u;
            goto label_1ba4d8;
        }
    }
    ctx->pc = 0x1BA404u;
label_1ba404:
    // 0x1ba404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba408: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA408u;
    {
        const bool branch_taken_0x1ba408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA408u;
            // 0x1ba40c: 0x24425858  addiu       $v0, $v0, 0x5858 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba408) {
            ctx->pc = 0x1BA41Cu;
            goto label_1ba41c;
        }
    }
    ctx->pc = 0x1BA410u;
label_1ba410:
    // 0x1ba410: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1ba410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1ba414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ba414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba418: 0x24425860  addiu       $v0, $v0, 0x5860
    ctx->pc = 0x1ba418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22624));
label_1ba41c:
    // 0x1ba41c: 0xae031520  sw          $v1, 0x1520($s0)
    ctx->pc = 0x1ba41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 3));
    // 0x1ba420: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1BA420u;
    {
        const bool branch_taken_0x1ba420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA420u;
            // 0x1ba424: 0xae02151c  sw          $v0, 0x151C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba420) {
            ctx->pc = 0x1BA4E4u;
            goto label_1ba4e4;
        }
    }
    ctx->pc = 0x1BA428u;
label_1ba428:
    // 0x1ba428: 0xae021520  sw          $v0, 0x1520($s0)
    ctx->pc = 0x1ba428u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 2));
    // 0x1ba42c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BA42Cu;
    {
        const bool branch_taken_0x1ba42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA42Cu;
            // 0x1ba430: 0xae021514  sw          $v0, 0x1514($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba42c) {
            ctx->pc = 0x1BA4E4u;
            goto label_1ba4e4;
        }
    }
    ctx->pc = 0x1BA434u;
label_1ba434:
    // 0x1ba434: 0x8e021500  lw          $v0, 0x1500($s0)
    ctx->pc = 0x1ba434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x1ba438: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x1BA438u;
    {
        const bool branch_taken_0x1ba438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba438) {
            ctx->pc = 0x1BA43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA438u;
            // 0x1ba43c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA440u;
    // 0x1ba440: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1BA440u;
    SET_GPR_U32(ctx, 31, 0x1BA448u);
    ctx->pc = 0x1BA444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA440u;
            // 0x1ba444: 0x8e041510  lw          $a0, 0x1510($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA448u; }
        if (ctx->pc != 0x1BA448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA448u; }
        if (ctx->pc != 0x1BA448u) { return; }
    }
    ctx->pc = 0x1BA448u;
    // 0x1ba448: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x1ba448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ba44c: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1BA44Cu;
    {
        const bool branch_taken_0x1ba44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba44c) {
            ctx->pc = 0x1BA450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA44Cu;
            // 0x1ba450: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA454u;
    // 0x1ba454: 0x8e041510  lw          $a0, 0x1510($s0)
    ctx->pc = 0x1ba454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba458: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1ba458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ba45c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1ba45cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba460: 0x54430021  bnel        $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1BA460u;
    {
        const bool branch_taken_0x1ba460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba460) {
            ctx->pc = 0x1BA464u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA460u;
            // 0x1ba464: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA468u;
    // 0x1ba468: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x1ba468u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1ba46c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba470: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x1ba470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x1ba474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba478: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x1ba478u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ba47c: 0x8e021510  lw          $v0, 0x1510($s0)
    ctx->pc = 0x1ba47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba480: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1BA480u;
    {
        const bool branch_taken_0x1ba480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA480u;
            // 0x1ba484: 0x90420005  lbu         $v0, 0x5($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba480) {
            ctx->pc = 0x1BA4D8u;
            goto label_1ba4d8;
        }
    }
    ctx->pc = 0x1BA488u;
label_1ba488:
    // 0x1ba488: 0x8e021500  lw          $v0, 0x1500($s0)
    ctx->pc = 0x1ba488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5376)));
    // 0x1ba48c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BA48Cu;
    {
        const bool branch_taken_0x1ba48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba48c) {
            ctx->pc = 0x1BA490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA48Cu;
            // 0x1ba490: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA494u;
    // 0x1ba494: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1BA494u;
    SET_GPR_U32(ctx, 31, 0x1BA49Cu);
    ctx->pc = 0x1BA498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA494u;
            // 0x1ba498: 0x8e041510  lw          $a0, 0x1510($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA49Cu; }
        if (ctx->pc != 0x1BA49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA49Cu; }
        if (ctx->pc != 0x1BA49Cu) { return; }
    }
    ctx->pc = 0x1BA49Cu;
    // 0x1ba49c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1ba49cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1ba4a0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1BA4A0u;
    {
        const bool branch_taken_0x1ba4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba4a0) {
            ctx->pc = 0x1BA4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4A0u;
            // 0x1ba4a4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA4A8u;
    // 0x1ba4a8: 0x8e041510  lw          $a0, 0x1510($s0)
    ctx->pc = 0x1ba4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba4ac: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1ba4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1ba4b0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1ba4b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ba4b4: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BA4B4u;
    {
        const bool branch_taken_0x1ba4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ba4b4) {
            ctx->pc = 0x1BA4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4B4u;
            // 0x1ba4b8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA4E8u;
            goto label_1ba4e8;
        }
    }
    ctx->pc = 0x1BA4BCu;
    // 0x1ba4bc: 0x90820007  lbu         $v0, 0x7($a0)
    ctx->pc = 0x1ba4bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
    // 0x1ba4c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba4c4: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x1ba4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
    // 0x1ba4c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ba4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ba4cc: 0xa0620005  sb          $v0, 0x5($v1)
    ctx->pc = 0x1ba4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ba4d0: 0x8e021510  lw          $v0, 0x1510($s0)
    ctx->pc = 0x1ba4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5392)));
    // 0x1ba4d4: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x1ba4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_1ba4d8:
    // 0x1ba4d8: 0xa0620006  sb          $v0, 0x6($v1)
    ctx->pc = 0x1ba4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ba4dc: 0xae041520  sw          $a0, 0x1520($s0)
    ctx->pc = 0x1ba4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5408), GPR_U32(ctx, 4));
    // 0x1ba4e0: 0xae031518  sw          $v1, 0x1518($s0)
    ctx->pc = 0x1ba4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5400), GPR_U32(ctx, 3));
label_1ba4e4:
    // 0x1ba4e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ba4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ba4e8:
    // 0x1ba4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA4ECu;
            // 0x1ba4f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BA2F4u: goto label_1ba2f4;
            case 0x1BA2FCu: goto label_1ba2fc;
            case 0x1BA320u: goto label_1ba320;
            case 0x1BA330u: goto label_1ba330;
            case 0x1BA33Cu: goto label_1ba33c;
            case 0x1BA354u: goto label_1ba354;
            case 0x1BA35Cu: goto label_1ba35c;
            case 0x1BA390u: goto label_1ba390;
            case 0x1BA3C8u: goto label_1ba3c8;
            case 0x1BA3E8u: goto label_1ba3e8;
            case 0x1BA404u: goto label_1ba404;
            case 0x1BA410u: goto label_1ba410;
            case 0x1BA41Cu: goto label_1ba41c;
            case 0x1BA428u: goto label_1ba428;
            case 0x1BA434u: goto label_1ba434;
            case 0x1BA488u: goto label_1ba488;
            case 0x1BA4D8u: goto label_1ba4d8;
            case 0x1BA4E4u: goto label_1ba4e4;
            case 0x1BA4E8u: goto label_1ba4e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA4F4u;
    // 0x1ba4f4: 0x0  nop
    ctx->pc = 0x1ba4f4u;
    // NOP
}
