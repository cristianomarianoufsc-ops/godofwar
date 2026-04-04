#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151FF8
// Address: 0x151ff8 - 0x1520b0
void sub_00151FF8_0x151ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151FF8_0x151ff8");
#endif

    ctx->pc = 0x151ff8u;

    // 0x151ff8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x151ffc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x151ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x152000: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x152000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x152004: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x152004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x152008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15200c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15200cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152010: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x152010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x152014: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x152014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x152018: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x152018u;
    {
        const bool branch_taken_0x152018 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152018u;
            // 0x15201c: 0x8c51c084  lw          $s1, -0x3F7C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152018) {
            ctx->pc = 0x152098u;
            goto label_152098;
        }
    }
    ctx->pc = 0x152020u;
    // 0x152020: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    // 0x152024: 0x0  nop
    ctx->pc = 0x152024u;
    // NOP
label_152028:
    // 0x152028: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15202c: 0x50300b  movn        $a2, $v0, $s0
    ctx->pc = 0x15202cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x152030: 0x8cc200c0  lw          $v0, 0xC0($a2)
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 192)));
    // 0x152034: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x152034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x152038: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x152038u;
    {
        const bool branch_taken_0x152038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x152038) {
            ctx->pc = 0x15203Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x152038u;
            // 0x15203c: 0x8e230074  lw          $v1, 0x74($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x152078u;
            goto label_152078;
        }
    }
    ctx->pc = 0x152040u;
    // 0x152040: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x152040u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x152044: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x152044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152048: 0x8cc300cc  lw          $v1, 0xCC($a2)
    ctx->pc = 0x152048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 204)));
    // 0x15204c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x15204cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x152050: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x152050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x152054: 0x4a230880  vaddx.w     $vf2, $vf1, $vf3x
    ctx->pc = 0x152054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x152058: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x152058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15205c: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x15205cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x152060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x152060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152064: 0xc05d508  jal         func_175420
    ctx->pc = 0x152064u;
    SET_GPR_U32(ctx, 31, 0x15206Cu);
    ctx->pc = 0x152068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x152064u;
            // 0x152068: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175420u;
    if (runtime->hasFunction(0x175420u)) {
        auto targetFn = runtime->lookupFunction(0x175420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15206Cu; }
        if (ctx->pc != 0x15206Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175420_0x175450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15206Cu; }
        if (ctx->pc != 0x15206Cu) { return; }
    }
    ctx->pc = 0x15206Cu;
    // 0x15206c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15206Cu;
    {
        const bool branch_taken_0x15206c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15206Cu;
            // 0x152070: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15206c) {
            ctx->pc = 0x152090u;
            goto label_152090;
        }
    }
    ctx->pc = 0x152074u;
    // 0x152074: 0x0  nop
    ctx->pc = 0x152074u;
    // NOP
label_152078:
    // 0x152078: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x152078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15207c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x152080: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x152080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x152084: 0xac460044  sw          $a2, 0x44($v0)
    ctx->pc = 0x152084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 6));
    // 0x152088: 0xae230074  sw          $v1, 0x74($s1)
    ctx->pc = 0x152088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 3));
    // 0x15208c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15208cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_152090:
    // 0x152090: 0x1600ffe5  bnez        $s0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x152090u;
    {
        const bool branch_taken_0x152090 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x152094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152090u;
            // 0x152094: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152090) {
            ctx->pc = 0x152028u;
            runtime->cooperativeGuestYield();
            goto label_152028;
        }
    }
    ctx->pc = 0x152098u;
label_152098:
    // 0x152098: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x152098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15209c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x15209cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1520a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1520a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1520a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1520a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1520a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1520A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1520ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1520A8u;
            // 0x1520ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x152028u: goto label_152028;
            case 0x152078u: goto label_152078;
            case 0x152090u: goto label_152090;
            case 0x152098u: goto label_152098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1520B0u;
}
