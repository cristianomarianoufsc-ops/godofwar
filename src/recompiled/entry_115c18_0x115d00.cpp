#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_115c18
// Address: 0x115c18 - 0x115d00
void entry_115c18_0x115d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_115c18_0x115d00");
#endif

    ctx->pc = 0x115c18u;

    // 0x115c18: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x115c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x115c1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x115c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115c20: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x115c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x115c24: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115c28: 0xc4820024  lwc1        $f2, 0x24($a0)
    ctx->pc = 0x115c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x115c2c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115c2cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115c30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x115c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115c34: 0x8cab005c  lw          $t3, 0x5C($a1)
    ctx->pc = 0x115c34u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    // 0x115c38: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x115c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x115c3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115c3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x115c40: 0x70632c88  pextlw      $a1, $v1, $v1
    ctx->pc = 0x115c40u;
    SET_GPR_VEC(ctx, 5, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x115c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x115c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115c48: 0x8c8a01f0  lw          $t2, 0x1F0($a0)
    ctx->pc = 0x115c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 496)));
    // 0x115c4c: 0x70431488  pextlw      $v0, $v0, $v1
    ctx->pc = 0x115c4cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x115c50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x115c50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c54: 0x70451488  pextlw      $v0, $v0, $a1
    ctx->pc = 0x115c54u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x115c58: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x115c58u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x115c5c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x115c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x115c60: 0x11400024  beqz        $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x115C60u;
    {
        const bool branch_taken_0x115c60 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115C60u;
            // 0x115c64: 0xfba30010  sqc2        $vf3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c60) {
            ctx->pc = 0x115CF4u;
            goto label_115cf4;
        }
    }
    ctx->pc = 0x115C68u;
    // 0x115c68: 0x700224a9  por         $a0, $zero, $v0
    ctx->pc = 0x115c68u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x115c6c: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x115c6cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
label_115c70:
    // 0x115c70: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x115c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x115c74: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
    ctx->pc = 0x115C74u;
    {
        const bool branch_taken_0x115c74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115C74u;
            // 0x115c78: 0x91180  sll         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c74) {
            ctx->pc = 0x115CDCu;
            goto label_115cdc;
        }
    }
    ctx->pc = 0x115C7Cu;
    // 0x115c7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x115c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x115c80: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x115c80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x115c84: 0x2408000f  addiu       $t0, $zero, 0xF
    ctx->pc = 0x115c84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115c88: 0x4b2021  addu        $a0, $v0, $t3
    ctx->pc = 0x115c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x115c8c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x115c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_115c90:
    // 0x115c90: 0xa81024  and         $v0, $a1, $t0
    ctx->pc = 0x115c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x115c94: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x115C94u;
    {
        const bool branch_taken_0x115c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115C94u;
            // 0x115c98: 0x81027  nor         $v0, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c94) {
            ctx->pc = 0x115CC0u;
            goto label_115cc0;
        }
    }
    ctx->pc = 0x115C9Cu;
    // 0x115c9c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x115c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x115ca0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x115ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x115ca4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x115ca4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x115ca8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x115ca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x115cac: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x115cacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x115cb0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x115cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115cb4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x115cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x115cb8: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x115cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115cbc: 0x0  nop
    ctx->pc = 0x115cbcu;
    // NOP
label_115cc0:
    // 0x115cc0: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x115cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x115cc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x115cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x115cc8: 0x3048fff0  andi        $t0, $v0, 0xFFF0
    ctx->pc = 0x115cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65520);
    // 0x115ccc: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x115CCCu;
    {
        const bool branch_taken_0x115ccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x115CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115CCCu;
            // 0x115cd0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ccc) {
            ctx->pc = 0x115C90u;
            runtime->cooperativeGuestYield();
            goto label_115c90;
        }
    }
    ctx->pc = 0x115CD4u;
    // 0x115cd4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x115cd4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x115cd8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x115cd8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_115cdc:
    // 0x115cdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x115cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x115ce0: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x115ce0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x115ce4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x115CE4u;
    {
        const bool branch_taken_0x115ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115CE4u;
            // 0x115ce8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ce4) {
            ctx->pc = 0x115C70u;
            runtime->cooperativeGuestYield();
            goto label_115c70;
        }
    }
    ctx->pc = 0x115CECu;
    // 0x115cec: 0x7fa40000  sq          $a0, 0x0($sp)
    ctx->pc = 0x115cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 4));
    // 0x115cf0: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x115cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_115cf4:
    // 0x115cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x115CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115CF4u;
            // 0x115cf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x115C70u: goto label_115c70;
            case 0x115C90u: goto label_115c90;
            case 0x115CC0u: goto label_115cc0;
            case 0x115CDCu: goto label_115cdc;
            case 0x115CF4u: goto label_115cf4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x115CFCu;
    // 0x115cfc: 0x0  nop
    ctx->pc = 0x115cfcu;
    // NOP
}
