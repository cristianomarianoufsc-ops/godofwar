#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EF6A8
// Address: 0x1ef6a8 - 0x1efd50
void sub_001EF6A8_0x1ef6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF6A8_0x1ef6a8");
#endif

    ctx->pc = 0x1ef6a8u;

    // 0x1ef6a8: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
    // 0x1ef6ac: 0x7fb102b0  sq          $s1, 0x2B0($sp)
    ctx->pc = 0x1ef6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 17));
    // 0x1ef6b0: 0x7fb002c0  sq          $s0, 0x2C0($sp)
    ctx->pc = 0x1ef6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 16));
    // 0x1ef6b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ef6b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef6b8: 0x7fb202a0  sq          $s2, 0x2A0($sp)
    ctx->pc = 0x1ef6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 18));
    // 0x1ef6bc: 0x7fb30290  sq          $s3, 0x290($sp)
    ctx->pc = 0x1ef6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 19));
    // 0x1ef6c0: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x1ef6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
    // 0x1ef6c4: 0xe7b602e0  swc1        $f22, 0x2E0($sp)
    ctx->pc = 0x1ef6c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
    // 0x1ef6c8: 0xe7b502d8  swc1        $f21, 0x2D8($sp)
    ctx->pc = 0x1ef6c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
    // 0x1ef6cc: 0xe7b402d0  swc1        $f20, 0x2D0($sp)
    ctx->pc = 0x1ef6ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
    // 0x1ef6d0: 0x8e2208c4  lw          $v0, 0x8C4($s1)
    ctx->pc = 0x1ef6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x1ef6d4: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ef6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1ef6d8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x1ef6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef6dc: 0x46000587  neg.s       $f22, $f0
    ctx->pc = 0x1ef6dcu;
    ctx->f[22] = FPU_NEG_S(ctx->f[0]);
    // 0x1ef6e0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ef6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1ef6e4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1ef6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1ef6e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ef6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ef6ec: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1EF6ECu;
    {
        const bool branch_taken_0x1ef6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF6ECu;
            // 0x1ef6f0: 0xc495001c  lwc1        $f21, 0x1C($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6ec) {
            ctx->pc = 0x1EF738u;
            goto label_1ef738;
        }
    }
    ctx->pc = 0x1EF6F4u;
    // 0x1ef6f4: 0xc4940020  lwc1        $f20, 0x20($a0)
    ctx->pc = 0x1ef6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ef6f8: 0xc48c0010  lwc1        $f12, 0x10($a0)
    ctx->pc = 0x1ef6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ef6fc: 0xc48d000c  lwc1        $f13, 0xC($a0)
    ctx->pc = 0x1ef6fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ef700: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x1ef700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef704: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ef704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ef708: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef708u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ef70c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef70cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef710: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1ef710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1ef714: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ef714u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ef718: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ef718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ef71c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef720: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x1ef720u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1ef724: 0x460e0b82  mul.s       $f14, $f1, $f14
    ctx->pc = 0x1ef724u;
    ctx->f[14] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x1ef728: 0xc061248  jal         func_184920
    ctx->pc = 0x1EF728u;
    SET_GPR_U32(ctx, 31, 0x1EF730u);
    ctx->pc = 0x1EF72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF728u;
            // 0x1ef72c: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184920u;
    if (runtime->hasFunction(0x184920u)) {
        auto targetFn = runtime->lookupFunction(0x184920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF730u; }
        if (ctx->pc != 0x1EF730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184920_0x184920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF730u; }
        if (ctx->pc != 0x1EF730u) { return; }
    }
    ctx->pc = 0x1EF730u;
    // 0x1ef730: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EF730u;
    {
        const bool branch_taken_0x1ef730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef730) {
            ctx->pc = 0x1EF770u;
            goto label_1ef770;
        }
    }
    ctx->pc = 0x1EF738u;
label_1ef738:
    // 0x1ef738: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1ef738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ef73c: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1ef73cu;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1ef740: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1ef740u;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef744: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x1ef744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef748: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1ef748u;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef74c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x1ef74cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef750: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1ef750u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1ef754: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ef754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef758: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1ef758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef75c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x1ef75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef760: 0xfba30050  sqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1ef760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef764: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ef764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef768: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x1ef768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef76c: 0x0  nop
    ctx->pc = 0x1ef76cu;
    // NOP
label_1ef770:
    // 0x1ef770: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1ef770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1ef774: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef774u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef778: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1ef778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1ef77c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef780: 0x4600a842  mul.s       $f1, $f21, $f0
    ctx->pc = 0x1ef780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1ef784: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x1ef784u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x1ef788: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1ef788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1ef78c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ef78cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1ef790: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef794: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1ef794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ef798: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1ef798u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1ef79c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x1ef79cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1ef7a0: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x1ef7a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7a4: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1ef7a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1ef7a8: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef7ac: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1ef7acu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1ef7b0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1ef7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1ef7b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ef7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef7b8: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1ef7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
    // 0x1ef7bc: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1ef7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1ef7c0: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ef7c4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF7C4u;
    {
        const bool branch_taken_0x1ef7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7C4u;
            // 0x1ef7c8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7c4) {
            ctx->pc = 0x1EF7D8u;
            goto label_1ef7d8;
        }
    }
    ctx->pc = 0x1EF7CCu;
    // 0x1ef7cc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF7CCu;
    {
        const bool branch_taken_0x1ef7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7CCu;
            // 0x1ef7d0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7cc) {
            ctx->pc = 0x1EF7F4u;
            goto label_1ef7f4;
        }
    }
    ctx->pc = 0x1EF7D4u;
    // 0x1ef7d4: 0x0  nop
    ctx->pc = 0x1ef7d4u;
    // NOP
label_1ef7d8:
    // 0x1ef7d8: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1ef7d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ef7dc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ef7dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ef7e0: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF7E0u;
    {
        const bool branch_taken_0x1ef7e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7E0u;
            // 0x1ef7e4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7e0) {
            ctx->pc = 0x1EF7F4u;
            goto label_1ef7f4;
        }
    }
    ctx->pc = 0x1EF7E8u;
    // 0x1ef7e8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EF7E8u;
    SET_GPR_U32(ctx, 31, 0x1EF7F0u);
    ctx->pc = 0x1EF7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF7E8u;
            // 0x1ef7ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7F0u; }
        if (ctx->pc != 0x1EF7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF7F0u; }
        if (ctx->pc != 0x1EF7F0u) { return; }
    }
    ctx->pc = 0x1EF7F0u;
    // 0x1ef7f0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ef7f4:
    // 0x1ef7f4: 0xd8840030  lqc2        $vf4, 0x30($a0)
    ctx->pc = 0x1ef7f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1ef7f8: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x1ef7f8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef7fc: 0xd8870010  lqc2        $vf7, 0x10($a0)
    ctx->pc = 0x1ef7fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef800: 0xd8880020  lqc2        $vf8, 0x20($a0)
    ctx->pc = 0x1ef800u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1ef804: 0xda430000  lqc2        $vf3, 0x0($s2)
    ctx->pc = 0x1ef804u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ef808: 0xda460030  lqc2        $vf6, 0x30($s2)
    ctx->pc = 0x1ef808u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1ef80c: 0xda410010  lqc2        $vf1, 0x10($s2)
    ctx->pc = 0x1ef80cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1ef810: 0xda420020  lqc2        $vf2, 0x20($s2)
    ctx->pc = 0x1ef810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1ef814: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x1ef814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef818: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1ef818u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef81c: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1ef81cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef820: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1ef820u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef824: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x1ef824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef828: 0xfba300d0  sqc2        $vf3, 0xD0($sp)
    ctx->pc = 0x1ef828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef82c: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1ef82cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef830: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1ef830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef834: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1ef834u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef838: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x1ef838u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef83c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x1ef83cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef840: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1ef840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef844: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1ef844u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef848: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1ef848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef84c: 0x4be629bc  vmulax.xyzw $ACC, $vf5, $vf6x
    ctx->pc = 0x1ef84cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1ef850: 0xfba200f0  sqc2        $vf2, 0xF0($sp)
    ctx->pc = 0x1ef850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef854: 0x4be638bd  vmadday.xyzw $ACC, $vf7, $vf6y
    ctx->pc = 0x1ef854u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef858: 0x4be640be  vmaddaz.xyzw $ACC, $vf8, $vf6z
    ctx->pc = 0x1ef858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1ef85c: 0x4be6210b  vmaddw.xyzw $vf4, $vf4, $vf6w
    ctx->pc = 0x1ef85cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1ef860: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1ef860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef864: 0xfba30090  sqc2        $vf3, 0x90($sp)
    ctx->pc = 0x1ef864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef868: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1ef868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef86c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1ef86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef870: 0xfba200b0  sqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x1ef870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef874: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1ef874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1ef878: 0xf8c30020  sqc2        $vf3, 0x20($a2)
    ctx->pc = 0x1ef878u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef87c: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x1ef87cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x1ef880: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ef880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef884: 0xde47bdf8  ld          $a3, -0x4208($s2)
    ctx->pc = 0x1ef884u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x1ef888: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1ef888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef88c: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1ef88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ef890: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1ef890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef894: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x1ef894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x1ef898: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x1ef898u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x1ef89c: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1ef89cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x1ef8a0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1ef8a0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1ef8a4: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x1ef8a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1ef8a8: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1ef8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x1ef8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ef8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8b0: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x1ef8b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x1ef8b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ef8b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8b8: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1ef8b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1ef8bc: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x1ef8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x1ef8c0: 0xfe47bdf8  sd          $a3, -0x4208($s2)
    ctx->pc = 0x1ef8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950392), GPR_U64(ctx, 7));
    // 0x1ef8c4: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x1ef8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x1ef8c8: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x1EF8C8u;
    SET_GPR_U32(ctx, 31, 0x1EF8D0u);
    ctx->pc = 0x1EF8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8C8u;
            // 0x1ef8cc: 0xfcc000f0  sd          $zero, 0xF0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8D0u; }
        if (ctx->pc != 0x1EF8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF8D0u; }
        if (ctx->pc != 0x1EF8D0u) { return; }
    }
    ctx->pc = 0x1EF8D0u;
    // 0x1ef8d0: 0x8e2408c4  lw          $a0, 0x8C4($s1)
    ctx->pc = 0x1ef8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x1ef8d4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1ef8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1ef8d8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef8dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ef8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ef8e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EF8E0u;
    {
        const bool branch_taken_0x1ef8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF8E0u;
            // 0x1ef8e4: 0xc6210920  lwc1        $f1, 0x920($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8e0) {
            ctx->pc = 0x1EF920u;
            goto label_1ef920;
        }
    }
    ctx->pc = 0x1EF8E8u;
    // 0x1ef8e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1ef8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ef8ec: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x1ef8ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x1ef8f0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1ef8f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1ef8f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef8f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef8f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ef8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef8fc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ef8fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1ef900: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1ef900u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ef904: 0xe6210920  swc1        $f1, 0x920($s1)
    ctx->pc = 0x1ef904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2336), bits); }
    // 0x1ef908: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x1ef908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef90c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1ef90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1ef910: 0xc6200924  lwc1        $f0, 0x924($s1)
    ctx->pc = 0x1ef910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef914: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ef914u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ef918: 0xe6200924  swc1        $f0, 0x924($s1)
    ctx->pc = 0x1ef918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2340), bits); }
    // 0x1ef91c: 0xc6210920  lwc1        $f1, 0x920($s1)
    ctx->pc = 0x1ef91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef920:
    // 0x1ef920: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ef920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ef924: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef928: 0xc6200924  lwc1        $f0, 0x924($s1)
    ctx->pc = 0x1ef928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef92c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ef930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ef934: 0x46020868  max.s       $f1, $f1, $f2
    ctx->pc = 0x1ef934u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[2]);
    // 0x1ef938: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1ef938u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1ef93c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef93cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef940: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x1ef940u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x1ef944: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x1ef944u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x1ef948: 0xe6210920  swc1        $f1, 0x920($s1)
    ctx->pc = 0x1ef948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2336), bits); }
    // 0x1ef94c: 0xe6200924  swc1        $f0, 0x924($s1)
    ctx->pc = 0x1ef94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2340), bits); }
    // 0x1ef950: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1ef950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1ef954: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF954u;
    {
        const bool branch_taken_0x1ef954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1EF958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF954u;
            // 0x1ef958: 0xde45bdf8  ld          $a1, -0x4208($s2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef954) {
            ctx->pc = 0x1EF964u;
            goto label_1ef964;
        }
    }
    ctx->pc = 0x1EF95Cu;
    // 0x1ef95c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF95Cu;
    {
        const bool branch_taken_0x1ef95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF95Cu;
            // 0x1ef960: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef95c) {
            ctx->pc = 0x1EF97Cu;
            goto label_1ef97c;
        }
    }
    ctx->pc = 0x1EF964u;
label_1ef964:
    // 0x1ef964: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x1ef964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1ef968: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF968u;
    {
        const bool branch_taken_0x1ef968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EF96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF968u;
            // 0x1ef96c: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef968) {
            ctx->pc = 0x1EF97Cu;
            goto label_1ef97c;
        }
    }
    ctx->pc = 0x1EF970u;
    // 0x1ef970: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EF970u;
    SET_GPR_U32(ctx, 31, 0x1EF978u);
    ctx->pc = 0x1EF974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF970u;
            // 0x1ef974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF978u; }
        if (ctx->pc != 0x1EF978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF978u; }
        if (ctx->pc != 0x1EF978u) { return; }
    }
    ctx->pc = 0x1EF978u;
    // 0x1ef978: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ef978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ef97c:
    // 0x1ef97c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1ef97cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef980: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef980u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ef984: 0xfba20180  sqc2        $vf2, 0x180($sp)
    ctx->pc = 0x1ef984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef988: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1ef988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1ef98c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1ef98cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ef990: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1ef990u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef994: 0xfba20190  sqc2        $vf2, 0x190($sp)
    ctx->pc = 0x1ef994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef998: 0x8e260920  lw          $a2, 0x920($s1)
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2336)));
    // 0x1ef99c: 0x48a60800  qmtc2.ni    $a2, $vf1
    ctx->pc = 0x1ef99cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1ef9a0: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1ef9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1ef9a4: 0xfba30230  sqc2        $vf3, 0x230($sp)
    ctx->pc = 0x1ef9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1ef9a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ef9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef9ac: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1ef9b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ef9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ef9b4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF9B4u;
    {
        const bool branch_taken_0x1ef9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EF9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9B4u;
            // 0x1ef9b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9b4) {
            ctx->pc = 0x1EF9C8u;
            goto label_1ef9c8;
        }
    }
    ctx->pc = 0x1EF9BCu;
    // 0x1ef9bc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EF9BCu;
    {
        const bool branch_taken_0x1ef9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9BCu;
            // 0x1ef9c0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef9bc) {
            ctx->pc = 0x1EF9E4u;
            goto label_1ef9e4;
        }
    }
    ctx->pc = 0x1EF9C4u;
    // 0x1ef9c4: 0x0  nop
    ctx->pc = 0x1ef9c4u;
    // NOP
label_1ef9c8:
    // 0x1ef9c8: 0xdc830068  ld          $v1, 0x68($a0)
    ctx->pc = 0x1ef9c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1ef9cc: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1ef9ccu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1ef9d0: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF9D0u;
    {
        const bool branch_taken_0x1ef9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1ef9d0) {
            ctx->pc = 0x1EF9D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF9D0u;
            // 0x1ef9d4: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF9E4u;
            goto label_1ef9e4;
        }
    }
    ctx->pc = 0x1EF9D8u;
    // 0x1ef9d8: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EF9D8u;
    SET_GPR_U32(ctx, 31, 0x1EF9E0u);
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9E0u; }
        if (ctx->pc != 0x1EF9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF9E0u; }
        if (ctx->pc != 0x1EF9E0u) { return; }
    }
    ctx->pc = 0x1EF9E0u;
    // 0x1ef9e0: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1ef9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1ef9e4:
    // 0x1ef9e4: 0xd8810010  lqc2        $vf1, 0x10($a0)
    ctx->pc = 0x1ef9e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1ef9e8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1ef9e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef9ec: 0xfba20240  sqc2        $vf2, 0x240($sp)
    ctx->pc = 0x1ef9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1ef9f0: 0xfba101a0  sqc2        $vf1, 0x1A0($sp)
    ctx->pc = 0x1ef9f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef9f4: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1ef9f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef9f8: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1ef9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef9fc: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1ef9fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1efa00: 0x8e0300f8  lw          $v1, 0xF8($s0)
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x1efa04: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1efa04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1efa08: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa0c: 0xfba101c0  sqc2        $vf1, 0x1C0($sp)
    ctx->pc = 0x1efa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efa10: 0x8e260924  lw          $a2, 0x924($s1)
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2340)));
    // 0x1efa14: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x1efa14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x1efa18: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efa18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa1c: 0xdba20230  lqc2        $vf2, 0x230($sp)
    ctx->pc = 0x1efa1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1efa20: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1efa20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1efa24: 0xfba20250  sqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1efa24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1efa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1efa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa2c: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x1efa2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x1efa30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efa34: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFA34u;
    {
        const bool branch_taken_0x1efa34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1EFA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA34u;
            // 0x1efa38: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa34) {
            ctx->pc = 0x1EFA48u;
            goto label_1efa48;
        }
    }
    ctx->pc = 0x1EFA3Cu;
    // 0x1efa3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFA3Cu;
    {
        const bool branch_taken_0x1efa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA3Cu;
            // 0x1efa40: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efa3c) {
            ctx->pc = 0x1EFA64u;
            goto label_1efa64;
        }
    }
    ctx->pc = 0x1EFA44u;
    // 0x1efa44: 0x0  nop
    ctx->pc = 0x1efa44u;
    // NOP
label_1efa48:
    // 0x1efa48: 0xdc830068  ld          $v1, 0x68($a0)
    ctx->pc = 0x1efa48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x1efa4c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1efa4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1efa50: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFA50u;
    {
        const bool branch_taken_0x1efa50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1efa50) {
            ctx->pc = 0x1EFA54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFA50u;
            // 0x1efa54: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFA64u;
            goto label_1efa64;
        }
    }
    ctx->pc = 0x1EFA58u;
    // 0x1efa58: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EFA58u;
    SET_GPR_U32(ctx, 31, 0x1EFA60u);
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA60u; }
        if (ctx->pc != 0x1EFA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFA60u; }
        if (ctx->pc != 0x1EFA60u) { return; }
    }
    ctx->pc = 0x1EFA60u;
    // 0x1efa60: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1efa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1efa64:
    // 0x1efa64: 0xd8810020  lqc2        $vf1, 0x20($a0)
    ctx->pc = 0x1efa64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1efa68: 0xfba101d0  sqc2        $vf1, 0x1D0($sp)
    ctx->pc = 0x1efa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efa6c: 0xdba30240  lqc2        $vf3, 0x240($sp)
    ctx->pc = 0x1efa6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1efa70: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1efa70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa74: 0xdba20250  lqc2        $vf2, 0x250($sp)
    ctx->pc = 0x1efa74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1efa78: 0x4be11068  vadd.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1efa78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa7c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1efa7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1efa80: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1efa80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1efa84: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1efa84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1efa88: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x1efa88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1efa8c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1efa8cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1efa90: 0x4a0003bf  vwaitq
    ctx->pc = 0x1efa90u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1efa94: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1efa94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa98: 0x4a0002ff  vnop
    ctx->pc = 0x1efa98u;
    // NOP operation, no action needed for VU0
    // 0x1efa9c: 0x4a0002ff  vnop
    ctx->pc = 0x1efa9cu;
    // NOP operation, no action needed for VU0
    // 0x1efaa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1efaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efaa4: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1efaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efaa8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1efaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efaac: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1efaacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1efab0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFAB0u;
    {
        const bool branch_taken_0x1efab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAB0u;
            // 0x1efab4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab0) {
            ctx->pc = 0x1EFAC0u;
            goto label_1efac0;
        }
    }
    ctx->pc = 0x1EFAB8u;
    // 0x1efab8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFAB8u;
    {
        const bool branch_taken_0x1efab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAB8u;
            // 0x1efabc: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efab8) {
            ctx->pc = 0x1EFADCu;
            goto label_1efadc;
        }
    }
    ctx->pc = 0x1EFAC0u;
label_1efac0:
    // 0x1efac0: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1efac0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1efac4: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1efac4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1efac8: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFAC8u;
    {
        const bool branch_taken_0x1efac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1EFACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAC8u;
            // 0x1efacc: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efac8) {
            ctx->pc = 0x1EFADCu;
            goto label_1efadc;
        }
    }
    ctx->pc = 0x1EFAD0u;
    // 0x1efad0: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EFAD0u;
    SET_GPR_U32(ctx, 31, 0x1EFAD8u);
    ctx->pc = 0x1EFAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFAD0u;
            // 0x1efad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAD8u; }
        if (ctx->pc != 0x1EFAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFAD8u; }
        if (ctx->pc != 0x1EFAD8u) { return; }
    }
    ctx->pc = 0x1EFAD8u;
    // 0x1efad8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x1efad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1efadc:
    // 0x1efadc: 0x78840030  lq          $a0, 0x30($a0)
    ctx->pc = 0x1efadcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1efae0: 0x7fa40260  sq          $a0, 0x260($sp)
    ctx->pc = 0x1efae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 4));
    // 0x1efae4: 0x8e2208c4  lw          $v0, 0x8C4($s1)
    ctx->pc = 0x1efae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x1efae8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1efae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1efaec: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x1efaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x1efaf0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1efaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1efaf4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x1efaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1efaf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1efaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1efafc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1efafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1efb00: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1EFB00u;
    {
        const bool branch_taken_0x1efb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB00u;
            // 0x1efb04: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb00) {
            ctx->pc = 0x1EFC1Cu;
            goto label_1efc1c;
        }
    }
    ctx->pc = 0x1EFB08u;
    // 0x1efb08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1efb08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efb0c: 0x2462f170  addiu       $v0, $v1, -0xE90
    ctx->pc = 0x1efb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x1efb10: 0xac60f170  sw          $zero, -0xE90($v1)
    ctx->pc = 0x1efb10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963568), GPR_U32(ctx, 0));
    // 0x1efb14: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1efb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1efb18: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1efb18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1efb1c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1efb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1efb20: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1efb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1efb24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1efb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1efb28: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1efb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1efb2c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1efb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1efb30: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1efb30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1efb34: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1efb34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1efb38: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1efb38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1efb3c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1efb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1efb40: 0xdba101e0  lqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1efb40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1efb44: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efb44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efb48: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x1efb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efb4c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1efb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1efb50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1efb50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1efb54: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efb54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efb58: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1efb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1efb5c: 0xdba30260  lqc2        $vf3, 0x260($sp)
    ctx->pc = 0x1efb5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1efb60: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1efb60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1efb64: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1efb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1efb68: 0x7ba50260  lq          $a1, 0x260($sp)
    ctx->pc = 0x1efb68u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1efb6c: 0xc047864  jal         func_11E190
    ctx->pc = 0x1EFB6Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB74u);
    ctx->pc = 0x1EFB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB6Cu;
            // 0x1efb70: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB74u; }
        if (ctx->pc != 0x1EFB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFB74u; }
        if (ctx->pc != 0x1EFB74u) { return; }
    }
    ctx->pc = 0x1EFB74u;
    // 0x1efb74: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1EFB74u;
    {
        const bool branch_taken_0x1efb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB74u;
            // 0x1efb78: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb74) {
            ctx->pc = 0x1EFC1Cu;
            goto label_1efc1c;
        }
    }
    ctx->pc = 0x1EFB7Cu;
    // 0x1efb7c: 0x24447790  addiu       $a0, $v0, 0x7790
    ctx->pc = 0x1efb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1efb80: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1efb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1efb84: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1EFB84u;
    {
        const bool branch_taken_0x1efb84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb84) {
            ctx->pc = 0x1EFB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB84u;
            // 0x1efb88: 0xae200940  sw          $zero, 0x940($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFC1Cu;
            goto label_1efc1c;
        }
    }
    ctx->pc = 0x1EFB8Cu;
    // 0x1efb8c: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x1efb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x1efb90: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1efb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1efb94: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1EFB94u;
    {
        const bool branch_taken_0x1efb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFB94u;
            // 0x1efb98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb94) {
            ctx->pc = 0x1EFC18u;
            goto label_1efc18;
        }
    }
    ctx->pc = 0x1EFB9Cu;
    // 0x1efb9c: 0xae220940  sw          $v0, 0x940($s1)
    ctx->pc = 0x1efb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2368), GPR_U32(ctx, 2));
    // 0x1efba0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efba4: 0x78840000  lq          $a0, 0x0($a0)
    ctx->pc = 0x1efba4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1efba8: 0x7fa40270  sq          $a0, 0x270($sp)
    ctx->pc = 0x1efba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), GPR_VEC(ctx, 4));
    // 0x1efbac: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1efbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1efbb0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EFBB0u;
    {
        const bool branch_taken_0x1efbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EFBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBB0u;
            // 0x1efbb4: 0x27b20120  addiu       $s2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbb0) {
            ctx->pc = 0x1EFBC0u;
            goto label_1efbc0;
        }
    }
    ctx->pc = 0x1EFBB8u;
    // 0x1efbb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFBB8u;
    {
        const bool branch_taken_0x1efbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBB8u;
            // 0x1efbbc: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbb8) {
            ctx->pc = 0x1EFBE0u;
            goto label_1efbe0;
        }
    }
    ctx->pc = 0x1EFBC0u;
label_1efbc0:
    // 0x1efbc0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1efbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1efbc4: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1efbc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1efbc8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1efbc8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1efbcc: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EFBCCu;
    {
        const bool branch_taken_0x1efbcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1efbcc) {
            ctx->pc = 0x1EFBD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBCCu;
            // 0x1efbd0: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EFBE0u;
            goto label_1efbe0;
        }
    }
    ctx->pc = 0x1EFBD4u;
    // 0x1efbd4: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1EFBD4u;
    SET_GPR_U32(ctx, 31, 0x1EFBDCu);
    ctx->pc = 0x1EFBD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBD4u;
            // 0x1efbd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBDCu; }
        if (ctx->pc != 0x1EFBDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBDCu; }
        if (ctx->pc != 0x1EFBDCu) { return; }
    }
    ctx->pc = 0x1EFBDCu;
    // 0x1efbdc: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x1efbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1efbe0:
    // 0x1efbe0: 0xc0614c6  jal         func_185318
    ctx->pc = 0x1EFBE0u;
    SET_GPR_U32(ctx, 31, 0x1EFBE8u);
    ctx->pc = 0x1EFBE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFBE0u;
            // 0x1efbe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBE8u; }
        if (ctx->pc != 0x1EFBE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFBE8u; }
        if (ctx->pc != 0x1EFBE8u) { return; }
    }
    ctx->pc = 0x1EFBE8u;
    // 0x1efbe8: 0xdba20270  lqc2        $vf2, 0x270($sp)
    ctx->pc = 0x1efbe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x1efbec: 0xdba10120  lqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1efbecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1efbf0: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x1efbf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1efbf4: 0xdba10130  lqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1efbf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1efbf8: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x1efbf8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1efbfc: 0xdba10140  lqc2        $vf1, 0x140($sp)
    ctx->pc = 0x1efbfcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1efc00: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x1efc00u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1efc04: 0xdba10150  lqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1efc04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1efc08: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x1efc08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1efc0c: 0xfa210930  sqc2        $vf1, 0x930($s1)
    ctx->pc = 0x1efc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 2352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efc10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EFC10u;
    {
        const bool branch_taken_0x1efc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC10u;
            // 0x1efc14: 0xae300948  sw          $s0, 0x948($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2376), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc10) {
            ctx->pc = 0x1EFC1Cu;
            goto label_1efc1c;
        }
    }
    ctx->pc = 0x1EFC18u;
label_1efc18:
    // 0x1efc18: 0xae200940  sw          $zero, 0x940($s1)
    ctx->pc = 0x1efc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2368), GPR_U32(ctx, 0));
label_1efc1c:
    // 0x1efc1c: 0x8e2208c4  lw          $v0, 0x8C4($s1)
    ctx->pc = 0x1efc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2244)));
    // 0x1efc20: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1efc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1efc24: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1efc28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1efc28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1efc2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1efc2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1efc30: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1efc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efc34: 0xc6210944  lwc1        $f1, 0x944($s1)
    ctx->pc = 0x1efc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efc38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1efc38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1efc3c: 0x8e220940  lw          $v0, 0x940($s1)
    ctx->pc = 0x1efc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2368)));
    // 0x1efc40: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1efc40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efc44: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1EFC44u;
    {
        const bool branch_taken_0x1efc44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFC44u;
            // 0x1efc48: 0xe6210944  swc1        $f1, 0x944($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2372), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc44) {
            ctx->pc = 0x1EFD28u;
            goto label_1efd28;
        }
    }
    ctx->pc = 0x1EFC4Cu;
    // 0x1efc4c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1efc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1efc50: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1efc50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1efc54: 0x2462f170  addiu       $v0, $v1, -0xE90
    ctx->pc = 0x1efc54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963568));
    // 0x1efc58: 0xac64f170  sw          $a0, -0xE90($v1)
    ctx->pc = 0x1efc58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963568), GPR_U32(ctx, 4));
    // 0x1efc5c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1efc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1efc60: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1efc60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1efc64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1efc64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1efc68: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1efc68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1efc6c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1efc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1efc70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1efc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1efc74: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1efc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1efc78: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1efc78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1efc7c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x1efc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x1efc80: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1efc80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1efc84: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1efc84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1efc88: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1efc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1efc8c: 0xdba101e0  lqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x1efc8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1efc90: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efc90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efc94: 0xfba10200  sqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1efc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efc98: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1efc98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1efc9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1efc9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1efca0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1efca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efca4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1efca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1efca8: 0xdba30260  lqc2        $vf3, 0x260($sp)
    ctx->pc = 0x1efca8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1efcac: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1efcacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1efcb0: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1efcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1efcb4: 0x7ba50260  lq          $a1, 0x260($sp)
    ctx->pc = 0x1efcb4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1efcb8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1EFCB8u;
    SET_GPR_U32(ctx, 31, 0x1EFCC0u);
    ctx->pc = 0x1EFCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCB8u;
            // 0x1efcbc: 0x48261800  qmfc2.ni    $a2, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCC0u; }
        if (ctx->pc != 0x1EFCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFCC0u; }
        if (ctx->pc != 0x1EFCC0u) { return; }
    }
    ctx->pc = 0x1EFCC0u;
    // 0x1efcc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EFCC0u;
    {
        const bool branch_taken_0x1efcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFCC0u;
            // 0x1efcc4: 0x7bb002c0  lq          $s0, 0x2C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efcc0) {
            ctx->pc = 0x1EFD2Cu;
            goto label_1efd2c;
        }
    }
    ctx->pc = 0x1EFCC8u;
    // 0x1efcc8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1efccc: 0xdba20260  lqc2        $vf2, 0x260($sp)
    ctx->pc = 0x1efcccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x1efcd0: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1efcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1efcd4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1efcd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efcd8: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1efcd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efcdc: 0xd8440010  lqc2        $vf4, 0x10($v0)
    ctx->pc = 0x1efcdcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1efce0: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x1efce0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]);
    // 0x1efce4: 0x4bc1206e  vopmsub.xyz $vf1, $vf4, $vf1
    ctx->pc = 0x1efce4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1efce8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1efce8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efcec: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1efcecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1efcf0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1efcf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1efcf4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1efcf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1efcf8: 0xfba40210  sqc2        $vf4, 0x210($sp)
    ctx->pc = 0x1efcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1efcfc: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1efcfcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1efd00: 0x4a0003bf  vwaitq
    ctx->pc = 0x1efd00u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1efd04: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1efd04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efd08: 0x4a0002ff  vnop
    ctx->pc = 0x1efd08u;
    // NOP operation, no action needed for VU0
    // 0x1efd0c: 0x4a0002ff  vnop
    ctx->pc = 0x1efd0cu;
    // NOP operation, no action needed for VU0
    // 0x1efd10: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1efd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efd14: 0x8e310944  lw          $s1, 0x944($s1)
    ctx->pc = 0x1efd14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2372)));
    // 0x1efd18: 0x48b10800  qmtc2.ni    $s1, $vf1
    ctx->pc = 0x1efd18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 17));
    // 0x1efd1c: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1efd1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1efd20: 0xfba40220  sqc2        $vf4, 0x220($sp)
    ctx->pc = 0x1efd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1efd24: 0x0  nop
    ctx->pc = 0x1efd24u;
    // NOP
label_1efd28:
    // 0x1efd28: 0x7bb002c0  lq          $s0, 0x2C0($sp)
    ctx->pc = 0x1efd28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_1efd2c:
    // 0x1efd2c: 0x7bb102b0  lq          $s1, 0x2B0($sp)
    ctx->pc = 0x1efd2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1efd30: 0x7bb202a0  lq          $s2, 0x2A0($sp)
    ctx->pc = 0x1efd30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1efd34: 0x7bb30290  lq          $s3, 0x290($sp)
    ctx->pc = 0x1efd34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1efd38: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x1efd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1efd3c: 0xc7b602e0  lwc1        $f22, 0x2E0($sp)
    ctx->pc = 0x1efd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1efd40: 0xc7b502d8  lwc1        $f21, 0x2D8($sp)
    ctx->pc = 0x1efd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1efd44: 0xc7b402d0  lwc1        $f20, 0x2D0($sp)
    ctx->pc = 0x1efd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1efd48: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFD48u;
            // 0x1efd4c: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF738u: goto label_1ef738;
            case 0x1EF770u: goto label_1ef770;
            case 0x1EF7D8u: goto label_1ef7d8;
            case 0x1EF7F4u: goto label_1ef7f4;
            case 0x1EF920u: goto label_1ef920;
            case 0x1EF964u: goto label_1ef964;
            case 0x1EF97Cu: goto label_1ef97c;
            case 0x1EF9C8u: goto label_1ef9c8;
            case 0x1EF9E4u: goto label_1ef9e4;
            case 0x1EFA48u: goto label_1efa48;
            case 0x1EFA64u: goto label_1efa64;
            case 0x1EFAC0u: goto label_1efac0;
            case 0x1EFADCu: goto label_1efadc;
            case 0x1EFBC0u: goto label_1efbc0;
            case 0x1EFBE0u: goto label_1efbe0;
            case 0x1EFC18u: goto label_1efc18;
            case 0x1EFC1Cu: goto label_1efc1c;
            case 0x1EFD28u: goto label_1efd28;
            case 0x1EFD2Cu: goto label_1efd2c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EFD50u;
}
