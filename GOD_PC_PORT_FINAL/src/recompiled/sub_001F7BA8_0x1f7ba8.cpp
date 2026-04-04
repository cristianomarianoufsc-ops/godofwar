#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F7BA8
// Address: 0x1f7ba8 - 0x1f7dd8
void sub_001F7BA8_0x1f7ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7BA8_0x1f7ba8");
#endif

    ctx->pc = 0x1f7ba8u;

    // 0x1f7ba8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f7ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f7bac: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1f7bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1f7bb0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1f7bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1f7bb4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f7bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bb8: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1f7bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1f7bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f7bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bc0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1f7bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1f7bc4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f7bc4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bc8: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1f7bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1f7bcc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f7bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1f7bd0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1f7bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1f7bd4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1F7BD4u;
    {
        const bool branch_taken_0x1f7bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BD4u;
            // 0x1f7bd8: 0x92220730  lbu         $v0, 0x730($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1840)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bd4) {
            ctx->pc = 0x1F7D98u;
            goto label_1f7d98;
        }
    }
    ctx->pc = 0x1F7BDCu;
    // 0x1f7bdc: 0x0  nop
    ctx->pc = 0x1f7bdcu;
    // NOP
label_1f7be0:
    // 0x1f7be0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1f7be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1f7be4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f7be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f7be8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1f7be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f7bec: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1f7becu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f7bf0: 0x919021  addu        $s2, $a0, $s1
    ctx->pc = 0x1f7bf0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1f7bf4: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x1f7bf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1f7bf8: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x1F7BF8u;
    {
        const bool branch_taken_0x1f7bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7BF8u;
            // 0x1f7bfc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7bf8) {
            ctx->pc = 0x1F7D80u;
            goto label_1f7d80;
        }
    }
    ctx->pc = 0x1F7C00u;
    // 0x1f7c00: 0x8e450020  lw          $a1, 0x20($s2)
    ctx->pc = 0x1f7c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1f7c04: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1f7c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1f7c08: 0x515c2  srl         $v0, $a1, 23
    ctx->pc = 0x1f7c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1f7c0c: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x1f7c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x1f7c10: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1f7c10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f7c14: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f7c18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f7c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7c1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f7c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7c20: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7C20u;
    {
        const bool branch_taken_0x1f7c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C20u;
            // 0x1f7c24: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c20) {
            ctx->pc = 0x1F7C2Cu;
            goto label_1f7c2c;
        }
    }
    ctx->pc = 0x1F7C28u;
    // 0x1f7c28: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x1f7c28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f7c2c:
    // 0x1f7c2c: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1F7C2Cu;
    {
        const bool branch_taken_0x1f7c2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C2Cu;
            // 0x1f7c30: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c2c) {
            ctx->pc = 0x1F7D30u;
            goto label_1f7d30;
        }
    }
    ctx->pc = 0x1F7C34u;
    // 0x1f7c34: 0x86450024  lh          $a1, 0x24($s2)
    ctx->pc = 0x1f7c34u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1f7c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f7c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f7c3c: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7C3Cu;
    {
        const bool branch_taken_0x1f7c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F7C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C3Cu;
            // 0x1f7c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c3c) {
            ctx->pc = 0x1F7C58u;
            goto label_1f7c58;
        }
    }
    ctx->pc = 0x1F7C44u;
    // 0x1f7c44: 0xc04c586  jal         func_131618
    ctx->pc = 0x1F7C44u;
    SET_GPR_U32(ctx, 31, 0x1F7C4Cu);
    ctx->pc = 0x1F7C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C44u;
            // 0x1f7c48: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131618u;
    if (runtime->hasFunction(0x131618u)) {
        auto targetFn = runtime->lookupFunction(0x131618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C4Cu; }
        if (ctx->pc != 0x1F7C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131618_0x131618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C4Cu; }
        if (ctx->pc != 0x1F7C4Cu) { return; }
    }
    ctx->pc = 0x1F7C4Cu;
    // 0x1f7c4c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1F7C4Cu;
    {
        const bool branch_taken_0x1f7c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C4Cu;
            // 0x1f7c50: 0xda430010  lqc2        $vf3, 0x10($s2) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c4c) {
            ctx->pc = 0x1F7CACu;
            goto label_1f7cac;
        }
    }
    ctx->pc = 0x1F7C54u;
    // 0x1f7c54: 0x0  nop
    ctx->pc = 0x1f7c54u;
    // NOP
label_1f7c58:
    // 0x1f7c58: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1f7c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1f7c5c: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7C5Cu;
    {
        const bool branch_taken_0x1f7c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1F7C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C5Cu;
            // 0x1f7c60: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c5c) {
            ctx->pc = 0x1F7C6Cu;
            goto label_1f7c6c;
        }
    }
    ctx->pc = 0x1F7C64u;
    // 0x1f7c64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F7C64u;
    {
        const bool branch_taken_0x1f7c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C64u;
            // 0x1f7c68: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c64) {
            ctx->pc = 0x1F7C88u;
            goto label_1f7c88;
        }
    }
    ctx->pc = 0x1F7C6Cu;
label_1f7c6c:
    // 0x1f7c6c: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1f7c6cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1f7c70: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f7c70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f7c74: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C74u;
    {
        const bool branch_taken_0x1f7c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F7C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C74u;
            // 0x1f7c78: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c74) {
            ctx->pc = 0x1F7C88u;
            goto label_1f7c88;
        }
    }
    ctx->pc = 0x1F7C7Cu;
    // 0x1f7c7c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F7C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F7C84u);
    ctx->pc = 0x1F7C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7C7Cu;
            // 0x1f7c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C84u; }
        if (ctx->pc != 0x1F7C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7C84u; }
        if (ctx->pc != 0x1F7C84u) { return; }
    }
    ctx->pc = 0x1F7C84u;
    // 0x1f7c84: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1f7c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1f7c88:
    // 0x1f7c88: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x1f7c88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f7c8c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f7c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f7c90: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1f7c90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f7c94: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1f7c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1f7c98: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1f7c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1f7c9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1f7c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1f7ca0: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1f7ca0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1f7ca4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1f7ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1f7ca8: 0xda430010  lqc2        $vf3, 0x10($s2)
    ctx->pc = 0x1f7ca8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_1f7cac:
    // 0x1f7cac: 0xdba60000  lqc2        $vf6, 0x0($sp)
    ctx->pc = 0x1f7cacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7cb0: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1f7cb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f7cb4: 0xdba50010  lqc2        $vf5, 0x10($sp)
    ctx->pc = 0x1f7cb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7cb8: 0x4be328bd  vmadday.xyzw $ACC, $vf5, $vf3y
    ctx->pc = 0x1f7cb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f7cbc: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1f7cbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7cc0: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1f7cc0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7cc4: 0x4be320be  vmaddaz.xyzw $ACC, $vf4, $vf3z
    ctx->pc = 0x1f7cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f7cc8: 0x4be310cb  vmaddw.xyzw $vf3, $vf2, $vf3w
    ctx->pc = 0x1f7cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f7ccc: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f7cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f7cd0: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1f7cd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f7cd4: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x1f7cd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f7cd8: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x1f7cd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f7cdc: 0x4be1108b  vmaddw.xyzw $vf2, $vf2, $vf1w
    ctx->pc = 0x1f7cdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f7ce0: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1f7ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7ce4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7ce8: 0x8c44e3a4  lw          $a0, -0x1C5C($v0)
    ctx->pc = 0x1f7ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960036)));
    // 0x1f7cec: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1f7cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1f7cf0: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1f7cf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f7cf4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1f7cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f7cf8: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1f7cfc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1f7cfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f7d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d04: 0x4be11118  vmulx.xyzw  $vf4, $vf2, $vf1x
    ctx->pc = 0x1f7d04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1f7d08: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1f7d08u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f7d0c: 0xc07e18e  jal         func_1F8638
    ctx->pc = 0x1F7D0Cu;
    SET_GPR_U32(ctx, 31, 0x1F7D14u);
    ctx->pc = 0x1F7D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D0Cu;
            // 0x1f7d10: 0x48262000  qmfc2.ni    $a2, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8638u;
    if (runtime->hasFunction(0x1F8638u)) {
        auto targetFn = runtime->lookupFunction(0x1F8638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D14u; }
        if (ctx->pc != 0x1F7D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f8638_0x1f86c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F7D14u; }
        if (ctx->pc != 0x1F7D14u) { return; }
    }
    ctx->pc = 0x1F7D14u;
    // 0x1f7d14: 0x92220732  lbu         $v0, 0x732($s1)
    ctx->pc = 0x1f7d14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1842)));
    // 0x1f7d18: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1f7d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1f7d1c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1f7d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f7d20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f7d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f7d24: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1f7d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x1f7d28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7D28u;
    {
        const bool branch_taken_0x1f7d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D28u;
            // 0x1f7d2c: 0xa2220732  sb          $v0, 0x732($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1842), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d28) {
            ctx->pc = 0x1F7D34u;
            goto label_1f7d34;
        }
    }
    ctx->pc = 0x1F7D30u;
label_1f7d30:
    // 0x1f7d30: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1f7d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f7d34:
    // 0x1f7d34: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f7d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1f7d38: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x1f7d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x1f7d3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7d40: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x1f7d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7d44: 0x96430026  lhu         $v1, 0x26($s2)
    ctx->pc = 0x1f7d44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 38)));
    // 0x1f7d48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7d48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7d4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f7d4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f7d50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f7d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f7d54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1f7d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7d58: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7D58u;
    {
        const bool branch_taken_0x1f7d58 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1f7d58) {
            ctx->pc = 0x1F7D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D58u;
            // 0x1f7d5c: 0x92220730  lbu         $v0, 0x730($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1840)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7D6Cu;
            goto label_1f7d6c;
        }
    }
    ctx->pc = 0x1F7D60u;
    // 0x1f7d60: 0x52a00006  beql        $s5, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7D60u;
    {
        const bool branch_taken_0x1f7d60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7d60) {
            ctx->pc = 0x1F7D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D60u;
            // 0x1f7d64: 0xa6430026  sh          $v1, 0x26($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 38), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7D7Cu;
            goto label_1f7d7c;
        }
    }
    ctx->pc = 0x1F7D68u;
    // 0x1f7d68: 0x92220730  lbu         $v0, 0x730($s1)
    ctx->pc = 0x1f7d68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1840)));
label_1f7d6c:
    // 0x1f7d6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1f7d70: 0xa2220730  sb          $v0, 0x730($s1)
    ctx->pc = 0x1f7d70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1840), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f7d74: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7D74u;
    {
        const bool branch_taken_0x1f7d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D74u;
            // 0x1f7d78: 0xa2400028  sb          $zero, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d74) {
            ctx->pc = 0x1F7D80u;
            goto label_1f7d80;
        }
    }
    ctx->pc = 0x1F7D7Cu;
label_1f7d7c:
    // 0x1f7d7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1f7d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1f7d80:
    // 0x1f7d80: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f7d80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f7d84: 0x2e820010  sltiu       $v0, $s4, 0x10
    ctx->pc = 0x1f7d84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f7d88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F7D88u;
    {
        const bool branch_taken_0x1f7d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D88u;
            // 0x1f7d8c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d88) {
            ctx->pc = 0x1F7DB4u;
            goto label_1f7db4;
        }
    }
    ctx->pc = 0x1F7D90u;
    // 0x1f7d90: 0x92220730  lbu         $v0, 0x730($s1)
    ctx->pc = 0x1f7d90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1840)));
    // 0x1f7d94: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1f7d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f7d98:
    // 0x1f7d98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F7D98u;
    {
        const bool branch_taken_0x1f7d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7D98u;
            // 0x1f7d9c: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d98) {
            ctx->pc = 0x1F7DB4u;
            goto label_1f7db4;
        }
    }
    ctx->pc = 0x1F7DA0u;
    // 0x1f7da0: 0x92220731  lbu         $v0, 0x731($s1)
    ctx->pc = 0x1f7da0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1841)));
    // 0x1f7da4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x1f7da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1f7da8: 0x5440ff8d  bnel        $v0, $zero, . + 4 + (-0x73 << 2)
    ctx->pc = 0x1F7DA8u;
    {
        const bool branch_taken_0x1f7da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7da8) {
            ctx->pc = 0x1F7DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DA8u;
            // 0x1f7dac: 0x92220732  lbu         $v0, 0x732($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1842)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F7BE0u;
            runtime->cooperativeGuestYield();
            goto label_1f7be0;
        }
    }
    ctx->pc = 0x1F7DB0u;
    // 0x1f7db0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1f7db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1f7db4:
    // 0x1f7db4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1f7db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f7db8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1f7db8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f7dbc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1f7dbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f7dc0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1f7dc0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7dc4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1f7dc4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7dc8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1f7dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f7dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F7DCCu;
            // 0x1f7dd0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7BE0u: goto label_1f7be0;
            case 0x1F7C2Cu: goto label_1f7c2c;
            case 0x1F7C58u: goto label_1f7c58;
            case 0x1F7C6Cu: goto label_1f7c6c;
            case 0x1F7C88u: goto label_1f7c88;
            case 0x1F7CACu: goto label_1f7cac;
            case 0x1F7D30u: goto label_1f7d30;
            case 0x1F7D34u: goto label_1f7d34;
            case 0x1F7D6Cu: goto label_1f7d6c;
            case 0x1F7D7Cu: goto label_1f7d7c;
            case 0x1F7D80u: goto label_1f7d80;
            case 0x1F7D98u: goto label_1f7d98;
            case 0x1F7DB4u: goto label_1f7db4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F7DD4u;
    // 0x1f7dd4: 0x0  nop
    ctx->pc = 0x1f7dd4u;
    // NOP
}
