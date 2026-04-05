#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C8EB8
// Address: 0x1c8eb8 - 0x1c8ff8
void sub_001C8EB8_0x1c8eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8EB8_0x1c8eb8");
#endif

    ctx->pc = 0x1c8eb8u;

    // 0x1c8eb8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1c8eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1c8ebc: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x1c8ebcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ec0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x1c8ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x1c8ec4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x1c8ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x1c8ec8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c8ec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8ecc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x1c8eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x1c8ed0: 0x700594a9  por         $s2, $zero, $a1
    ctx->pc = 0x1c8ed0u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 5)));
    // 0x1c8ed4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1c8ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1c8ed8: 0xda220070  lqc2        $vf2, 0x70($s1)
    ctx->pc = 0x1c8ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1c8edc: 0xfba20080  sqc2        $vf2, 0x80($sp)
    ctx->pc = 0x1c8edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8ee0: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1c8ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ee4: 0xda230260  lqc2        $vf3, 0x260($s1)
    ctx->pc = 0x1c8ee4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c8ee8: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x1c8ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
    // 0x1c8eec: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c8eecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8ef0: 0x4a411840  vaddx.z     $vf1, $vf3, $vf1x
    ctx->pc = 0x1c8ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ef4: 0x4be1109a  vmulz.xyzw  $vf2, $vf2, $vf1z
    ctx->pc = 0x1c8ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8ef8: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1c8ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1c8efc: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1c8efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1c8f00: 0x8e2202d8  lw          $v0, 0x2D8($s1)
    ctx->pc = 0x1c8f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x1c8f04: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c8f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c8f08: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C8F08u;
    {
        const bool branch_taken_0x1c8f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f08) {
            ctx->pc = 0x1C8F68u;
            goto label_1c8f68;
        }
    }
    ctx->pc = 0x1C8F10u;
    // 0x1c8f10: 0x8e220174  lw          $v0, 0x174($s1)
    ctx->pc = 0x1c8f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x1c8f14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1c8f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1c8f18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8F18u;
    {
        const bool branch_taken_0x1c8f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c8f18) {
            ctx->pc = 0x1C8F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F18u;
            // 0x1c8f1c: 0x7a2200e0  lq          $v0, 0xE0($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C8F30u;
            goto label_1c8f30;
        }
    }
    ctx->pc = 0x1C8F20u;
    // 0x1c8f20: 0xda2100e0  lqc2        $vf1, 0xE0($s1)
    ctx->pc = 0x1c8f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x1c8f24: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1c8f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f28: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C8F28u;
    {
        const bool branch_taken_0x1c8f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F28u;
            // 0x1c8f2c: 0xfba20090  sqc2        $vf2, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f28) {
            ctx->pc = 0x1C8F70u;
            goto label_1c8f70;
        }
    }
    ctx->pc = 0x1C8F30u;
label_1c8f30:
    // 0x1c8f30: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1c8f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x1c8f34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1c8f34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1c8f38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c8f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c8f3c: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c8f3cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c8f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c8f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c8f44: 0x3c01c300  lui         $at, 0xC300
    ctx->pc = 0x1c8f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49920 << 16));
    // 0x1c8f48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c8f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c8f4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1c8f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1c8f50: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1c8f50u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1c8f54: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c8f54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c8f58: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1c8f58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1c8f5c: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x1c8f5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8F60u;
    {
        const bool branch_taken_0x1c8f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8F60u;
            // 0x1c8f64: 0xfba20090  sqc2        $vf2, 0x90($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8f60) {
            ctx->pc = 0x1C8F70u;
            goto label_1c8f70;
        }
    }
    ctx->pc = 0x1C8F68u;
label_1c8f68:
    // 0x1c8f68: 0x4a830081  vaddy.y     $vf2, $vf0, $vf3y
    ctx->pc = 0x1c8f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f6c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1c8f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
label_1c8f70:
    // 0x1c8f70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c8f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c8f74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1c8f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8f78: 0x8e220320  lw          $v0, 0x320($s1)
    ctx->pc = 0x1c8f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
    // 0x1c8f7c: 0x4a812100  vaddx.y     $vf4, $vf4, $vf1x
    ctx->pc = 0x1c8f7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1c8f80: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c8f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c8f84: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1c8f84u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1c8f88: 0xc62002bc  lwc1        $f0, 0x2BC($s1)
    ctx->pc = 0x1c8f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c8f8c: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1c8f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1c8f90: 0xc44c01f4  lwc1        $f12, 0x1F4($v0)
    ctx->pc = 0x1c8f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c8f94: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1c8f94u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8f98: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x1c8f98u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c8f9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1c8f9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa0: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x1c8fa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x1c8fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c8fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fa8: 0xc0613d0  jal         func_184F40
    ctx->pc = 0x1C8FA8u;
    SET_GPR_U32(ctx, 31, 0x1C8FB0u);
    ctx->pc = 0x1C8FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8FA8u;
            // 0x1c8fac: 0x48272000  qmfc2.ni    $a3, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184F40u;
    if (runtime->hasFunction(0x184F40u)) {
        auto targetFn = runtime->lookupFunction(0x184F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FB0u; }
        if (ctx->pc != 0x1C8FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184F40_0x184f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FB0u; }
        if (ctx->pc != 0x1C8FB0u) { return; }
    }
    ctx->pc = 0x1C8FB0u;
    // 0x1c8fb0: 0xda210120  lqc2        $vf1, 0x120($s1)
    ctx->pc = 0x1c8fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x1c8fb4: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c8fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c8fb8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c8fb8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c8fbc: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1c8fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c8fc0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1c8fc0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c8fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c8fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fc8: 0x70122ca9  por         $a1, $zero, $s2
    ctx->pc = 0x1c8fc8u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 18)));
    // 0x1c8fcc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c8fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8fd0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c8fd0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c8fd4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c8fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c8fd8: 0xc077fda  jal         func_1DFF68
    ctx->pc = 0x1C8FD8u;
    SET_GPR_U32(ctx, 31, 0x1C8FE0u);
    ctx->pc = 0x1DFF68u;
    if (runtime->hasFunction(0x1DFF68u)) {
        auto targetFn = runtime->lookupFunction(0x1DFF68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FE0u; }
        if (ctx->pc != 0x1C8FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFF68_0x1dff68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C8FE0u; }
        if (ctx->pc != 0x1C8FE0u) { return; }
    }
    ctx->pc = 0x1C8FE0u;
    // 0x1c8fe0: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x1c8fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c8fe4: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x1c8fe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c8fe8: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x1c8fe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c8fec: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1c8fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c8ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C8FF0u;
            // 0x1c8ff4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C8F30u: goto label_1c8f30;
            case 0x1C8F68u: goto label_1c8f68;
            case 0x1C8F70u: goto label_1c8f70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C8FF8u;
}
