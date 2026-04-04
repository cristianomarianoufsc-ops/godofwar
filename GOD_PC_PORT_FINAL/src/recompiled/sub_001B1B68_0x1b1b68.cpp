#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1B68
// Address: 0x1b1b68 - 0x1b1c48
void sub_001B1B68_0x1b1b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1B68_0x1b1b68");
#endif

    ctx->pc = 0x1b1b68u;

    // 0x1b1b68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b1b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b1b6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b1b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b1b70: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b1b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b1b74: 0x30b2ffff  andi        $s2, $a1, 0xFFFF
    ctx->pc = 0x1b1b74u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1b1b78: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b1b78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b1b7c: 0x30d3ffff  andi        $s3, $a2, 0xFFFF
    ctx->pc = 0x1b1b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1b1b80: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b1b84: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1b1b84u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1b1b88: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b1b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b1b8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b1b90: 0x84830048  lh          $v1, 0x48($a0)
    ctx->pc = 0x1b1b90u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1b1b94: 0x94910042  lhu         $s1, 0x42($a0)
    ctx->pc = 0x1b1b94u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 66)));
    // 0x1b1b98: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1b1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1b1b9c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1b1b9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b1ba0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1b1ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1b1ba4: 0x24422668  addiu       $v0, $v0, 0x2668
    ctx->pc = 0x1b1ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9832));
    // 0x1b1ba8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1b1ba8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b1bac: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1b1bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1b1bb0: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1b1bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b1bb4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1b1bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1b1bb8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B1BB8u;
    {
        const bool branch_taken_0x1b1bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B1BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BB8u;
            // 0x1b1bbc: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bb8) {
            ctx->pc = 0x1B1BECu;
            goto label_1b1bec;
        }
    }
    ctx->pc = 0x1B1BC0u;
label_1b1bc0:
    // 0x1b1bc0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b1bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b1bc4: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x1b1bc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b1bc8: 0x54510005  bnel        $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1BC8u;
    {
        const bool branch_taken_0x1b1bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b1bc8) {
            ctx->pc = 0x1B1BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BC8u;
            // 0x1b1bcc: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1BE0u;
            goto label_1b1be0;
        }
    }
    ctx->pc = 0x1B1BD0u;
    // 0x1b1bd0: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1b1bd0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1b1bd4: 0xa4920012  sh          $s2, 0x12($a0)
    ctx->pc = 0x1b1bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 18));
    // 0x1b1bd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B1BD8u;
    {
        const bool branch_taken_0x1b1bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BD8u;
            // 0x1b1bdc: 0xa4930014  sh          $s3, 0x14($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1bd8) {
            ctx->pc = 0x1B1C28u;
            goto label_1b1c28;
        }
    }
    ctx->pc = 0x1B1BE0u;
label_1b1be0:
    // 0x1b1be0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1be4: 0x1443fff6  bne         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B1BE4u;
    {
        const bool branch_taken_0x1b1be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BE4u;
            // 0x1b1be8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1be4) {
            ctx->pc = 0x1B1BC0u;
            runtime->cooperativeGuestYield();
            goto label_1b1bc0;
        }
    }
    ctx->pc = 0x1B1BECu;
label_1b1bec:
    // 0x1b1bec: 0xc06949c  jal         func_1A5270
    ctx->pc = 0x1B1BECu;
    SET_GPR_U32(ctx, 31, 0x1B1BF4u);
    ctx->pc = 0x1B1BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1BECu;
            // 0x1b1bf0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5270u;
    if (runtime->hasFunction(0x1A5270u)) {
        auto targetFn = runtime->lookupFunction(0x1A5270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BF4u; }
        if (ctx->pc != 0x1B1BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5270_0x1a5270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1BF4u; }
        if (ctx->pc != 0x1B1BF4u) { return; }
    }
    ctx->pc = 0x1B1BF4u;
    // 0x1b1bf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bf8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b1bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bfc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b1bfcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1b1c00: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1b1c00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c04: 0xc06947e  jal         func_1A51F8
    ctx->pc = 0x1B1C04u;
    SET_GPR_U32(ctx, 31, 0x1B1C0Cu);
    ctx->pc = 0x1B1C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C04u;
            // 0x1b1c08: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A51F8u;
    if (runtime->hasFunction(0x1A51F8u)) {
        auto targetFn = runtime->lookupFunction(0x1A51F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C0Cu; }
        if (ctx->pc != 0x1B1C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A51F8_0x1a51f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1C0Cu; }
        if (ctx->pc != 0x1B1C0Cu) { return; }
    }
    ctx->pc = 0x1B1C0Cu;
    // 0x1b1c0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1c10: 0x26020030  addiu       $v0, $s0, 0x30
    ctx->pc = 0x1b1c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1b1c14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1b1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b1c18: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1b1c18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1b1c1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1b1c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1b1c20: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1b1c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1b1c24: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1b1c24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1b1c28:
    // 0x1b1c28: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b1c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1c2c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b1c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1c30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b1c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1c34: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b1c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1c3c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b1c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b1c40: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1C40u;
            // 0x1b1c44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1BC0u: goto label_1b1bc0;
            case 0x1B1BE0u: goto label_1b1be0;
            case 0x1B1BECu: goto label_1b1bec;
            case 0x1B1C28u: goto label_1b1c28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B1C48u;
}
