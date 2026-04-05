#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3AF8
// Address: 0x1e3af8 - 0x1e3c28
void sub_001E3AF8_0x1e3af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3AF8_0x1e3af8");
#endif

    ctx->pc = 0x1e3af8u;

    // 0x1e3af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e3afc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e3afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e3b00: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e3b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e3b04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e3b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e3b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e3b0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e3b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e3b14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1e3b1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1e3b1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b20: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1e3b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1e3b24: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1e3b24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e3b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e3b2c: 0x3c15002a  lui         $s5, 0x2A
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
    // 0x1e3b30: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1e3b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1e3b34: 0x7a450020  lq          $a1, 0x20($s2)
    ctx->pc = 0x1e3b34u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1e3b38: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3B38u;
    SET_GPR_U32(ctx, 31, 0x1E3B40u);
    ctx->pc = 0x1E3B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B38u;
            // 0x1e3b3c: 0x7a460000  lq          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B40u; }
        if (ctx->pc != 0x1E3B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B40u; }
        if (ctx->pc != 0x1E3B40u) { return; }
    }
    ctx->pc = 0x1E3B40u;
    // 0x1e3b40: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3B40u;
    {
        const bool branch_taken_0x1e3b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B40u;
            // 0x1e3b44: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b40) {
            ctx->pc = 0x1E3B98u;
            goto label_1e3b98;
        }
    }
    ctx->pc = 0x1E3B48u;
    // 0x1e3b48: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x1e3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1e3b4c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e3b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3b50: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x1e3b50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x1e3b54: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e3b54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e3b58: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e3b58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1e3b5c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e3b60: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e3b60u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1e3b64: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e3b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e3b68: 0x7e020030  sq          $v0, 0x30($s0)
    ctx->pc = 0x1e3b68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 2));
    // 0x1e3b6c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1e3b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1e3b70: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e3b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e3b74: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1e3b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1e3b78: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e3b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e3b7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3b80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3b84: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1e3b84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3b8c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1e3b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1e3b90: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x1e3b90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1e3b94: 0x0  nop
    ctx->pc = 0x1e3b94u;
    // NOP
label_1e3b98:
    // 0x1e3b98: 0x8ea4bcf8  lw          $a0, -0x4308($s5)
    ctx->pc = 0x1e3b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950136)));
    // 0x1e3b9c: 0x7a460010  lq          $a2, 0x10($s2)
    ctx->pc = 0x1e3b9cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1e3ba0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3BA0u;
    SET_GPR_U32(ctx, 31, 0x1E3BA8u);
    ctx->pc = 0x1E3BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BA0u;
            // 0x1e3ba4: 0x7a450020  lq          $a1, 0x20($s2) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BA8u; }
        if (ctx->pc != 0x1E3BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3BA8u; }
        if (ctx->pc != 0x1E3BA8u) { return; }
    }
    ctx->pc = 0x1E3BA8u;
    // 0x1e3ba8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E3BA8u;
    {
        const bool branch_taken_0x1e3ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BA8u;
            // 0x1e3bac: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ba8) {
            ctx->pc = 0x1E3C00u;
            goto label_1e3c00;
        }
    }
    ctx->pc = 0x1E3BB0u;
    // 0x1e3bb0: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x1e3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1e3bb4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e3bb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3bb8: 0x7e020040  sq          $v0, 0x40($s0)
    ctx->pc = 0x1e3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), GPR_VEC(ctx, 2));
    // 0x1e3bbc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e3bbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e3bc0: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x1e3bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x1e3bc4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e3bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e3bc8: 0x7e020060  sq          $v0, 0x60($s0)
    ctx->pc = 0x1e3bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 2));
    // 0x1e3bcc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e3bccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e3bd0: 0x7e020070  sq          $v0, 0x70($s0)
    ctx->pc = 0x1e3bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 2));
    // 0x1e3bd4: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1e3bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1e3bd8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e3bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e3bdc: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x1e3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x1e3be0: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e3be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e3be4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e3be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e3be8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e3bec: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x1e3becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1e3bf0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3BF0u;
    {
        const bool branch_taken_0x1e3bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3bf0) {
            ctx->pc = 0x1E3BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BF0u;
            // 0x1e3bf4: 0x36310004  ori         $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3C00u;
            goto label_1e3c00;
        }
    }
    ctx->pc = 0x1E3BF8u;
    // 0x1e3bf8: 0x36310008  ori         $s1, $s1, 0x8
    ctx->pc = 0x1e3bf8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
    // 0x1e3bfc: 0x0  nop
    ctx->pc = 0x1e3bfcu;
    // NOP
label_1e3c00:
    // 0x1e3c00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e3c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c04: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e3c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e3c08: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e3c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3c0c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e3c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e3c10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e3c14: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e3c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e3c18: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1e3c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e3c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e3c20: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C20u;
            // 0x1e3c24: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3B98u: goto label_1e3b98;
            case 0x1E3C00u: goto label_1e3c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3C28u;
}
