#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00206BF8
// Address: 0x206bf8 - 0x206f98
void sub_00206BF8_0x206bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206BF8_0x206bf8");
#endif

    ctx->pc = 0x206bf8u;

    // 0x206bf8: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x206bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x206bfc: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x206bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x206c00: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x206c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x206c04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206c08: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x206c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x206c0c: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x206c0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x206c10: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x206c10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x206c14: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x206c14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x206c18: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x206c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x206c1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x206c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x206c20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x206C20u;
    {
        const bool branch_taken_0x206c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c20) {
            ctx->pc = 0x206C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206C20u;
            // 0x206c24: 0x8e110048  lw          $s1, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206C30u;
            goto label_206c30;
        }
    }
    ctx->pc = 0x206C28u;
    // 0x206c28: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x206C28u;
    {
        const bool branch_taken_0x206c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206C28u;
            // 0x206c2c: 0xae0001b8  sw          $zero, 0x1B8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206c28) {
            ctx->pc = 0x206F78u;
            goto label_206f78;
        }
    }
    ctx->pc = 0x206C30u;
label_206c30:
    // 0x206c30: 0x8e230174  lw          $v1, 0x174($s1)
    ctx->pc = 0x206c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x206c34: 0x30620030  andi        $v0, $v1, 0x30
    ctx->pc = 0x206c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
    // 0x206c38: 0x544000d0  bnel        $v0, $zero, . + 4 + (0xD0 << 2)
    ctx->pc = 0x206C38u;
    {
        const bool branch_taken_0x206c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c38) {
            ctx->pc = 0x206C3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206C38u;
            // 0x206c3c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206C40u;
    // 0x206c40: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x206c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x206c44: 0x544000cd  bnel        $v0, $zero, . + 4 + (0xCD << 2)
    ctx->pc = 0x206C44u;
    {
        const bool branch_taken_0x206c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206c44) {
            ctx->pc = 0x206C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206C44u;
            // 0x206c48: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206C4Cu;
    // 0x206c4c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x206c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x206c50: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x206c50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x206c54: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x206c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x206c58: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206C58u;
    {
        const bool branch_taken_0x206c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x206c58) {
            ctx->pc = 0x206C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206C58u;
            // 0x206c5c: 0x7a220050  lq          $v0, 0x50($s1) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206C74u;
            goto label_206c74;
        }
    }
    ctx->pc = 0x206C60u;
    // 0x206c60: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x206c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x206c64: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x206c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x206c68: 0x506200c4  beql        $v1, $v0, . + 4 + (0xC4 << 2)
    ctx->pc = 0x206C68u;
    {
        const bool branch_taken_0x206c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x206c68) {
            ctx->pc = 0x206C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206C68u;
            // 0x206c6c: 0x7bb00180  lq          $s0, 0x180($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206F7Cu;
            goto label_206f7c;
        }
    }
    ctx->pc = 0x206C70u;
    // 0x206c70: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x206c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_206c74:
    // 0x206c74: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x206c74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206c78: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x206c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206c7c: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x206c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x206c80: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x206c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x206c84: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x206c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x206c88: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x206c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x206c8c: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x206c8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x206c90: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x206c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206c94: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x206c94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x206c98: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x206c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206c9c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x206c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x206ca0: 0xdba20130  lqc2        $vf2, 0x130($sp)
    ctx->pc = 0x206ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x206ca4: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x206ca4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206ca8: 0xfba20140  sqc2        $vf2, 0x140($sp)
    ctx->pc = 0x206ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206cac: 0xc081a9c  jal         func_206A70
    ctx->pc = 0x206CACu;
    SET_GPR_U32(ctx, 31, 0x206CB4u);
    ctx->pc = 0x206CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206CACu;
            // 0x206cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206A70u;
    if (runtime->hasFunction(0x206A70u)) {
        auto targetFn = runtime->lookupFunction(0x206A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CB4u; }
        if (ctx->pc != 0x206CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206A70_0x206a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206CB4u; }
        if (ctx->pc != 0x206CB4u) { return; }
    }
    ctx->pc = 0x206CB4u;
    // 0x206cb4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x206cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206cb8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x206cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x206cbc: 0xdba30140  lqc2        $vf3, 0x140($sp)
    ctx->pc = 0x206cbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x206cc0: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x206cc0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]);
    // 0x206cc4: 0x4bc3086e  vopmsub.xyz $vf1, $vf1, $vf3
    ctx->pc = 0x206cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x206cc8: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x206cc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ccc: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x206cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x206cd0: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x206cd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206cd4: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x206cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206cd8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x206cd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x206cdc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x206cdcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206ce0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x206ce0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x206ce4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x206ce4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206ce8: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x206ce8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206cec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x206cecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x206cf0: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x206cf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x206cf4: 0x46000004  c1          0x4
    ctx->pc = 0x206cf4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x206cf8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x206CF8u;
    {
        const bool branch_taken_0x206cf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x206CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206CF8u;
            // 0x206cfc: 0xe60001b8  swc1        $f0, 0x1B8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x206cf8) {
            ctx->pc = 0x206D08u;
            goto label_206d08;
        }
    }
    ctx->pc = 0x206D00u;
    // 0x206d00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x206d00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x206d04: 0xe60001b8  swc1        $f0, 0x1B8($s0)
    ctx->pc = 0x206d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 440), bits); }
label_206d08:
    // 0x206d08: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x206d08u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x206d0c: 0x7ba50140  lq          $a1, 0x140($sp)
    ctx->pc = 0x206d0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x206d10: 0x706510a8  pceqw       $v0, $v1, $a1
    ctx->pc = 0x206d10u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x206d14: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x206d14u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x206d18: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x206d18u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x206d1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x206d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x206d20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x206d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x206d24: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x206d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x206d28: 0x10400093  beqz        $v0, . + 4 + (0x93 << 2)
    ctx->pc = 0x206D28u;
    {
        const bool branch_taken_0x206d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206D28u;
            // 0x206d2c: 0xdba20130  lqc2        $vf2, 0x130($sp) (Delay Slot)
        ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206d28) {
            ctx->pc = 0x206F78u;
            goto label_206f78;
        }
    }
    ctx->pc = 0x206D30u;
    // 0x206d30: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x206d30u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x206d34: 0x4be3106c  vsub.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x206d34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206d38: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x206d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206d3c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x206d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x206d40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x206d40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206d44: 0xfba20150  sqc2        $vf2, 0x150($sp)
    ctx->pc = 0x206d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206d48: 0xdba20130  lqc2        $vf2, 0x130($sp)
    ctx->pc = 0x206d48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x206d4c: 0xdba30150  lqc2        $vf3, 0x150($sp)
    ctx->pc = 0x206d4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x206d50: 0x4a831080  vaddx.y     $vf2, $vf2, $vf3x
    ctx->pc = 0x206d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206d54: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x206d54u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x206d58: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x206d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206d5c: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x206d5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x206d60: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x206d60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206d64: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x206d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x206d68: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x206d68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206d6c: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x206d6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206d70: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x206d70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x206d74: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x206d74u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x206d78: 0x4a0003bf  vwaitq
    ctx->pc = 0x206d78u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x206d7c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x206d7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206d80: 0x4a0002ff  vnop
    ctx->pc = 0x206d80u;
    // NOP operation, no action needed for VU0
    // 0x206d84: 0x4a0002ff  vnop
    ctx->pc = 0x206d84u;
    // NOP operation, no action needed for VU0
    // 0x206d88: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x206d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x206d8c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x206d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206d90: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x206d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x206d94: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x206d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x206d98: 0xc494c658  lwc1        $f20, -0x39A8($a0)
    ctx->pc = 0x206d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206d9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x206d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x206da0: 0xc475e42c  lwc1        $f21, -0x1BD4($v1)
    ctx->pc = 0x206da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294960172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206da4: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x206da4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x206da8: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x206da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x206dac: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x206dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x206db0: 0x40f809  jalr        $v0
    ctx->pc = 0x206DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206DB8u);
        ctx->pc = 0x206DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206DB0u;
            // 0x206db4: 0xfba20080  sqc2        $vf2, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206DB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206C30u: goto label_206c30;
            case 0x206C74u: goto label_206c74;
            case 0x206D08u: goto label_206d08;
            case 0x206F78u: goto label_206f78;
            case 0x206F7Cu: goto label_206f7c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206DB8u; }
            if (ctx->pc != 0x206DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x206DB8u;
    // 0x206db8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x206db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x206dbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x206dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x206dc0: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x206dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x206dc4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x206dc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x206dc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x206dc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206dcc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x206dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x206dd0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x206dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x206dd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x206dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x206dd8: 0xc621016c  lwc1        $f1, 0x16C($s1)
    ctx->pc = 0x206dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x206ddc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x206ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x206de0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x206de0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x206de4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x206de4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x206de8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x206de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x206dec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x206decu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x206df0: 0x4604a503  div.s       $f20, $f20, $f4
    ctx->pc = 0x206df0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[4];
    // 0x206df4: 0x4616a528  max.s       $f20, $f20, $f22
    ctx->pc = 0x206df4u;
    ctx->f[20] = std::max(ctx->f[20], ctx->f[22]);
    // 0x206df8: 0x7ba50040  lq          $a1, 0x40($sp)
    ctx->pc = 0x206df8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206dfc: 0x4602a529  min.s       $f20, $f20, $f2
    ctx->pc = 0x206dfcu;
    ctx->f[20] = std::min(ctx->f[20], ctx->f[2]);
    // 0x206e00: 0x7ba60050  lq          $a2, 0x50($sp)
    ctx->pc = 0x206e00u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206e04: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x206e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x206e08: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x206E08u;
    SET_GPR_U32(ctx, 31, 0x206E10u);
    ctx->pc = 0x206E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E08u;
            // 0x206e0c: 0x7ba70060  lq          $a3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E10u; }
        if (ctx->pc != 0x206E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E10u; }
        if (ctx->pc != 0x206E10u) { return; }
    }
    ctx->pc = 0x206E10u;
    // 0x206e10: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x206e10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206e14: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x206e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x206e18: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x206e18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206e1c: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x206e1cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206e20: 0xc060fd8  jal         func_183F60
    ctx->pc = 0x206E20u;
    SET_GPR_U32(ctx, 31, 0x206E28u);
    ctx->pc = 0x206E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E20u;
            // 0x206e24: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183F60u;
    if (runtime->hasFunction(0x183F60u)) {
        auto targetFn = runtime->lookupFunction(0x183F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E28u; }
        if (ctx->pc != 0x206E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183f60_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E28u; }
        if (ctx->pc != 0x206E28u) { return; }
    }
    ctx->pc = 0x206E28u;
    // 0x206e28: 0x4614ab02  mul.s       $f12, $f21, $f20
    ctx->pc = 0x206e28u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x206e2c: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x206e2cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x206e30: 0x70102ca9  por         $a1, $zero, $s0
    ctx->pc = 0x206e30u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 16)));
    // 0x206e34: 0xc061084  jal         func_184210
    ctx->pc = 0x206E34u;
    SET_GPR_U32(ctx, 31, 0x206E3Cu);
    ctx->pc = 0x206E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x206E34u;
            // 0x206e38: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (runtime->hasFunction(0x184210u)) {
        auto targetFn = runtime->lookupFunction(0x184210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E3Cu; }
        if (ctx->pc != 0x206E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184210_0x184210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206E3Cu; }
        if (ctx->pc != 0x206E3Cu) { return; }
    }
    ctx->pc = 0x206E3Cu;
    // 0x206e3c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x206e3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206e40: 0x4be3186a  vmul.xyzw   $vf1, $vf3, $vf3
    ctx->pc = 0x206e40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206e44: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x206e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206e48: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x206e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206e4c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x206e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206e50: 0x4b011083  vaddw.x     $vf2, $vf2, $vf1w
    ctx->pc = 0x206e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206e54: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x206e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206e58: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x206e58u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x206e5c: 0x4a0003bf  vwaitq
    ctx->pc = 0x206e5cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x206e60: 0x4be0191c  vmulq.xyzw  $vf4, $vf3, $Q
    ctx->pc = 0x206e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x206e64: 0x4a0002ff  vnop
    ctx->pc = 0x206e64u;
    // NOP operation, no action needed for VU0
    // 0x206e68: 0x4a0002ff  vnop
    ctx->pc = 0x206e68u;
    // NOP operation, no action needed for VU0
    // 0x206e6c: 0xfba40120  sqc2        $vf4, 0x120($sp)
    ctx->pc = 0x206e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x206e70: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x206e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x206e74: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x206e74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x206e78: 0x4be12058  vmulx.xyzw  $vf1, $vf4, $vf1x
    ctx->pc = 0x206e78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206e7c: 0x4be120da  vmulz.xyzw  $vf3, $vf4, $vf1z
    ctx->pc = 0x206e7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x206e80: 0x4be12159  vmuly.xyzw  $vf5, $vf4, $vf1y
    ctx->pc = 0x206e80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x206e84: 0x4be12118  vmulx.xyzw  $vf4, $vf4, $vf1x
    ctx->pc = 0x206e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x206e88: 0x4a832842  vaddz.y     $vf1, $vf5, $vf3z
    ctx->pc = 0x206e88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206e8c: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x206e8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x206e90: 0x4b011045  vsuby.x     $vf1, $vf2, $vf1y
    ctx->pc = 0x206e90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206e94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x206e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206e98: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x206e98u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206e9c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ea0: 0x4b032883  vaddw.x     $vf2, $vf5, $vf3w
    ctx->pc = 0x206ea0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x206ea4: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x206ea4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x206ea8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206eac: 0x4b051847  vsubw.x     $vf1, $vf3, $vf5w
    ctx->pc = 0x206eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206eb0: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x206eb0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x206eb4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x206eb4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206eb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206eb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ebc: 0x70c22b89  pcpyld      $a1, $a2, $v0
    ctx->pc = 0x206ebcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x206ec0: 0x4b032847  vsubw.x     $vf1, $vf5, $vf3w
    ctx->pc = 0x206ec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ec4: 0x70a32cc8  ppacw       $a1, $a1, $v1
    ctx->pc = 0x206ec4u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 5), GPR_VEC(ctx, 3)));
    // 0x206ec8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x206ec8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206ecc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206eccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ed0: 0x7fa500b0  sq          $a1, 0xB0($sp)
    ctx->pc = 0x206ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 5));
    // 0x206ed4: 0x4b032042  vaddz.x     $vf1, $vf4, $vf3z
    ctx->pc = 0x206ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ed8: 0xdba20150  lqc2        $vf2, 0x150($sp)
    ctx->pc = 0x206ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x206edc: 0x4b011044  vsubx.x     $vf1, $vf2, $vf1x
    ctx->pc = 0x206edcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ee0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x206ee0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ee4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x206ee4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206ee8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206eec: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x206eecu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x206ef0: 0x4a841843  vaddw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x206ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ef4: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x206ef4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206ef8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x206ef8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206efc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x206efcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f00: 0x70e22389  pcpyld      $a0, $a3, $v0
    ctx->pc = 0x206f00u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x206f04: 0x4a841847  vsubw.y     $vf1, $vf3, $vf4w
    ctx->pc = 0x206f04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206f08: 0x708324c8  ppacw       $a0, $a0, $v1
    ctx->pc = 0x206f08u;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x206f0c: 0x4b0518c3  vaddw.x     $vf3, $vf3, $vf5w
    ctx->pc = 0x206f0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x206f10: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x206f10u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x206f14: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x206f14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f18: 0x4b052101  vaddy.x     $vf4, $vf4, $vf5y
    ctx->pc = 0x206f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x206f1c: 0x4b010041  vaddy.x     $vf1, $vf0, $vf1y
    ctx->pc = 0x206f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206f20: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x206f20u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206f24: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x206f24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f28: 0x7fa400c0  sq          $a0, 0xC0($sp)
    ctx->pc = 0x206f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 4));
    // 0x206f2c: 0x4b041044  vsubx.x     $vf1, $vf2, $vf4x
    ctx->pc = 0x206f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x206f30: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x206f30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x206f34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x206f34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f38: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x206f38u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x206f3c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x206f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206f40: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x206f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x206f44: 0x71021389  pcpyld      $v0, $t0, $v0
    ctx->pc = 0x206f44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x206f48: 0x7fa50040  sq          $a1, 0x40($sp)
    ctx->pc = 0x206f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 5));
    // 0x206f4c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x206f4cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x206f50: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x206f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x206f54: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x206f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x206f58: 0x7e250050  sq          $a1, 0x50($s1)
    ctx->pc = 0x206f58u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 5));
    // 0x206f5c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x206f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206f60: 0x7e220060  sq          $v0, 0x60($s1)
    ctx->pc = 0x206f60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), GPR_VEC(ctx, 2));
    // 0x206f64: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x206f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206f68: 0x7e220070  sq          $v0, 0x70($s1)
    ctx->pc = 0x206f68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), GPR_VEC(ctx, 2));
    // 0x206f6c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x206f6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x206f70: 0x7e220080  sq          $v0, 0x80($s1)
    ctx->pc = 0x206f70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 128), GPR_VEC(ctx, 2));
    // 0x206f74: 0x0  nop
    ctx->pc = 0x206f74u;
    // NOP
label_206f78:
    // 0x206f78: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x206f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_206f7c:
    // 0x206f7c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x206f7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x206f80: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x206f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x206f84: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x206f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x206f88: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x206f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x206f8c: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x206f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x206f90: 0x3e00008  jr          $ra
    ctx->pc = 0x206F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206F90u;
            // 0x206f94: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206C30u: goto label_206c30;
            case 0x206C74u: goto label_206c74;
            case 0x206D08u: goto label_206d08;
            case 0x206F78u: goto label_206f78;
            case 0x206F7Cu: goto label_206f7c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206F98u;
}
