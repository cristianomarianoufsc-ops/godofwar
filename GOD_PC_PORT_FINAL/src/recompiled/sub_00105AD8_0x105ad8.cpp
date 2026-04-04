#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00105AD8
// Address: 0x105ad8 - 0x105c30
void sub_00105AD8_0x105ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105AD8_0x105ad8");
#endif

    ctx->pc = 0x105ad8u;

    // 0x105ad8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x105ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x105adc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x105adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x105ae0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x105ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x105ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105ae8: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x105ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x105aec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x105af0: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x105af0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x105af4: 0xdca20040  ld          $v0, 0x40($a1)
    ctx->pc = 0x105af4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x105af8: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x105AF8u;
    {
        const bool branch_taken_0x105af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x105AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105AF8u;
            // 0x105afc: 0x8e060078  lw          $a2, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105af8) {
            ctx->pc = 0x105B10u;
            goto label_105b10;
        }
    }
    ctx->pc = 0x105B00u;
    // 0x105b00: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x105B00u;
    SET_GPR_U32(ctx, 31, 0x105B08u);
    ctx->pc = 0x105B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B00u;
            // 0x105b04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B08u; }
        if (ctx->pc != 0x105B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B08u; }
        if (ctx->pc != 0x105B08u) { return; }
    }
    ctx->pc = 0x105B08u;
    // 0x105b08: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x105B08u;
    {
        const bool branch_taken_0x105b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105B08u;
            // 0x105b0c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b08) {
            ctx->pc = 0x105B40u;
            goto label_105b40;
        }
    }
    ctx->pc = 0x105B10u;
label_105b10:
    // 0x105b10: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x105b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
    // 0x105b14: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x105b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x105b18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x105b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x105b1c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x105b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105b20: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x105b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x105b24: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x105b24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x105b28: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x105b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x105b2c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x105b2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x105b30: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x105b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x105b34: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x105b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x105b38: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x105b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x105b3c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x105b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_105b40:
    // 0x105b40: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x105B40u;
    SET_GPR_U32(ctx, 31, 0x105B48u);
    ctx->pc = 0x105B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105B40u;
            // 0x105b44: 0x260510a0  addiu       $a1, $s0, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B48u; }
        if (ctx->pc != 0x105B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105B48u; }
        if (ctx->pc != 0x105B48u) { return; }
    }
    ctx->pc = 0x105B48u;
    // 0x105b48: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x105b48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b4c: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x105b4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105b50: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x105b50u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105b54: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x105b54u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x105b58: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x105b58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105b5c: 0xdba20090  lqc2        $vf2, 0x90($sp)
    ctx->pc = 0x105b5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105b60: 0xdba300a0  lqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x105b60u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105b64: 0xdba400b0  lqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x105b64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105b68: 0x4be129bc  vmulax.xyzw $ACC, $vf5, $vf1x
    ctx->pc = 0x105b68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x105b6c: 0x4be130bd  vmadday.xyzw $ACC, $vf6, $vf1y
    ctx->pc = 0x105b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b70: 0x4be138be  vmaddaz.xyzw $ACC, $vf7, $vf1z
    ctx->pc = 0x105b70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b74: 0x4be1404b  vmaddw.xyzw $vf1, $vf8, $vf1w
    ctx->pc = 0x105b74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x105b78: 0x4be229bc  vmulax.xyzw $ACC, $vf5, $vf2x
    ctx->pc = 0x105b78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x105b7c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x105b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105b80: 0x4be230bd  vmadday.xyzw $ACC, $vf6, $vf2y
    ctx->pc = 0x105b80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b84: 0x4be238be  vmaddaz.xyzw $ACC, $vf7, $vf2z
    ctx->pc = 0x105b84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b88: 0x4be2408b  vmaddw.xyzw $vf2, $vf8, $vf2w
    ctx->pc = 0x105b88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x105b8c: 0x4be329bc  vmulax.xyzw $ACC, $vf5, $vf3x
    ctx->pc = 0x105b8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x105b90: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x105b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105b94: 0x4be330bd  vmadday.xyzw $ACC, $vf6, $vf3y
    ctx->pc = 0x105b94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b98: 0x4be338be  vmaddaz.xyzw $ACC, $vf7, $vf3z
    ctx->pc = 0x105b98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105b9c: 0x4be340cb  vmaddw.xyzw $vf3, $vf8, $vf3w
    ctx->pc = 0x105b9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x105ba0: 0x4be429bc  vmulax.xyzw $ACC, $vf5, $vf4x
    ctx->pc = 0x105ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x105ba4: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x105ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105ba8: 0x4be430bd  vmadday.xyzw $ACC, $vf6, $vf4y
    ctx->pc = 0x105ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105bac: 0x4be438be  vmaddaz.xyzw $ACC, $vf7, $vf4z
    ctx->pc = 0x105bacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x105bb0: 0x4be4410b  vmaddw.xyzw $vf4, $vf8, $vf4w
    ctx->pc = 0x105bb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x105bb4: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x105bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105bb8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x105bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105bbc: 0xfa0110e0  sqc2        $vf1, 0x10E0($s0)
    ctx->pc = 0x105bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x105bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105bc4: 0xfa0210f0  sqc2        $vf2, 0x10F0($s0)
    ctx->pc = 0x105bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105bc8: 0xfa031100  sqc2        $vf3, 0x1100($s0)
    ctx->pc = 0x105bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4352), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105bcc: 0xfa041110  sqc2        $vf4, 0x1110($s0)
    ctx->pc = 0x105bccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4368), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x105bd0: 0xfa0510a0  sqc2        $vf5, 0x10A0($s0)
    ctx->pc = 0x105bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4256), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x105bd4: 0xfa0610b0  sqc2        $vf6, 0x10B0($s0)
    ctx->pc = 0x105bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4272), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x105bd8: 0xfa0710c0  sqc2        $vf7, 0x10C0($s0)
    ctx->pc = 0x105bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4288), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x105bdc: 0xfa0810d0  sqc2        $vf8, 0x10D0($s0)
    ctx->pc = 0x105bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 4304), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x105be0: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x105be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x105be4: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x105be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x105be8: 0xc040ca2  jal         func_103288
    ctx->pc = 0x105BE8u;
    SET_GPR_U32(ctx, 31, 0x105BF0u);
    ctx->pc = 0x105BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BE8u;
            // 0x105bec: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x103288u;
    if (runtime->hasFunction(0x103288u)) {
        auto targetFn = runtime->lookupFunction(0x103288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BF0u; }
        if (ctx->pc != 0x105BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00103288_0x103288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BF0u; }
        if (ctx->pc != 0x105BF0u) { return; }
    }
    ctx->pc = 0x105BF0u;
    // 0x105bf0: 0xc040be8  jal         func_102FA0
    ctx->pc = 0x105BF0u;
    SET_GPR_U32(ctx, 31, 0x105BF8u);
    ctx->pc = 0x105BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BF0u;
            // 0x105bf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102FA0u;
    if (runtime->hasFunction(0x102FA0u)) {
        auto targetFn = runtime->lookupFunction(0x102FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BF8u; }
        if (ctx->pc != 0x105BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102FA0_0x102fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105BF8u; }
        if (ctx->pc != 0x105BF8u) { return; }
    }
    ctx->pc = 0x105BF8u;
    // 0x105bf8: 0xc040a40  jal         func_102900
    ctx->pc = 0x105BF8u;
    SET_GPR_U32(ctx, 31, 0x105C00u);
    ctx->pc = 0x105BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105BF8u;
            // 0x105bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102900u;
    if (runtime->hasFunction(0x102900u)) {
        auto targetFn = runtime->lookupFunction(0x102900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C00u; }
        if (ctx->pc != 0x105C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102900_0x102900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C00u; }
        if (ctx->pc != 0x105C00u) { return; }
    }
    ctx->pc = 0x105C00u;
    // 0x105c00: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x105c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x105c04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x105c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105c08: 0x8e050074  lw          $a1, 0x74($s0)
    ctx->pc = 0x105c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x105c0c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x105c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x105c10: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x105c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x105c14: 0xc040982  jal         func_102608
    ctx->pc = 0x105C14u;
    SET_GPR_U32(ctx, 31, 0x105C1Cu);
    ctx->pc = 0x105C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x105C14u;
            // 0x105c18: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102608u;
    if (runtime->hasFunction(0x102608u)) {
        auto targetFn = runtime->lookupFunction(0x102608u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C1Cu; }
        if (ctx->pc != 0x105C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102608_0x102608(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x105C1Cu; }
        if (ctx->pc != 0x105C1Cu) { return; }
    }
    ctx->pc = 0x105C1Cu;
    // 0x105c1c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x105c1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x105c20: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x105c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x105c24: 0x3e00008  jr          $ra
    ctx->pc = 0x105C24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x105C24u;
            // 0x105c28: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x105B10u: goto label_105b10;
            case 0x105B40u: goto label_105b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x105C2Cu;
    // 0x105c2c: 0x0  nop
    ctx->pc = 0x105c2cu;
    // NOP
}
