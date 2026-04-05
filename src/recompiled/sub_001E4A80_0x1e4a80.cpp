#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4A80
// Address: 0x1e4a80 - 0x1e4c20
void sub_001E4A80_0x1e4a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4A80_0x1e4a80");
#endif

    ctx->pc = 0x1e4a80u;

    // 0x1e4a80: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1e4a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1e4a84: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x1e4a84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4a88: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1e4a8c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1e4a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1e4a90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4a90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4a94: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1e4a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1e4a98: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x1e4a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1e4a9c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1e4a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1e4aa0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e4aa0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4aa4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e4aa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1e4aa8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e4aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e4aac: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e4aacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e4ab0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4ab4: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1e4ab4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ab8: 0xda040120  lqc2        $vf4, 0x120($s0)
    ctx->pc = 0x1e4ab8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1e4abc: 0x4be40859  vmuly.xyzw  $vf1, $vf1, $vf4y
    ctx->pc = 0x1e4abcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ac0: 0xd8420020  lqc2        $vf2, 0x20($v0)
    ctx->pc = 0x1e4ac0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e4ac4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e4ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4ac8: 0x4be218ec  vsub.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x1e4ac8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4acc: 0x4be418d9  vmuly.xyzw  $vf3, $vf3, $vf4y
    ctx->pc = 0x1e4accu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ad0: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e4ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ad4: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e4ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4ad8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e4ad8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4adc: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1e4adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4ae0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e4ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4ae4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1e4ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4ae8: 0x4a412058  vmulx.z     $vf1, $vf4, $vf1x
    ctx->pc = 0x1e4ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4aec: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x1e4aecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e4af0: 0x4a440841  vaddy.z     $vf1, $vf1, $vf4y
    ctx->pc = 0x1e4af0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4af4: 0x4be118da  vmulz.xyzw  $vf3, $vf3, $vf1z
    ctx->pc = 0x1e4af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4af8: 0x8e070258  lw          $a3, 0x258($s0)
    ctx->pc = 0x1e4af8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
    // 0x1e4afc: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1e4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1e4b00: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e4b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e4b04: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e4b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e4b08: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e4b08u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4b0c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1e4b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1e4b10: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1e4b10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1e4b14: 0x8e090000  lw          $t1, 0x0($s0)
    ctx->pc = 0x1e4b14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1e4b18: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1e4b18u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1e4b1c: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e4b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e4b20: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1e4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1e4b24: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x1e4b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x1e4b28: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1e4b28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1e4b2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1e4b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4b30: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e4b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4b34: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1e4b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1e4b38: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1e4b38u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4b3c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x1e4b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x1e4b40: 0xac490014  sw          $t1, 0x14($v0)
    ctx->pc = 0x1e4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 9));
    // 0x1e4b44: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e4b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e4b48: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e4b48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e4b4c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e4b50: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e4b54: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e4b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e4b58: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E4B58u;
    SET_GPR_U32(ctx, 31, 0x1E4B60u);
    ctx->pc = 0x1E4B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B58u;
            // 0x1e4b5c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B60u; }
        if (ctx->pc != 0x1E4B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4B60u; }
        if (ctx->pc != 0x1E4B60u) { return; }
    }
    ctx->pc = 0x1E4B60u;
    // 0x1e4b60: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1E4B60u;
    {
        const bool branch_taken_0x1e4b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B60u;
            // 0x1e4b64: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b60) {
            ctx->pc = 0x1E4BF8u;
            goto label_1e4bf8;
        }
    }
    ctx->pc = 0x1E4B68u;
    // 0x1e4b68: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e4b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e4b6c: 0x24447790  addiu       $a0, $v0, 0x7790
    ctx->pc = 0x1e4b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e4b70: 0x8c625e6c  lw          $v0, 0x5E6C($v1)
    ctx->pc = 0x1e4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e4b74: 0x8c91002c  lw          $s1, 0x2C($a0)
    ctx->pc = 0x1e4b74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e4b78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1e4b7c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E4B7Cu;
    {
        const bool branch_taken_0x1e4b7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B7Cu;
            // 0x1e4b80: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b7c) {
            ctx->pc = 0x1E4BF8u;
            goto label_1e4bf8;
        }
    }
    ctx->pc = 0x1E4B84u;
    // 0x1e4b84: 0x30420018  andi        $v0, $v0, 0x18
    ctx->pc = 0x1e4b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24);
    // 0x1e4b88: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E4B88u;
    {
        const bool branch_taken_0x1e4b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4B88u;
            // 0x1e4b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4b88) {
            ctx->pc = 0x1E4BFCu;
            goto label_1e4bfc;
        }
    }
    ctx->pc = 0x1E4B90u;
    // 0x1e4b90: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1e4b90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1e4b94: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1e4b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1e4b98: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e4b98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4b9c: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x1e4b9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x1e4ba0: 0x8c920028  lw          $s2, 0x28($a0)
    ctx->pc = 0x1e4ba0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e4ba4: 0x4be1105a  vmulz.xyzw  $vf1, $vf2, $vf1z
    ctx->pc = 0x1e4ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4ba8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1e4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4bac: 0xdba30030  lqc2        $vf3, 0x30($sp)
    ctx->pc = 0x1e4bacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4bb0: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e4bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4bb4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1e4bb4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e4bb8: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1e4bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4bbc: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1e4bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e4bc0: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x1e4bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x1e4bc4: 0x7a650000  lq          $a1, 0x0($s3)
    ctx->pc = 0x1e4bc4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4bc8: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E4BC8u;
    SET_GPR_U32(ctx, 31, 0x1E4BD0u);
    ctx->pc = 0x1E4BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BC8u;
            // 0x1e4bcc: 0x7ba60040  lq          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BD0u; }
        if (ctx->pc != 0x1E4BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4BD0u; }
        if (ctx->pc != 0x1E4BD0u) { return; }
    }
    ctx->pc = 0x1E4BD0u;
    // 0x1e4bd0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E4BD0u;
    {
        const bool branch_taken_0x1e4bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BD0u;
            // 0x1e4bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bd0) {
            ctx->pc = 0x1E4BFCu;
            goto label_1e4bfc;
        }
    }
    ctx->pc = 0x1E4BD8u;
    // 0x1e4bd8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x1e4bd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4bdc: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x1e4bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x1e4be0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1e4be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1e4be4: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x1e4be4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4be8: 0xae110238  sw          $s1, 0x238($s0)
    ctx->pc = 0x1e4be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 17));
    // 0x1e4bec: 0x7e030220  sq          $v1, 0x220($s0)
    ctx->pc = 0x1e4becu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 544), GPR_VEC(ctx, 3));
    // 0x1e4bf0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4BF0u;
    {
        const bool branch_taken_0x1e4bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4BF0u;
            // 0x1e4bf4: 0xae120244  sw          $s2, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4bf0) {
            ctx->pc = 0x1E4BFCu;
            goto label_1e4bfc;
        }
    }
    ctx->pc = 0x1E4BF8u;
label_1e4bf8:
    // 0x1e4bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e4bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4bfc:
    // 0x1e4bfc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1e4bfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1e4c00: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1e4c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1e4c04: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1e4c04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1e4c08: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1e4c08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1e4c0c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e4c0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1e4c10: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e4c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4C14u;
            // 0x1e4c18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4BF8u: goto label_1e4bf8;
            case 0x1E4BFCu: goto label_1e4bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4C1Cu;
    // 0x1e4c1c: 0x0  nop
    ctx->pc = 0x1e4c1cu;
    // NOP
}
