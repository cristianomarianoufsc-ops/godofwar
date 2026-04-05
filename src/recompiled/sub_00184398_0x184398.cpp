#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184398
// Address: 0x184398 - 0x184488
void sub_00184398_0x184398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184398_0x184398");
#endif

    ctx->pc = 0x184398u;

    // 0x184398: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x184398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x18439c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x18439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1843a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1843a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1843a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1843a8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x1843a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1843ac: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1843acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1843b0: 0xc0610d2  jal         func_184348
    ctx->pc = 0x1843B0u;
    SET_GPR_U32(ctx, 31, 0x1843B8u);
    ctx->pc = 0x1843B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843B0u;
            // 0x1843b4: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x184348u;
    if (runtime->hasFunction(0x184348u)) {
        auto targetFn = runtime->lookupFunction(0x184348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843B8u; }
        if (ctx->pc != 0x1843B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184348_0x184348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843B8u; }
        if (ctx->pc != 0x1843B8u) { return; }
    }
    ctx->pc = 0x1843B8u;
    // 0x1843b8: 0xc0610d2  jal         func_184348
    ctx->pc = 0x1843B8u;
    SET_GPR_U32(ctx, 31, 0x1843C0u);
    ctx->pc = 0x1843BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843B8u;
            // 0x1843bc: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184348u;
    if (runtime->hasFunction(0x184348u)) {
        auto targetFn = runtime->lookupFunction(0x184348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843C0u; }
        if (ctx->pc != 0x1843C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184348_0x184348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843C0u; }
        if (ctx->pc != 0x1843C0u) { return; }
    }
    ctx->pc = 0x1843C0u;
    // 0x1843c0: 0xc0610d2  jal         func_184348
    ctx->pc = 0x1843C0u;
    SET_GPR_U32(ctx, 31, 0x1843C8u);
    ctx->pc = 0x1843C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843C0u;
            // 0x1843c4: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184348u;
    if (runtime->hasFunction(0x184348u)) {
        auto targetFn = runtime->lookupFunction(0x184348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843C8u; }
        if (ctx->pc != 0x1843C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184348_0x184348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843C8u; }
        if (ctx->pc != 0x1843C8u) { return; }
    }
    ctx->pc = 0x1843C8u;
    // 0x1843c8: 0xc0610d2  jal         func_184348
    ctx->pc = 0x1843C8u;
    SET_GPR_U32(ctx, 31, 0x1843D0u);
    ctx->pc = 0x1843CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843C8u;
            // 0x1843cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184348u;
    if (runtime->hasFunction(0x184348u)) {
        auto targetFn = runtime->lookupFunction(0x184348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843D0u; }
        if (ctx->pc != 0x1843D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184348_0x184348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843D0u; }
        if (ctx->pc != 0x1843D0u) { return; }
    }
    ctx->pc = 0x1843D0u;
    // 0x1843d0: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1843d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1843d4: 0x4406b000  mfc1        $a2, $f22
    ctx->pc = 0x1843d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1843d8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1843d8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1843dc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1843dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1843e0: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1843e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1843e4: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1843e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1843e8: 0x70433cc8  ppacw       $a3, $v0, $v1
    ctx->pc = 0x1843e8u;
    SET_GPR_VEC(ctx, 7, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1843ec: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x1843ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1843f0: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1843f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1843f4: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1843f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1843f8: 0x3c043a95  lui         $a0, 0x3A95
    ctx->pc = 0x1843f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14997 << 16));
    // 0x1843fc: 0x3484ff6c  ori         $a0, $a0, 0xFF6C
    ctx->pc = 0x1843fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65388);
    // 0x184400: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x184400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x184404: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x184404u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x184408: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x184408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x18440c: 0x3c054780  lui         $a1, 0x4780
    ctx->pc = 0x18440cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18304 << 16));
    // 0x184410: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x184410u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x184414: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x184414u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x184418: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x184418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18441c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x18441cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x184420: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x184420u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x184424: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x184424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x184428: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x184428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x18442c: 0x4be30840  vaddx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x18442cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x184430: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x184430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x184434: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x184434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184438: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x184438u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18443c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18443cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184440: 0x4be008ff  vmsubaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x184440u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x184444: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x184444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x184448: 0x4be3108d  vmsuby.xyzw $vf2, $vf2, $vf3y
    ctx->pc = 0x184448u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x18444c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x18444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x184450: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x184450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x184454: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x184454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184458: 0x4be310fe  vmsubaz.xyzw $ACC, $vf2, $vf3z
    ctx->pc = 0x184458u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x18445c: 0xfba20030  sqc2        $vf2, 0x30($sp)
    ctx->pc = 0x18445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x184460: 0x4be0084f  vmsubw.xyzw $vf1, $vf1, $vf0w
    ctx->pc = 0x184460u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x184464: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x184464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x184468: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x184468u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18446c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18446cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184470: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x184470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x184474: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x184474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x184478: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x184478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18447c: 0x3e00008  jr          $ra
    ctx->pc = 0x18447Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18447Cu;
            // 0x184480: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184484u;
    // 0x184484: 0x0  nop
    ctx->pc = 0x184484u;
    // NOP
}
