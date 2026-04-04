#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00169BE0
// Address: 0x169be0 - 0x169c78
void sub_00169BE0_0x169be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169BE0_0x169be0");
#endif

    ctx->pc = 0x169be0u;

    // 0x169be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169be4: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x169be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x169be8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x169be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x169bec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169bf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x169bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169bf4: 0x26020360  addiu       $v0, $s0, 0x360
    ctx->pc = 0x169bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x169bf8: 0x8e030360  lw          $v1, 0x360($s0)
    ctx->pc = 0x169bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x169bfc: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x169BFCu;
    {
        const bool branch_taken_0x169bfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x169C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169BFCu;
            // 0x169c00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169bfc) {
            ctx->pc = 0x169C08u;
            goto label_169c08;
        }
    }
    ctx->pc = 0x169C04u;
    // 0x169c04: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x169c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_169c08:
    // 0x169c08: 0x8e02039c  lw          $v0, 0x39C($s0)
    ctx->pc = 0x169c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 924)));
    // 0x169c0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x169C0Cu;
    {
        const bool branch_taken_0x169c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x169c0c) {
            ctx->pc = 0x169C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169C0Cu;
            // 0x169c10: 0xfba20000  sqc2        $vf2, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169C34u;
            goto label_169c34;
        }
    }
    ctx->pc = 0x169C14u;
    // 0x169c14: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x169C14u;
    {
        const bool branch_taken_0x169c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c14) {
            ctx->pc = 0x169C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169C14u;
            // 0x169c18: 0xda010000  lqc2        $vf1, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169C44u;
            goto label_169c44;
        }
    }
    ctx->pc = 0x169C1Cu;
    // 0x169c1c: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x169c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x169c20: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x169c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x169c24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x169c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x169c28: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x169C28u;
    {
        const bool branch_taken_0x169c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169c28) {
            ctx->pc = 0x169C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169C28u;
            // 0x169c2c: 0xda010000  lqc2        $vf1, 0x0($s0) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x169C44u;
            goto label_169c44;
        }
    }
    ctx->pc = 0x169C30u;
    // 0x169c30: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
label_169c34:
    // 0x169c34: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x169C34u;
    SET_GPR_U32(ctx, 31, 0x169C3Cu);
    ctx->pc = 0x169C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169C34u;
            // 0x169c38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C3Cu; }
        if (ctx->pc != 0x169C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169C3Cu; }
        if (ctx->pc != 0x169C3Cu) { return; }
    }
    ctx->pc = 0x169C3Cu;
    // 0x169c3c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x169c3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169c40: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x169c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_169c44:
    // 0x169c44: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x169c44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x169c48: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x169c48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x169c4c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x169c4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169c50: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x169c50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x169c54: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x169c54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x169c58: 0xda010030  lqc2        $vf1, 0x30($s0)
    ctx->pc = 0x169c58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x169c5c: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x169c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x169c60: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x169c60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169c64: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x169c64u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x169c68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x169c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x169C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169C6Cu;
            // 0x169c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169C08u: goto label_169c08;
            case 0x169C34u: goto label_169c34;
            case 0x169C44u: goto label_169c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169C74u;
    // 0x169c74: 0x0  nop
    ctx->pc = 0x169c74u;
    // NOP
}
