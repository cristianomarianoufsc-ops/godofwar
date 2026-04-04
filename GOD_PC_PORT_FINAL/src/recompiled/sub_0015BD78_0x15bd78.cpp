#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015BD78
// Address: 0x15bd78 - 0x15be30
void sub_0015BD78_0x15bd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BD78_0x15bd78");
#endif

    ctx->pc = 0x15bd78u;

    // 0x15bd78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15bd7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15bd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15bd80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15bd84: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x15BD84u;
    SET_GPR_U32(ctx, 31, 0x15BD8Cu);
    ctx->pc = 0x15BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD84u;
            // 0x15bd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD8Cu; }
        if (ctx->pc != 0x15BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15BD8Cu; }
        if (ctx->pc != 0x15BD8Cu) { return; }
    }
    ctx->pc = 0x15BD8Cu;
    // 0x15bd8c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x15BD8Cu;
    {
        const bool branch_taken_0x15bd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BD8Cu;
            // 0x15bd90: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bd8c) {
            ctx->pc = 0x15BE18u;
            goto label_15be18;
        }
    }
    ctx->pc = 0x15BD94u;
    // 0x15bd94: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x15bd94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x15bd98: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x15bd98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x15bd9c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x15bd9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bda0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x15bda0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15bda4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15bda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15bda8: 0xfa020120  sqc2        $vf2, 0x120($s0)
    ctx->pc = 0x15bda8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15bdac: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x15bdacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15bdb0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15bdb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x15bdb4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x15bdb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x15bdb8: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x15bdb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x15bdbc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x15bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x15bdc0: 0xfa020120  sqc2        $vf2, 0x120($s0)
    ctx->pc = 0x15bdc0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 288), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x15bdc4: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x15bdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15bdc8: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x15bdc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x15bdcc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x15BDCCu;
    {
        const bool branch_taken_0x15bdcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BDCCu;
            // 0x15bdd0: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bdcc) {
            ctx->pc = 0x15BE00u;
            goto label_15be00;
        }
    }
    ctx->pc = 0x15BDD4u;
    // 0x15bdd4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15bdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15bdd8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x15bdd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x15bddc: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x15bddcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x15bde0: 0x4b020840  vaddx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x15bde0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bde4: 0xfa010070  sqc2        $vf1, 0x70($s0)
    ctx->pc = 0x15bde4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15bde8: 0x4be11b3c  vmove.xyzw  $vf1, $vf3
    ctx->pc = 0x15bde8u;
    ctx->vu0_vf[1] = ctx->vu0_vf[3];
    // 0x15bdec: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x15bdecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15bdf0: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x15bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x15bdf4: 0x4a4218c0  vaddx.z     $vf3, $vf3, $vf2x
    ctx->pc = 0x15bdf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x15bdf8: 0xf8630020  sqc2        $vf3, 0x20($v1)
    ctx->pc = 0x15bdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x15bdfc: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x15bdfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_15be00:
    // 0x15be00: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15BE00u;
    {
        const bool branch_taken_0x15be00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE00u;
            // 0x15be04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be00) {
            ctx->pc = 0x15BE1Cu;
            goto label_15be1c;
        }
    }
    ctx->pc = 0x15BE08u;
    // 0x15be08: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x15be08u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x15be0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BE0Cu;
    {
        const bool branch_taken_0x15be0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE0Cu;
            // 0x15be10: 0xf8610030  sqc2        $vf1, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15be0c) {
            ctx->pc = 0x15BE1Cu;
            goto label_15be1c;
        }
    }
    ctx->pc = 0x15BE14u;
    // 0x15be14: 0x0  nop
    ctx->pc = 0x15be14u;
    // NOP
label_15be18:
    // 0x15be18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15be18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15be1c:
    // 0x15be1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15be1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15be20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15be20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15be24: 0x3e00008  jr          $ra
    ctx->pc = 0x15BE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BE24u;
            // 0x15be28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15BE00u: goto label_15be00;
            case 0x15BE18u: goto label_15be18;
            case 0x15BE1Cu: goto label_15be1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15BE2Cu;
    // 0x15be2c: 0x0  nop
    ctx->pc = 0x15be2cu;
    // NOP
}
