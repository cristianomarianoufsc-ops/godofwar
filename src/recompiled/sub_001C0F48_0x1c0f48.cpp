#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0F48
// Address: 0x1c0f48 - 0x1c1138
void sub_001C0F48_0x1c0f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0F48_0x1c0f48");
#endif

    ctx->pc = 0x1c0f48u;

    // 0x1c0f48: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1c0f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1c0f4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1c0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1c0f50: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1c0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1c0f54: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c0f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f58: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1c0f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1c0f5c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1c0f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1c0f60: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1c0f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1c0f64: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1c0f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1c0f68: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1c0f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1c0f6c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x1c0f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x1c0f70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c0f74: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1c0f74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1c0f78: 0x8e820374  lw          $v0, 0x374($s4)
    ctx->pc = 0x1c0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
    // 0x1c0f7c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1c0f7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1c0f80: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1C0F80u;
    {
        const bool branch_taken_0x1c0f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F80u;
            // 0x1c0f84: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0f80) {
            ctx->pc = 0x1C110Cu;
            goto label_1c110c;
        }
    }
    ctx->pc = 0x1C0F88u;
    // 0x1c0f88: 0xc07044e  jal         func_1C1138
    ctx->pc = 0x1C0F88u;
    SET_GPR_U32(ctx, 31, 0x1C0F90u);
    ctx->pc = 0x1C0F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0F88u;
            // 0x1c0f8c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1138u;
    if (runtime->hasFunction(0x1C1138u)) {
        auto targetFn = runtime->lookupFunction(0x1C1138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F90u; }
        if (ctx->pc != 0x1C0F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c1138_0x1c11a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0F90u; }
        if (ctx->pc != 0x1C0F90u) { return; }
    }
    ctx->pc = 0x1C0F90u;
    // 0x1c0f90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1c0f90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0f94: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1c0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1c0f98:
    // 0x1c0f98: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1c0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1c0f9c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c0f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c0fa0: 0x8c720104  lw          $s2, 0x104($v1)
    ctx->pc = 0x1c0fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c0fa4: 0x8c5103c4  lw          $s1, 0x3C4($v0)
    ctx->pc = 0x1c0fa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 964)));
    // 0x1c0fa8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1c0fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x1c0fac: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x1c0facu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1c0fb0: 0x2b7102a  slt         $v0, $s5, $s7
    ctx->pc = 0x1c0fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1c0fb4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C0FB4u;
    {
        const bool branch_taken_0x1c0fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FB4u;
            // 0x1c0fb8: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0fb4) {
            ctx->pc = 0x1C1044u;
            goto label_1c1044;
        }
    }
    ctx->pc = 0x1C0FBCu;
    // 0x1c0fbc: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1c0fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1c0fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0fc4: 0xc04015e  jal         func_100578
    ctx->pc = 0x1C0FC4u;
    SET_GPR_U32(ctx, 31, 0x1C0FCCu);
    ctx->pc = 0x1C0FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FC4u;
            // 0x1c0fc8: 0xc48c003c  lwc1        $f12, 0x3C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0FCCu; }
        if (ctx->pc != 0x1C0FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0FCCu; }
        if (ctx->pc != 0x1C0FCCu) { return; }
    }
    ctx->pc = 0x1C0FCCu;
    // 0x1c0fcc: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x1c0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x1c0fd0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1c0fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1c0fd4: 0x845003b4  lh          $s0, 0x3B4($v0)
    ctx->pc = 0x1c0fd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 948)));
    // 0x1c0fd8: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1c0fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1c0fdc: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1c0fdcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1c0fe0: 0xde420040  ld          $v0, 0x40($s2)
    ctx->pc = 0x1c0fe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1c0fe4: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0FE4u;
    {
        const bool branch_taken_0x1c0fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1c0fe4) {
            ctx->pc = 0x1C0FE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FE4u;
            // 0x1c0fe8: 0x8e44008c  lw          $a0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0FF8u;
            goto label_1c0ff8;
        }
    }
    ctx->pc = 0x1C0FECu;
    // 0x1c0fec: 0xc04da64  jal         func_136990
    ctx->pc = 0x1C0FECu;
    SET_GPR_U32(ctx, 31, 0x1C0FF4u);
    ctx->pc = 0x1C0FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0FECu;
            // 0x1c0ff0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0FF4u; }
        if (ctx->pc != 0x1C0FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0FF4u; }
        if (ctx->pc != 0x1C0FF4u) { return; }
    }
    ctx->pc = 0x1C0FF4u;
    // 0x1c0ff4: 0x8e44008c  lw          $a0, 0x8C($s2)
    ctx->pc = 0x1c0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_1c0ff8:
    // 0x1c0ff8: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x1c0ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1c0ffc: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1c0ffcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1c1000: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1c1000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c1004: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x1c1004u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c1008: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x1c1008u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x1c100c: 0x86220060  lh          $v0, 0x60($s1)
    ctx->pc = 0x1c100cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1c1010: 0x7e230020  sq          $v1, 0x20($s1)
    ctx->pc = 0x1c1010u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 3));
    // 0x1c1014: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1c1014u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1c1018: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c1018u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c101c: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x1c101cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x1c1020: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1c1020u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1c1024: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1c1024u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1c1028: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x1c1028u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1c102c: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1c102cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1c1030: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x1c1030u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1c1034: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x1c1034u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x1c1038: 0xfe65bdf8  sd          $a1, -0x4208($s3)
    ctx->pc = 0x1c1038u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294950392), GPR_U64(ctx, 5));
    // 0x1c103c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C103Cu;
    {
        const bool branch_taken_0x1c103c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C103Cu;
            // 0x1c1040: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c103c) {
            ctx->pc = 0x1C1074u;
            goto label_1c1074;
        }
    }
    ctx->pc = 0x1C1044u;
label_1c1044:
    // 0x1c1044: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c1044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c1048: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c1048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1050: 0xc040314  jal         func_100C50
    ctx->pc = 0x1C1050u;
    SET_GPR_U32(ctx, 31, 0x1C1058u);
    ctx->pc = 0x1C1054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1050u;
            // 0x1c1054: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1058u; }
        if (ctx->pc != 0x1C1058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1058u; }
        if (ctx->pc != 0x1C1058u) { return; }
    }
    ctx->pc = 0x1C1058u;
    // 0x1c1058: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c1058u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1c105c: 0xc0402fc  jal         func_100BF0
    ctx->pc = 0x1C105Cu;
    SET_GPR_U32(ctx, 31, 0x1C1064u);
    ctx->pc = 0x1C1060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C105Cu;
            // 0x1c1060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100BF0u;
    if (runtime->hasFunction(0x100BF0u)) {
        auto targetFn = runtime->lookupFunction(0x100BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1064u; }
        if (ctx->pc != 0x1C1064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100BF0_0x100bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1064u; }
        if (ctx->pc != 0x1C1064u) { return; }
    }
    ctx->pc = 0x1C1064u;
    // 0x1c1064: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1c1064u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c1068: 0x0  nop
    ctx->pc = 0x1c1068u;
    // NOP
    // 0x1c106c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C106Cu;
    {
        const bool branch_taken_0x1c106c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c106c) {
            ctx->pc = 0x1C1070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C106Cu;
            // 0x1c1070: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C1074u;
            goto label_1c1074;
        }
    }
    ctx->pc = 0x1C1074u;
label_1c1074:
    // 0x1c1074: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C1074u;
    {
        const bool branch_taken_0x1c1074 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1074u;
            // 0x1c1078: 0x96220004  lhu         $v0, 0x4($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1074) {
            ctx->pc = 0x1C10C0u;
            goto label_1c10c0;
        }
    }
    ctx->pc = 0x1C107Cu;
    // 0x1c107c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c107cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c1080: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C1080u;
    {
        const bool branch_taken_0x1c1080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1080) {
            ctx->pc = 0x1C1084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1080u;
            // 0x1c1084: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C10FCu;
            goto label_1c10fc;
        }
    }
    ctx->pc = 0x1C1088u;
    // 0x1c1088: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1c1088u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c108c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1c108cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1c1090: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1c1090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1c1094: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c1094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1098: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c1098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c109c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c109cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10a0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c10a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c10a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c10a8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1c10a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c10ac: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1c10acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1c10b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1C10B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C10B8u);
        ctx->pc = 0x1C10B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10B0u;
            // 0x1c10b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C10B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F98u: goto label_1c0f98;
            case 0x1C0FF8u: goto label_1c0ff8;
            case 0x1C1044u: goto label_1c1044;
            case 0x1C1074u: goto label_1c1074;
            case 0x1C10C0u: goto label_1c10c0;
            case 0x1C10F8u: goto label_1c10f8;
            case 0x1C10FCu: goto label_1c10fc;
            case 0x1C110Cu: goto label_1c110c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C10B8u; }
            if (ctx->pc != 0x1C10B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C10B8u;
    // 0x1c10b8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C10B8u;
    {
        const bool branch_taken_0x1c10b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10B8u;
            // 0x1c10bc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10b8) {
            ctx->pc = 0x1C10FCu;
            goto label_1c10fc;
        }
    }
    ctx->pc = 0x1C10C0u;
label_1c10c0:
    // 0x1c10c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1c10c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1c10c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1C10C4u;
    {
        const bool branch_taken_0x1c10c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C10C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10C4u;
            // 0x1c10c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c10c4) {
            ctx->pc = 0x1C10F8u;
            goto label_1c10f8;
        }
    }
    ctx->pc = 0x1C10CCu;
    // 0x1c10cc: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x1c10ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1c10d0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1c10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1c10d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1c10d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c10d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c10d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c10dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c10dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c10e0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c10e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c10e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1c10e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1c10e8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1c10e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1c10ec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1c10ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1c10f0: 0x40f809  jalr        $v0
    ctx->pc = 0x1C10F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C10F8u);
        ctx->pc = 0x1C10F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C10F0u;
            // 0x1c10f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C10F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F98u: goto label_1c0f98;
            case 0x1C0FF8u: goto label_1c0ff8;
            case 0x1C1044u: goto label_1c1044;
            case 0x1C1074u: goto label_1c1074;
            case 0x1C10C0u: goto label_1c10c0;
            case 0x1C10F8u: goto label_1c10f8;
            case 0x1C10FCu: goto label_1c10fc;
            case 0x1C110Cu: goto label_1c110c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C10F8u; }
            if (ctx->pc != 0x1C10F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1C10F8u;
label_1c10f8:
    // 0x1c10f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c10f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c10fc:
    // 0x1c10fc: 0x2aa20008  slti        $v0, $s5, 0x8
    ctx->pc = 0x1c10fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1c1100: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x1C1100u;
    {
        const bool branch_taken_0x1c1100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1100u;
            // 0x1c1104: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1100) {
            ctx->pc = 0x1C0F98u;
            runtime->cooperativeGuestYield();
            goto label_1c0f98;
        }
    }
    ctx->pc = 0x1C1108u;
    // 0x1c1108: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1c1108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c110c:
    // 0x1c110c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1c110cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c1110: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1c1110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c1114: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1c1114u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c1118: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1c1118u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c111c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1c111cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c1120: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1c1120u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c1124: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1c1124u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c112c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1c112cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1130: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1130u;
            // 0x1c1134: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C0F98u: goto label_1c0f98;
            case 0x1C0FF8u: goto label_1c0ff8;
            case 0x1C1044u: goto label_1c1044;
            case 0x1C1074u: goto label_1c1074;
            case 0x1C10C0u: goto label_1c10c0;
            case 0x1C10F8u: goto label_1c10f8;
            case 0x1C10FCu: goto label_1c10fc;
            case 0x1C110Cu: goto label_1c110c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C1138u;
}
