#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF2D8
// Address: 0x1ef2d8 - 0x1ef678
void sub_001EF2D8_0x1ef2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2D8_0x1ef2d8");
#endif

    ctx->pc = 0x1ef2d8u;

    // 0x1ef2d8: 0x27bdfc70  addiu       $sp, $sp, -0x390
    ctx->pc = 0x1ef2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966384));
    // 0x1ef2dc: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x1ef2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
    // 0x1ef2e0: 0x7fb00350  sq          $s0, 0x350($sp)
    ctx->pc = 0x1ef2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 16));
    // 0x1ef2e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef2e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef2e8: 0xffbf0330  sd          $ra, 0x330($sp)
    ctx->pc = 0x1ef2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 31));
    // 0x1ef2ec: 0xe7b90388  swc1        $f25, 0x388($sp)
    ctx->pc = 0x1ef2ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 904), bits); }
    // 0x1ef2f0: 0xe7b80380  swc1        $f24, 0x380($sp)
    ctx->pc = 0x1ef2f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
    // 0x1ef2f4: 0xe7b70378  swc1        $f23, 0x378($sp)
    ctx->pc = 0x1ef2f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
    // 0x1ef2f8: 0xe7b60370  swc1        $f22, 0x370($sp)
    ctx->pc = 0x1ef2f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
    // 0x1ef2fc: 0xe7b50368  swc1        $f21, 0x368($sp)
    ctx->pc = 0x1ef2fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
    // 0x1ef300: 0xe7b40360  swc1        $f20, 0x360($sp)
    ctx->pc = 0x1ef300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
    // 0x1ef304: 0x8e2208c4  lw          $v0, 0x8C4($s1)
    ctx->pc = 0x1ef304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x1ef308: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1ef308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ef30c: 0xc4590018  lwc1        $f25, 0x18($v0)
    ctx->pc = 0x1ef30cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ef310: 0xc4580020  lwc1        $f24, 0x20($v0)
    ctx->pc = 0x1ef310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ef314: 0xc457001c  lwc1        $f23, 0x1C($v0)
    ctx->pc = 0x1ef314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ef318: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1ef318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef31c: 0xc455000c  lwc1        $f21, 0xC($v0)
    ctx->pc = 0x1ef31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ef320: 0xc4560014  lwc1        $f22, 0x14($v0)
    ctx->pc = 0x1ef320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ef324: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1ef324u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1ef328: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1ef328u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef32c: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1ef32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef330: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1ef330u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef334: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1ef334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef338: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1ef338u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef33c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1ef33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef340: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1ef340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef344: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ef344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef348: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ef348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef34c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1ef34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef350: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1ef350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef354: 0xfba20100  sqc2        $vf2, 0x100($sp)
    ctx->pc = 0x1ef354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef358: 0xfba30110  sqc2        $vf3, 0x110($sp)
    ctx->pc = 0x1ef358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef35c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1ef35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef360: 0xfba40130  sqc2        $vf4, 0x130($sp)
    ctx->pc = 0x1ef360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef364: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1ef364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef368: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1ef368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef36c: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x1ef36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef370: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1ef370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef374: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1ef374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef378: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ef378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ef37c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ef380: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ef380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ef384: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x1ef384u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x1ef388: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef38c: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x1ef38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef390: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ef390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef394: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x1ef394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef398: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1ef398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef39c: 0xfba30150  sqc2        $vf3, 0x150($sp)
    ctx->pc = 0x1ef39cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef3a0: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1ef3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef3a4: 0xc061122  jal         func_184488
    ctx->pc = 0x1EF3A4u;
    SET_GPR_U32(ctx, 31, 0x1EF3ACu);
    ctx->pc = 0x1EF3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3A4u;
            // 0x1ef3a8: 0xfba40170  sqc2        $vf4, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184488u;
    if (runtime->hasFunction(0x184488u)) {
        auto targetFn = runtime->lookupFunction(0x184488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3ACu; }
        if (ctx->pc != 0x1EF3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184488_0x184488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3ACu; }
        if (ctx->pc != 0x1EF3ACu) { return; }
    }
    ctx->pc = 0x1EF3ACu;
    // 0x1ef3ac: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x1ef3acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x1ef3b0: 0xc06115e  jal         func_184578
    ctx->pc = 0x1EF3B0u;
    SET_GPR_U32(ctx, 31, 0x1EF3B8u);
    ctx->pc = 0x1EF3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3B0u;
            // 0x1ef3b4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3B8u; }
        if (ctx->pc != 0x1EF3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3B8u; }
        if (ctx->pc != 0x1EF3B8u) { return; }
    }
    ctx->pc = 0x1EF3B8u;
    // 0x1ef3b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1ef3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1ef3bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ef3c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ef3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ef3c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1ef3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ef3c8: 0xc06119a  jal         func_184668
    ctx->pc = 0x1EF3C8u;
    SET_GPR_U32(ctx, 31, 0x1EF3D0u);
    ctx->pc = 0x1EF3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3C8u;
            // 0x1ef3cc: 0x460cb302  mul.s       $f12, $f22, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3D0u; }
        if (ctx->pc != 0x1EF3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF3D0u; }
        if (ctx->pc != 0x1EF3D0u) { return; }
    }
    ctx->pc = 0x1EF3D0u;
    // 0x1ef3d0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef3d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef3d8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1ef3d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ef3dc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF3DCu;
    {
        const bool branch_taken_0x1ef3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3DCu;
            // 0x1ef3e0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3dc) {
            ctx->pc = 0x1EF3F0u;
            goto label_1ef3f0;
        }
    }
    ctx->pc = 0x1EF3E4u;
    // 0x1ef3e4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF3E4u;
    {
        const bool branch_taken_0x1ef3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3E4u;
            // 0x1ef3e8: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3e4) {
            ctx->pc = 0x1EF40Cu;
            goto label_1ef40c;
        }
    }
    ctx->pc = 0x1EF3ECu;
    // 0x1ef3ec: 0x0  nop
    ctx->pc = 0x1ef3ecu;
    // NOP
label_1ef3f0:
    // 0x1ef3f0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1ef3f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ef3f4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ef3f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ef3f8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF3F8u;
    {
        const bool branch_taken_0x1ef3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EF3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF3F8u;
            // 0x1ef3fc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3f8) {
            ctx->pc = 0x1EF40Cu;
            goto label_1ef40c;
        }
    }
    ctx->pc = 0x1EF400u;
    // 0x1ef400: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EF400u;
    SET_GPR_U32(ctx, 31, 0x1EF408u);
    ctx->pc = 0x1EF404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF400u;
            // 0x1ef404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF408u; }
        if (ctx->pc != 0x1EF408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF408u; }
        if (ctx->pc != 0x1EF408u) { return; }
    }
    ctx->pc = 0x1EF408u;
    // 0x1ef408: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ef408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ef40c:
    // 0x1ef40c: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1ef40cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ef410: 0xdba50090  lqc2        $vf5, 0x90($sp)
    ctx->pc = 0x1ef410u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef414: 0xdba800a0  lqc2        $vf8, 0xA0($sp)
    ctx->pc = 0x1ef414u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef418: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x1ef418u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ef41c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ef41cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef420: 0xd8820030  lqc2        $vf2, 0x30($a0)
    ctx->pc = 0x1ef420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ef424: 0xd8860010  lqc2        $vf6, 0x10($a0)
    ctx->pc = 0x1ef424u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef428: 0xd8870020  lqc2        $vf7, 0x20($a0)
    ctx->pc = 0x1ef428u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ef42c: 0x4be119bc  vmulax.xyzw $ACC, $vf3, $vf1x
    ctx->pc = 0x1ef42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef430: 0x4be128bd  vmadday.xyzw $ACC, $vf5, $vf1y
    ctx->pc = 0x1ef430u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef434: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1ef434u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef438: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1ef438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef43c: 0x4be619bc  vmulax.xyzw $ACC, $vf3, $vf6x
    ctx->pc = 0x1ef43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef440: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1ef440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef444: 0x4be628bd  vmadday.xyzw $ACC, $vf5, $vf6y
    ctx->pc = 0x1ef444u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef448: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x1ef448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef44c: 0x4be6218b  vmaddw.xyzw $vf6, $vf4, $vf6w
    ctx->pc = 0x1ef44cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef450: 0x4be719bc  vmulax.xyzw $ACC, $vf3, $vf7x
    ctx->pc = 0x1ef450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef454: 0xfba601d0  sqc2        $vf6, 0x1D0($sp)
    ctx->pc = 0x1ef454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ef458: 0x4be728bd  vmadday.xyzw $ACC, $vf5, $vf7y
    ctx->pc = 0x1ef458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef45c: 0x4be740be  vmaddaz.xyzw $ACC, $vf8, $vf7z
    ctx->pc = 0x1ef45cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef460: 0x4be721cb  vmaddw.xyzw $vf7, $vf4, $vf7w
    ctx->pc = 0x1ef460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef464: 0x4be219bc  vmulax.xyzw $ACC, $vf3, $vf2x
    ctx->pc = 0x1ef464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef468: 0xfba701e0  sqc2        $vf7, 0x1E0($sp)
    ctx->pc = 0x1ef468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1ef46c: 0x4be228bd  vmadday.xyzw $ACC, $vf5, $vf2y
    ctx->pc = 0x1ef46cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef470: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1ef470u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef474: 0x4be2210b  vmaddw.xyzw $vf4, $vf4, $vf2w
    ctx->pc = 0x1ef474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef478: 0xfba401f0  sqc2        $vf4, 0x1F0($sp)
    ctx->pc = 0x1ef478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef47c: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x1ef47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef480: 0xfba60190  sqc2        $vf6, 0x190($sp)
    ctx->pc = 0x1ef480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x1ef484: 0xfba701a0  sqc2        $vf7, 0x1A0($sp)
    ctx->pc = 0x1ef484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x1ef488: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1ef488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef48c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1ef48cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef490: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1ef490u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef494: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1ef494u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef498: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x1ef498u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ef49c: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x1ef49cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef4a0: 0x4be530bd  vmadday.xyzw $ACC, $vf6, $vf5y
    ctx->pc = 0x1ef4a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4a4: 0x4be538be  vmaddaz.xyzw $ACC, $vf7, $vf5z
    ctx->pc = 0x1ef4a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4a8: 0x4be5214b  vmaddw.xyzw $vf5, $vf4, $vf5w
    ctx->pc = 0x1ef4a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef4ac: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1ef4acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef4b0: 0xfba50240  sqc2        $vf5, 0x240($sp)
    ctx->pc = 0x1ef4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef4b4: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x1ef4b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4b8: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x1ef4b8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4bc: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1ef4bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef4c0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1ef4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef4c4: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1ef4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef4c8: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x1ef4c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4cc: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x1ef4ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4d0: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1ef4d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef4d4: 0x4be809bc  vmulax.xyzw $ACC, $vf1, $vf8x
    ctx->pc = 0x1ef4d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef4d8: 0xfba30260  sqc2        $vf3, 0x260($sp)
    ctx->pc = 0x1ef4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef4dc: 0x4be830bd  vmadday.xyzw $ACC, $vf6, $vf8y
    ctx->pc = 0x1ef4dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4e0: 0x4be838be  vmaddaz.xyzw $ACC, $vf7, $vf8z
    ctx->pc = 0x1ef4e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef4e4: 0x4be8210b  vmaddw.xyzw $vf4, $vf4, $vf8w
    ctx->pc = 0x1ef4e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef4e8: 0xfba40270  sqc2        $vf4, 0x270($sp)
    ctx->pc = 0x1ef4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef4ec: 0xfba50200  sqc2        $vf5, 0x200($sp)
    ctx->pc = 0x1ef4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef4f0: 0xfba20210  sqc2        $vf2, 0x210($sp)
    ctx->pc = 0x1ef4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef4f4: 0xfba30220  sqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1ef4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef4f8: 0xfba40230  sqc2        $vf4, 0x230($sp)
    ctx->pc = 0x1ef4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef4fc: 0xfba50180  sqc2        $vf5, 0x180($sp)
    ctx->pc = 0x1ef4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef500: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1ef500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef504: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1ef504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef508: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1ef508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef50c: 0xdba60040  lqc2        $vf6, 0x40($sp)
    ctx->pc = 0x1ef50cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ef510: 0xdba70050  lqc2        $vf7, 0x50($sp)
    ctx->pc = 0x1ef510u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ef514: 0xdba80060  lqc2        $vf8, 0x60($sp)
    ctx->pc = 0x1ef514u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef518: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ef518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ef51c: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x1ef51cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef520: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x1ef520u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef524: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x1ef524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef528: 0x4be5094b  vmaddw.xyzw $vf5, $vf1, $vf5w
    ctx->pc = 0x1ef528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef52c: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1ef52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef530: 0xfba502c0  sqc2        $vf5, 0x2C0($sp)
    ctx->pc = 0x1ef530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef534: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1ef534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef538: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1ef538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef53c: 0x4be2088b  vmaddw.xyzw $vf2, $vf1, $vf2w
    ctx->pc = 0x1ef53cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef540: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1ef540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef544: 0xfba202d0  sqc2        $vf2, 0x2D0($sp)
    ctx->pc = 0x1ef544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef548: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1ef548u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef54c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1ef54cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef550: 0x4be308cb  vmaddw.xyzw $vf3, $vf1, $vf3w
    ctx->pc = 0x1ef550u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef554: 0x4be431bc  vmulax.xyzw $ACC, $vf6, $vf4x
    ctx->pc = 0x1ef554u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef558: 0xfba302e0  sqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1ef558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef55c: 0x4be438bd  vmadday.xyzw $ACC, $vf7, $vf4y
    ctx->pc = 0x1ef55cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef560: 0x4be440be  vmaddaz.xyzw $ACC, $vf8, $vf4z
    ctx->pc = 0x1ef560u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef564: 0x4be4084b  vmaddw.xyzw $vf1, $vf1, $vf4w
    ctx->pc = 0x1ef564u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef568: 0xfba102f0  sqc2        $vf1, 0x2F0($sp)
    ctx->pc = 0x1ef568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef56c: 0xfba50280  sqc2        $vf5, 0x280($sp)
    ctx->pc = 0x1ef56cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef570: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ef570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef578: 0x3c01c1a0  lui         $at, 0xC1A0
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49568 << 16));
    // 0x1ef57c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef57cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef580: 0x4600b882  mul.s       $f2, $f23, $f0
    ctx->pc = 0x1ef580u;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x1ef584: 0xfba102b0  sqc2        $vf1, 0x2B0($sp)
    ctx->pc = 0x1ef584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef588: 0x4601c042  mul.s       $f1, $f24, $f1
    ctx->pc = 0x1ef588u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[1]);
    // 0x1ef58c: 0xfba20290  sqc2        $vf2, 0x290($sp)
    ctx->pc = 0x1ef58cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef590: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x1ef590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x1ef594: 0xfba302a0  sqc2        $vf3, 0x2A0($sp)
    ctx->pc = 0x1ef594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef598: 0xfba50180  sqc2        $vf5, 0x180($sp)
    ctx->pc = 0x1ef598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef59c: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1ef59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef5a0: 0xfba301a0  sqc2        $vf3, 0x1A0($sp)
    ctx->pc = 0x1ef5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef5a4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1ef5a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ef5a8: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef5ac: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ef5acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ef5b0: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1ef5b0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1ef5b4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1ef5b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ef5b8: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1ef5b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1ef5bc: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1ef5bcu;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ef5c0: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1ef5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1ef5c4: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1ef5c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef5c8: 0xfba10300  sqc2        $vf1, 0x300($sp)
    ctx->pc = 0x1ef5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5cc: 0x4be110bd  vmadday.xyzw $ACC, $vf2, $vf1y
    ctx->pc = 0x1ef5ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef5d0: 0xfba10310  sqc2        $vf1, 0x310($sp)
    ctx->pc = 0x1ef5d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5d4: 0x4be118be  vmaddaz.xyzw $ACC, $vf3, $vf1z
    ctx->pc = 0x1ef5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef5d8: 0x4be1210b  vmaddw.xyzw $vf4, $vf4, $vf1w
    ctx->pc = 0x1ef5d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef5dc: 0xfba401b0  sqc2        $vf4, 0x1B0($sp)
    ctx->pc = 0x1ef5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef5e0: 0x4be1233c  vmove.xyzw  $vf1, $vf4
    ctx->pc = 0x1ef5e0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[4];
    // 0x1ef5e4: 0x4a21033c  vmove.w     $vf1, $vf0
    ctx->pc = 0x1ef5e4u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1ef5e8: 0xfba40320  sqc2        $vf4, 0x320($sp)
    ctx->pc = 0x1ef5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef5ec: 0xfba10320  sqc2        $vf1, 0x320($sp)
    ctx->pc = 0x1ef5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5f0: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1ef5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5f4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1ef5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef5f8: 0xf8c50020  sqc2        $vf5, 0x20($a2)
    ctx->pc = 0x1ef5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1ef5fc: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1ef5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1ef600: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef604: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x1ef604u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x1ef608: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x1ef608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1ef60c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ef60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef610: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x1ef610u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1ef614: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1ef614u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1ef618: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1ef618u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1ef61c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1ef61cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1ef620: 0x7ba201a0  lq          $v0, 0x1A0($sp)
    ctx->pc = 0x1ef620u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1ef624: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1ef624u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1ef628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef62c: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x1ef62cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1ef630: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ef630u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef634: 0x7ba201b0  lq          $v0, 0x1B0($sp)
    ctx->pc = 0x1ef634u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1ef638: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x1ef638u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x1ef63c: 0xfd07bdf8  sd          $a3, -0x4208($t0)
    ctx->pc = 0x1ef63cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 7));
    // 0x1ef640: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x1ef640u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x1ef644: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1EF644u;
    SET_GPR_U32(ctx, 31, 0x1EF64Cu);
    ctx->pc = 0x1EF648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF644u;
            // 0x1ef648: 0xfcc000f0  sd          $zero, 0xF0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF64Cu; }
        if (ctx->pc != 0x1EF64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF64Cu; }
        if (ctx->pc != 0x1EF64Cu) { return; }
    }
    ctx->pc = 0x1EF64Cu;
    // 0x1ef64c: 0x7bb00350  lq          $s0, 0x350($sp)
    ctx->pc = 0x1ef64cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1ef650: 0x7bb10340  lq          $s1, 0x340($sp)
    ctx->pc = 0x1ef650u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1ef654: 0xdfbf0330  ld          $ra, 0x330($sp)
    ctx->pc = 0x1ef654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1ef658: 0xc7b90388  lwc1        $f25, 0x388($sp)
    ctx->pc = 0x1ef658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1ef65c: 0xc7b80380  lwc1        $f24, 0x380($sp)
    ctx->pc = 0x1ef65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1ef660: 0xc7b70378  lwc1        $f23, 0x378($sp)
    ctx->pc = 0x1ef660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1ef664: 0xc7b60370  lwc1        $f22, 0x370($sp)
    ctx->pc = 0x1ef664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1ef668: 0xc7b50368  lwc1        $f21, 0x368($sp)
    ctx->pc = 0x1ef668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ef66c: 0xc7b40360  lwc1        $f20, 0x360($sp)
    ctx->pc = 0x1ef66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef670: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF670u;
            // 0x1ef674: 0x27bd0390  addiu       $sp, $sp, 0x390 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF3F0u: goto label_1ef3f0;
            case 0x1EF40Cu: goto label_1ef40c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF678u;
}
