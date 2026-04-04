#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B588
// Address: 0x15b588 - 0x15b618
void sub_0015B588_0x15b588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B588_0x15b588");
#endif

    ctx->pc = 0x15b588u;

    // 0x15b588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x15b58c: 0x48a41800  qmtc2.ni    $a0, $vf3
    ctx->pc = 0x15b58cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15b590: 0x10a0001d  beqz        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x15B590u;
    {
        const bool branch_taken_0x15b590 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B590u;
            // 0x15b594: 0x24a6ffff  addiu       $a2, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b590) {
            ctx->pc = 0x15B608u;
            goto label_15b608;
        }
    }
    ctx->pc = 0x15B598u;
label_15b598:
    // 0x15b598: 0x3c043a95  lui         $a0, 0x3A95
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)14997 << 16));
    // 0x15b59c: 0x3484ff6c  ori         $a0, $a0, 0xFF6C
    ctx->pc = 0x15b59cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65388);
    // 0x15b5a0: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x15b5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
    // 0x15b5a4: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x15b5a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15b5a8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x15b5a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15b5ac: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x15b5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x15b5b0: 0x3c054780  lui         $a1, 0x4780
    ctx->pc = 0x15b5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18304 << 16));
    // 0x15b5b4: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x15b5b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x15b5b8: 0x70851389  pcpyld      $v0, $a0, $a1
    ctx->pc = 0x15b5b8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x15b5bc: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x15b5bcu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15b5c0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x15b5c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15b5c4: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x15b5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b5c8: 0x4be20840  vaddx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x15b5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15b5cc: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x15b5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15b5d0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x15b5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x15b5d4: 0x4be218bd  vmadday.xyzw $ACC, $vf3, $vf2y
    ctx->pc = 0x15b5d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b5d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x15b5dc: 0x4be008ff  vmsubaw.xyzw $ACC, $vf1, $vf0w
    ctx->pc = 0x15b5dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b5e0: 0x4be2190d  vmsuby.xyzw $vf4, $vf3, $vf2y
    ctx->pc = 0x15b5e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15b5e4: 0x4be0083c  vaddax.xyzw $ACC, $vf1, $vf0x
    ctx->pc = 0x15b5e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x15b5e8: 0x4be220fe  vmsubaz.xyzw $ACC, $vf4, $vf2z
    ctx->pc = 0x15b5e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x15b5ec: 0x4be008cf  vmsubw.xyzw $vf3, $vf1, $vf0w
    ctx->pc = 0x15b5ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x15b5f0: 0x14c2ffe9  bne         $a2, $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x15B5F0u;
    {
        const bool branch_taken_0x15b5f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x15b5f0) {
            ctx->pc = 0x15B598u;
            runtime->cooperativeGuestYield();
            goto label_15b598;
        }
    }
    ctx->pc = 0x15B5F8u;
    // 0x15b5f8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x15b5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x15b5fc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x15b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15b600: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x15b600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15b604: 0xfba30030  sqc2        $vf3, 0x30($sp)
    ctx->pc = 0x15b604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[3]));
label_15b608:
    // 0x15b608: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x15b608u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x15B60Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B60Cu;
            // 0x15b610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B598u: goto label_15b598;
            case 0x15B608u: goto label_15b608;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B614u;
    // 0x15b614: 0x0  nop
    ctx->pc = 0x15b614u;
    // NOP
}
