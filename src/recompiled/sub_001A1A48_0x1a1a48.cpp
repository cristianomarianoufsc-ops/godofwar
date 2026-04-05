#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1A48
// Address: 0x1a1a48 - 0x1a1b58
void sub_001A1A48_0x1a1a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1A48_0x1a1a48");
#endif

    ctx->pc = 0x1a1a48u;

    // 0x1a1a48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a1a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a1a4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a1a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a50: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a1a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a1a54: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a1a54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a1a58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a1a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a1a60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1a1a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1a1a64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1a68: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1a1a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1a1a6c: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1A6Cu;
    {
        const bool branch_taken_0x1a1a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1A1A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A6Cu;
            // 0x1a1a70: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a6c) {
            ctx->pc = 0x1A1A94u;
            goto label_1a1a94;
        }
    }
    ctx->pc = 0x1A1A74u;
    // 0x1a1a74: 0x0  nop
    ctx->pc = 0x1a1a74u;
    // NOP
label_1a1a78:
    // 0x1a1a78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a1a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a1a7c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1a80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1a84: 0x0  nop
    ctx->pc = 0x1a1a84u;
    // NOP
    // 0x1a1a88: 0x0  nop
    ctx->pc = 0x1a1a88u;
    // NOP
    // 0x1a1a8c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A1A8Cu;
    {
        const bool branch_taken_0x1a1a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1A1A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A8Cu;
            // 0x1a1a90: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a8c) {
            ctx->pc = 0x1A1A78u;
            runtime->cooperativeGuestYield();
            goto label_1a1a78;
        }
    }
    ctx->pc = 0x1A1A94u;
label_1a1a94:
    // 0x1a1a94: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x1a1a94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a1a98: 0x6420028  bltzl       $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A1A98u;
    {
        const bool branch_taken_0x1a1a98 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x1a1a98) {
            ctx->pc = 0x1A1A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1A98u;
            // 0x1a1a9c: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B3Cu;
            goto label_1a1b3c;
        }
    }
    ctx->pc = 0x1A1AA0u;
    // 0x1a1aa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a1aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a1aa4: 0x0  nop
    ctx->pc = 0x1a1aa4u;
    // NOP
label_1a1aa8:
    // 0x1a1aa8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1a1aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1aac: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x1a1aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x1a1ab0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a1ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a1ab4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a1ab8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1abc: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A1ABCu;
    {
        const bool branch_taken_0x1a1abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1ABCu;
            // 0x1a1ac0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1abc) {
            ctx->pc = 0x1A1AF0u;
            goto label_1a1af0;
        }
    }
    ctx->pc = 0x1A1AC4u;
    // 0x1a1ac4: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A1AC4u;
    {
        const bool branch_taken_0x1a1ac4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AC4u;
            // 0x1a1ac8: 0x8fb10014  lw          $s1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac4) {
            ctx->pc = 0x1A1AF4u;
            goto label_1a1af4;
        }
    }
    ctx->pc = 0x1A1ACCu;
    // 0x1a1acc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a1accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a1ad0:
    // 0x1a1ad0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a1ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1ad4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a1ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a1ad8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1a1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a1adc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a1ae0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AE0u;
    {
        const bool branch_taken_0x1a1ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE0u;
            // 0x1a1ae4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae0) {
            ctx->pc = 0x1A1AF0u;
            goto label_1a1af0;
        }
    }
    ctx->pc = 0x1A1AE8u;
    // 0x1a1ae8: 0x1492fff9  bne         $a0, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A1AE8u;
    {
        const bool branch_taken_0x1a1ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x1A1AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE8u;
            // 0x1a1aec: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ae8) {
            ctx->pc = 0x1A1AD0u;
            runtime->cooperativeGuestYield();
            goto label_1a1ad0;
        }
    }
    ctx->pc = 0x1A1AF0u;
label_1a1af0:
    // 0x1a1af0: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a1af4:
    // 0x1a1af4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a1af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1af8: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x1a1af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a1afc: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A1AFCu;
    {
        const bool branch_taken_0x1a1afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1afc) {
            ctx->pc = 0x1A1B00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AFCu;
            // 0x1a1b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B28u;
            goto label_1a1b28;
        }
    }
    ctx->pc = 0x1A1B04u;
    // 0x1a1b04: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1a1b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1a1b08: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1B08u;
    {
        const bool branch_taken_0x1a1b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B08u;
            // 0x1a1b0c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b08) {
            ctx->pc = 0x1A1B24u;
            goto label_1a1b24;
        }
    }
    ctx->pc = 0x1A1B10u;
    // 0x1a1b10: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1a1b14: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a1b14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1b18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1a1b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1a1b1c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A1B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A1B24u);
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B1Cu;
            // 0x1a1b20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A1B24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1A78u: goto label_1a1a78;
            case 0x1A1A94u: goto label_1a1a94;
            case 0x1A1AA8u: goto label_1a1aa8;
            case 0x1A1AD0u: goto label_1a1ad0;
            case 0x1A1AF0u: goto label_1a1af0;
            case 0x1A1AF4u: goto label_1a1af4;
            case 0x1A1B24u: goto label_1a1b24;
            case 0x1A1B28u: goto label_1a1b28;
            case 0x1A1B3Cu: goto label_1a1b3c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B24u; }
            if (ctx->pc != 0x1A1B24u) { return; }
        }
        }
    }
    ctx->pc = 0x1A1B24u;
label_1a1b24:
    // 0x1a1b24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a1b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a1b28:
    // 0x1a1b28: 0xc06855a  jal         func_1A1568
    ctx->pc = 0x1A1B28u;
    SET_GPR_U32(ctx, 31, 0x1A1B30u);
    ctx->pc = 0x1A1B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B28u;
            // 0x1a1b2c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1568u;
    if (runtime->hasFunction(0x1A1568u)) {
        auto targetFn = runtime->lookupFunction(0x1A1568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B30u; }
        if (ctx->pc != 0x1A1B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a1568_0x1a1590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1B30u; }
        if (ctx->pc != 0x1A1B30u) { return; }
    }
    ctx->pc = 0x1A1B30u;
    // 0x1a1b30: 0x643ffdd  bgezl       $s2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x1A1B30u;
    {
        const bool branch_taken_0x1a1b30 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1a1b30) {
            ctx->pc = 0x1A1B34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B30u;
            // 0x1a1b34: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1AA8u;
            runtime->cooperativeGuestYield();
            goto label_1a1aa8;
        }
    }
    ctx->pc = 0x1A1B38u;
    // 0x1a1b38: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x1a1b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_1a1b3c:
    // 0x1a1b3c: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x1a1b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x1a1b40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a1b40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a1b44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a1b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a1b48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a1b48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1b4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1a1b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a1b50: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B50u;
            // 0x1a1b54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A1A78u: goto label_1a1a78;
            case 0x1A1A94u: goto label_1a1a94;
            case 0x1A1AA8u: goto label_1a1aa8;
            case 0x1A1AD0u: goto label_1a1ad0;
            case 0x1A1AF0u: goto label_1a1af0;
            case 0x1A1AF4u: goto label_1a1af4;
            case 0x1A1B24u: goto label_1a1b24;
            case 0x1A1B28u: goto label_1a1b28;
            case 0x1A1B3Cu: goto label_1a1b3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A1B58u;
}
