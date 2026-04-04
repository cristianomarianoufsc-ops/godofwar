#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00101FA8
// Address: 0x101fa8 - 0x102358
void sub_00101FA8_0x101fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101FA8_0x101fa8");
#endif

    ctx->pc = 0x101fa8u;

    // 0x101fa8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x101fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x101fac: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x101facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x101fb0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x101fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x101fb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x101fb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101fb8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x101fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x101fbc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x101fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x101fc0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x101fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x101fc4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x101fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x101fc8: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x101fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x101fcc: 0x8e11007c  lw          $s1, 0x7C($s0)
    ctx->pc = 0x101fccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x101fd0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x101fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x101fd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x101fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x101fd8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x101fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x101fdc: 0x26051220  addiu       $a1, $s0, 0x1220
    ctx->pc = 0x101fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
    // 0x101fe0: 0xae020694  sw          $v0, 0x694($s0)
    ctx->pc = 0x101fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 2));
    // 0x101fe4: 0x26150014  addiu       $s5, $s0, 0x14
    ctx->pc = 0x101fe4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x101fe8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x101fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x101fec: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x101fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x101ff0: 0x8e130070  lw          $s3, 0x70($s0)
    ctx->pc = 0x101ff0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x101ff4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x101ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x101ff8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101ffc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x101ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x102000: 0xae061128  sw          $a2, 0x1128($s0)
    ctx->pc = 0x102000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4392), GPR_U32(ctx, 6));
    // 0x102004: 0x629018  mult        $s2, $v1, $v0
    ctx->pc = 0x102004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x102008: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x102008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x10200c: 0xae061124  sw          $a2, 0x1124($s0)
    ctx->pc = 0x10200cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4388), GPR_U32(ctx, 6));
    // 0x102010: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x102014: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x102014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x102018: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x102018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x10201c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x10201cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x102020: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x102020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102024: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x102024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x102028: 0xc04d9ca  jal         func_136728
    ctx->pc = 0x102028u;
    SET_GPR_U32(ctx, 31, 0x102030u);
    ctx->pc = 0x10202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102028u;
            // 0x10202c: 0xae021120  sw          $v0, 0x1120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136728u;
    if (runtime->hasFunction(0x136728u)) {
        auto targetFn = runtime->lookupFunction(0x136728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102030u; }
        if (ctx->pc != 0x102030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136728_0x136728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102030u; }
        if (ctx->pc != 0x102030u) { return; }
    }
    ctx->pc = 0x102030u;
    // 0x102030: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x102030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x102034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x102034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102038: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x102038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
    // 0x10203c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x10203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x102040: 0x18e0000d  blez        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x102040u;
    {
        const bool branch_taken_0x102040 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x102044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102040u;
            // 0x102044: 0xae020074  sw          $v0, 0x74($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102040) {
            ctx->pc = 0x102078u;
            goto label_102078;
        }
    }
    ctx->pc = 0x102048u;
    // 0x102048: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x102048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10204c: 0x0  nop
    ctx->pc = 0x10204cu;
    // NOP
label_102050:
    // 0x102050: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x102050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x102054: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x102054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x102058: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x102058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10205c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10205cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102060: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x102060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x102064: 0xc7182a  slt         $v1, $a2, $a3
    ctx->pc = 0x102064u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102068: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x102068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10206c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x10206cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x102070: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102070u;
    {
        const bool branch_taken_0x102070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102070u;
            // 0x102074: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102070) {
            ctx->pc = 0x102050u;
            runtime->cooperativeGuestYield();
            goto label_102050;
        }
    }
    ctx->pc = 0x102078u;
label_102078:
    // 0x102078: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x102078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x10207c: 0x8e630058  lw          $v1, 0x58($s3)
    ctx->pc = 0x10207cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x102080: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x102080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x102084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x102084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x102088: 0x84460008  lh          $a2, 0x8($v0)
    ctx->pc = 0x102088u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x10208c: 0xae060078  sw          $a2, 0x78($s0)
    ctx->pc = 0x10208cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 6));
    // 0x102090: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x102090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x102094: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x102094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x102098: 0xde620040  ld          $v0, 0x40($s3)
    ctx->pc = 0x102098u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x10209c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10209Cu;
    {
        const bool branch_taken_0x10209c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1020A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10209Cu;
            // 0x1020a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10209c) {
            ctx->pc = 0x1020B8u;
            goto label_1020b8;
        }
    }
    ctx->pc = 0x1020A4u;
    // 0x1020a4: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x1020A4u;
    SET_GPR_U32(ctx, 31, 0x1020ACu);
    ctx->pc = 0x1020A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1020A4u;
            // 0x1020a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020ACu; }
        if (ctx->pc != 0x1020ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1020ACu; }
        if (ctx->pc != 0x1020ACu) { return; }
    }
    ctx->pc = 0x1020ACu;
    // 0x1020ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1020ACu;
    {
        const bool branch_taken_0x1020ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1020B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1020ACu;
            // 0x1020b0: 0x7ba50000  lq          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1020ac) {
            ctx->pc = 0x1020E8u;
            goto label_1020e8;
        }
    }
    ctx->pc = 0x1020B4u;
    // 0x1020b4: 0x0  nop
    ctx->pc = 0x1020b4u;
    // NOP
label_1020b8:
    // 0x1020b8: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x1020b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x1020bc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x1020bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x1020c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1020c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1020c4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1020c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1020c8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1020c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1020cc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1020ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1020d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1020d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1020d4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1020d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1020d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1020d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1020dc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1020dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1020e0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1020e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1020e4: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x1020e4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1020e8:
    // 0x1020e8: 0x260610e0  addiu       $a2, $s0, 0x10E0
    ctx->pc = 0x1020e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4320));
    // 0x1020ec: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1020ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1020f0: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1020f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1020f4: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x1020f4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1020f8: 0x7e0510a0  sq          $a1, 0x10A0($s0)
    ctx->pc = 0x1020f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4256), GPR_VEC(ctx, 5));
    // 0x1020fc: 0x7e0210b0  sq          $v0, 0x10B0($s0)
    ctx->pc = 0x1020fcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4272), GPR_VEC(ctx, 2));
    // 0x102100: 0x7e0310c0  sq          $v1, 0x10C0($s0)
    ctx->pc = 0x102100u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4288), GPR_VEC(ctx, 3));
    // 0x102104: 0x7e0410d0  sq          $a0, 0x10D0($s0)
    ctx->pc = 0x102104u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4304), GPR_VEC(ctx, 4));
    // 0x102108: 0x4be3033c  vmove.xyzw  $vf3, $vf0
    ctx->pc = 0x102108u;
    ctx->vu0_vf[3] = ctx->vu0_vf[0];
    // 0x10210c: 0x4be41b3d  vmr32.xyzw  $vf4, $vf3
    ctx->pc = 0x10210cu;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x102110: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x102110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x102114: 0x4be1233d  vmr32.xyzw  $vf1, $vf4
    ctx->pc = 0x102114u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,1));
    // 0x102118: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x102118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10211c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x10211cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102120: 0x4be20b3d  vmr32.xyzw  $vf2, $vf1
    ctx->pc = 0x102120u;
    ctx->vu0_vf[2] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x102124: 0xfa0210e0  sqc2        $vf2, 0x10E0($s0)
    ctx->pc = 0x102124u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102128: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x102128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x10212c: 0xf8c30030  sqc2        $vf3, 0x30($a2)
    ctx->pc = 0x10212cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x102130: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x102130u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x102134: 0xf8c40020  sqc2        $vf4, 0x20($a2)
    ctx->pc = 0x102134u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x102138: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x102138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x10213c: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x10213Cu;
    {
        const bool branch_taken_0x10213c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x102140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10213Cu;
            // 0x102140: 0x8e141120  lw          $s4, 0x1120($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10213c) {
            ctx->pc = 0x10216Cu;
            goto label_10216c;
        }
    }
    ctx->pc = 0x102144u;
    // 0x102144: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x102144u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102148: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x102148u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10214c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_102150:
    // 0x102150: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x102150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x102154: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x102154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x102158: 0x0  nop
    ctx->pc = 0x102158u;
    // NOP
    // 0x10215c: 0x0  nop
    ctx->pc = 0x10215cu;
    // NOP
    // 0x102160: 0x0  nop
    ctx->pc = 0x102160u;
    // NOP
    // 0x102164: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102164u;
    {
        const bool branch_taken_0x102164 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x102168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102164u;
            // 0x102168: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102164) {
            ctx->pc = 0x102150u;
            runtime->cooperativeGuestYield();
            goto label_102150;
        }
    }
    ctx->pc = 0x10216Cu;
label_10216c:
    // 0x10216c: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x10216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x102170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102174: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x102174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x102178: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x102178u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x10217c: 0xc0408d6  jal         func_102358
    ctx->pc = 0x10217Cu;
    SET_GPR_U32(ctx, 31, 0x102184u);
    ctx->pc = 0x102180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10217Cu;
            // 0x102180: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102358u;
    if (runtime->hasFunction(0x102358u)) {
        auto targetFn = runtime->lookupFunction(0x102358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102184u; }
        if (ctx->pc != 0x102184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102358_0x102358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102184u; }
        if (ctx->pc != 0x102184u) { return; }
    }
    ctx->pc = 0x102184u;
    // 0x102184: 0xc04069e  jal         func_101A78
    ctx->pc = 0x102184u;
    SET_GPR_U32(ctx, 31, 0x10218Cu);
    ctx->pc = 0x102188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102184u;
            // 0x102188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101A78u;
    if (runtime->hasFunction(0x101A78u)) {
        auto targetFn = runtime->lookupFunction(0x101A78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10218Cu; }
        if (ctx->pc != 0x10218Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101A78_0x101a78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10218Cu; }
        if (ctx->pc != 0x10218Cu) { return; }
    }
    ctx->pc = 0x10218Cu;
    // 0x10218c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x10218cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x102190: 0x1a200014  blez        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x102190u;
    {
        const bool branch_taken_0x102190 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x102194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102190u;
            // 0x102194: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102190) {
            ctx->pc = 0x1021E4u;
            goto label_1021e4;
        }
    }
    ctx->pc = 0x102198u;
    // 0x102198: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x102198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10219c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x10219cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1021a0:
    // 0x1021a0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x1021a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1021a4: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1021A4u;
    {
        const bool branch_taken_0x1021a4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1021a4) {
            ctx->pc = 0x1021A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1021A4u;
            // 0x1021a8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1021ACu;
            goto label_1021ac;
        }
    }
    ctx->pc = 0x1021ACu;
label_1021ac:
    // 0x1021ac: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1021acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1021b0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1021b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1021b4: 0x88001a  div         $zero, $a0, $t0
    ctx->pc = 0x1021b4u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1021b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1021b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1021bc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x1021bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x1021c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1021c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1021c4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1021c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1021c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1021c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1021cc: 0x2812  mflo        $a1
    ctx->pc = 0x1021ccu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1021d0: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x1021d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1021d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x1021d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1021d8: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x1021d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1021dc: 0x14c0fff0  bnez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1021DCu;
    {
        const bool branch_taken_0x1021dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1021E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1021DCu;
            // 0x1021e0: 0x82480b  movn        $t1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1021dc) {
            ctx->pc = 0x1021A0u;
            runtime->cooperativeGuestYield();
            goto label_1021a0;
        }
    }
    ctx->pc = 0x1021E4u;
label_1021e4:
    // 0x1021e4: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x1021e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1021e8: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1021e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1021ec: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1021ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1021f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1021f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1021f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1021f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1021f8: 0x81940  sll         $v1, $t0, 5
    ctx->pc = 0x1021f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 5));
    // 0x1021fc: 0xae021130  sw          $v0, 0x1130($s0)
    ctx->pc = 0x1021fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4400), GPR_U32(ctx, 2));
    // 0x102200: 0x2507ffff  addiu       $a3, $t0, -0x1
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x102204: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x102204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x102208: 0xe6001134  swc1        $f0, 0x1134($s0)
    ctx->pc = 0x102208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4404), bits); }
    // 0x10220c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10220cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x102210: 0x18e00017  blez        $a3, . + 4 + (0x17 << 2)
    ctx->pc = 0x102210u;
    {
        const bool branch_taken_0x102210 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x102214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102210u;
            // 0x102214: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102210) {
            ctx->pc = 0x102270u;
            goto label_102270;
        }
    }
    ctx->pc = 0x102218u;
    // 0x102218: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x102218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10221c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x10221cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_102220:
    // 0x102220: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x102220u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x102224: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x102224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102228: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x102228u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x10222c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x10222cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102230: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x102230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102234: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x102234u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x102238: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x102238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x10223c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x10223cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102240: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x102240u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x102244: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x102244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x102248: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x102248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x10224c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10224cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102250: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x102250u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x102254: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x102254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x102258: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x102258u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10225c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x10225cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x102260: 0x46000004  c1          0x4
    ctx->pc = 0x102260u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x102264: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x102264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x102268: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x102268u;
    {
        const bool branch_taken_0x102268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102268u;
            // 0x10226c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102268) {
            ctx->pc = 0x102220u;
            runtime->cooperativeGuestYield();
            goto label_102220;
        }
    }
    ctx->pc = 0x102270u;
label_102270:
    // 0x102270: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x102270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x102274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x102278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10227c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x10227cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x102280: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x102280u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x102284: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x102284u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x102288: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x102288u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x10228c: 0xc040aec  jal         func_102BB0
    ctx->pc = 0x10228Cu;
    SET_GPR_U32(ctx, 31, 0x102294u);
    ctx->pc = 0x102290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10228Cu;
            // 0x102290: 0xe600113c  swc1        $f0, 0x113C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4412), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x102BB0u;
    if (runtime->hasFunction(0x102BB0u)) {
        auto targetFn = runtime->lookupFunction(0x102BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102294u; }
        if (ctx->pc != 0x102294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_102bb0_0x102dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102294u; }
        if (ctx->pc != 0x102294u) { return; }
    }
    ctx->pc = 0x102294u;
    // 0x102294: 0xc040b70  jal         func_102DC0
    ctx->pc = 0x102294u;
    SET_GPR_U32(ctx, 31, 0x10229Cu);
    ctx->pc = 0x102298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102294u;
            // 0x102298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102DC0u;
    if (runtime->hasFunction(0x102DC0u)) {
        auto targetFn = runtime->lookupFunction(0x102DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10229Cu; }
        if (ctx->pc != 0x10229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_102dc0_0x102fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10229Cu; }
        if (ctx->pc != 0x10229Cu) { return; }
    }
    ctx->pc = 0x10229Cu;
    // 0x10229c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x10229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1022a0: 0x8e43bc08  lw          $v1, -0x43F8($s2)
    ctx->pc = 0x1022a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x1022a4: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x1022a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1022a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1022A8u;
    {
        const bool branch_taken_0x1022a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1022ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022A8u;
            // 0x1022ac: 0xae60ec48  sw          $zero, -0x13B8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294962248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022a8) {
            ctx->pc = 0x1022B8u;
            goto label_1022b8;
        }
    }
    ctx->pc = 0x1022B0u;
    // 0x1022b0: 0xc04170c  jal         func_105C30
    ctx->pc = 0x1022B0u;
    SET_GPR_U32(ctx, 31, 0x1022B8u);
    ctx->pc = 0x105C30u;
    if (runtime->hasFunction(0x105C30u)) {
        auto targetFn = runtime->lookupFunction(0x105C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022B8u; }
        if (ctx->pc != 0x1022B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00105C30_0x105c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022B8u; }
        if (ctx->pc != 0x1022B8u) { return; }
    }
    ctx->pc = 0x1022B8u;
label_1022b8:
    // 0x1022b8: 0x8e44bc08  lw          $a0, -0x43F8($s2)
    ctx->pc = 0x1022b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949896)));
    // 0x1022bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1022bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022c0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1022C0u;
    SET_GPR_U32(ctx, 31, 0x1022C8u);
    ctx->pc = 0x1022C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1022C0u;
            // 0x1022c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022C8u; }
        if (ctx->pc != 0x1022C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1022C8u; }
        if (ctx->pc != 0x1022C8u) { return; }
    }
    ctx->pc = 0x1022C8u;
    // 0x1022c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1022c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1022cc: 0x8e62ec48  lw          $v0, -0x13B8($s3)
    ctx->pc = 0x1022ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962248)));
    // 0x1022d0: 0xae071204  sw          $a3, 0x1204($s0)
    ctx->pc = 0x1022d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4612), GPR_U32(ctx, 7));
    // 0x1022d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1022D4u;
    {
        const bool branch_taken_0x1022d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1022D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022D4u;
            // 0x1022d8: 0xacf00164  sw          $s0, 0x164($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 356), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022d4) {
            ctx->pc = 0x102328u;
            goto label_102328;
        }
    }
    ctx->pc = 0x1022DCu;
    // 0x1022dc: 0x8e090080  lw          $t1, 0x80($s0)
    ctx->pc = 0x1022dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1022e0: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1022E0u;
    {
        const bool branch_taken_0x1022e0 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x1022E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1022E0u;
            // 0x1022e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1022e0) {
            ctx->pc = 0x102328u;
            goto label_102328;
        }
    }
    ctx->pc = 0x1022E8u;
    // 0x1022e8: 0x8e08007c  lw          $t0, 0x7C($s0)
    ctx->pc = 0x1022e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1022ec: 0x0  nop
    ctx->pc = 0x1022ecu;
    // NOP
label_1022f0:
    // 0x1022f0: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x1022f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1022f4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1022f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1022f8: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x1022f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1022fc: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x1022fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x102300: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x102300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x102304: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x102304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x102308: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x102308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x10230c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x10230cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x102310: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x102310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x102314: 0xc9282a  slt         $a1, $a2, $t1
    ctx->pc = 0x102314u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x102318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x102318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10231c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x10231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x102320: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x102320u;
    {
        const bool branch_taken_0x102320 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x102324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102320u;
            // 0x102324: 0xe48000f4  swc1        $f0, 0xF4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x102320) {
            ctx->pc = 0x1022F0u;
            runtime->cooperativeGuestYield();
            goto label_1022f0;
        }
    }
    ctx->pc = 0x102328u;
label_102328:
    // 0x102328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10232c: 0xc0407a2  jal         func_101E88
    ctx->pc = 0x10232Cu;
    SET_GPR_U32(ctx, 31, 0x102334u);
    ctx->pc = 0x102330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10232Cu;
            // 0x102330: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E88u;
    if (runtime->hasFunction(0x101E88u)) {
        auto targetFn = runtime->lookupFunction(0x101E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102334u; }
        if (ctx->pc != 0x102334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101E88_0x101e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102334u; }
        if (ctx->pc != 0x102334u) { return; }
    }
    ctx->pc = 0x102334u;
    // 0x102334: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x102334u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x102338: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x102338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x10233c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x10233cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x102340: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x102340u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x102344: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x102344u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x102348: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x102348u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10234c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x10234cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x102350: 0x3e00008  jr          $ra
    ctx->pc = 0x102350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102350u;
            // 0x102354: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102050u: goto label_102050;
            case 0x102078u: goto label_102078;
            case 0x1020B8u: goto label_1020b8;
            case 0x1020E8u: goto label_1020e8;
            case 0x102150u: goto label_102150;
            case 0x10216Cu: goto label_10216c;
            case 0x1021A0u: goto label_1021a0;
            case 0x1021ACu: goto label_1021ac;
            case 0x1021E4u: goto label_1021e4;
            case 0x102220u: goto label_102220;
            case 0x102270u: goto label_102270;
            case 0x1022B8u: goto label_1022b8;
            case 0x1022F0u: goto label_1022f0;
            case 0x102328u: goto label_102328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102358u;
}
