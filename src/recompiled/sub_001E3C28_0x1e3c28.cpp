#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E3C28
// Address: 0x1e3c28 - 0x1e4838
void sub_001E3C28_0x1e3c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3C28_0x1e3c28");
#endif

    ctx->pc = 0x1e3c28u;

    // 0x1e3c28: 0x27bdfc50  addiu       $sp, $sp, -0x3B0
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966352));
    // 0x1e3c2c: 0x7fb00390  sq          $s0, 0x390($sp)
    ctx->pc = 0x1e3c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 16));
    // 0x1e3c30: 0x7fb10380  sq          $s1, 0x380($sp)
    ctx->pc = 0x1e3c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 17));
    // 0x1e3c34: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1e3c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c38: 0x7fb20370  sq          $s2, 0x370($sp)
    ctx->pc = 0x1e3c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 18));
    // 0x1e3c3c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3c40: 0x7fb30360  sq          $s3, 0x360($sp)
    ctx->pc = 0x1e3c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 19));
    // 0x1e3c44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3c44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c48: 0x7fb40350  sq          $s4, 0x350($sp)
    ctx->pc = 0x1e3c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 20));
    // 0x1e3c4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e3c4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c50: 0x7fb50340  sq          $s5, 0x340($sp)
    ctx->pc = 0x1e3c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 21));
    // 0x1e3c54: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1e3c54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c58: 0x7fb60330  sq          $s6, 0x330($sp)
    ctx->pc = 0x1e3c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 22));
    // 0x1e3c5c: 0x7fb70320  sq          $s7, 0x320($sp)
    ctx->pc = 0x1e3c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 23));
    // 0x1e3c60: 0x7fbe0310  sq          $fp, 0x310($sp)
    ctx->pc = 0x1e3c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 30));
    // 0x1e3c64: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x1e3c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x1e3c68: 0xe7b403a0  swc1        $f20, 0x3A0($sp)
    ctx->pc = 0x1e3c68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 928), bits); }
    // 0x1e3c6c: 0x7fa602b0  sq          $a2, 0x2B0($sp)
    ctx->pc = 0x1e3c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 6));
    // 0x1e3c70: 0xafa702a0  sw          $a3, 0x2A0($sp)
    ctx->pc = 0x1e3c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 7));
    // 0x1e3c74: 0xafa902a4  sw          $t1, 0x2A4($sp)
    ctx->pc = 0x1e3c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 9));
label_1e3c78:
    // 0x1e3c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3c7c: 0xc08f42a  jal         func_23D0A8
    ctx->pc = 0x1E3C7Cu;
    SET_GPR_U32(ctx, 31, 0x1E3C84u);
    ctx->pc = 0x1E3C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C7Cu;
            // 0x1e3c80: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23D0A8u;
    if (runtime->hasFunction(0x23D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x23D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C84u; }
        if (ctx->pc != 0x1E3C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23d0a8_0x23d0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C84u; }
        if (ctx->pc != 0x1E3C84u) { return; }
    }
    ctx->pc = 0x1E3C84u;
    // 0x1e3c84: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3c88: 0x1622fffb  bne         $s1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1E3C88u;
    {
        const bool branch_taken_0x1e3c88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C88u;
            // 0x1e3c8c: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3c88) {
            ctx->pc = 0x1E3C78u;
            runtime->cooperativeGuestYield();
            goto label_1e3c78;
        }
    }
    ctx->pc = 0x1E3C90u;
    // 0x1e3c90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3c94: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1e3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1e3c98: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1e3c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3c9c: 0x0  nop
    ctx->pc = 0x1e3c9cu;
    // NOP
label_1e3ca0:
    // 0x1e3ca0: 0x0  nop
    ctx->pc = 0x1e3ca0u;
    // NOP
    // 0x1e3ca4: 0x0  nop
    ctx->pc = 0x1e3ca4u;
    // NOP
    // 0x1e3ca8: 0x0  nop
    ctx->pc = 0x1e3ca8u;
    // NOP
    // 0x1e3cac: 0x0  nop
    ctx->pc = 0x1e3cacu;
    // NOP
    // 0x1e3cb0: 0x0  nop
    ctx->pc = 0x1e3cb0u;
    // NOP
    // 0x1e3cb4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E3CB4u;
    {
        const bool branch_taken_0x1e3cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E3CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CB4u;
            // 0x1e3cb8: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cb4) {
            ctx->pc = 0x1E3CA0u;
            runtime->cooperativeGuestYield();
            goto label_1e3ca0;
        }
    }
    ctx->pc = 0x1E3CBCu;
    // 0x1e3cbc: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1e3cbcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e3cc0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x1e3cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x1e3cc4: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x1e3cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x1e3cc8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e3cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e3ccc: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x1e3cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x1e3cd0: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1E3CD0u;
    {
        const bool branch_taken_0x1e3cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CD0u;
            // 0x1e3cd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cd0) {
            ctx->pc = 0x1E3D00u;
            goto label_1e3d00;
        }
    }
    ctx->pc = 0x1E3CD8u;
    // 0x1e3cd8: 0xda410050  lqc2        $vf1, 0x50($s2)
    ctx->pc = 0x1e3cd8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e3cdc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1e3cdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3ce0: 0xfba10150  sqc2        $vf1, 0x150($sp)
    ctx->pc = 0x1e3ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3ce4: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e3ce4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3ce8: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x1e3ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3cec: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1e3cecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e3cf0: 0xfba10160  sqc2        $vf1, 0x160($sp)
    ctx->pc = 0x1e3cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3cf4: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e3cf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3cf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3CF8u;
    {
        const bool branch_taken_0x1e3cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3CF8u;
            // 0x1e3cfc: 0xfba20170  sqc2        $vf2, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3cf8) {
            ctx->pc = 0x1E3D10u;
            goto label_1e3d10;
        }
    }
    ctx->pc = 0x1E3D00u;
label_1e3d00:
    // 0x1e3d00: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x1e3d00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1e3d04: 0x7fa20190  sq          $v0, 0x190($sp)
    ctx->pc = 0x1e3d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 2));
    // 0x1e3d08: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e3d08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e3d0c: 0x7fa20170  sq          $v0, 0x170($sp)
    ctx->pc = 0x1e3d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 2));
label_1e3d10:
    // 0x1e3d10: 0x4be0016c  vsub.xyzw   $vf5, $vf0, $vf0
    ctx->pc = 0x1e3d10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d14: 0x27b50170  addiu       $s5, $sp, 0x170
    ctx->pc = 0x1e3d14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x1e3d18: 0xdba30170  lqc2        $vf3, 0x170($sp)
    ctx->pc = 0x1e3d18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e3d1c: 0x4be328ec  vsub.xyzw   $vf3, $vf5, $vf3
    ctx->pc = 0x1e3d1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d20: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1e3d20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e3d24: 0x4be118da  vmulz.xyzw  $vf3, $vf3, $vf1z
    ctx->pc = 0x1e3d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d28: 0xfba30180  sqc2        $vf3, 0x180($sp)
    ctx->pc = 0x1e3d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e3d2c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e3d30: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3d34: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e3d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d38: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e3d3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3d3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3d40: 0xdba40190  lqc2        $vf4, 0x190($sp)
    ctx->pc = 0x1e3d40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1e3d44: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e3d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d48: 0xfba401a0  sqc2        $vf4, 0x1A0($sp)
    ctx->pc = 0x1e3d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e3d4c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e3d50: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3d50u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3d54: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x1e3d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d58: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e3d58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e3d5c: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e3d5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d60: 0x4be30868  vadd.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e3d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d64: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x1e3d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3d68: 0x27be0190  addiu       $fp, $sp, 0x190
    ctx->pc = 0x1e3d68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x1e3d6c: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e3d6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3d70: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x1e3d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3d74: 0x3c020903  lui         $v0, 0x903
    ctx->pc = 0x1e3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2307 << 16));
    // 0x1e3d78: 0x3c03ff94  lui         $v1, 0xFF94
    ctx->pc = 0x1e3d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65428 << 16));
    // 0x1e3d7c: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x1e3d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x1e3d80: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1e3d84: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x1e3d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
    // 0x1e3d88: 0x3463e00c  ori         $v1, $v1, 0xE00C
    ctx->pc = 0x1e3d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57356);
    // 0x1e3d8c: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x1e3d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1e3d90: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1e3d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3d94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1e3d94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1e3d98: 0xacc3f170  sw          $v1, -0xE90($a2)
    ctx->pc = 0x1e3d98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963568), GPR_U32(ctx, 3));
    // 0x1e3d9c: 0x24c2f170  addiu       $v0, $a2, -0xE90
    ctx->pc = 0x1e3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963568));
    // 0x1e3da0: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1e3da4: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1e3da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1e3da8: 0x27b700f0  addiu       $s7, $sp, 0xF0
    ctx->pc = 0x1e3da8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1e3dac: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1e3dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1e3db0: 0x3c071008  lui         $a3, 0x1008
    ctx->pc = 0x1e3db0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4104 << 16));
    // 0x1e3db4: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x1e3db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
    // 0x1e3db8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e3db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dbc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1e3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1e3dc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1e3dc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dc4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1e3dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1e3dc8: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e3dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dcc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1e3dccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x1e3dd0: 0x34e7001c  ori         $a3, $a3, 0x1C
    ctx->pc = 0x1e3dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28);
    // 0x1e3dd4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1e3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1e3dd8: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1e3dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1e3ddc: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x1e3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x1e3de0: 0xc078ebe  jal         func_1E3AF8
    ctx->pc = 0x1E3DE0u;
    SET_GPR_U32(ctx, 31, 0x1E3DE8u);
    ctx->pc = 0x1E3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DE0u;
            // 0x1e3de4: 0xfba502f0  sqc2        $vf5, 0x2F0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3AF8u;
    if (runtime->hasFunction(0x1E3AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E3AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DE8u; }
        if (ctx->pc != 0x1E3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3AF8_0x1e3af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DE8u; }
        if (ctx->pc != 0x1E3DE8u) { return; }
    }
    ctx->pc = 0x1E3DE8u;
    // 0x1e3de8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e3de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3dec: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e3decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e3df0: 0x3202000a  andi        $v0, $s0, 0xA
    ctx->pc = 0x1e3df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)10);
    // 0x1e3df4: 0x14430133  bne         $v0, $v1, . + 4 + (0x133 << 2)
    ctx->pc = 0x1E3DF4u;
    {
        const bool branch_taken_0x1e3df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E3DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DF4u;
            // 0x1e3df8: 0xdba502f0  lqc2        $vf5, 0x2F0($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3df4) {
            ctx->pc = 0x1E42C4u;
            goto label_1e42c4;
        }
    }
    ctx->pc = 0x1E3DFCu;
    // 0x1e3dfc: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1e3dfcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e3e00: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x1e3e00u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e3e04: 0x4be320aa  vmul.xyzw   $vf2, $vf4, $vf3
    ctx->pc = 0x1e3e04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e08: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e3e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e0c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e3e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e10: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1e3e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1e3e14: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e3e14u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e3e18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3e1c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e3e1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3e20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3e24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3e28: 0x0  nop
    ctx->pc = 0x1e3e28u;
    // NOP
    // 0x1e3e2c: 0x4500018a  bc1f        . + 4 + (0x18A << 2)
    ctx->pc = 0x1E3E2Cu;
    {
        const bool branch_taken_0x1e3e2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E2Cu;
            // 0x1e3e30: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e2c) {
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E3E34u;
    // 0x1e3e34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1e3e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e3e38: 0x8e430174  lw          $v1, 0x174($s2)
    ctx->pc = 0x1e3e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e3e3c: 0xae420238  sw          $v0, 0x238($s2)
    ctx->pc = 0x1e3e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 2));
    // 0x1e3e40: 0x30630030  andi        $v1, $v1, 0x30
    ctx->pc = 0x1e3e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x1e3e44: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E3E44u;
    {
        const bool branch_taken_0x1e3e44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E44u;
            // 0x1e3e48: 0xae440244  sw          $a0, 0x244($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e44) {
            ctx->pc = 0x1E3E58u;
            goto label_1e3e58;
        }
    }
    ctx->pc = 0x1E3E4Cu;
    // 0x1e3e4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E3E4Cu;
    {
        const bool branch_taken_0x1e3e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E4Cu;
            // 0x1e3e50: 0xda440220  lqc2        $vf4, 0x220($s2) (Delay Slot)
        ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3e4c) {
            ctx->pc = 0x1E3E88u;
            goto label_1e3e88;
        }
    }
    ctx->pc = 0x1E3E54u;
    // 0x1e3e54: 0x0  nop
    ctx->pc = 0x1e3e54u;
    // NOP
label_1e3e58:
    // 0x1e3e58: 0x4be32068  vadd.xyzw   $vf1, $vf4, $vf3
    ctx->pc = 0x1e3e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e5c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e3e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e60: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e3e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e64: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e3e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e3e68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3e6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3e6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3e70: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e3e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e74: 0x4a0002ff  vnop
    ctx->pc = 0x1e3e74u;
    // NOP operation, no action needed for VU0
    // 0x1e3e78: 0x4a0002ff  vnop
    ctx->pc = 0x1e3e78u;
    // NOP operation, no action needed for VU0
    // 0x1e3e7c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1e3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3e80: 0x4be40b3c  vmove.xyzw  $vf4, $vf1
    ctx->pc = 0x1e3e80u;
    ctx->vu0_vf[4] = ctx->vu0_vf[1];
    // 0x1e3e84: 0x0  nop
    ctx->pc = 0x1e3e84u;
    // NOP
label_1e3e88:
    // 0x1e3e88: 0xdba20200  lqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1e3e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e3e8c: 0x4be220aa  vmul.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x1e3e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e90: 0xfba401c0  sqc2        $vf4, 0x1C0($sp)
    ctx->pc = 0x1e3e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e3e94: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e3e94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e98: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e3e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3e9c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e3e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1e3ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ea4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e3ea4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3ea8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e3ea8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3eac: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e3eacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3eb0: 0x0  nop
    ctx->pc = 0x1e3eb0u;
    // NOP
    // 0x1e3eb4: 0x45000169  bc1f        . + 4 + (0x169 << 2)
    ctx->pc = 0x1E3EB4u;
    {
        const bool branch_taken_0x1e3eb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3EB4u;
            // 0x1e3eb8: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3eb4) {
            ctx->pc = 0x1E445Cu;
            goto label_1e445c;
        }
    }
    ctx->pc = 0x1E3EBCu;
    // 0x1e3ebc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e3ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e3ec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e3ec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e3ec4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3ec4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3ec8: 0x0  nop
    ctx->pc = 0x1e3ec8u;
    // NOP
    // 0x1e3ecc: 0x45000164  bc1f        . + 4 + (0x164 << 2)
    ctx->pc = 0x1E3ECCu;
    {
        const bool branch_taken_0x1e3ecc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E3ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3ECCu;
            // 0x1e3ed0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3ecc) {
            ctx->pc = 0x1E4460u;
            goto label_1e4460;
        }
    }
    ctx->pc = 0x1E3ED4u;
    // 0x1e3ed4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3ed8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e3ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3edc: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1e3edcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1e3ee0: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3ee4: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x1e3ee4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x1e3ee8: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x1e3ee8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e3eec: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e3eecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3ef0: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x1e3ef0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x1e3ef4: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x1e3ef4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e3ef8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e3ef8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3efc: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e3efcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f00: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e3f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f04: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e3f04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f08: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e3f08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e3f0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e3f0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e3f10: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e3f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f14: 0x4a0002ff  vnop
    ctx->pc = 0x1e3f14u;
    // NOP operation, no action needed for VU0
    // 0x1e3f18: 0x4a0002ff  vnop
    ctx->pc = 0x1e3f18u;
    // NOP operation, no action needed for VU0
    // 0x1e3f1c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x1e3f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3f20: 0xfba101b0  sqc2        $vf1, 0x1B0($sp)
    ctx->pc = 0x1e3f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e3f24: 0x4be1286c  vsub.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1e3f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f28: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x1e3f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3f2c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e3f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e3f30: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3f34: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e3f34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e3f38: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e3f38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e3f3c: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1e3f3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e3f40: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e3f40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f44: 0xda630000  lqc2        $vf3, 0x0($s3)
    ctx->pc = 0x1e3f44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e3f48: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e3f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f4c: 0x4be428ac  vsub.xyzw   $vf2, $vf5, $vf4
    ctx->pc = 0x1e3f4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f50: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1e3f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e3f54: 0x4be1109a  vmulz.xyzw  $vf2, $vf2, $vf1z
    ctx->pc = 0x1e3f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f58: 0xfba201d0  sqc2        $vf2, 0x1D0($sp)
    ctx->pc = 0x1e3f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3f5c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e3f60: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e3f60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e3f64: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x1e3f64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f68: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x1e3f68u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x1e3f6c: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x1e3f6cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e3f70: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x1e3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x1e3f74: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e3f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e3f78: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e3f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3f7c: 0xfba502f0  sqc2        $vf5, 0x2F0($sp)
    ctx->pc = 0x1e3f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e3f80: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E3F80u;
    SET_GPR_U32(ctx, 31, 0x1E3F88u);
    ctx->pc = 0x1E3F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F80u;
            // 0x1e3f84: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F88u; }
        if (ctx->pc != 0x1E3F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3F88u; }
        if (ctx->pc != 0x1E3F88u) { return; }
    }
    ctx->pc = 0x1E3F88u;
    // 0x1e3f88: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1E3F88u;
    {
        const bool branch_taken_0x1e3f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3F88u;
            // 0x1e3f8c: 0xdba502f0  lqc2        $vf5, 0x2F0($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3f88) {
            ctx->pc = 0x1E401Cu;
            goto label_1e401c;
        }
    }
    ctx->pc = 0x1E3F90u;
    // 0x1e3f90: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e3f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e3f94: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e3f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e3f98: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x1e3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1e3f9c: 0x8c455e6c  lw          $a1, 0x5E6C($v0)
    ctx->pc = 0x1e3f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e3fa0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e3fa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e3fa4: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1e3fa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e3fa8: 0x78640030  lq          $a0, 0x30($v1)
    ctx->pc = 0x1e3fa8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e3fac: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1e3facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1e3fb0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e3fb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3fb4: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1e3fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1e3fb8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e3fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1e3fbc: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1e3fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x1e3fc0: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1e3fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3fc4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e3fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e3fc8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3fcc: 0x3c021008  lui         $v0, 0x1008
    ctx->pc = 0x1e3fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4104 << 16));
    // 0x1e3fd0: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x1e3fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x1e3fd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e3fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e3fd8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1E3FD8u;
    {
        const bool branch_taken_0x1e3fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3FD8u;
            // 0x1e3fdc: 0xdba101c0  lqc2        $vf1, 0x1C0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3fd8) {
            ctx->pc = 0x1E4018u;
            goto label_1e4018;
        }
    }
    ctx->pc = 0x1E3FE0u;
    // 0x1e3fe0: 0x4be1106a  vmul.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e3fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e3fe4: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e3fe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3fe8: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e3fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e3fec: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1e3fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1e3ff0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e3ff0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e3ff4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e3ff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e3ff8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e3ff8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e3ffc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e3ffcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4000: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4000u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4004: 0x0  nop
    ctx->pc = 0x1e4004u;
    // NOP
    // 0x1e4008: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1E4008u;
    {
        const bool branch_taken_0x1e4008 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4008) {
            ctx->pc = 0x1E400Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4008u;
            // 0x1e400c: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E401Cu;
            goto label_1e401c;
        }
    }
    ctx->pc = 0x1E4010u;
    // 0x1e4010: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4010u;
    {
        const bool branch_taken_0x1e4010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4010u;
            // 0x1e4014: 0x36100020  ori         $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4010) {
            ctx->pc = 0x1E401Cu;
            goto label_1e401c;
        }
    }
    ctx->pc = 0x1E4018u;
label_1e4018:
    // 0x1e4018: 0x36100010  ori         $s0, $s0, 0x10
    ctx->pc = 0x1e4018u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
label_1e401c:
    // 0x1e401c: 0x32020020  andi        $v0, $s0, 0x20
    ctx->pc = 0x1e401cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)32);
    // 0x1e4020: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x1E4020u;
    {
        const bool branch_taken_0x1e4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4020u;
            // 0x1e4024: 0xdba30080  lqc2        $vf3, 0x80($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4020) {
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E4028u;
    // 0x1e4028: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1e4028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e402c: 0x4be310ac  vsub.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e402cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4030: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e4030u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4034: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e4034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4038: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x1e4038u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x1e403c: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x1e403cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e4040: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e4040u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4044: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e4044u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4048: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e4048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e404c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e404cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4050: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e4050u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e4054: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e4054u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e4058: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e4058u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e405c: 0x4a0002ff  vnop
    ctx->pc = 0x1e405cu;
    // NOP operation, no action needed for VU0
    // 0x1e4060: 0x4a0002ff  vnop
    ctx->pc = 0x1e4060u;
    // NOP operation, no action needed for VU0
    // 0x1e4064: 0xda430120  lqc2        $vf3, 0x120($s2)
    ctx->pc = 0x1e4064u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e4068: 0xfba20120  sqc2        $vf2, 0x120($sp)
    ctx->pc = 0x1e4068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e406c: 0x4be310da  vmulz.xyzw  $vf3, $vf2, $vf3z
    ctx->pc = 0x1e406cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4070: 0xfa420220  sqc2        $vf2, 0x220($s2)
    ctx->pc = 0x1e4070u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4074: 0xfba301e0  sqc2        $vf3, 0x1E0($sp)
    ctx->pc = 0x1e4074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e4078: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e407c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e407cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4080: 0x4be11918  vmulx.xyzw  $vf4, $vf3, $vf1x
    ctx->pc = 0x1e4080u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4084: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e4084u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4088: 0xdba302b0  lqc2        $vf3, 0x2B0($sp)
    ctx->pc = 0x1e4088u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1e408c: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1e408cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4090: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e4090u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4094: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e4094u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4098: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e4098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e409c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e409cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e40a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e40a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e40a4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e40a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e40a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e40a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e40ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e40acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e40b0: 0x0  nop
    ctx->pc = 0x1e40b0u;
    // NOP
    // 0x1e40b4: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x1E40B4u;
    {
        const bool branch_taken_0x1e40b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e40b4) {
            ctx->pc = 0x1E40B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40B4u;
            // 0x1e40b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E40F8u;
            goto label_1e40f8;
        }
    }
    ctx->pc = 0x1E40BCu;
    // 0x1e40bc: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1e40bcu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e40c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e40c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e40c4: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e40c4u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e40c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e40c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e40cc: 0x0  nop
    ctx->pc = 0x1e40ccu;
    // NOP
    // 0x1e40d0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1E40D0u;
    {
        const bool branch_taken_0x1e40d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e40d0) {
            ctx->pc = 0x1E40D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40D0u;
            // 0x1e40d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E40F8u;
            goto label_1e40f8;
        }
    }
    ctx->pc = 0x1E40D8u;
    // 0x1e40d8: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1e40d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e40dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e40dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e40e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e40e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e40e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e40e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e40e8: 0x0  nop
    ctx->pc = 0x1e40e8u;
    // NOP
    // 0x1e40ec: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1E40ECu;
    {
        const bool branch_taken_0x1e40ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e40ec) {
            ctx->pc = 0x1E40F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40ECu;
            // 0x1e40f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E40F8u;
            goto label_1e40f8;
        }
    }
    ctx->pc = 0x1E40F4u;
    // 0x1e40f4: 0x0  nop
    ctx->pc = 0x1e40f4u;
    // NOP
label_1e40f8:
    // 0x1e40f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E40F8u;
    {
        const bool branch_taken_0x1e40f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E40FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E40F8u;
            // 0x1e40fc: 0xdba30000  lqc2        $vf3, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e40f8) {
            ctx->pc = 0x1E4128u;
            goto label_1e4128;
        }
    }
    ctx->pc = 0x1E4100u;
    // 0x1e4100: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e4100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4104: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x1e4104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4108: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x1e4108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e410c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e410cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4110: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e4110u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4114: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4118: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1e4118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e411c: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x1e411cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4120: 0xfa630000  sqc2        $vf3, 0x0($s3)
    ctx->pc = 0x1e4120u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e4124: 0x0  nop
    ctx->pc = 0x1e4124u;
    // NOP
label_1e4128:
    // 0x1e4128: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1e4128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1e412c: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x1e412cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x1e4130: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e4130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e4134: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e4134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4138: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e4138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e413c: 0x3c021008  lui         $v0, 0x1008
    ctx->pc = 0x1e413cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4104 << 16));
    // 0x1e4140: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e4140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e4144: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e4144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e4148: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x1E4148u;
    {
        const bool branch_taken_0x1e4148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4148u;
            // 0x1e414c: 0xdba202b0  lqc2        $vf2, 0x2B0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4148) {
            ctx->pc = 0x1E42B8u;
            goto label_1e42b8;
        }
    }
    ctx->pc = 0x1E4150u;
    // 0x1e4150: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1e4150u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4154: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1e4154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4158: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x1e4158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e415c: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e415cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4160: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e4160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4164: 0x3c01404c  lui         $at, 0x404C
    ctx->pc = 0x1e4164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16460 << 16));
    // 0x1e4168: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e416c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e416cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4170: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e4170u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4174: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e4174u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4178: 0x7a420130  lq          $v0, 0x130($s2)
    ctx->pc = 0x1e4178u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x1e417c: 0x46000004  c1          0x4
    ctx->pc = 0x1e417cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1e4180: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4180u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4184: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e4184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1e4188: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x1e4188u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x1e418c: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1e418cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1e4190: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e4190u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e4194: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e4194u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e4198: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1e4198u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e419c: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e419cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e41a0: 0x4be320ec  vsub.xyzw   $vf3, $vf4, $vf3
    ctx->pc = 0x1e41a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e41a4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1e41a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1e41a8: 0x4be1286c  vsub.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1e41a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e41ac: 0xda420120  lqc2        $vf2, 0x120($s2)
    ctx->pc = 0x1e41acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e41b0: 0x4be2085a  vmulz.xyzw  $vf1, $vf1, $vf2z
    ctx->pc = 0x1e41b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e41b4: 0xfba10210  sqc2        $vf1, 0x210($sp)
    ctx->pc = 0x1e41b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e41b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e41bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e41bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e41c0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e41c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e41c4: 0x8e84bcf8  lw          $a0, -0x4308($s4)
    ctx->pc = 0x1e41c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950136)));
    // 0x1e41c8: 0x4be118a8  vadd.xyzw   $vf2, $vf3, $vf1
    ctx->pc = 0x1e41c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e41cc: 0x48261000  qmfc2.ni    $a2, $vf2
    ctx->pc = 0x1e41ccu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e41d0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E41D0u;
    SET_GPR_U32(ctx, 31, 0x1E41D8u);
    ctx->pc = 0x1E41D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41D0u;
            // 0x1e41d4: 0x48252000  qmfc2.ni    $a1, $vf4 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41D8u; }
        if (ctx->pc != 0x1E41D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E41D8u; }
        if (ctx->pc != 0x1E41D8u) { return; }
    }
    ctx->pc = 0x1E41D8u;
    // 0x1e41d8: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
    ctx->pc = 0x1E41D8u;
    {
        const bool branch_taken_0x1e41d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E41DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41D8u;
            // 0x1e41dc: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41d8) {
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E41E0u;
    // 0x1e41e0: 0x97a50034  lhu         $a1, 0x34($sp)
    ctx->pc = 0x1e41e0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e41e4: 0x24427790  addiu       $v0, $v0, 0x7790
    ctx->pc = 0x1e41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x1e41e8: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x1e41e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e41ec: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e41ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1e41f0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1e41f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e41f4: 0x78430030  lq          $v1, 0x30($v0)
    ctx->pc = 0x1e41f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1e41f8: 0x78420020  lq          $v0, 0x20($v0)
    ctx->pc = 0x1e41f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1e41fc: 0xdba20200  lqc2        $vf2, 0x200($sp)
    ctx->pc = 0x1e41fcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e4200: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1e4200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1e4204: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e4204u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4208: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1e4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
    // 0x1e420c: 0xae44024c  sw          $a0, 0x24C($s2)
    ctx->pc = 0x1e420cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 4));
    // 0x1e4210: 0xae450250  sw          $a1, 0x250($s2)
    ctx->pc = 0x1e4210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 5));
    // 0x1e4214: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1e4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1e4218: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1e4218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e421c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e421cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4220: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e4220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4224: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1e4224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1e4228: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1e4228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1e422c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e422cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4230: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e4230u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4234: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e4234u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4238: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e423c: 0x0  nop
    ctx->pc = 0x1e423cu;
    // NOP
    // 0x1e4240: 0x45000086  bc1f        . + 4 + (0x86 << 2)
    ctx->pc = 0x1E4240u;
    {
        const bool branch_taken_0x1e4240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4240u;
            // 0x1e4244: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4240) {
            ctx->pc = 0x1E445Cu;
            goto label_1e445c;
        }
    }
    ctx->pc = 0x1E4248u;
    // 0x1e4248: 0x4404a000  mfc1        $a0, $f20
    ctx->pc = 0x1e4248u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e424c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x1e424cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1e4250: 0x4a811840  vaddx.y     $vf1, $vf3, $vf1x
    ctx->pc = 0x1e4250u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4254: 0x8e440174  lw          $a0, 0x174($s2)
    ctx->pc = 0x1e4254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e4258: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x1e4258u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e425c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1e425cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4260: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1e4260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4264: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x1e4264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1e4268: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E4268u;
    {
        const bool branch_taken_0x1e4268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4268u;
            // 0x1e426c: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4268) {
            ctx->pc = 0x1E42A0u;
            goto label_1e42a0;
        }
    }
    ctx->pc = 0x1E4270u;
    // 0x1e4270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1E4270u;
    {
        const bool branch_taken_0x1e4270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4270u;
            // 0x1e4274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4270) {
            ctx->pc = 0x1E42A0u;
            goto label_1e42a0;
        }
    }
    ctx->pc = 0x1E4278u;
    // 0x1e4278: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1e4278u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e427c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e427cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4280: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4280u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4284: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4288: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e4288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e428c: 0x0  nop
    ctx->pc = 0x1e428cu;
    // NOP
    // 0x1e4290: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E4290u;
    {
        const bool branch_taken_0x1e4290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4290) {
            ctx->pc = 0x1E4294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4290u;
            // 0x1e4294: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4298u;
            goto label_1e4298;
        }
    }
    ctx->pc = 0x1E4298u;
label_1e4298:
    // 0x1e4298: 0x10800070  beqz        $a0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1E4298u;
    {
        const bool branch_taken_0x1e4298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4298u;
            // 0x1e429c: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4298) {
            ctx->pc = 0x1E445Cu;
            goto label_1e445c;
        }
    }
    ctx->pc = 0x1E42A0u;
label_1e42a0:
    // 0x1e42a0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e42a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e42a4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e42a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e42a8: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e42a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e42ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e42b0: 0x10000153  b           . + 4 + (0x153 << 2)
    ctx->pc = 0x1E42B0u;
    {
        const bool branch_taken_0x1e42b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42B0u;
            // 0x1e42b4: 0xfa610000  sqc2        $vf1, 0x0($s3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42b0) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E42B8u;
label_1e42b8:
    // 0x1e42b8: 0x97a40034  lhu         $a0, 0x34($sp)
    ctx->pc = 0x1e42b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e42bc: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x1E42BCu;
    {
        const bool branch_taken_0x1e42bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42BCu;
            // 0x1e42c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42bc) {
            ctx->pc = 0x1E4700u;
            goto label_1e4700;
        }
    }
    ctx->pc = 0x1E42C4u;
label_1e42c4:
    // 0x1e42c4: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1e42c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1e42c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E42C8u;
    {
        const bool branch_taken_0x1e42c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42C8u;
            // 0x1e42cc: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42c8) {
            ctx->pc = 0x1E42E0u;
            goto label_1e42e0;
        }
    }
    ctx->pc = 0x1E42D0u;
    // 0x1e42d0: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x1e42d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1e42d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e42d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e42d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E42D8u;
    {
        const bool branch_taken_0x1e42d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42D8u;
            // 0x1e42dc: 0x7ba20010  lq          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42d8) {
            ctx->pc = 0x1E42F8u;
            goto label_1e42f8;
        }
    }
    ctx->pc = 0x1E42E0u;
label_1e42e0:
    // 0x1e42e0: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x1e42e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x1e42e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E42E4u;
    {
        const bool branch_taken_0x1e42e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E42E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E42E4u;
            // 0x1e42e8: 0x8fa4006c  lw          $a0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e42e4) {
            ctx->pc = 0x1E4304u;
            goto label_1e4304;
        }
    }
    ctx->pc = 0x1E42ECu;
    // 0x1e42ec: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x1e42ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1e42f0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1e42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1e42f4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x1e42f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e42f8:
    // 0x1e42f8: 0xae440238  sw          $a0, 0x238($s2)
    ctx->pc = 0x1e42f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 4));
    // 0x1e42fc: 0xae430244  sw          $v1, 0x244($s2)
    ctx->pc = 0x1e42fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 3));
    // 0x1e4300: 0x7e420220  sq          $v0, 0x220($s2)
    ctx->pc = 0x1e4300u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), GPR_VEC(ctx, 2));
label_1e4304:
    // 0x1e4304: 0x8e420174  lw          $v0, 0x174($s2)
    ctx->pc = 0x1e4304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e4308: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1e4308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1e430c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1E430Cu;
    {
        const bool branch_taken_0x1e430c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E430Cu;
            // 0x1e4310: 0x3a220001  xori        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e430c) {
            ctx->pc = 0x1E445Cu;
            goto label_1e445c;
        }
    }
    ctx->pc = 0x1E4314u;
    // 0x1e4314: 0xda440220  lqc2        $vf4, 0x220($s2)
    ctx->pc = 0x1e4314u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1e4318: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e4318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e431c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e431cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4320: 0x4be12b3c  vmove.xyzw  $vf1, $vf5
    ctx->pc = 0x1e4320u;
    ctx->vu0_vf[1] = ctx->vu0_vf[5];
    // 0x1e4324: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4328: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x1e4328u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x1e432c: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x1e432cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e4330: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e4330u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4334: 0x4bc122fe  vopmula.xyz $ACC, $vf4, $vf1
    ctx->pc = 0x1e4334u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]);
    // 0x1e4338: 0x4bc4086e  vopmsub.xyz $vf1, $vf1, $vf4
    ctx->pc = 0x1e4338u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e433c: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x1e433cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4340: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x1e4340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e4344: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x1e4344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4348: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x1e4348u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e434c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e434cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e4350: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e4350u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e4354: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x1e4354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4358: 0x4a0002ff  vnop
    ctx->pc = 0x1e4358u;
    // NOP operation, no action needed for VU0
    // 0x1e435c: 0x4a0002ff  vnop
    ctx->pc = 0x1e435cu;
    // NOP operation, no action needed for VU0
    // 0x1e4360: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x1e4360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4364: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x1e4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4368: 0x4be1286c  vsub.xyzw   $vf1, $vf5, $vf1
    ctx->pc = 0x1e4368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e436c: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x1e436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e4370: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e4370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e4374: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4378: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e4378u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e437c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e437cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e4380: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e4380u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e4384: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1e4384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4388: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e4388u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e438c: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e438cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4390: 0x4be4292c  vsub.xyzw   $vf4, $vf5, $vf4
    ctx->pc = 0x1e4390u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4394: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1e4394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e4398: 0x4be1211a  vmulz.xyzw  $vf4, $vf4, $vf1z
    ctx->pc = 0x1e4398u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e439c: 0xfba40230  sqc2        $vf4, 0x230($sp)
    ctx->pc = 0x1e439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e43a0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e43a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e43a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e43a8: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e43a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e43ac: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1e43acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1e43b0: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x1e43b0u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e43b4: 0x8c44bcf8  lw          $a0, -0x4308($v0)
    ctx->pc = 0x1e43b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
    // 0x1e43b8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e43b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e43bc: 0x4be40868  vadd.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x1e43bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e43c0: 0xc047864  jal         func_11E190
    ctx->pc = 0x1E43C0u;
    SET_GPR_U32(ctx, 31, 0x1E43C8u);
    ctx->pc = 0x1E43C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43C0u;
            // 0x1e43c4: 0x48260800  qmfc2.ni    $a2, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E190u;
    if (runtime->hasFunction(0x11E190u)) {
        auto targetFn = runtime->lookupFunction(0x11E190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43C8u; }
        if (ctx->pc != 0x1E43C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E190_0x11e190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E43C8u; }
        if (ctx->pc != 0x1E43C8u) { return; }
    }
    ctx->pc = 0x1E43C8u;
    // 0x1e43c8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1E43C8u;
    {
        const bool branch_taken_0x1e43c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E43CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E43C8u;
            // 0x1e43cc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e43c8) {
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E43D0u;
    // 0x1e43d0: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1e43d4: 0x24637790  addiu       $v1, $v1, 0x7790
    ctx->pc = 0x1e43d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1e43d8: 0x8c455e6c  lw          $a1, 0x5E6C($v0)
    ctx->pc = 0x1e43d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e43dc: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e43dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e43e0: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1e43e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e43e4: 0x78640030  lq          $a0, 0x30($v1)
    ctx->pc = 0x1e43e4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e43e8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1e43e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1e43ec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e43ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e43f0: 0x8fa300ac  lw          $v1, 0xAC($sp)
    ctx->pc = 0x1e43f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1e43f4: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x1e43f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x1e43f8: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x1e43f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x1e43fc: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x1e43fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4400: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e4404: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e4404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4408: 0x3c021008  lui         $v0, 0x1008
    ctx->pc = 0x1e4408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4104 << 16));
    // 0x1e440c: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x1e440cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
    // 0x1e4410: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e4410u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e4414: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E4414u;
    {
        const bool branch_taken_0x1e4414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4414) {
            ctx->pc = 0x1E4418u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4414u;
            // 0x1e4418: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E441Cu;
    // 0x1e441c: 0xda410220  lqc2        $vf1, 0x220($s2)
    ctx->pc = 0x1e441cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1e4420: 0x4be1106a  vmul.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x1e4420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4424: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x1e4424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4428: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x1e4428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e442c: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1e442cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1e4430: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1e4430u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1e4434: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e4434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4438: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x1e4438u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e443c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e443cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4440: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4440u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4444: 0x0  nop
    ctx->pc = 0x1e4444u;
    // NOP
    // 0x1e4448: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4448u;
    {
        const bool branch_taken_0x1e4448 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4448) {
            ctx->pc = 0x1E444Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4448u;
            // 0x1e444c: 0x36100010  ori         $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E4458u;
            goto label_1e4458;
        }
    }
    ctx->pc = 0x1E4450u;
    // 0x1e4450: 0x36100020  ori         $s0, $s0, 0x20
    ctx->pc = 0x1e4450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)32);
    // 0x1e4454: 0x0  nop
    ctx->pc = 0x1e4454u;
    // NOP
label_1e4458:
    // 0x1e4458: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x1e4458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
label_1e445c:
    // 0x1e445c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1e445cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1e4460:
    // 0x1e4460: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x1E4460u;
    {
        const bool branch_taken_0x1e4460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4460u;
            // 0x1e4464: 0x8fa402a0  lw          $a0, 0x2A0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4460) {
            ctx->pc = 0x1E4710u;
            goto label_1e4710;
        }
    }
    ctx->pc = 0x1E4468u;
    // 0x1e4468: 0x108000aa  beqz        $a0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1E4468u;
    {
        const bool branch_taken_0x1e4468 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4468u;
            // 0x1e446c: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4468) {
            ctx->pc = 0x1E4714u;
            goto label_1e4714;
        }
    }
    ctx->pc = 0x1E4470u;
    // 0x1e4470: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e4470u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4474: 0xfba102c0  sqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1e4474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4478: 0xdba40170  lqc2        $vf4, 0x170($sp)
    ctx->pc = 0x1e4478u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1e447c: 0x4be4092c  vsub.xyzw   $vf4, $vf1, $vf4
    ctx->pc = 0x1e447cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4480: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1e4480u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e4484: 0x4be1211a  vmulz.xyzw  $vf4, $vf4, $vf1z
    ctx->pc = 0x1e4484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4488: 0xfba40240  sqc2        $vf4, 0x240($sp)
    ctx->pc = 0x1e4488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1e448c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x1e448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
    // 0x1e4490: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e4490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e4494: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x1e4494u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4498: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x1e4498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e449c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e44a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e44a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e44a4: 0xdba30200  lqc2        $vf3, 0x200($sp)
    ctx->pc = 0x1e44a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e44a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e44a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e44ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e44acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e44b0: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x1e44b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e44b4: 0x4be118d8  vmulx.xyzw  $vf3, $vf3, $vf1x
    ctx->pc = 0x1e44b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e44b8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e44b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e44bc: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x1e44bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e44c0: 0xfba200e0  sqc2        $vf2, 0xE0($sp)
    ctx->pc = 0x1e44c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e44c4: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x1e44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x1e44c8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x1e44c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e44cc: 0xfba102d0  sqc2        $vf1, 0x2D0($sp)
    ctx->pc = 0x1e44ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e44d0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1e44d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e44d4: 0xdba302d0  lqc2        $vf3, 0x2D0($sp)
    ctx->pc = 0x1e44d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1e44d8: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e44d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e44dc: 0xfba10250  sqc2        $vf1, 0x250($sp)
    ctx->pc = 0x1e44dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e44e0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e44e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e44e4: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1e44e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e44e8: 0xfba502e0  sqc2        $vf5, 0x2E0($sp)
    ctx->pc = 0x1e44e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1e44ec: 0x4be50858  vmulx.xyzw  $vf1, $vf1, $vf5x
    ctx->pc = 0x1e44ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e44f0: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e44f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e44f4: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1e44f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e44f8: 0xfba200c0  sqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1e44f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e44fc: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1e44fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1e4500: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e4500u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4504: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e4504u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4508: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x1e4508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e450c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1e450cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1e4510: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1e4510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4514: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1e4514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4518: 0xc078ebe  jal         func_1E3AF8
    ctx->pc = 0x1E4518u;
    SET_GPR_U32(ctx, 31, 0x1E4520u);
    ctx->pc = 0x1E451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4518u;
            // 0x1e451c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E3AF8u;
    if (runtime->hasFunction(0x1E3AF8u)) {
        auto targetFn = runtime->lookupFunction(0x1E3AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4520u; }
        if (ctx->pc != 0x1E4520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E3AF8_0x1e3af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4520u; }
        if (ctx->pc != 0x1E4520u) { return; }
    }
    ctx->pc = 0x1E4520u;
    // 0x1e4520: 0x3042000a  andi        $v0, $v0, 0xA
    ctx->pc = 0x1e4520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)10);
    // 0x1e4524: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1e4524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e4528: 0x1443007a  bne         $v0, $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x1E4528u;
    {
        const bool branch_taken_0x1e4528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E452Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4528u;
            // 0x1e452c: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4528) {
            ctx->pc = 0x1E4714u;
            goto label_1e4714;
        }
    }
    ctx->pc = 0x1E4530u;
    // 0x1e4530: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1e4530u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4534: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1e4534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4538: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e4538u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e453c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e453cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4540: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e4540u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4544: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1e4544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1e4548: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1e4548u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1e454c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e454cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4550: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e4550u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e4554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4558: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4558u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e455c: 0x0  nop
    ctx->pc = 0x1e455cu;
    // NOP
    // 0x1e4560: 0x4500006b  bc1f        . + 4 + (0x6B << 2)
    ctx->pc = 0x1E4560u;
    {
        const bool branch_taken_0x1e4560 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4560u;
            // 0x1e4564: 0x8fa2002c  lw          $v0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4560) {
            ctx->pc = 0x1E4710u;
            goto label_1e4710;
        }
    }
    ctx->pc = 0x1E4568u;
    // 0x1e4568: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1e4568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e456c: 0xdba10200  lqc2        $vf1, 0x200($sp)
    ctx->pc = 0x1e456cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1e4570: 0xda420220  lqc2        $vf2, 0x220($s2)
    ctx->pc = 0x1e4570u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1e4574: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e4574u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4578: 0xae420238  sw          $v0, 0x238($s2)
    ctx->pc = 0x1e4578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 568), GPR_U32(ctx, 2));
    // 0x1e457c: 0xae430244  sw          $v1, 0x244($s2)
    ctx->pc = 0x1e457cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 580), GPR_U32(ctx, 3));
    // 0x1e4580: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1e4580u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4584: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1e4584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4588: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x1e4588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x1e458c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e458cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4590: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1e4590u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4594: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1e4594u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4598: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e4598u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e459c: 0x0  nop
    ctx->pc = 0x1e459cu;
    // NOP
    // 0x1e45a0: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
    ctx->pc = 0x1E45A0u;
    {
        const bool branch_taken_0x1e45a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E45A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45A0u;
            // 0x1e45a4: 0x8fa202a4  lw          $v0, 0x2A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45a0) {
            ctx->pc = 0x1E4714u;
            goto label_1e4714;
        }
    }
    ctx->pc = 0x1E45A8u;
    // 0x1e45a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e45a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e45ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e45acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e45b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e45b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e45b4: 0x0  nop
    ctx->pc = 0x1e45b4u;
    // NOP
    // 0x1e45b8: 0x45000056  bc1f        . + 4 + (0x56 << 2)
    ctx->pc = 0x1E45B8u;
    {
        const bool branch_taken_0x1e45b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E45BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E45B8u;
            // 0x1e45bc: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45b8) {
            ctx->pc = 0x1E4714u;
            goto label_1e4714;
        }
    }
    ctx->pc = 0x1E45C0u;
    // 0x1e45c0: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x1e45c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e45c4: 0x4be2206c  vsub.xyzw   $vf1, $vf4, $vf2
    ctx->pc = 0x1e45c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e45c8: 0xfba10260  sqc2        $vf1, 0x260($sp)
    ctx->pc = 0x1e45c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e45cc: 0xdba302e0  lqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1e45ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1e45d0: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e45d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e45d4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e45d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e45d8: 0xdba502d0  lqc2        $vf5, 0x2D0($sp)
    ctx->pc = 0x1e45d8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1e45dc: 0x4a8508c4  vsubx.y     $vf3, $vf1, $vf5x
    ctx->pc = 0x1e45dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e45e0: 0x4a830041  vaddy.y     $vf1, $vf0, $vf3y
    ctx->pc = 0x1e45e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e45e4: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e45e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e45e8: 0x4be1212c  vsub.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x1e45e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e45ec: 0x4bc412fe  vopmula.xyz $ACC, $vf2, $vf4
    ctx->pc = 0x1e45ecu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]);
    // 0x1e45f0: 0x4bc220ae  vopmsub.xyz $vf2, $vf4, $vf2
    ctx->pc = 0x1e45f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1e45f4: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x1e45f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e45f8: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1e45f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1e45fc: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1e45fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4600: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1e4600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e4604: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1e4604u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e4608: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e4608u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e460c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1e460cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4610: 0x4a0002ff  vnop
    ctx->pc = 0x1e4610u;
    // NOP operation, no action needed for VU0
    // 0x1e4614: 0x4a0002ff  vnop
    ctx->pc = 0x1e4614u;
    // NOP operation, no action needed for VU0
    // 0x1e4618: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x1e4618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e461c: 0xfba20270  sqc2        $vf2, 0x270($sp)
    ctx->pc = 0x1e461cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4620: 0xdba102c0  lqc2        $vf1, 0x2C0($sp)
    ctx->pc = 0x1e4620u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1e4624: 0x4be208ac  vsub.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x1e4624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4628: 0xfa420220  sqc2        $vf2, 0x220($s2)
    ctx->pc = 0x1e4628u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 544), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e462c: 0xda410120  lqc2        $vf1, 0x120($s2)
    ctx->pc = 0x1e462cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x1e4630: 0x4be1109a  vmulz.xyzw  $vf2, $vf2, $vf1z
    ctx->pc = 0x1e4630u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4634: 0xfba20280  sqc2        $vf2, 0x280($sp)
    ctx->pc = 0x1e4634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4638: 0xdba302e0  lqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1e4638u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1e463c: 0x4be31118  vmulx.xyzw  $vf4, $vf2, $vf3x
    ctx->pc = 0x1e463cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1e4640: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x1e4640u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4644: 0xdba502b0  lqc2        $vf5, 0x2B0($sp)
    ctx->pc = 0x1e4644u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1e4648: 0x4be5086c  vsub.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x1e4648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e464c: 0x4be209fd  vabs.xyzw   $vf2, $vf1
    ctx->pc = 0x1e464cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[1], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e4650: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e4650u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4654: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1e4654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1e4658: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e4658u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e465c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e465cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4660: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1e4660u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e4664: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1e4664u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4668: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e466c: 0x0  nop
    ctx->pc = 0x1e466cu;
    // NOP
    // 0x1e4670: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1E4670u;
    {
        const bool branch_taken_0x1e4670 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4670) {
            ctx->pc = 0x1E4674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4670u;
            // 0x1e4674: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E46A8u;
            goto label_1e46a8;
        }
    }
    ctx->pc = 0x1E4678u;
    // 0x1e4678: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1e4678u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e467c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e467cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4680: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4680u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4684: 0x0  nop
    ctx->pc = 0x1e4684u;
    // NOP
    // 0x1e4688: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1E4688u;
    {
        const bool branch_taken_0x1e4688 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e4688) {
            ctx->pc = 0x1E468Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4688u;
            // 0x1e468c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E46A8u;
            goto label_1e46a8;
        }
    }
    ctx->pc = 0x1E4690u;
    // 0x1e4690: 0x70041789  pexew       $v0, $a0
    ctx->pc = 0x1e4690u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1e4694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4698: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e4698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e469c: 0x0  nop
    ctx->pc = 0x1e469cu;
    // NOP
    // 0x1e46a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E46A0u;
    {
        const bool branch_taken_0x1e46a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e46a0) {
            ctx->pc = 0x1E46A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46A0u;
            // 0x1e46a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E46A8u;
            goto label_1e46a8;
        }
    }
    ctx->pc = 0x1E46A8u;
label_1e46a8:
    // 0x1e46a8: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E46A8u;
    {
        const bool branch_taken_0x1e46a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E46ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E46A8u;
            // 0x1e46ac: 0xdba20000  lqc2        $vf2, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e46a8) {
            ctx->pc = 0x1E46F8u;
            goto label_1e46f8;
        }
    }
    ctx->pc = 0x1E46B0u;
    // 0x1e46b0: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1e46b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e46b4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x1e46b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e46b8: 0xfba10290  sqc2        $vf1, 0x290($sp)
    ctx->pc = 0x1e46b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e46bc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e46c0: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1e46c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e46c4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1e46c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e46c8: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e46c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e46cc: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x1e46ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e46d0: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e46d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e46d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e46d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e46d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e46dc: 0xc6400140  lwc1        $f0, 0x140($s2)
    ctx->pc = 0x1e46dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e46e0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1e46e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1e46e4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1e46e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1e46e8: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1e46e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1e46ec: 0x4a811044  vsubx.y     $vf1, $vf2, $vf1x
    ctx->pc = 0x1e46ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e46f0: 0x4a810081  vaddy.y     $vf2, $vf0, $vf1y
    ctx->pc = 0x1e46f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e46f4: 0xfa620000  sqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1e46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_1e46f8:
    // 0x1e46f8: 0x97a40034  lhu         $a0, 0x34($sp)
    ctx->pc = 0x1e46f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e46fc: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x1e46fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1e4700:
    // 0x1e4700: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x1e4700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e4704: 0xae440250  sw          $a0, 0x250($s2)
    ctx->pc = 0x1e4704u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 4));
    // 0x1e4708: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E4708u;
    {
        const bool branch_taken_0x1e4708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4708u;
            // 0x1e470c: 0xae43024c  sw          $v1, 0x24C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4708) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E4710u;
label_1e4710:
    // 0x1e4710: 0x8fa202a4  lw          $v0, 0x2A4($sp)
    ctx->pc = 0x1e4710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
label_1e4714:
    // 0x1e4714: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1E4714u;
    {
        const bool branch_taken_0x1e4714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4714u;
            // 0x1e4718: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4714) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E471Cu;
    // 0x1e471c: 0x8e450174  lw          $a1, 0x174($s2)
    ctx->pc = 0x1e471cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 372)));
    // 0x1e4720: 0x30a20020  andi        $v0, $a1, 0x20
    ctx->pc = 0x1e4720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
    // 0x1e4724: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1E4724u;
    {
        const bool branch_taken_0x1e4724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4724u;
            // 0x1e4728: 0x3204002a  andi        $a0, $s0, 0x2A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)42);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4724) {
            ctx->pc = 0x1E47FCu;
            goto label_1e47fc;
        }
    }
    ctx->pc = 0x1E472Cu;
    // 0x1e472c: 0x10800033  beqz        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E472Cu;
    {
        const bool branch_taken_0x1e472c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E472Cu;
            // 0x1e4730: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e472c) {
            ctx->pc = 0x1E47FCu;
            goto label_1e47fc;
        }
    }
    ctx->pc = 0x1E4734u;
    // 0x1e4734: 0x8e420238  lw          $v0, 0x238($s2)
    ctx->pc = 0x1e4734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 568)));
    // 0x1e4738: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1e4738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1e473c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e473cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4740: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e4744: 0x3c021008  lui         $v0, 0x1008
    ctx->pc = 0x1e4744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4104 << 16));
    // 0x1e4748: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1e4748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1e474c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1e474cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1e4750: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1E4750u;
    {
        const bool branch_taken_0x1e4750 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4750u;
            // 0x1e4754: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4750) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E4758u;
    // 0x1e4758: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e4758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e475c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1e475cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1e4760: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E4760u;
    {
        const bool branch_taken_0x1e4760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4760u;
            // 0x1e4764: 0x7ba502b0  lq          $a1, 0x2B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4760) {
            ctx->pc = 0x1E4798u;
            goto label_1e4798;
        }
    }
    ctx->pc = 0x1E4768u;
    // 0x1e4768: 0x70051fc9  prot3w      $v1, $a1
    ctx->pc = 0x1e4768u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e476c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e476cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4770: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1e4770u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1e4774: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1e4774u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e4778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e477c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e477cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e4780: 0x0  nop
    ctx->pc = 0x1e4780u;
    // NOP
    // 0x1e4784: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4784u;
    {
        const bool branch_taken_0x1e4784 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E4788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4784u;
            // 0x1e4788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4784) {
            ctx->pc = 0x1E4790u;
            goto label_1e4790;
        }
    }
    ctx->pc = 0x1E478Cu;
    // 0x1e478c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e478cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4790:
    // 0x1e4790: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E4790u;
    {
        const bool branch_taken_0x1e4790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4790u;
            // 0x1e4794: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4790) {
            ctx->pc = 0x1E4800u;
            goto label_1e4800;
        }
    }
    ctx->pc = 0x1E4798u;
label_1e4798:
    // 0x1e4798: 0x3203000a  andi        $v1, $s0, 0xA
    ctx->pc = 0x1e4798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)10);
    // 0x1e479c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1e479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1e47a0: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E47A0u;
    {
        const bool branch_taken_0x1e47a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E47A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47A0u;
            // 0x1e47a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a0) {
            ctx->pc = 0x1E47F4u;
            goto label_1e47f4;
        }
    }
    ctx->pc = 0x1E47A8u;
    // 0x1e47a8: 0x32020002  andi        $v0, $s0, 0x2
    ctx->pc = 0x1e47a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x1e47ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E47ACu;
    {
        const bool branch_taken_0x1e47ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47ACu;
            // 0x1e47b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47ac) {
            ctx->pc = 0x1E47D0u;
            goto label_1e47d0;
        }
    }
    ctx->pc = 0x1E47B4u;
    // 0x1e47b4: 0x97a30034  lhu         $v1, 0x34($sp)
    ctx->pc = 0x1e47b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1e47b8: 0x38840022  xori        $a0, $a0, 0x22
    ctx->pc = 0x1e47b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)34);
    // 0x1e47bc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x1e47bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1e47c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1e47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1e47c4: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x1e47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x1e47c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E47C8u;
    {
        const bool branch_taken_0x1e47c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47C8u;
            // 0x1e47cc: 0x44880a  movz        $s1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c8) {
            ctx->pc = 0x1E47F0u;
            goto label_1e47f0;
        }
    }
    ctx->pc = 0x1E47D0u;
label_1e47d0:
    // 0x1e47d0: 0x32020008  andi        $v0, $s0, 0x8
    ctx->pc = 0x1e47d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8);
    // 0x1e47d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E47D4u;
    {
        const bool branch_taken_0x1e47d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E47D4u;
            // 0x1e47d8: 0x97a30074  lhu         $v1, 0x74($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47d4) {
            ctx->pc = 0x1E47F4u;
            goto label_1e47f4;
        }
    }
    ctx->pc = 0x1E47DCu;
    // 0x1e47dc: 0x38840028  xori        $a0, $a0, 0x28
    ctx->pc = 0x1e47dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)40);
    // 0x1e47e0: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1e47e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1e47e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e47e8: 0xae430250  sw          $v1, 0x250($s2)
    ctx->pc = 0x1e47e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 592), GPR_U32(ctx, 3));
    // 0x1e47ec: 0x44880a  movz        $s1, $v0, $a0
    ctx->pc = 0x1e47ecu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_1e47f0:
    // 0x1e47f0: 0xae45024c  sw          $a1, 0x24C($s2)
    ctx->pc = 0x1e47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 588), GPR_U32(ctx, 5));
label_1e47f4:
    // 0x1e47f4: 0x7ba202b0  lq          $v0, 0x2B0($sp)
    ctx->pc = 0x1e47f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1e47f8: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x1e47f8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
label_1e47fc:
    // 0x1e47fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e47fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1e4800:
    // 0x1e4800: 0x7bb00390  lq          $s0, 0x390($sp)
    ctx->pc = 0x1e4800u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x1e4804: 0x7bb10380  lq          $s1, 0x380($sp)
    ctx->pc = 0x1e4804u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x1e4808: 0x7bb20370  lq          $s2, 0x370($sp)
    ctx->pc = 0x1e4808u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x1e480c: 0x7bb30360  lq          $s3, 0x360($sp)
    ctx->pc = 0x1e480cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 864)));
    // 0x1e4810: 0x7bb40350  lq          $s4, 0x350($sp)
    ctx->pc = 0x1e4810u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1e4814: 0x7bb50340  lq          $s5, 0x340($sp)
    ctx->pc = 0x1e4814u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1e4818: 0x7bb60330  lq          $s6, 0x330($sp)
    ctx->pc = 0x1e4818u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1e481c: 0x7bb70320  lq          $s7, 0x320($sp)
    ctx->pc = 0x1e481cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1e4820: 0x7bbe0310  lq          $fp, 0x310($sp)
    ctx->pc = 0x1e4820u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1e4824: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x1e4824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1e4828: 0xc7b403a0  lwc1        $f20, 0x3A0($sp)
    ctx->pc = 0x1e4828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e482c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E482Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E482Cu;
            // 0x1e4830: 0x27bd03b0  addiu       $sp, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3C78u: goto label_1e3c78;
            case 0x1E3CA0u: goto label_1e3ca0;
            case 0x1E3D00u: goto label_1e3d00;
            case 0x1E3D10u: goto label_1e3d10;
            case 0x1E3E58u: goto label_1e3e58;
            case 0x1E3E88u: goto label_1e3e88;
            case 0x1E4018u: goto label_1e4018;
            case 0x1E401Cu: goto label_1e401c;
            case 0x1E40F8u: goto label_1e40f8;
            case 0x1E4128u: goto label_1e4128;
            case 0x1E4298u: goto label_1e4298;
            case 0x1E42A0u: goto label_1e42a0;
            case 0x1E42B8u: goto label_1e42b8;
            case 0x1E42C4u: goto label_1e42c4;
            case 0x1E42E0u: goto label_1e42e0;
            case 0x1E42F8u: goto label_1e42f8;
            case 0x1E4304u: goto label_1e4304;
            case 0x1E4458u: goto label_1e4458;
            case 0x1E445Cu: goto label_1e445c;
            case 0x1E4460u: goto label_1e4460;
            case 0x1E46A8u: goto label_1e46a8;
            case 0x1E46F8u: goto label_1e46f8;
            case 0x1E4700u: goto label_1e4700;
            case 0x1E4710u: goto label_1e4710;
            case 0x1E4714u: goto label_1e4714;
            case 0x1E4790u: goto label_1e4790;
            case 0x1E4798u: goto label_1e4798;
            case 0x1E47D0u: goto label_1e47d0;
            case 0x1E47F0u: goto label_1e47f0;
            case 0x1E47F4u: goto label_1e47f4;
            case 0x1E47FCu: goto label_1e47fc;
            case 0x1E4800u: goto label_1e4800;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4834u;
    // 0x1e4834: 0x0  nop
    ctx->pc = 0x1e4834u;
    // NOP
}
