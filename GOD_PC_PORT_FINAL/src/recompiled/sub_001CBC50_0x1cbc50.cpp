#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBC50
// Address: 0x1cbc50 - 0x1cbcb8
void sub_001CBC50_0x1cbc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBC50_0x1cbc50");
#endif

    ctx->pc = 0x1cbc50u;

    // 0x1cbc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cbc54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cbc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cbc58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cbc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cbc5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cbc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cbc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cbc64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1cbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1cbc68: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1cbc68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1cbc6c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1cbc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1cbc70: 0x40f809  jalr        $v0
    ctx->pc = 0x1CBC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBC78u);
        ctx->pc = 0x1CBC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC70u;
            // 0x1cbc74: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC78u; }
            if (ctx->pc != 0x1CBC78u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBC78u;
    // 0x1cbc78: 0x44906000  mtc1        $s0, $f12
    ctx->pc = 0x1cbc78u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cbc7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cbc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc80: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1cbc80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cbc84: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1cbc84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1cbc88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cbc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbc8c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbc90: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cbc94: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x1cbc94u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cbc98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cbc98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cbc9c: 0xc080eba  jal         func_203AE8
    ctx->pc = 0x1CBC9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBCA4u);
    ctx->pc = 0x1CBCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC9Cu;
            // 0x1cbca0: 0x240a0007  addiu       $t2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203AE8u;
    if (runtime->hasFunction(0x203AE8u)) {
        auto targetFn = runtime->lookupFunction(0x203AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA4u; }
        if (ctx->pc != 0x1CBCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00203AE8_0x203ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBCA4u; }
        if (ctx->pc != 0x1CBCA4u) { return; }
    }
    ctx->pc = 0x1CBCA4u;
    // 0x1cbca4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cbca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cbca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cbca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cbcac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBCB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBCACu;
            // 0x1cbcb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBCB4u;
    // 0x1cbcb4: 0x0  nop
    ctx->pc = 0x1cbcb4u;
    // NOP
}
