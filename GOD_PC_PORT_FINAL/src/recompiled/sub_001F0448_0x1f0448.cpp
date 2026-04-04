#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F0448
// Address: 0x1f0448 - 0x1f0500
void sub_001F0448_0x1f0448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0448_0x1f0448");
#endif

    ctx->pc = 0x1f0448u;

    // 0x1f0448: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f0448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f044c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f044cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f0450: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x1f0450u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x1f0454: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f0454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0458: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x1f0458u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1f045c: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x1f045cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x1f0460: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1f0460u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1f0464: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f0464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f0468: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1f0468u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f046c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f046cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f0470: 0x4be2033c  vmove.xyzw  $vf2, $vf0
    ctx->pc = 0x1f0470u;
    ctx->vu0_vf[2] = ctx->vu0_vf[0];
    // 0x1f0474: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f0474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f0478: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f047c: 0x4be3133d  vmr32.xyzw  $vf3, $vf2
    ctx->pc = 0x1f047cu;
    ctx->vu0_vf[3] = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,1));
    // 0x1f0480: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1f0480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1f0484: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1f0484u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1f0488: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f0488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f048c: 0x4be11b3d  vmr32.xyzw  $vf1, $vf3
    ctx->pc = 0x1f048cu;
    ctx->vu0_vf[1] = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,1));
    // 0x1f0490: 0x46147303  div.s       $f12, $f14, $f20
    ctx->pc = 0x1f0490u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[14] * 0.0f); } else ctx->f[12] = ctx->f[14] / ctx->f[20];
    // 0x1f0494: 0x4be40b3d  vmr32.xyzw  $vf4, $vf1
    ctx->pc = 0x1f0494u;
    ctx->vu0_vf[4] = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,1));
    // 0x1f0498: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1f0498u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1f049c: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x1f049cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f04a0: 0xfa030020  sqc2        $vf3, 0x20($s0)
    ctx->pc = 0x1f04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f04a4: 0xfa020030  sqc2        $vf2, 0x30($s0)
    ctx->pc = 0x1f04a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f04a8: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f04a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f04ac: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x1f04acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x1f04b0: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1f04b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f04b4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f04b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f04b8: 0xc06119a  jal         func_184668
    ctx->pc = 0x1F04B8u;
    SET_GPR_U32(ctx, 31, 0x1F04C0u);
    ctx->pc = 0x1F04BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04B8u;
            // 0x1f04bc: 0xfba40030  sqc2        $vf4, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184668u;
    if (runtime->hasFunction(0x184668u)) {
        auto targetFn = runtime->lookupFunction(0x184668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04C0u; }
        if (ctx->pc != 0x1F04C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184668_0x184668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04C0u; }
        if (ctx->pc != 0x1F04C0u) { return; }
    }
    ctx->pc = 0x1F04C0u;
    // 0x1f04c0: 0x4614b583  div.s       $f22, $f22, $f20
    ctx->pc = 0x1f04c0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[20];
    // 0x1f04c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f04c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04c8: 0xc061122  jal         func_184488
    ctx->pc = 0x1F04C8u;
    SET_GPR_U32(ctx, 31, 0x1F04D0u);
    ctx->pc = 0x1F04CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04C8u;
            // 0x1f04cc: 0x4615b302  mul.s       $f12, $f22, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184488u;
    if (runtime->hasFunction(0x184488u)) {
        auto targetFn = runtime->lookupFunction(0x184488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04D0u; }
        if (ctx->pc != 0x1F04D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184488_0x184488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04D0u; }
        if (ctx->pc != 0x1F04D0u) { return; }
    }
    ctx->pc = 0x1F04D0u;
    // 0x1f04d0: 0x4614bdc3  div.s       $f23, $f23, $f20
    ctx->pc = 0x1f04d0u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[23] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[23] = ctx->f[23] / ctx->f[20];
    // 0x1f04d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f04d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f04d8: 0xc06115e  jal         func_184578
    ctx->pc = 0x1F04D8u;
    SET_GPR_U32(ctx, 31, 0x1F04E0u);
    ctx->pc = 0x1F04DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04D8u;
            // 0x1f04dc: 0x4615bb02  mul.s       $f12, $f23, $f21 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E0u; }
        if (ctx->pc != 0x1F04E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F04E0u; }
        if (ctx->pc != 0x1F04E0u) { return; }
    }
    ctx->pc = 0x1F04E0u;
    // 0x1f04e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f04e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f04e4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f04e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f04e8: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x1f04e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f04ec: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x1f04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f04f0: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1f04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f04f4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f04f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F04F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F04FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F04F8u;
            // 0x1f04fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F0500u;
}
