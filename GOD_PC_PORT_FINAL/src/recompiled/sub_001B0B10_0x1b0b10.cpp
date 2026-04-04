#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B0B10
// Address: 0x1b0b10 - 0x1b0c70
void sub_001B0B10_0x1b0b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0B10_0x1b0b10");
#endif

    ctx->pc = 0x1b0b10u;

    // 0x1b0b10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b0b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b0b14: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1b0b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1b0b18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1b0b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b1c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1b0b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1b0b20: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b0b20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b24: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1b0b24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1b0b28: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b0b2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b0b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b0b30: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b0b30u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b0b34: 0x24a547c0  addiu       $a1, $a1, 0x47C0
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18368));
    // 0x1b0b38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b0b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b3c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b40: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1b0b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1b0b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b0b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b0b48: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1B0B48u;
    SET_GPR_U32(ctx, 31, 0x1B0B50u);
    ctx->pc = 0x1B0B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B48u;
            // 0x1b0b4c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B50u; }
        if (ctx->pc != 0x1B0B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0B50u; }
        if (ctx->pc != 0x1B0B50u) { return; }
    }
    ctx->pc = 0x1B0B50u;
    // 0x1b0b50: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b0b54: 0x8c42cac8  lw          $v0, -0x3538($v0)
    ctx->pc = 0x1b0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953672)));
    // 0x1b0b58: 0x84430048  lh          $v1, 0x48($v0)
    ctx->pc = 0x1b0b58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1b0b5c: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b0b60: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1b0b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b0b64: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b0b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b0b68: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b0b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b0b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b0b70: 0x8c650068  lw          $a1, 0x68($v1)
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1b0b74: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1b0b74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b0b78: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1b0b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1b0b7c: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x1b0b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1b0b80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b0b84: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b0b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b0b88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0b8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b0b90: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1b0b90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1b0b94: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1b0b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1b0b98: 0x40f809  jalr        $v0
    ctx->pc = 0x1B0B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0BA0u);
        ctx->pc = 0x1B0B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0B98u;
            // 0x1b0b9c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0BA0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA0u; }
            if (ctx->pc != 0x1B0BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x1B0BA0u;
    // 0x1b0ba0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1B0BA0u;
    SET_GPR_U32(ctx, 31, 0x1B0BA8u);
    ctx->pc = 0x1B0BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BA0u;
            // 0x1b0ba4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA8u; }
        if (ctx->pc != 0x1B0BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BA8u; }
        if (ctx->pc != 0x1B0BA8u) { return; }
    }
    ctx->pc = 0x1B0BA8u;
    // 0x1b0ba8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0BA8u;
    {
        const bool branch_taken_0x1b0ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BA8u;
            // 0x1b0bac: 0x8e23006c  lw          $v1, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ba8) {
            ctx->pc = 0x1B0BB8u;
            goto label_1b0bb8;
        }
    }
    ctx->pc = 0x1B0BB0u;
    // 0x1b0bb0: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1b0bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1b0bb4: 0x8c530038  lw          $s3, 0x38($v0)
    ctx->pc = 0x1b0bb4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1b0bb8:
    // 0x1b0bb8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b0bbc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1b0bc0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1b0bc4: 0x40f809  jalr        $v0
    ctx->pc = 0x1B0BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B0BCCu);
        ctx->pc = 0x1B0BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BC4u;
            // 0x1b0bc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B0BCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B0BCCu; }
            if (ctx->pc != 0x1B0BCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B0BCCu;
    // 0x1b0bcc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b0bd0: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x1b0bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x1b0bd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b0bd8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0BD8u;
    {
        const bool branch_taken_0x1b0bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BD8u;
            // 0x1b0bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bd8) {
            ctx->pc = 0x1B0C20u;
            goto label_1b0c20;
        }
    }
    ctx->pc = 0x1B0BE0u;
    // 0x1b0be0: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b0be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b0be4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B0BE4u;
    {
        const bool branch_taken_0x1b0be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BE4u;
            // 0x1b0be8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0be4) {
            ctx->pc = 0x1B0BFCu;
            goto label_1b0bfc;
        }
    }
    ctx->pc = 0x1B0BECu;
    // 0x1b0bec: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B0BECu;
    {
        const bool branch_taken_0x1b0bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b0bec) {
            ctx->pc = 0x1B0C10u;
            goto label_1b0c10;
        }
    }
    ctx->pc = 0x1B0BF4u;
    // 0x1b0bf4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1B0BF4u;
    {
        const bool branch_taken_0x1b0bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0BF4u;
            // 0x1b0bf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0bf4) {
            ctx->pc = 0x1B0C3Cu;
            goto label_1b0c3c;
        }
    }
    ctx->pc = 0x1B0BFCu;
label_1b0bfc:
    // 0x1b0bfc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b0c00: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B0C00u;
    {
        const bool branch_taken_0x1b0c00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C00u;
            // 0x1b0c04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c00) {
            ctx->pc = 0x1B0C34u;
            goto label_1b0c34;
        }
    }
    ctx->pc = 0x1B0C08u;
    // 0x1b0c08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B0C08u;
    {
        const bool branch_taken_0x1b0c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C08u;
            // 0x1b0c0c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c08) {
            ctx->pc = 0x1B0C40u;
            goto label_1b0c40;
        }
    }
    ctx->pc = 0x1B0C10u;
label_1b0c10:
    // 0x1b0c10: 0xc0762fa  jal         func_1D8BE8
    ctx->pc = 0x1B0C10u;
    SET_GPR_U32(ctx, 31, 0x1B0C18u);
    ctx->pc = 0x1D8BE8u;
    if (runtime->hasFunction(0x1D8BE8u)) {
        auto targetFn = runtime->lookupFunction(0x1D8BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C18u; }
        if (ctx->pc != 0x1B0C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8BE8_0x1d8be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C18u; }
        if (ctx->pc != 0x1B0C18u) { return; }
    }
    ctx->pc = 0x1B0C18u;
    // 0x1b0c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B0C18u;
    {
        const bool branch_taken_0x1b0c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C18u;
            // 0x1b0c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c18) {
            ctx->pc = 0x1B0C2Cu;
            goto label_1b0c2c;
        }
    }
    ctx->pc = 0x1B0C20u;
label_1b0c20:
    // 0x1b0c20: 0xc07631a  jal         func_1D8C68
    ctx->pc = 0x1B0C20u;
    SET_GPR_U32(ctx, 31, 0x1B0C28u);
    ctx->pc = 0x1D8C68u;
    if (runtime->hasFunction(0x1D8C68u)) {
        auto targetFn = runtime->lookupFunction(0x1D8C68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C28u; }
        if (ctx->pc != 0x1B0C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8c68_0x1d8cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C28u; }
        if (ctx->pc != 0x1B0C28u) { return; }
    }
    ctx->pc = 0x1B0C28u;
    // 0x1b0c28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0c28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c2c:
    // 0x1b0c2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B0C2Cu;
    {
        const bool branch_taken_0x1b0c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C2Cu;
            // 0x1b0c30: 0x202300b  movn        $a2, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c2c) {
            ctx->pc = 0x1B0C38u;
            goto label_1b0c38;
        }
    }
    ctx->pc = 0x1B0C34u;
label_1b0c34:
    // 0x1b0c34: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1b0c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0c38:
    // 0x1b0c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b0c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c3c:
    // 0x1b0c3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b0c3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b0c40:
    // 0x1b0c40: 0xc087372  jal         func_21CDC8
    ctx->pc = 0x1B0C40u;
    SET_GPR_U32(ctx, 31, 0x1B0C48u);
    ctx->pc = 0x1B0C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C40u;
            // 0x1b0c44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CDC8u;
    if (runtime->hasFunction(0x21CDC8u)) {
        auto targetFn = runtime->lookupFunction(0x21CDC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C48u; }
        if (ctx->pc != 0x1B0C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CDC8_0x21cdc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B0C48u; }
        if (ctx->pc != 0x1B0C48u) { return; }
    }
    ctx->pc = 0x1B0C48u;
    // 0x1b0c48: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1b0c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b0c4c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1b0c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b0c50: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1b0c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b0c54: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b0c54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0c58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b0c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0c5c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1b0c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b0c60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B0C60u;
            // 0x1b0c64: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B0BB8u: goto label_1b0bb8;
            case 0x1B0BFCu: goto label_1b0bfc;
            case 0x1B0C10u: goto label_1b0c10;
            case 0x1B0C20u: goto label_1b0c20;
            case 0x1B0C2Cu: goto label_1b0c2c;
            case 0x1B0C34u: goto label_1b0c34;
            case 0x1B0C38u: goto label_1b0c38;
            case 0x1B0C3Cu: goto label_1b0c3c;
            case 0x1B0C40u: goto label_1b0c40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B0C68u;
    // 0x1b0c68: 0xc440b3f8  lwc1        $f0, -0x4C08($v0)
    ctx->pc = 0x1b0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294947832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b0c6c: 0x0  nop
    ctx->pc = 0x1b0c6cu;
    // NOP
}
