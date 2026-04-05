#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F6850
// Address: 0x1f6850 - 0x1f6fe0
void sub_001F6850_0x1f6850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6850_0x1f6850");
#endif

    ctx->pc = 0x1f6850u;

    // 0x1f6850: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1f6850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1f6854: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x1f6854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x1f6858: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x1f6858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x1f685c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f685cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6860: 0xe7bc01a0  swc1        $f28, 0x1A0($sp)
    ctx->pc = 0x1f6860u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1f6864: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f6864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6868: 0xe7bb0198  swc1        $f27, 0x198($sp)
    ctx->pc = 0x1f6868u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1f686c: 0x46009f06  mov.s       $f28, $f19
    ctx->pc = 0x1f686cu;
    ctx->f[28] = FPU_MOV_S(ctx->f[19]);
    // 0x1f6870: 0xe7ba0190  swc1        $f26, 0x190($sp)
    ctx->pc = 0x1f6870u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1f6874: 0x46008ec6  mov.s       $f27, $f17
    ctx->pc = 0x1f6874u;
    ctx->f[27] = FPU_MOV_S(ctx->f[17]);
    // 0x1f6878: 0xe7b90188  swc1        $f25, 0x188($sp)
    ctx->pc = 0x1f6878u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1f687c: 0x46008686  mov.s       $f26, $f16
    ctx->pc = 0x1f687cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[16]);
    // 0x1f6880: 0xe7b80180  swc1        $f24, 0x180($sp)
    ctx->pc = 0x1f6880u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1f6884: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x1f6884u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x1f6888: 0xe7b70178  swc1        $f23, 0x178($sp)
    ctx->pc = 0x1f6888u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1f688c: 0x46007606  mov.s       $f24, $f14
    ctx->pc = 0x1f688cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[14]);
    // 0x1f6890: 0xe7b60170  swc1        $f22, 0x170($sp)
    ctx->pc = 0x1f6890u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1f6894: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1f6894u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1f6898: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x1f6898u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x1f689c: 0x46009586  mov.s       $f22, $f18
    ctx->pc = 0x1f689cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[18]);
    // 0x1f68a0: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x1f68a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x1f68a4: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x1f68a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x1f68a8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1f68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x1f68ac: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x1f68acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x1f68b0: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x1f68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f68b4: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1f68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f68b8: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1f68b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1f68bc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x1f68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x1f68c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f68c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f68c4: 0x14620022  bne         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F68C4u;
    {
        const bool branch_taken_0x1f68c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F68C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68C4u;
            // 0x1f68c8: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68c4) {
            ctx->pc = 0x1F6950u;
            goto label_1f6950;
        }
    }
    ctx->pc = 0x1F68CCu;
    // 0x1f68cc: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1f68ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1f68d0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f68d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1f68d4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1f68d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1f68d8: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x1f68d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x1f68dc: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x1f68dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x1f68e0: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x1f68e0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x1f68e4: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1f68e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1f68e8: 0x4600e486  mov.s       $f18, $f28
    ctx->pc = 0x1f68e8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[28]);
    // 0x1f68ec: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f68ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f68f0: 0xc04032c  jal         func_100CB0
    ctx->pc = 0x1F68F0u;
    SET_GPR_U32(ctx, 31, 0x1F68F8u);
    ctx->pc = 0x1F68F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68F0u;
            // 0x1f68f4: 0x34a50e00  ori         $a1, $a1, 0xE00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3584);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CB0u;
    if (runtime->hasFunction(0x100CB0u)) {
        auto targetFn = runtime->lookupFunction(0x100CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68F8u; }
        if (ctx->pc != 0x1F68F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CB0_0x100cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68F8u; }
        if (ctx->pc != 0x1F68F8u) { return; }
    }
    ctx->pc = 0x1F68F8u;
    // 0x1f68f8: 0x4615a036  c.le.s      $f20, $f21
    ctx->pc = 0x1f68f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f68fc: 0x0  nop
    ctx->pc = 0x1f68fcu;
    // NOP
    // 0x1f6900: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1F6900u;
    {
        const bool branch_taken_0x1f6900 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6900u;
            // 0x1f6904: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6900) {
            ctx->pc = 0x1F6920u;
            goto label_1f6920;
        }
    }
    ctx->pc = 0x1F6908u;
    // 0x1f6908: 0xc07d8ea  jal         func_1F63A8
    ctx->pc = 0x1F6908u;
    SET_GPR_U32(ctx, 31, 0x1F6910u);
    ctx->pc = 0x1F690Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6908u;
            // 0x1f690c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63A8u;
    if (runtime->hasFunction(0x1F63A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6910u; }
        if (ctx->pc != 0x1F6910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f63a8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6910u; }
        if (ctx->pc != 0x1F6910u) { return; }
    }
    ctx->pc = 0x1F6910u;
    // 0x1f6910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6914: 0xc07d8fa  jal         func_1F63E8
    ctx->pc = 0x1F6914u;
    SET_GPR_U32(ctx, 31, 0x1F691Cu);
    ctx->pc = 0x1F6918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6914u;
            // 0x1f6918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F63E8u;
    if (runtime->hasFunction(0x1F63E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F63E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F691Cu; }
        if (ctx->pc != 0x1F691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F63E8_0x1f63e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F691Cu; }
        if (ctx->pc != 0x1F691Cu) { return; }
    }
    ctx->pc = 0x1F691Cu;
    // 0x1f691c: 0x0  nop
    ctx->pc = 0x1f691cu;
    // NOP
label_1f6920:
    // 0x1f6920: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f6924: 0xe61400c0  swc1        $f20, 0xC0($s0)
    ctx->pc = 0x1f6924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
    // 0x1f6928: 0xa60200e2  sh          $v0, 0xE2($s0)
    ctx->pc = 0x1f6928u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f692c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f692cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6930: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F6930u;
    SET_GPR_U32(ctx, 31, 0x1F6938u);
    ctx->pc = 0x1F6934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6930u;
            // 0x1f6934: 0xa60200de  sh          $v0, 0xDE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 222), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6938u; }
        if (ctx->pc != 0x1F6938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6938u; }
        if (ctx->pc != 0x1F6938u) { return; }
    }
    ctx->pc = 0x1F6938u;
    // 0x1f6938: 0xc07dd50  jal         func_1F7540
    ctx->pc = 0x1F6938u;
    SET_GPR_U32(ctx, 31, 0x1F6940u);
    ctx->pc = 0x1F693Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6938u;
            // 0x1f693c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7540u;
    if (runtime->hasFunction(0x1F7540u)) {
        auto targetFn = runtime->lookupFunction(0x1F7540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6940u; }
        if (ctx->pc != 0x1F6940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7540_0x1f7540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6940u; }
        if (ctx->pc != 0x1F6940u) { return; }
    }
    ctx->pc = 0x1F6940u;
    // 0x1f6940: 0xe61400c4  swc1        $f20, 0xC4($s0)
    ctx->pc = 0x1f6940u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1f6944: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1f6944u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x1f6948: 0x10000194  b           . + 4 + (0x194 << 2)
    ctx->pc = 0x1F6948u;
    {
        const bool branch_taken_0x1f6948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F694Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6948u;
            // 0x1f694c: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6948) {
            ctx->pc = 0x1F6F9Cu;
            goto label_1f6f9c;
        }
    }
    ctx->pc = 0x1F6950u;
label_1f6950:
    // 0x1f6950: 0x860200dc  lh          $v0, 0xDC($s0)
    ctx->pc = 0x1f6950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f6954: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F6954u;
    {
        const bool branch_taken_0x1f6954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6954) {
            ctx->pc = 0x1F6958u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6954u;
            // 0x1f6958: 0x960300de  lhu         $v1, 0xDE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6980u;
            goto label_1f6980;
        }
    }
    ctx->pc = 0x1F695Cu;
    // 0x1f695c: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f6960: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f6964: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6964u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6968: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6968u;
    {
        const bool branch_taken_0x1f6968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F696Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6968u;
            // 0x1f696c: 0xc4410008  lwc1        $f1, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6968) {
            ctx->pc = 0x1F6974u;
            goto label_1f6974;
        }
    }
    ctx->pc = 0x1F6970u;
    // 0x1f6970: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x1f6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f6974:
    // 0x1f6974: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x1f6974u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
    // 0x1f6978: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6978u;
    {
        const bool branch_taken_0x1f6978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6978u;
            // 0x1f697c: 0x960300de  lhu         $v1, 0xDE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6978) {
            ctx->pc = 0x1F6984u;
            goto label_1f6984;
        }
    }
    ctx->pc = 0x1F6980u;
label_1f6980:
    // 0x1f6980: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f6980u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1f6984:
    // 0x1f6984: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f6984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f6988: 0x50620017  beql        $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F6988u;
    {
        const bool branch_taken_0x1f6988 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6988) {
            ctx->pc = 0x1F698Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6988u;
            // 0x1f698c: 0xc60000c0  lwc1        $f0, 0xC0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F69E8u;
            goto label_1f69e8;
        }
    }
    ctx->pc = 0x1F6990u;
    // 0x1f6990: 0xc60000c4  lwc1        $f0, 0xC4($s0)
    ctx->pc = 0x1f6990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6994: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1f6994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6998: 0x0  nop
    ctx->pc = 0x1f6998u;
    // NOP
    // 0x1f699c: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x1F699Cu;
    {
        const bool branch_taken_0x1f699c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f699c) {
            ctx->pc = 0x1F69A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F699Cu;
            // 0x1f69a0: 0xe61400c4  swc1        $f20, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F69E4u;
            goto label_1f69e4;
        }
    }
    ctx->pc = 0x1F69A4u;
    // 0x1f69a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f69a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f69a8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x1f69a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f69ac: 0x0  nop
    ctx->pc = 0x1f69acu;
    // NOP
    // 0x1f69b0: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
    ctx->pc = 0x1F69B0u;
    {
        const bool branch_taken_0x1f69b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f69b0) {
            ctx->pc = 0x1F69B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69B0u;
            // 0x1f69b4: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F69D4u;
            goto label_1f69d4;
        }
    }
    ctx->pc = 0x1F69B8u;
    // 0x1f69b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f69b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f69bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f69bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f69c0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1f69c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f69c4: 0x0  nop
    ctx->pc = 0x1f69c4u;
    // NOP
    // 0x1f69c8: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1F69C8u;
    {
        const bool branch_taken_0x1f69c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f69c8) {
            ctx->pc = 0x1F69CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69C8u;
            // 0x1f69cc: 0xe61400c4  swc1        $f20, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F69E4u;
            goto label_1f69e4;
        }
    }
    ctx->pc = 0x1F69D0u;
    // 0x1f69d0: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1f69d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_1f69d4:
    // 0x1f69d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f69d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f69d8: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F69D8u;
    SET_GPR_U32(ctx, 31, 0x1F69E0u);
    ctx->pc = 0x1F69DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69D8u;
            // 0x1f69dc: 0xe60100c4  swc1        $f1, 0xC4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F69E0u; }
        if (ctx->pc != 0x1F69E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F69E0u; }
        if (ctx->pc != 0x1F69E0u) { return; }
    }
    ctx->pc = 0x1F69E0u;
    // 0x1f69e0: 0xe61400c4  swc1        $f20, 0xC4($s0)
    ctx->pc = 0x1f69e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
label_1f69e4:
    // 0x1f69e4: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1f69e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f69e8:
    // 0x1f69e8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f69e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f69ec: 0x0  nop
    ctx->pc = 0x1f69ecu;
    // NOP
    // 0x1f69f0: 0x4502007d  bc1fl       . + 4 + (0x7D << 2)
    ctx->pc = 0x1F69F0u;
    {
        const bool branch_taken_0x1f69f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f69f0) {
            ctx->pc = 0x1F69F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69F0u;
            // 0x1f69f4: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F69F8u;
    // 0x1f69f8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x1F69F8u;
    {
        const bool branch_taken_0x1f69f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F69FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F69F8u;
            // 0x1f69fc: 0x960400de  lhu         $a0, 0xDE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69f8) {
            ctx->pc = 0x1F6B88u;
            goto label_1f6b88;
        }
    }
    ctx->pc = 0x1F6A00u;
label_1f6a00:
    // 0x1f6a00: 0x50a00079  beql        $a1, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x1F6A00u;
    {
        const bool branch_taken_0x1f6a00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a00) {
            ctx->pc = 0x1F6A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A00u;
            // 0x1f6a04: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F6A08u;
    // 0x1f6a08: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f6a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6a0c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1f6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f6a10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6a14: 0x50620074  beql        $v1, $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x1F6A14u;
    {
        const bool branch_taken_0x1f6a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6a14) {
            ctx->pc = 0x1F6A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A14u;
            // 0x1f6a18: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F6A1Cu;
    // 0x1f6a1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6a1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6a24: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f6a24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6a28: 0x0  nop
    ctx->pc = 0x1f6a28u;
    // NOP
    // 0x1f6a2c: 0x4502006e  bc1fl       . + 4 + (0x6E << 2)
    ctx->pc = 0x1F6A2Cu;
    {
        const bool branch_taken_0x1f6a2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6a2c) {
            ctx->pc = 0x1F6A30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A2Cu;
            // 0x1f6a30: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F6A34u;
    // 0x1f6a34: 0xa60400e2  sh          $a0, 0xE2($s0)
    ctx->pc = 0x1f6a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 4));
    // 0x1f6a38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6a3c: 0x94a20020  lhu         $v0, 0x20($a1)
    ctx->pc = 0x1f6a3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1f6a40: 0xa60200de  sh          $v0, 0xDE($s0)
    ctx->pc = 0x1f6a40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 222), (uint16_t)GPR_U32(ctx, 2));
label_1f6a44:
    // 0x1f6a44: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F6A44u;
    SET_GPR_U32(ctx, 31, 0x1F6A4Cu);
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A4Cu; }
        if (ctx->pc != 0x1F6A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A4Cu; }
        if (ctx->pc != 0x1F6A4Cu) { return; }
    }
    ctx->pc = 0x1F6A4Cu;
    // 0x1f6a4c: 0xc07dd50  jal         func_1F7540
    ctx->pc = 0x1F6A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F6A54u);
    ctx->pc = 0x1F6A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A4Cu;
            // 0x1f6a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7540u;
    if (runtime->hasFunction(0x1F7540u)) {
        auto targetFn = runtime->lookupFunction(0x1F7540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A54u; }
        if (ctx->pc != 0x1F6A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7540_0x1f7540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6A54u; }
        if (ctx->pc != 0x1F6A54u) { return; }
    }
    ctx->pc = 0x1F6A54u;
    // 0x1f6a54: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x1f6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x1f6a58: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1f6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1f6a5c: 0xc61400c4  lwc1        $f20, 0xC4($s0)
    ctx->pc = 0x1f6a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f6a60: 0x960600de  lhu         $a2, 0xDE($s0)
    ctx->pc = 0x1f6a60u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
    // 0x1f6a64: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1f6a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1f6a68: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x1f6a68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1f6a6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f6a70: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1f6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6a74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f6a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6a78: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x1f6a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f6a7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f6a80: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1f6a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6a84: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x1f6a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1f6a88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f6a8c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6A8Cu;
    {
        const bool branch_taken_0x1f6a8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A8Cu;
            // 0x1f6a90: 0x449021  addu        $s2, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a8c) {
            ctx->pc = 0x1F6A98u;
            goto label_1f6a98;
        }
    }
    ctx->pc = 0x1F6A94u;
    // 0x1f6a94: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1f6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1f6a98:
    // 0x1f6a98: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1f6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f6a9c: 0x50a30052  beql        $a1, $v1, . + 4 + (0x52 << 2)
    ctx->pc = 0x1F6A9Cu;
    {
        const bool branch_taken_0x1f6a9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6a9c) {
            ctx->pc = 0x1F6AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6A9Cu;
            // 0x1f6aa0: 0x8e0400b8  lw          $a0, 0xB8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE8u;
            goto label_1f6be8;
        }
    }
    ctx->pc = 0x1F6AA4u;
    // 0x1f6aa4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f6aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6aa8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6aac: 0x10a2004d  beq         $a1, $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x1F6AACu;
    {
        const bool branch_taken_0x1f6aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AACu;
            // 0x1f6ab0: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6aac) {
            ctx->pc = 0x1F6BE4u;
            goto label_1f6be4;
        }
    }
    ctx->pc = 0x1F6AB4u;
    // 0x1f6ab4: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1f6ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1f6ab8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1f6ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f6abc: 0xae0500bc  sw          $a1, 0xBC($s0)
    ctx->pc = 0x1f6abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 5));
    // 0x1f6ac0: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1f6ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1f6ac4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f6ac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6ac8: 0xae1200b8  sw          $s2, 0xB8($s0)
    ctx->pc = 0x1f6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 18));
    // 0x1f6acc: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1f6accu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f6ad0: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1f6ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f6ad4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1f6ad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6ad8: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x1f6ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6adc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1f6adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f6ae0: 0xae1100b4  sw          $s1, 0xB4($s0)
    ctx->pc = 0x1f6ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 17));
    // 0x1f6ae4: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1F6AE4u;
    SET_GPR_U32(ctx, 31, 0x1F6AECu);
    ctx->pc = 0x1F6AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AE4u;
            // 0x1f6ae8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AECu; }
        if (ctx->pc != 0x1F6AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6AECu; }
        if (ctx->pc != 0x1F6AECu) { return; }
    }
    ctx->pc = 0x1F6AECu;
    // 0x1f6aec: 0x860200dc  lh          $v0, 0xDC($s0)
    ctx->pc = 0x1f6aecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f6af0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6AF0u;
    {
        const bool branch_taken_0x1f6af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6AF0u;
            // 0x1f6af4: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6af0) {
            ctx->pc = 0x1F6B08u;
            goto label_1f6b08;
        }
    }
    ctx->pc = 0x1F6AF8u;
    // 0x1f6af8: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f6af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f6afc: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1f6afcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1f6b00: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1f6b00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6b04: 0x0  nop
    ctx->pc = 0x1f6b04u;
    // NOP
label_1f6b08:
    // 0x1f6b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6b0c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1f6b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f6b10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6b14: 0xa60200dc  sh          $v0, 0xDC($s0)
    ctx->pc = 0x1f6b14u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 220), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6b18: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6B18u;
    {
        const bool branch_taken_0x1f6b18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B18u;
            // 0x1f6b1c: 0xae0500cc  sw          $a1, 0xCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 204), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b18) {
            ctx->pc = 0x1F6B24u;
            goto label_1f6b24;
        }
    }
    ctx->pc = 0x1F6B20u;
    // 0x1f6b20: 0xacb00040  sw          $s0, 0x40($a1)
    ctx->pc = 0x1f6b20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 16));
label_1f6b24:
    // 0x1f6b24: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f6b28: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1f6b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1f6b2c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6B2Cu;
    {
        const bool branch_taken_0x1f6b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b2c) {
            ctx->pc = 0x1F6B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B2Cu;
            // 0x1f6b30: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B48u;
            goto label_1f6b48;
        }
    }
    ctx->pc = 0x1F6B34u;
    // 0x1f6b34: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f6b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f6b38: 0xc6600164  lwc1        $f0, 0x164($s3)
    ctx->pc = 0x1f6b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6b3c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1f6b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1f6b40: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x1f6b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x1f6b44: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f6b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f6b48:
    // 0x1f6b48: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1f6b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1f6b4c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6B4Cu;
    {
        const bool branch_taken_0x1f6b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b4c) {
            ctx->pc = 0x1F6B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B4Cu;
            // 0x1f6b50: 0x8e220018  lw          $v0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6B68u;
            goto label_1f6b68;
        }
    }
    ctx->pc = 0x1F6B54u;
    // 0x1f6b54: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x1f6b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f6b58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f6b58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6b5c: 0xc04018a  jal         func_100628
    ctx->pc = 0x1F6B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F6B64u);
    ctx->pc = 0x1F6B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B5Cu;
            // 0x1f6b60: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100628u;
    if (runtime->hasFunction(0x100628u)) {
        auto targetFn = runtime->lookupFunction(0x100628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B64u; }
        if (ctx->pc != 0x1F6B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100628_0x100628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6B64u; }
        if (ctx->pc != 0x1F6B64u) { return; }
    }
    ctx->pc = 0x1F6B64u;
    // 0x1f6b64: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1f6b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1f6b68:
    // 0x1f6b68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6b68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1f6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1f6b70: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F6B70u;
    {
        const bool branch_taken_0x1f6b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6b70) {
            ctx->pc = 0x1F6B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B70u;
            // 0x1f6b74: 0xe60000c0  swc1        $f0, 0xC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BE4u;
            goto label_1f6be4;
        }
    }
    ctx->pc = 0x1F6B78u;
    // 0x1f6b78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6b7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6b80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F6B80u;
    {
        const bool branch_taken_0x1f6b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B80u;
            // 0x1f6b84: 0xe60000c0  swc1        $f0, 0xC0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b80) {
            ctx->pc = 0x1F6BE4u;
            goto label_1f6be4;
        }
    }
    ctx->pc = 0x1F6B88u;
label_1f6b88:
    // 0x1f6b88: 0x960300e0  lhu         $v1, 0xE0($s0)
    ctx->pc = 0x1f6b88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1f6b8c: 0x5083ff9c  beql        $a0, $v1, . + 4 + (-0x64 << 2)
    ctx->pc = 0x1F6B8Cu;
    {
        const bool branch_taken_0x1f6b8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f6b8c) {
            ctx->pc = 0x1F6B90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B8Cu;
            // 0x1f6b90: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A00u;
            runtime->cooperativeGuestYield();
            goto label_1f6a00;
        }
    }
    ctx->pc = 0x1F6B94u;
    // 0x1f6b94: 0x960200e2  lhu         $v0, 0xE2($s0)
    ctx->pc = 0x1f6b94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 226)));
    // 0x1f6b98: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6B98u;
    {
        const bool branch_taken_0x1f6b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6B98u;
            // 0x1f6b9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6b98) {
            ctx->pc = 0x1F6BE4u;
            goto label_1f6be4;
        }
    }
    ctx->pc = 0x1F6BA0u;
    // 0x1f6ba0: 0x8e0300b4  lw          $v1, 0xB4($s0)
    ctx->pc = 0x1f6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1f6ba4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6BA4u;
    {
        const bool branch_taken_0x1f6ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BA4u;
            // 0x1f6ba8: 0xa60200e2  sh          $v0, 0xE2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 226), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ba4) {
            ctx->pc = 0x1F6BD4u;
            goto label_1f6bd4;
        }
    }
    ctx->pc = 0x1F6BACu;
    // 0x1f6bac: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x1f6bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f6bb0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6BB0u;
    {
        const bool branch_taken_0x1f6bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6bb0) {
            ctx->pc = 0x1F6BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BB0u;
            // 0x1f6bb4: 0x960200e0  lhu         $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6BD8u;
            goto label_1f6bd8;
        }
    }
    ctx->pc = 0x1F6BB8u;
    // 0x1f6bb8: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x1f6bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1f6bbc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f6bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6bc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1f6bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6bc4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1f6bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1f6bc8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1f6bc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1f6bcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6BCCu;
    {
        const bool branch_taken_0x1f6bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BCCu;
            // 0x1f6bd0: 0xa60200e0  sh          $v0, 0xE0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 224), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bcc) {
            ctx->pc = 0x1F6BD8u;
            goto label_1f6bd8;
        }
    }
    ctx->pc = 0x1F6BD4u;
label_1f6bd4:
    // 0x1f6bd4: 0x960200e0  lhu         $v0, 0xE0($s0)
    ctx->pc = 0x1f6bd4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 224)));
label_1f6bd8:
    // 0x1f6bd8: 0xa60200de  sh          $v0, 0xDE($s0)
    ctx->pc = 0x1f6bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 222), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f6bdc: 0x1000ff99  b           . + 4 + (-0x67 << 2)
    ctx->pc = 0x1F6BDCu;
    {
        const bool branch_taken_0x1f6bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BDCu;
            // 0x1f6be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6bdc) {
            ctx->pc = 0x1F6A44u;
            runtime->cooperativeGuestYield();
            goto label_1f6a44;
        }
    }
    ctx->pc = 0x1F6BE4u;
label_1f6be4:
    // 0x1f6be4: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x1f6be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
label_1f6be8:
    // 0x1f6be8: 0x1080002b  beqz        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F6BE8u;
    {
        const bool branch_taken_0x1f6be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BE8u;
            // 0x1f6bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6be8) {
            ctx->pc = 0x1F6C98u;
            goto label_1f6c98;
        }
    }
    ctx->pc = 0x1F6BF0u;
    // 0x1f6bf0: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1f6bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f6bf4: 0x54620029  bnel        $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F6BF4u;
    {
        const bool branch_taken_0x1f6bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f6bf4) {
            ctx->pc = 0x1F6BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6BF4u;
            // 0x1f6bf8: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C9Cu;
            goto label_1f6c9c;
        }
    }
    ctx->pc = 0x1F6BFCu;
    // 0x1f6bfc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f6bfcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6c00: 0x46156036  c.le.s      $f12, $f21
    ctx->pc = 0x1f6c00u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6c04: 0x0  nop
    ctx->pc = 0x1f6c04u;
    // NOP
    // 0x1f6c08: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1F6C08u;
    {
        const bool branch_taken_0x1f6c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C08u;
            // 0x1f6c0c: 0x8e0200cc  lw          $v0, 0xCC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c08) {
            ctx->pc = 0x1F6C4Cu;
            goto label_1f6c4c;
        }
    }
    ctx->pc = 0x1F6C10u;
    // 0x1f6c10: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1f6c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f6c14: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6C14u;
    {
        const bool branch_taken_0x1f6c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c14) {
            ctx->pc = 0x1F6C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C14u;
            // 0x1f6c18: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C20u;
            goto label_1f6c20;
        }
    }
    ctx->pc = 0x1F6C1Cu;
    // 0x1f6c1c: 0x0  nop
    ctx->pc = 0x1f6c1cu;
    // NOP
label_1f6c20:
    // 0x1f6c20: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1f6c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f6c24: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1f6c24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1f6c28: 0xc04018a  jal         func_100628
    ctx->pc = 0x1F6C28u;
    SET_GPR_U32(ctx, 31, 0x1F6C30u);
    ctx->pc = 0x1F6C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C28u;
            // 0x1f6c2c: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100628u;
    if (runtime->hasFunction(0x100628u)) {
        auto targetFn = runtime->lookupFunction(0x100628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C30u; }
        if (ctx->pc != 0x1F6C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100628_0x100628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C30u; }
        if (ctx->pc != 0x1F6C30u) { return; }
    }
    ctx->pc = 0x1F6C30u;
    // 0x1f6c30: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1f6c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1f6c34: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1f6c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x1f6c38: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f6c38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6c3c: 0xc040144  jal         func_100510
    ctx->pc = 0x1F6C3Cu;
    SET_GPR_U32(ctx, 31, 0x1F6C44u);
    ctx->pc = 0x1F6C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C3Cu;
            // 0x1f6c40: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C44u; }
        if (ctx->pc != 0x1F6C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C44u; }
        if (ctx->pc != 0x1F6C44u) { return; }
    }
    ctx->pc = 0x1F6C44u;
    // 0x1f6c44: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F6C44u;
    {
        const bool branch_taken_0x1f6c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C44u;
            // 0x1f6c48: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c44) {
            ctx->pc = 0x1F6C9Cu;
            goto label_1f6c9c;
        }
    }
    ctx->pc = 0x1F6C4Cu;
label_1f6c4c:
    // 0x1f6c4c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1f6c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f6c50: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1f6c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6c54: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f6c54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6c58: 0x0  nop
    ctx->pc = 0x1f6c58u;
    // NOP
    // 0x1f6c5c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1F6C5Cu;
    {
        const bool branch_taken_0x1f6c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6c5c) {
            ctx->pc = 0x1F6C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C5Cu;
            // 0x1f6c60: 0x8c850010  lw          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C88u;
            goto label_1f6c88;
        }
    }
    ctx->pc = 0x1F6C64u;
    // 0x1f6c64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6C64u;
    {
        const bool branch_taken_0x1f6c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6c64) {
            ctx->pc = 0x1F6C68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C64u;
            // 0x1f6c68: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6C6Cu;
            goto label_1f6c6c;
        }
    }
    ctx->pc = 0x1F6C6Cu;
label_1f6c6c:
    // 0x1f6c6c: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x1f6c6cu;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[12];
    // 0x1f6c70: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1f6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1f6c74: 0x460cb303  div.s       $f12, $f22, $f12
    ctx->pc = 0x1f6c74u;
    if (ctx->f[12] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[12] = ctx->f[22] / ctx->f[12];
    // 0x1f6c78: 0xc040144  jal         func_100510
    ctx->pc = 0x1F6C78u;
    SET_GPR_U32(ctx, 31, 0x1F6C80u);
    ctx->pc = 0x1F6C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C78u;
            // 0x1f6c7c: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C80u; }
        if (ctx->pc != 0x1F6C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C80u; }
        if (ctx->pc != 0x1F6C80u) { return; }
    }
    ctx->pc = 0x1F6C80u;
    // 0x1f6c80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6C80u;
    {
        const bool branch_taken_0x1f6c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C80u;
            // 0x1f6c84: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6c80) {
            ctx->pc = 0x1F6C9Cu;
            goto label_1f6c9c;
        }
    }
    ctx->pc = 0x1F6C88u;
label_1f6c88:
    // 0x1f6c88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f6c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f6c90: 0xc040144  jal         func_100510
    ctx->pc = 0x1F6C90u;
    SET_GPR_U32(ctx, 31, 0x1F6C98u);
    ctx->pc = 0x1F6C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6C90u;
            // 0x1f6c94: 0x8e0400ac  lw          $a0, 0xAC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100510u;
    if (runtime->hasFunction(0x100510u)) {
        auto targetFn = runtime->lookupFunction(0x100510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C98u; }
        if (ctx->pc != 0x1F6C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100510_0x100510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6C98u; }
        if (ctx->pc != 0x1F6C98u) { return; }
    }
    ctx->pc = 0x1F6C98u;
label_1f6c98:
    // 0x1f6c98: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x1f6c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
label_1f6c9c:
    // 0x1f6c9c: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x1f6c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x1f6ca0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x1f6ca0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x1f6ca4: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x1f6ca4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x1f6ca8: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x1f6ca8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x1f6cac: 0x4600d3c6  mov.s       $f15, $f26
    ctx->pc = 0x1f6cacu;
    ctx->f[15] = FPU_MOV_S(ctx->f[26]);
    // 0x1f6cb0: 0x4600dc06  mov.s       $f16, $f27
    ctx->pc = 0x1f6cb0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[27]);
    // 0x1f6cb4: 0x4600b446  mov.s       $f17, $f22
    ctx->pc = 0x1f6cb4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[22]);
    // 0x1f6cb8: 0x4600e486  mov.s       $f18, $f28
    ctx->pc = 0x1f6cb8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[28]);
    // 0x1f6cbc: 0xc04032c  jal         func_100CB0
    ctx->pc = 0x1F6CBCu;
    SET_GPR_U32(ctx, 31, 0x1F6CC4u);
    ctx->pc = 0x1F6CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CBCu;
            // 0x1f6cc0: 0x34a50e00  ori         $a1, $a1, 0xE00 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3584);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100CB0u;
    if (runtime->hasFunction(0x100CB0u)) {
        auto targetFn = runtime->lookupFunction(0x100CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CC4u; }
        if (ctx->pc != 0x1F6CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100CB0_0x100cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6CC4u; }
        if (ctx->pc != 0x1F6CC4u) { return; }
    }
    ctx->pc = 0x1F6CC4u;
    // 0x1f6cc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f6cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6cc8: 0x960300de  lhu         $v1, 0xDE($s0)
    ctx->pc = 0x1f6cc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
    // 0x1f6ccc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1f6cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f6cd0: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1F6CD0u;
    {
        const bool branch_taken_0x1f6cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6cd0) {
            ctx->pc = 0x1F6F50u;
            goto label_1f6f50;
        }
    }
    ctx->pc = 0x1F6CD8u;
    // 0x1f6cd8: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x1f6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x1f6cdc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6CDCu;
    {
        const bool branch_taken_0x1f6cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6CDCu;
            // 0x1f6ce0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6cdc) {
            ctx->pc = 0x1F6D38u;
            goto label_1f6d38;
        }
    }
    ctx->pc = 0x1F6CE4u;
    // 0x1f6ce4: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x1f6ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1f6ce8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1f6ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1f6cec: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1f6cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1f6cf0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6cf4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1f6cf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f6cf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6cfc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6cfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6d00: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6d00u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6d04: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1f6d04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6d08: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6D08u;
    {
        const bool branch_taken_0x1f6d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6d08) {
            ctx->pc = 0x1F6D30u;
            goto label_1f6d30;
        }
    }
    ctx->pc = 0x1F6D10u;
    // 0x1f6d10: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x1f6d10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1f6d14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6d1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6d1cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6d20: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1f6d20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6d24: 0x0  nop
    ctx->pc = 0x1f6d24u;
    // NOP
    // 0x1f6d28: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6D28u;
    {
        const bool branch_taken_0x1f6d28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6d28) {
            ctx->pc = 0x1F6D2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D28u;
            // 0x1f6d2c: 0x960400de  lhu         $a0, 0xDE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6D3Cu;
            goto label_1f6d3c;
        }
    }
    ctx->pc = 0x1F6D30u;
label_1f6d30:
    // 0x1f6d30: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F6D30u;
    SET_GPR_U32(ctx, 31, 0x1F6D38u);
    ctx->pc = 0x1F6D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D30u;
            // 0x1f6d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D38u; }
        if (ctx->pc != 0x1F6D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6D38u; }
        if (ctx->pc != 0x1F6D38u) { return; }
    }
    ctx->pc = 0x1F6D38u;
label_1f6d38:
    // 0x1f6d38: 0x960400de  lhu         $a0, 0xDE($s0)
    ctx->pc = 0x1f6d38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 222)));
label_1f6d3c:
    // 0x1f6d3c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x1f6d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
    // 0x1f6d40: 0x860200a8  lh          $v0, 0xA8($s0)
    ctx->pc = 0x1f6d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1f6d44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f6d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f6d48: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1f6d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1f6d4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f6d50: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x1f6d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f6d54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f6d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f6d58: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f6d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f6d5c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f6d60: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x1f6d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x1f6d64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1f6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f6d68: 0x1043007d  beq         $v0, $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x1F6D68u;
    {
        const bool branch_taken_0x1f6d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F6D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D68u;
            // 0x1f6d6c: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d68) {
            ctx->pc = 0x1F6F60u;
            goto label_1f6f60;
        }
    }
    ctx->pc = 0x1F6D70u;
label_1f6d70:
    // 0x1f6d70: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x1f6d70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x1f6d74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f6d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f6d78: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6D78u;
    {
        const bool branch_taken_0x1f6d78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F6D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D78u;
            // 0x1f6d7c: 0x94a3000e  lhu         $v1, 0xE($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d78) {
            ctx->pc = 0x1F6D90u;
            goto label_1f6d90;
        }
    }
    ctx->pc = 0x1F6D80u;
    // 0x1f6d80: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6D80u;
    {
        const bool branch_taken_0x1f6d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x1F6D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D80u;
            // 0x1f6d84: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d80) {
            ctx->pc = 0x1F6D98u;
            goto label_1f6d98;
        }
    }
    ctx->pc = 0x1F6D88u;
    // 0x1f6d88: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x1F6D88u;
    {
        const bool branch_taken_0x1f6d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D88u;
            // 0x1f6d8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d88) {
            ctx->pc = 0x1F6F38u;
            goto label_1f6f38;
        }
    }
    ctx->pc = 0x1F6D90u;
label_1f6d90:
    // 0x1f6d90: 0x14600068  bnez        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x1F6D90u;
    {
        const bool branch_taken_0x1f6d90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6D90u;
            // 0x1f6d94: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d90) {
            ctx->pc = 0x1F6F34u;
            goto label_1f6f34;
        }
    }
    ctx->pc = 0x1F6D98u;
label_1f6d98:
    // 0x1f6d98: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x1f6d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1f6d9c: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x1f6d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x1f6da0: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x1f6da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x1f6da4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f6da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6da8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1f6da8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1f6dac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6db0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6db0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6db4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6db4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6db8: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x1f6db8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6dbc: 0x4500004c  bc1f        . + 4 + (0x4C << 2)
    ctx->pc = 0x1F6DBCu;
    {
        const bool branch_taken_0x1f6dbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6dbc) {
            ctx->pc = 0x1F6EF0u;
            goto label_1f6ef0;
        }
    }
    ctx->pc = 0x1F6DC4u;
    // 0x1f6dc4: 0x9462000a  lhu         $v0, 0xA($v1)
    ctx->pc = 0x1f6dc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x1f6dc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6dc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6dcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f6dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f6dd0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6dd0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6dd4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1f6dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6dd8: 0x0  nop
    ctx->pc = 0x1f6dd8u;
    // NOP
    // 0x1f6ddc: 0x45000044  bc1f        . + 4 + (0x44 << 2)
    ctx->pc = 0x1F6DDCu;
    {
        const bool branch_taken_0x1f6ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DDCu;
            // 0x1f6de0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ddc) {
            ctx->pc = 0x1F6EF0u;
            goto label_1f6ef0;
        }
    }
    ctx->pc = 0x1F6DE4u;
    // 0x1f6de4: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1f6de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f6de8: 0x2261804  sllv        $v1, $a2, $s1
    ctx->pc = 0x1f6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6dec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6df0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6DF0u;
    {
        const bool branch_taken_0x1f6df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6df0) {
            ctx->pc = 0x1F6DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DF0u;
            // 0x1f6df4: 0x8e03009c  lw          $v1, 0x9C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6E0Cu;
            goto label_1f6e0c;
        }
    }
    ctx->pc = 0x1F6DF8u;
    // 0x1f6df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f6df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6dfc: 0xc07ddd2  jal         func_1F7748
    ctx->pc = 0x1F6DFCu;
    SET_GPR_U32(ctx, 31, 0x1F6E04u);
    ctx->pc = 0x1F6E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6DFCu;
            // 0x1f6e00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7748u;
    if (runtime->hasFunction(0x1F7748u)) {
        auto targetFn = runtime->lookupFunction(0x1F7748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E04u; }
        if (ctx->pc != 0x1F6E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7748_0x1f7748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6E04u; }
        if (ctx->pc != 0x1F6E04u) { return; }
    }
    ctx->pc = 0x1F6E04u;
    // 0x1f6e04: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1F6E04u;
    {
        const bool branch_taken_0x1f6e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E04u;
            // 0x1f6e08: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e04) {
            ctx->pc = 0x1F6F34u;
            goto label_1f6f34;
        }
    }
    ctx->pc = 0x1F6E0Cu;
label_1f6e0c:
    // 0x1f6e0c: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
    ctx->pc = 0x1F6E0Cu;
    {
        const bool branch_taken_0x1f6e0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E0Cu;
            // 0x1f6e10: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e0c) {
            ctx->pc = 0x1F6F34u;
            goto label_1f6f34;
        }
    }
    ctx->pc = 0x1F6E14u;
    // 0x1f6e14: 0x80640020  lb          $a0, 0x20($v1)
    ctx->pc = 0x1f6e14u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f6e18: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f6e18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e1c: 0x10860005  beq         $a0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F6E1Cu;
    {
        const bool branch_taken_0x1f6e1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F6E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E1Cu;
            // 0x1f6e20: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e1c) {
            ctx->pc = 0x1F6E34u;
            goto label_1f6e34;
        }
    }
    ctx->pc = 0x1F6E24u;
    // 0x1f6e24: 0x50820017  beql        $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1F6E24u;
    {
        const bool branch_taken_0x1f6e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f6e24) {
            ctx->pc = 0x1F6E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E24u;
            // 0x1f6e28: 0x94620016  lhu         $v0, 0x16($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6E84u;
            goto label_1f6e84;
        }
    }
    ctx->pc = 0x1F6E2Cu;
    // 0x1f6e2c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1F6E2Cu;
    {
        const bool branch_taken_0x1f6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6e2c) {
            ctx->pc = 0x1F6ED4u;
            goto label_1f6ed4;
        }
    }
    ctx->pc = 0x1F6E34u;
label_1f6e34:
    // 0x1f6e34: 0x94620016  lhu         $v0, 0x16($v1)
    ctx->pc = 0x1f6e34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
    // 0x1f6e38: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x1f6e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x1f6e3c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f6e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f6e40: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f6e40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f6e44: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f6e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e48: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1f6e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1f6e4c: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x1f6e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x1f6e50: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x1f6e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x1f6e54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6e58: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1f6e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1f6e5c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x1f6e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x1f6e60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f6e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f6e64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6e68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6e68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6e6c: 0x7a620260  lq          $v0, 0x260($s3)
    ctx->pc = 0x1f6e6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1f6e70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6e70u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6e74: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1f6e74u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1f6e78: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F6E7Cu;
    {
        const bool branch_taken_0x1f6e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6E7Cu;
            // 0x1f6e80: 0x46030002  mul.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6e7c) {
            ctx->pc = 0x1F6ECCu;
            goto label_1f6ecc;
        }
    }
    ctx->pc = 0x1F6E84u;
label_1f6e84:
    // 0x1f6e84: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x1f6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x1f6e88: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f6e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f6e8c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f6e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f6e90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1f6e90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6e94: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x1f6e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x1f6e98: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x1f6e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x1f6e9c: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x1f6e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x1f6ea0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f6ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f6ea4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1f6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1f6ea8: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x1f6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x1f6eac: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f6eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f6eb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1f6eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1f6eb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f6eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6eb8: 0x7a620260  lq          $v0, 0x260($s3)
    ctx->pc = 0x1f6eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 608)));
    // 0x1f6ebc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f6ebcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f6ec0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x1f6ec0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1f6ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6ec8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f6ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1f6ecc:
    // 0x1f6ecc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1f6eccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1f6ed0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1f6ed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1f6ed4:
    // 0x1f6ed4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f6ed4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f6ed8: 0x8e6401a4  lw          $a0, 0x1A4($s3)
    ctx->pc = 0x1f6ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 420)));
    // 0x1f6edc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1f6edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1f6ee0: 0xc05c470  jal         func_1711C0
    ctx->pc = 0x1F6EE0u;
    SET_GPR_U32(ctx, 31, 0x1F6EE8u);
    ctx->pc = 0x1711C0u;
    if (runtime->hasFunction(0x1711C0u)) {
        auto targetFn = runtime->lookupFunction(0x1711C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EE8u; }
        if (ctx->pc != 0x1F6EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c0_0x1711c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6EE8u; }
        if (ctx->pc != 0x1F6EE8u) { return; }
    }
    ctx->pc = 0x1F6EE8u;
    // 0x1f6ee8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1F6EE8u;
    {
        const bool branch_taken_0x1f6ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EE8u;
            // 0x1f6eec: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6ee8) {
            ctx->pc = 0x1F6F34u;
            goto label_1f6f34;
        }
    }
    ctx->pc = 0x1F6EF0u;
label_1f6ef0:
    // 0x1f6ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6ef4: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1f6ef4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6ef8: 0x0  nop
    ctx->pc = 0x1f6ef8u;
    // NOP
    // 0x1f6efc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1F6EFCu;
    {
        const bool branch_taken_0x1f6efc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6EFCu;
            // 0x1f6f00: 0x8fa20104  lw          $v0, 0x104($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6efc) {
            ctx->pc = 0x1F6F34u;
            goto label_1f6f34;
        }
    }
    ctx->pc = 0x1F6F04u;
    // 0x1f6f04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f6f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f6f08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f6f08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f6f0c: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1f6f0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f10: 0x0  nop
    ctx->pc = 0x1f6f10u;
    // NOP
    // 0x1f6f14: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F14u;
    {
        const bool branch_taken_0x1f6f14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F6F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F14u;
            // 0x1f6f18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f14) {
            ctx->pc = 0x1F6F30u;
            goto label_1f6f30;
        }
    }
    ctx->pc = 0x1F6F1Cu;
    // 0x1f6f1c: 0x8e0300e4  lw          $v1, 0xE4($s0)
    ctx->pc = 0x1f6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1f6f20: 0x2221004  sllv        $v0, $v0, $s1
    ctx->pc = 0x1f6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x1f6f24: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1f6f24u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1f6f28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1f6f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1f6f2c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x1f6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_1f6f30:
    // 0x1f6f30: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x1f6f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_1f6f34:
    // 0x1f6f34: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1f6f38:
    // 0x1f6f38: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x1f6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f6f3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f6f40: 0x1443ff8b  bne         $v0, $v1, . + 4 + (-0x75 << 2)
    ctx->pc = 0x1F6F40u;
    {
        const bool branch_taken_0x1f6f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F6F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F40u;
            // 0x1f6f44: 0xafa20104  sw          $v0, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f40) {
            ctx->pc = 0x1F6D70u;
            runtime->cooperativeGuestYield();
            goto label_1f6d70;
        }
    }
    ctx->pc = 0x1F6F48u;
    // 0x1f6f48: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F48u;
    {
        const bool branch_taken_0x1f6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F48u;
            // 0x1f6f4c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f48) {
            ctx->pc = 0x1F6F64u;
            goto label_1f6f64;
        }
    }
    ctx->pc = 0x1F6F50u;
label_1f6f50:
    // 0x1f6f50: 0xc07dce8  jal         func_1F73A0
    ctx->pc = 0x1F6F50u;
    SET_GPR_U32(ctx, 31, 0x1F6F58u);
    ctx->pc = 0x1F6F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F50u;
            // 0x1f6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F73A0u;
    if (runtime->hasFunction(0x1F73A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F73A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F58u; }
        if (ctx->pc != 0x1F6F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f73a0_0x1f73c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F58u; }
        if (ctx->pc != 0x1F6F58u) { return; }
    }
    ctx->pc = 0x1F6F58u;
    // 0x1f6f58: 0xc07dd50  jal         func_1F7540
    ctx->pc = 0x1F6F58u;
    SET_GPR_U32(ctx, 31, 0x1F6F60u);
    ctx->pc = 0x1F6F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F58u;
            // 0x1f6f5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F7540u;
    if (runtime->hasFunction(0x1F7540u)) {
        auto targetFn = runtime->lookupFunction(0x1F7540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F60u; }
        if (ctx->pc != 0x1F6F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F7540_0x1f7540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6F60u; }
        if (ctx->pc != 0x1F6F60u) { return; }
    }
    ctx->pc = 0x1F6F60u;
label_1f6f60:
    // 0x1f6f60: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1f6f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1f6f64:
    // 0x1f6f64: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F6F64u;
    {
        const bool branch_taken_0x1f6f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f64) {
            ctx->pc = 0x1F6F98u;
            goto label_1f6f98;
        }
    }
    ctx->pc = 0x1F6F6Cu;
    // 0x1f6f6c: 0x860200dc  lh          $v0, 0xDC($s0)
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1f6f70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F6F70u;
    {
        const bool branch_taken_0x1f6f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f70) {
            ctx->pc = 0x1F6F98u;
            goto label_1f6f98;
        }
    }
    ctx->pc = 0x1F6F78u;
    // 0x1f6f78: 0x8e0200cc  lw          $v0, 0xCC($s0)
    ctx->pc = 0x1f6f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x1f6f7c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1f6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1f6f80: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f6f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6f84: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6F84u;
    {
        const bool branch_taken_0x1f6f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f6f84) {
            ctx->pc = 0x1F6F88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F84u;
            // 0x1f6f88: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F6F8Cu;
            goto label_1f6f8c;
        }
    }
    ctx->pc = 0x1F6F8Cu;
label_1f6f8c:
    // 0x1f6f8c: 0xc60000c0  lwc1        $f0, 0xC0($s0)
    ctx->pc = 0x1f6f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6F90u;
    {
        const bool branch_taken_0x1f6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6F90u;
            // 0x1f6f94: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6f90) {
            ctx->pc = 0x1F6F9Cu;
            goto label_1f6f9c;
        }
    }
    ctx->pc = 0x1F6F98u;
label_1f6f98:
    // 0x1f6f98: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f6f98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f6f9c:
    // 0x1f6f9c: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x1f6f9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1f6fa0: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x1f6fa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1f6fa4: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x1f6fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1f6fa8: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x1f6fa8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f6fac: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1f6facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f6fb0: 0xc7bc01a0  lwc1        $f28, 0x1A0($sp)
    ctx->pc = 0x1f6fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x1f6fb4: 0xc7bb0198  lwc1        $f27, 0x198($sp)
    ctx->pc = 0x1f6fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f6fb8: 0xc7ba0190  lwc1        $f26, 0x190($sp)
    ctx->pc = 0x1f6fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f6fbc: 0xc7b90188  lwc1        $f25, 0x188($sp)
    ctx->pc = 0x1f6fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f6fc0: 0xc7b80180  lwc1        $f24, 0x180($sp)
    ctx->pc = 0x1f6fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f6fc4: 0xc7b70178  lwc1        $f23, 0x178($sp)
    ctx->pc = 0x1f6fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f6fc8: 0xc7b60170  lwc1        $f22, 0x170($sp)
    ctx->pc = 0x1f6fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f6fcc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x1f6fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f6fd0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x1f6fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f6fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6FD4u;
            // 0x1f6fd8: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F6920u: goto label_1f6920;
            case 0x1F6950u: goto label_1f6950;
            case 0x1F6974u: goto label_1f6974;
            case 0x1F6980u: goto label_1f6980;
            case 0x1F6984u: goto label_1f6984;
            case 0x1F69D4u: goto label_1f69d4;
            case 0x1F69E4u: goto label_1f69e4;
            case 0x1F69E8u: goto label_1f69e8;
            case 0x1F6A00u: goto label_1f6a00;
            case 0x1F6A44u: goto label_1f6a44;
            case 0x1F6A98u: goto label_1f6a98;
            case 0x1F6B08u: goto label_1f6b08;
            case 0x1F6B24u: goto label_1f6b24;
            case 0x1F6B48u: goto label_1f6b48;
            case 0x1F6B68u: goto label_1f6b68;
            case 0x1F6B88u: goto label_1f6b88;
            case 0x1F6BD4u: goto label_1f6bd4;
            case 0x1F6BD8u: goto label_1f6bd8;
            case 0x1F6BE4u: goto label_1f6be4;
            case 0x1F6BE8u: goto label_1f6be8;
            case 0x1F6C20u: goto label_1f6c20;
            case 0x1F6C4Cu: goto label_1f6c4c;
            case 0x1F6C6Cu: goto label_1f6c6c;
            case 0x1F6C88u: goto label_1f6c88;
            case 0x1F6C98u: goto label_1f6c98;
            case 0x1F6C9Cu: goto label_1f6c9c;
            case 0x1F6D30u: goto label_1f6d30;
            case 0x1F6D38u: goto label_1f6d38;
            case 0x1F6D3Cu: goto label_1f6d3c;
            case 0x1F6D70u: goto label_1f6d70;
            case 0x1F6D90u: goto label_1f6d90;
            case 0x1F6D98u: goto label_1f6d98;
            case 0x1F6E0Cu: goto label_1f6e0c;
            case 0x1F6E34u: goto label_1f6e34;
            case 0x1F6E84u: goto label_1f6e84;
            case 0x1F6ECCu: goto label_1f6ecc;
            case 0x1F6ED4u: goto label_1f6ed4;
            case 0x1F6EF0u: goto label_1f6ef0;
            case 0x1F6F30u: goto label_1f6f30;
            case 0x1F6F34u: goto label_1f6f34;
            case 0x1F6F38u: goto label_1f6f38;
            case 0x1F6F50u: goto label_1f6f50;
            case 0x1F6F60u: goto label_1f6f60;
            case 0x1F6F64u: goto label_1f6f64;
            case 0x1F6F8Cu: goto label_1f6f8c;
            case 0x1F6F98u: goto label_1f6f98;
            case 0x1F6F9Cu: goto label_1f6f9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F6FDCu;
    // 0x1f6fdc: 0x0  nop
    ctx->pc = 0x1f6fdcu;
    // NOP
}
