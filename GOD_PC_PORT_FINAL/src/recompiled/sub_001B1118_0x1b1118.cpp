#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1118
// Address: 0x1b1118 - 0x1b12f0
void sub_001B1118_0x1b1118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1118_0x1b1118");
#endif

    ctx->pc = 0x1b1118u;

    // 0x1b1118: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1b1118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1b111c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b1120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b1120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b1124: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b1124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1128: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b1128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b112c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b1130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b1130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1134: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1138: 0x96620062  lhu         $v0, 0x62($s3)
    ctx->pc = 0x1b1138u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
    // 0x1b113c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1B113Cu;
    {
        const bool branch_taken_0x1b113c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B113Cu;
            // 0x1b1140: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b113c) {
            ctx->pc = 0x1B11CCu;
            goto label_1b11cc;
        }
    }
    ctx->pc = 0x1B1144u;
    // 0x1b1144: 0x8e630064  lw          $v1, 0x64($s3)
    ctx->pc = 0x1b1144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_1b1148:
    // 0x1b1148: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1b1148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1b114c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b114cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1150: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1b1150u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1154: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B1154u;
    {
        const bool branch_taken_0x1b1154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1154u;
            // 0x1b1158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1154) {
            ctx->pc = 0x1B11B8u;
            goto label_1b11b8;
        }
    }
    ctx->pc = 0x1B115Cu;
    // 0x1b115c: 0x8e0200a4  lw          $v0, 0xA4($s0)
    ctx->pc = 0x1b115cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1b1160: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1b1160u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b1164: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1b1164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1b1168: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x1b1168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b116c: 0x40f809  jalr        $v0
    ctx->pc = 0x1B116Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1174u);
        ctx->pc = 0x1B1170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B116Cu;
            // 0x1b1170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1174u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1148u: goto label_1b1148;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12D0u: goto label_1b12d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1174u; }
            if (ctx->pc != 0x1B1174u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1174u;
    // 0x1b1174: 0x8e100054  lw          $s0, 0x54($s0)
    ctx->pc = 0x1b1174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1b1178: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1178u;
    {
        const bool branch_taken_0x1b1178 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1178) {
            ctx->pc = 0x1B117Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1178u;
            // 0x1b117c: 0x96620062  lhu         $v0, 0x62($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11BCu;
            goto label_1b11bc;
        }
    }
    ctx->pc = 0x1B1180u;
    // 0x1b1180: 0x5250000e  beql        $s2, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1180u;
    {
        const bool branch_taken_0x1b1180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1b1180) {
            ctx->pc = 0x1B1184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1180u;
            // 0x1b1184: 0x96620062  lhu         $v0, 0x62($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11BCu;
            goto label_1b11bc;
        }
    }
    ctx->pc = 0x1B1188u;
    // 0x1b1188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b118c: 0xc06c3ec  jal         func_1B0FB0
    ctx->pc = 0x1B118Cu;
    SET_GPR_U32(ctx, 31, 0x1B1194u);
    ctx->pc = 0x1B1190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B118Cu;
            // 0x1b1190: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FB0u;
    if (runtime->hasFunction(0x1B0FB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1194u; }
        if (ctx->pc != 0x1B1194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b0fb0_0x1b0fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1194u; }
        if (ctx->pc != 0x1B1194u) { return; }
    }
    ctx->pc = 0x1B1194u;
    // 0x1b1194: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b1194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1198: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1198u;
    {
        const bool branch_taken_0x1b1198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b1198) {
            ctx->pc = 0x1B119Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1198u;
            // 0x1b119c: 0x96620062  lhu         $v0, 0x62($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11BCu;
            goto label_1b11bc;
        }
    }
    ctx->pc = 0x1B11A0u;
    // 0x1b11a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11a4: 0xc06c3f6  jal         func_1B0FD8
    ctx->pc = 0x1B11A4u;
    SET_GPR_U32(ctx, 31, 0x1B11ACu);
    ctx->pc = 0x1B11A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11A4u;
            // 0x1b11a8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0FD8u;
    if (runtime->hasFunction(0x1B0FD8u)) {
        auto targetFn = runtime->lookupFunction(0x1B0FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11ACu; }
        if (ctx->pc != 0x1B11ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_001b0fd8_0x1b0fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11ACu; }
        if (ctx->pc != 0x1B11ACu) { return; }
    }
    ctx->pc = 0x1B11ACu;
    // 0x1b11ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b11acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b11b0: 0xc06c52e  jal         func_1B14B8
    ctx->pc = 0x1B11B0u;
    SET_GPR_U32(ctx, 31, 0x1B11B8u);
    ctx->pc = 0x1B11B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11B0u;
            // 0x1b11b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B8u;
    if (runtime->hasFunction(0x1B14B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B14B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11B8u; }
        if (ctx->pc != 0x1B11B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14B8_0x1b14b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B11B8u; }
        if (ctx->pc != 0x1B11B8u) { return; }
    }
    ctx->pc = 0x1B11B8u;
label_1b11b8:
    // 0x1b11b8: 0x96620062  lhu         $v0, 0x62($s3)
    ctx->pc = 0x1b11b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 98)));
label_1b11bc:
    // 0x1b11bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1b11bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1b11c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1b11c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b11c4: 0x5440ffe0  bnel        $v0, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B11C4u;
    {
        const bool branch_taken_0x1b11c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b11c4) {
            ctx->pc = 0x1B11C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11C4u;
            // 0x1b11c8: 0x8e630064  lw          $v1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1148u;
            runtime->cooperativeGuestYield();
            goto label_1b1148;
        }
    }
    ctx->pc = 0x1B11CCu;
label_1b11cc:
    // 0x1b11cc: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x1b11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1b11d0: 0x26710038  addiu       $s1, $s3, 0x38
    ctx->pc = 0x1b11d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x1b11d4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1b11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1b11d8: 0x1051000f  beq         $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B11D8u;
    {
        const bool branch_taken_0x1b11d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1B11DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11D8u;
            // 0x1b11dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11d8) {
            ctx->pc = 0x1B1218u;
            goto label_1b1218;
        }
    }
    ctx->pc = 0x1B11E0u;
    // 0x1b11e0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b11e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b11e4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b11e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1b11e8:
    // 0x1b11e8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B11E8u;
    {
        const bool branch_taken_0x1b11e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B11ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B11E8u;
            // 0x1b11ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b11e8) {
            ctx->pc = 0x1B1208u;
            goto label_1b1208;
        }
    }
    ctx->pc = 0x1B11F0u;
    // 0x1b11f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b11f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b11f4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b11f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b11f8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b11f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b11fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b1200: 0x40f809  jalr        $v0
    ctx->pc = 0x1B1200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1208u);
        ctx->pc = 0x1B1204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1200u;
            // 0x1b1204: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1148u: goto label_1b1148;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12D0u: goto label_1b12d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1208u; }
            if (ctx->pc != 0x1B1208u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1208u;
label_1b1208:
    // 0x1b1208: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1b1208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b120c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b120cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1210: 0x5462fff5  bnel        $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B1210u;
    {
        const bool branch_taken_0x1b1210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1210) {
            ctx->pc = 0x1B1214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1210u;
            // 0x1b1214: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B11E8u;
            runtime->cooperativeGuestYield();
            goto label_1b11e8;
        }
    }
    ctx->pc = 0x1B1218u;
label_1b1218:
    // 0x1b1218: 0xae710038  sw          $s1, 0x38($s3)
    ctx->pc = 0x1b1218u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 17));
    // 0x1b121c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b1220: 0xae310004  sw          $s1, 0x4($s1)
    ctx->pc = 0x1b1220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
    // 0x1b1224: 0x24432630  addiu       $v1, $v0, 0x2630
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9776));
    // 0x1b1228: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1b1228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1b122c: 0x8c422630  lw          $v0, 0x2630($v0)
    ctx->pc = 0x1b122cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9776)));
    // 0x1b1230: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1B1230u;
    {
        const bool branch_taken_0x1b1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1230u;
            // 0x1b1234: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1230) {
            ctx->pc = 0x1B12D0u;
            goto label_1b12d0;
        }
    }
    ctx->pc = 0x1B1238u;
label_1b1238:
    // 0x1b1238: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b123c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b123cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b1240: 0x84430048  lh          $v1, 0x48($v0)
    ctx->pc = 0x1b1240u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1b1244: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b1244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b1248: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1b1248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b124c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b1250: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b1250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b1254: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b1254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1258: 0x16630019  bne         $s3, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B1258u;
    {
        const bool branch_taken_0x1b1258 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B125Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1258u;
            // 0x1b125c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1258) {
            ctx->pc = 0x1B12C0u;
            goto label_1b12c0;
        }
    }
    ctx->pc = 0x1B1260u;
    // 0x1b1260: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1b1260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b1264: 0xc0694ce  jal         func_1A5338
    ctx->pc = 0x1B1264u;
    SET_GPR_U32(ctx, 31, 0x1B126Cu);
    ctx->pc = 0x1B1268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1264u;
            // 0x1b1268: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5338u;
    if (runtime->hasFunction(0x1A5338u)) {
        auto targetFn = runtime->lookupFunction(0x1A5338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B126Cu; }
        if (ctx->pc != 0x1B126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5338_0x1a5338(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B126Cu; }
        if (ctx->pc != 0x1B126Cu) { return; }
    }
    ctx->pc = 0x1B126Cu;
    // 0x1b126c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b126cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1270: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1b1270u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b1274: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1b1274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1b1278: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1278u;
    {
        const bool branch_taken_0x1b1278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1278u;
            // 0x1b127c: 0x94450042  lhu         $a1, 0x42($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 66)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1278) {
            ctx->pc = 0x1B1298u;
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B1280u;
    // 0x1b1280: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1b1280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1b1284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1284u;
    {
        const bool branch_taken_0x1b1284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1284u;
            // 0x1b1288: 0x9606002a  lhu         $a2, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1284) {
            ctx->pc = 0x1B1298u;
            goto label_1b1298;
        }
    }
    ctx->pc = 0x1B128Cu;
    // 0x1b128c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1b128cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1b1290: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B1290u;
    {
        const bool branch_taken_0x1b1290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1290u;
            // 0x1b1294: 0x94470024  lhu         $a3, 0x24($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1290) {
            ctx->pc = 0x1B129Cu;
            goto label_1b129c;
        }
    }
    ctx->pc = 0x1B1298u;
label_1b1298:
    // 0x1b1298: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x1b1298u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1b129c:
    // 0x1b129c: 0xc0694b0  jal         func_1A52C0
    ctx->pc = 0x1B129Cu;
    SET_GPR_U32(ctx, 31, 0x1B12A4u);
    ctx->pc = 0x1B12A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B129Cu;
            // 0x1b12a0: 0xc64c0010  lwc1        $f12, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A52C0u;
    if (runtime->hasFunction(0x1A52C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A52C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12A4u; }
        if (ctx->pc != 0x1B12A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A52C0_0x1a52c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B12A4u; }
        if (ctx->pc != 0x1B12A4u) { return; }
    }
    ctx->pc = 0x1B12A4u;
    // 0x1b12a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1b12a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1b12a8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1b12a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x1b12ac: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1b12acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1b12b0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1b12b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1b12b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b12b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b12b8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1b12b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b12bc: 0x0  nop
    ctx->pc = 0x1b12bcu;
    // NOP
label_1b12c0:
    // 0x1b12c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b12c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b12c4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b12c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b12c8: 0x1443ffdb  bne         $v0, $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12C8u;
            // 0x1b12cc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B1238u;
            runtime->cooperativeGuestYield();
            goto label_1b1238;
        }
    }
    ctx->pc = 0x1B12D0u;
label_1b12d0:
    // 0x1b12d0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b12d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b12d4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b12d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b12d8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b12d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b12dc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b12dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b12e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b12e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b12e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B12E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B12E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B12E4u;
            // 0x1b12e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1148u: goto label_1b1148;
            case 0x1B11B8u: goto label_1b11b8;
            case 0x1B11BCu: goto label_1b11bc;
            case 0x1B11CCu: goto label_1b11cc;
            case 0x1B11E8u: goto label_1b11e8;
            case 0x1B1208u: goto label_1b1208;
            case 0x1B1218u: goto label_1b1218;
            case 0x1B1238u: goto label_1b1238;
            case 0x1B1298u: goto label_1b1298;
            case 0x1B129Cu: goto label_1b129c;
            case 0x1B12C0u: goto label_1b12c0;
            case 0x1B12D0u: goto label_1b12d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B12ECu;
    // 0x1b12ec: 0x0  nop
    ctx->pc = 0x1b12ecu;
    // NOP
}
