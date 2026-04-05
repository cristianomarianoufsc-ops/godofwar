#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00228B18
// Address: 0x228b18 - 0x228e60
void sub_00228B18_0x228b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228B18_0x228b18");
#endif

    ctx->pc = 0x228b18u;

    // 0x228b18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x228b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x228b1c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x228b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x228b20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x228b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x228b24: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x228b24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b28: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x228b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x228b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x228b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b30: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x228b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x228b34: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x228b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x228b38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x228b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x228b3c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x228b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x228b40: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x228B40u;
    {
        const bool branch_taken_0x228b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B40u;
            // 0x228b44: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b40) {
            ctx->pc = 0x228E40u;
            goto label_228e40;
        }
    }
    ctx->pc = 0x228B48u;
    // 0x228b48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x228B48u;
    {
        const bool branch_taken_0x228b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B48u;
            // 0x228b4c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b48) {
            ctx->pc = 0x228B54u;
            goto label_228b54;
        }
    }
    ctx->pc = 0x228B50u;
label_228b50:
    // 0x228b50: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x228b50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_228b54:
    // 0x228b54: 0x2e020010  sltiu       $v0, $s0, 0x10
    ctx->pc = 0x228b54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x228b58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x228B58u;
    {
        const bool branch_taken_0x228b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B58u;
            // 0x228b5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b58) {
            ctx->pc = 0x228B88u;
            goto label_228b88;
        }
    }
    ctx->pc = 0x228B60u;
    // 0x228b60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228b64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x228b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228b68: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228b68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228b6c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228b70: 0x40f809  jalr        $v0
    ctx->pc = 0x228B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228B78u);
        ctx->pc = 0x228B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B70u;
            // 0x228b74: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228B78u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228B78u; }
            if (ctx->pc != 0x228B78u) { return; }
        }
        }
    }
    ctx->pc = 0x228B78u;
    // 0x228b78: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x228b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x228b7c: 0x2701821  addu        $v1, $s3, $s0
    ctx->pc = 0x228b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x228b80: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x228B80u;
    {
        const bool branch_taken_0x228b80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228B80u;
            // 0x228b84: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228b80) {
            ctx->pc = 0x228B50u;
            runtime->cooperativeGuestYield();
            goto label_228b50;
        }
    }
    ctx->pc = 0x228B88u;
label_228b88:
    // 0x228b88: 0xa260000f  sb          $zero, 0xF($s3)
    ctx->pc = 0x228b88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x228b8c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228b90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228b94: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228b98: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228b9c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228ba0: 0x40f809  jalr        $v0
    ctx->pc = 0x228BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228BA8u);
        ctx->pc = 0x228BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228BA0u;
            // 0x228ba4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228BA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228BA8u; }
            if (ctx->pc != 0x228BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x228BA8u;
    // 0x228ba8: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228ba8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228bac: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x228BACu;
    {
        const bool branch_taken_0x228bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228bac) {
            ctx->pc = 0x228BB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228BACu;
            // 0x228bb0: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228CE8u;
            goto label_228ce8;
        }
    }
    ctx->pc = 0x228BB4u;
    // 0x228bb4: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_228bb8:
    // 0x228bb8: 0xc08a14a  jal         func_228528
    ctx->pc = 0x228BB8u;
    SET_GPR_U32(ctx, 31, 0x228BC0u);
    ctx->pc = 0x228BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228BB8u;
            // 0x228bbc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228528u;
    if (runtime->hasFunction(0x228528u)) {
        auto targetFn = runtime->lookupFunction(0x228528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BC0u; }
        if (ctx->pc != 0x228BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228528_0x228528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BC0u; }
        if (ctx->pc != 0x228BC0u) { return; }
    }
    ctx->pc = 0x228BC0u;
    // 0x228bc0: 0xc090cb2  jal         func_2432C8
    ctx->pc = 0x228BC0u;
    SET_GPR_U32(ctx, 31, 0x228BC8u);
    ctx->pc = 0x228BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228BC0u;
            // 0x228bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2432C8u;
    if (runtime->hasFunction(0x2432C8u)) {
        auto targetFn = runtime->lookupFunction(0x2432C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BC8u; }
        if (ctx->pc != 0x228BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2432c8_0x2432f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228BC8u; }
        if (ctx->pc != 0x228BC8u) { return; }
    }
    ctx->pc = 0x228BC8u;
    // 0x228bc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bcc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228bd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228bd4: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x228bd8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228bdc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228be0: 0x40f809  jalr        $v0
    ctx->pc = 0x228BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228BE8u);
        ctx->pc = 0x228BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228BE0u;
            // 0x228be4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228BE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228BE8u; }
            if (ctx->pc != 0x228BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x228BE8u;
    // 0x228be8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228bec: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x228becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x228bf0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x228bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x228bf4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228bf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228bf8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228bfc: 0x40f809  jalr        $v0
    ctx->pc = 0x228BFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C04u);
        ctx->pc = 0x228C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228BFCu;
            // 0x228c00: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C04u; }
            if (ctx->pc != 0x228C04u) { return; }
        }
        }
    }
    ctx->pc = 0x228C04u;
    // 0x228c04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c08: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x228c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x228c0c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c10: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228c14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228c18: 0x40f809  jalr        $v0
    ctx->pc = 0x228C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C20u);
        ctx->pc = 0x228C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C18u;
            // 0x228c1c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C20u; }
            if (ctx->pc != 0x228C20u) { return; }
        }
        }
    }
    ctx->pc = 0x228C20u;
    // 0x228c20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c24: 0x26050012  addiu       $a1, $s0, 0x12
    ctx->pc = 0x228c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 18));
    // 0x228c28: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c2c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228c30: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228c34: 0x40f809  jalr        $v0
    ctx->pc = 0x228C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C3Cu);
        ctx->pc = 0x228C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C34u;
            // 0x228c38: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C3Cu; }
            if (ctx->pc != 0x228C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x228C3Cu;
    // 0x228c3c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c40: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x228c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x228c44: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c48: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228c4c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228c50: 0x40f809  jalr        $v0
    ctx->pc = 0x228C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C58u);
        ctx->pc = 0x228C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C50u;
            // 0x228c54: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C58u; }
            if (ctx->pc != 0x228C58u) { return; }
        }
        }
    }
    ctx->pc = 0x228C58u;
    // 0x228c58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c5c: 0x26050016  addiu       $a1, $s0, 0x16
    ctx->pc = 0x228c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 22));
    // 0x228c60: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c64: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228c68: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228c6c: 0x40f809  jalr        $v0
    ctx->pc = 0x228C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C74u);
        ctx->pc = 0x228C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C6Cu;
            // 0x228c70: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C74u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C74u; }
            if (ctx->pc != 0x228C74u) { return; }
        }
        }
    }
    ctx->pc = 0x228C74u;
    // 0x228c74: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c78: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x228c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x228c7c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228c80: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228c80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228c84: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228c88: 0x40f809  jalr        $v0
    ctx->pc = 0x228C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228C90u);
        ctx->pc = 0x228C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C88u;
            // 0x228c8c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228C90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228C90u; }
            if (ctx->pc != 0x228C90u) { return; }
        }
        }
    }
    ctx->pc = 0x228C90u;
    // 0x228c90: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x228C90u;
    {
        const bool branch_taken_0x228c90 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x228C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228C90u;
            // 0x228c94: 0x2605001a  addiu       $a1, $s0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c90) {
            ctx->pc = 0x228CB0u;
            goto label_228cb0;
        }
    }
    ctx->pc = 0x228C98u;
    // 0x228c98: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228c9c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228ca0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228ca4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228ca8: 0x40f809  jalr        $v0
    ctx->pc = 0x228CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228CB0u);
        ctx->pc = 0x228CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228CA8u;
            // 0x228cac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228CB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228CB0u; }
            if (ctx->pc != 0x228CB0u) { return; }
        }
        }
    }
    ctx->pc = 0x228CB0u;
label_228cb0:
    // 0x228cb0: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x228cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x228cb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x228cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228cb8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x228cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x228cbc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x228cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x228cc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x228cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x228cc4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x228cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x228cc8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x228cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ccc: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x228cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x228cd0: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x228cd0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x228cd4: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228cd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228cd8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x228cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228cdc: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x228CDCu;
    {
        const bool branch_taken_0x228cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228CDCu;
            // 0x228ce0: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228cdc) {
            ctx->pc = 0x228BB8u;
            runtime->cooperativeGuestYield();
            goto label_228bb8;
        }
    }
    ctx->pc = 0x228CE4u;
    // 0x228ce4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_228ce8:
    // 0x228ce8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x228ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x228cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228cf0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228cf4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228cf8: 0x40f809  jalr        $v0
    ctx->pc = 0x228CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228D00u);
        ctx->pc = 0x228CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228CF8u;
            // 0x228cfc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228D00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228D00u; }
            if (ctx->pc != 0x228D00u) { return; }
        }
        }
    }
    ctx->pc = 0x228D00u;
    // 0x228d00: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228d00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d04: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x228D04u;
    {
        const bool branch_taken_0x228d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228d04) {
            ctx->pc = 0x228D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x228D04u;
            // 0x228d08: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x228D98u;
            goto label_228d98;
        }
    }
    ctx->pc = 0x228D0Cu;
    // 0x228d0c: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x228d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_228d10:
    // 0x228d10: 0xc08a166  jal         func_228598
    ctx->pc = 0x228D10u;
    SET_GPR_U32(ctx, 31, 0x228D18u);
    ctx->pc = 0x228D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228D10u;
            // 0x228d14: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228598u;
    if (runtime->hasFunction(0x228598u)) {
        auto targetFn = runtime->lookupFunction(0x228598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D18u; }
        if (ctx->pc != 0x228D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228598_0x228598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D18u; }
        if (ctx->pc != 0x228D18u) { return; }
    }
    ctx->pc = 0x228D18u;
    // 0x228d18: 0xc090cbc  jal         func_2432F0
    ctx->pc = 0x228D18u;
    SET_GPR_U32(ctx, 31, 0x228D20u);
    ctx->pc = 0x228D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228D18u;
            // 0x228d1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2432F0u;
    if (runtime->hasFunction(0x2432F0u)) {
        auto targetFn = runtime->lookupFunction(0x2432F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D20u; }
        if (ctx->pc != 0x228D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002432F0_0x2432f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228D20u; }
        if (ctx->pc != 0x228D20u) { return; }
    }
    ctx->pc = 0x228D20u;
    // 0x228d20: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x228d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228d24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d28: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x228d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x228d2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228d30: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x228d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x228d34: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x228d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x228d38: 0x40f809  jalr        $v0
    ctx->pc = 0x228D38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228D40u);
        ctx->pc = 0x228D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228D38u;
            // 0x228d3c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228D40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228D40u; }
            if (ctx->pc != 0x228D40u) { return; }
        }
        }
    }
    ctx->pc = 0x228D40u;
    // 0x228d40: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228d44: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x228d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x228d48: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x228d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x228d4c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228d4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228d50: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228d54: 0x40f809  jalr        $v0
    ctx->pc = 0x228D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228D5Cu);
        ctx->pc = 0x228D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228D54u;
            // 0x228d58: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228D5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228D5Cu; }
            if (ctx->pc != 0x228D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x228D5Cu;
    // 0x228d5c: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x228d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x228d60: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x228d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228d64: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x228d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x228d68: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x228d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x228d6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x228d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x228d70: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x228d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x228d74: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x228d74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228d78: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x228d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x228d7c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x228d7cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x228d80: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228d80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228d84: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x228d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228d88: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x228D88u;
    {
        const bool branch_taken_0x228d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228D88u;
            // 0x228d8c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228d88) {
            ctx->pc = 0x228D10u;
            runtime->cooperativeGuestYield();
            goto label_228d10;
        }
    }
    ctx->pc = 0x228D90u;
    // 0x228d90: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228d94: 0x0  nop
    ctx->pc = 0x228d94u;
    // NOP
label_228d98:
    // 0x228d98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x228d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x228d9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x228d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x228da0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228da4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228da8: 0x40f809  jalr        $v0
    ctx->pc = 0x228DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228DB0u);
        ctx->pc = 0x228DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DA8u;
            // 0x228dac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228DB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228DB0u; }
            if (ctx->pc != 0x228DB0u) { return; }
        }
        }
    }
    ctx->pc = 0x228DB0u;
    // 0x228db0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228db0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228db4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x228DB4u;
    {
        const bool branch_taken_0x228db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DB4u;
            // 0x228db8: 0x3c120001  lui         $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228db4) {
            ctx->pc = 0x228E40u;
            goto label_228e40;
        }
    }
    ctx->pc = 0x228DBCu;
    // 0x228dbc: 0x0  nop
    ctx->pc = 0x228dbcu;
    // NOP
label_228dc0:
    // 0x228dc0: 0xc08a166  jal         func_228598
    ctx->pc = 0x228DC0u;
    SET_GPR_U32(ctx, 31, 0x228DC8u);
    ctx->pc = 0x228DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228DC0u;
            // 0x228dc4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228598u;
    if (runtime->hasFunction(0x228598u)) {
        auto targetFn = runtime->lookupFunction(0x228598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DC8u; }
        if (ctx->pc != 0x228DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228598_0x228598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DC8u; }
        if (ctx->pc != 0x228DC8u) { return; }
    }
    ctx->pc = 0x228DC8u;
    // 0x228dc8: 0xc090cbc  jal         func_2432F0
    ctx->pc = 0x228DC8u;
    SET_GPR_U32(ctx, 31, 0x228DD0u);
    ctx->pc = 0x228DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x228DC8u;
            // 0x228dcc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2432F0u;
    if (runtime->hasFunction(0x2432F0u)) {
        auto targetFn = runtime->lookupFunction(0x2432F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DD0u; }
        if (ctx->pc != 0x228DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002432F0_0x2432f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x228DD0u; }
        if (ctx->pc != 0x228DD0u) { return; }
    }
    ctx->pc = 0x228DD0u;
    // 0x228dd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x228dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228dd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x228dd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228dd8: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x228dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x228ddc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x228ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x228de0: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x228de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x228de4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x228de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x228de8: 0x40f809  jalr        $v0
    ctx->pc = 0x228DE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228DF0u);
        ctx->pc = 0x228DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228DE8u;
            // 0x228dec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228DF0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228DF0u; }
            if (ctx->pc != 0x228DF0u) { return; }
        }
        }
    }
    ctx->pc = 0x228DF0u;
    // 0x228df0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x228df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x228df4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x228df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x228df8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x228df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x228dfc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x228dfcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x228e00: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x228e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x228e04: 0x40f809  jalr        $v0
    ctx->pc = 0x228E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228E0Cu);
        ctx->pc = 0x228E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E04u;
            // 0x228e08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x228E0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x228E0Cu; }
            if (ctx->pc != 0x228E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x228E0Cu;
    // 0x228e0c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x228e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x228e10: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x228e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x228e14: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x228e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x228e18: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x228e18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x228e1c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x228e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x228e20: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x228e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x228e24: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x228e24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228e28: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x228e28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x228e2c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x228e2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x228e30: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x228e30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x228e34: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x228e34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x228e38: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x228E38u;
    {
        const bool branch_taken_0x228e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E38u;
            // 0x228e3c: 0x2449021  addu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228e38) {
            ctx->pc = 0x228DC0u;
            runtime->cooperativeGuestYield();
            goto label_228dc0;
        }
    }
    ctx->pc = 0x228E40u;
label_228e40:
    // 0x228e40: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x228e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228e44: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x228e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228e48: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x228e48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228e4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x228e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228e50: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x228e50u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228e54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x228e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228e58: 0x3e00008  jr          $ra
    ctx->pc = 0x228E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x228E58u;
            // 0x228e5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x228B50u: goto label_228b50;
            case 0x228B54u: goto label_228b54;
            case 0x228B88u: goto label_228b88;
            case 0x228BB8u: goto label_228bb8;
            case 0x228CB0u: goto label_228cb0;
            case 0x228CE8u: goto label_228ce8;
            case 0x228D10u: goto label_228d10;
            case 0x228D98u: goto label_228d98;
            case 0x228DC0u: goto label_228dc0;
            case 0x228E40u: goto label_228e40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x228E60u;
}
