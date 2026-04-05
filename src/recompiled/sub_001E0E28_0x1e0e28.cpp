#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E0E28
// Address: 0x1e0e28 - 0x1e0e98
void sub_001E0E28_0x1e0e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0E28_0x1e0e28");
#endif

    ctx->pc = 0x1e0e28u;

    // 0x1e0e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e0e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e0e2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e0e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e0e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e0e34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1e0e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0e38: 0x78420050  lq          $v0, 0x50($v0)
    ctx->pc = 0x1e0e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1e0e3c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1E0E3Cu;
    {
        const bool branch_taken_0x1e0e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E3Cu;
            // 0x1e0e40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0e3c) {
            ctx->pc = 0x1E0E88u;
            goto label_1e0e88;
        }
    }
    ctx->pc = 0x1E0E44u;
    // 0x1e0e44: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1e0e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1e0e48: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1e0e48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x1e0e4c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1e0e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1e0e50: 0x40f809  jalr        $v0
    ctx->pc = 0x1E0E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E0E58u);
        ctx->pc = 0x1E0E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E50u;
            // 0x1e0e54: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0E58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0E88u: goto label_1e0e88;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0E58u; }
            if (ctx->pc != 0x1E0E58u) { return; }
        }
        }
    }
    ctx->pc = 0x1E0E58u;
    // 0x1e0e58: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x1e0e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x1e0e5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e0e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0e60: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0e60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e64: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1e0e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1e0e68: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1e0e68u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e0e6c: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1e0e6cu;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e0e70: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0e74: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1e0e74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0e78: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1e0e78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e0e7c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1e0e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1e0e80: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1e0e80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e0e84: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e0e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e0e88:
    // 0x1e0e88: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e0e88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e0e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e0e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0E90u;
            // 0x1e0e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E0E88u: goto label_1e0e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E0E98u;
}
