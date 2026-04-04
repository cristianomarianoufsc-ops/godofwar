#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4250
// Address: 0x1c4250 - 0x1c4330
void sub_001C4250_0x1c4250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4250_0x1c4250");
#endif

    ctx->pc = 0x1c4250u;

    // 0x1c4250: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c4250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c4254: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1c4254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4258: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1c4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1c425c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4260: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c4260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c4264: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c4264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c4268: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c4268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c426c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c426cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c4270: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1c4270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1c4274: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1c4274u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1c4278: 0x8e04018c  lw          $a0, 0x18C($s0)
    ctx->pc = 0x1c4278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 396)));
    // 0x1c427c: 0x8c820194  lw          $v0, 0x194($a0)
    ctx->pc = 0x1c427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x1c4280: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c4280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1c4284: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1C4284u;
    {
        const bool branch_taken_0x1c4284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4284u;
            // 0x1c4288: 0x26020050  addiu       $v0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4284) {
            ctx->pc = 0x1C42ECu;
            goto label_1c42ec;
        }
    }
    ctx->pc = 0x1C428Cu;
    // 0x1c428c: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x1c428cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1c4290: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1c4290u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c4294: 0x4be20859  vmuly.xyzw  $vf1, $vf1, $vf2y
    ctx->pc = 0x1c4294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c4298: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1c4298u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1c429c: 0x4be110e8  vadd.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1c429cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c42a0: 0xd8810100  lqc2        $vf1, 0x100($a0)
    ctx->pc = 0x1c42a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x1c42a4: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x1c42a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c42a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1c42a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1c42ac: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c42acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c42b0: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c42b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c42b4: 0x4be118e8  vadd.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x1c42b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1c42b8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c42b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c42bc: 0x8e0202dc  lw          $v0, 0x2DC($s0)
    ctx->pc = 0x1c42bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1c42c0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1c42c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1c42c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C42C4u;
    {
        const bool branch_taken_0x1c42c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42C4u;
            // 0x1c42c8: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42c4) {
            ctx->pc = 0x1C42D8u;
            goto label_1c42d8;
        }
    }
    ctx->pc = 0x1C42CCu;
    // 0x1c42cc: 0xc0723fe  jal         func_1C8FF8
    ctx->pc = 0x1C42CCu;
    SET_GPR_U32(ctx, 31, 0x1C42D4u);
    ctx->pc = 0x1C42D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42CCu;
            // 0x1c42d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8FF8u;
    if (runtime->hasFunction(0x1C8FF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8FF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42D4u; }
        if (ctx->pc != 0x1C42D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8FF8_0x1c8ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42D4u; }
        if (ctx->pc != 0x1C42D4u) { return; }
    }
    ctx->pc = 0x1C42D4u;
    // 0x1c42d4: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1c42d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1c42d8:
    // 0x1c42d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c42d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c42dc: 0xc07a68e  jal         func_1E9A38
    ctx->pc = 0x1C42DCu;
    SET_GPR_U32(ctx, 31, 0x1C42E4u);
    ctx->pc = 0x1C42E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42DCu;
            // 0x1c42e0: 0x48251800  qmfc2.ni    $a1, $vf3 (Delay Slot)
        SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9A38u;
    if (runtime->hasFunction(0x1E9A38u)) {
        auto targetFn = runtime->lookupFunction(0x1E9A38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42E4u; }
        if (ctx->pc != 0x1C42E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E9A38_0x1e9a38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42E4u; }
        if (ctx->pc != 0x1C42E4u) { return; }
    }
    ctx->pc = 0x1C42E4u;
    // 0x1c42e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1C42E4u;
    {
        const bool branch_taken_0x1c42e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C42E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42E4u;
            // 0x1c42e8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42e4) {
            ctx->pc = 0x1C4320u;
            goto label_1c4320;
        }
    }
    ctx->pc = 0x1C42ECu;
label_1c42ec:
    // 0x1c42ec: 0xc078350  jal         func_1E0D40
    ctx->pc = 0x1C42ECu;
    SET_GPR_U32(ctx, 31, 0x1C42F4u);
    ctx->pc = 0x1E0D40u;
    if (runtime->hasFunction(0x1E0D40u)) {
        auto targetFn = runtime->lookupFunction(0x1E0D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42F4u; }
        if (ctx->pc != 0x1C42F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0D40_0x1e0d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C42F4u; }
        if (ctx->pc != 0x1C42F4u) { return; }
    }
    ctx->pc = 0x1C42F4u;
    // 0x1c42f4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1c42f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c42f8: 0x7e0200e0  sq          $v0, 0xE0($s0)
    ctx->pc = 0x1c42f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), GPR_VEC(ctx, 2));
    // 0x1c42fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1c42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c4300: 0xc07a11e  jal         func_1E8478
    ctx->pc = 0x1C4300u;
    SET_GPR_U32(ctx, 31, 0x1C4308u);
    ctx->pc = 0x1C4304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4300u;
            // 0x1c4304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8478u;
    if (runtime->hasFunction(0x1E8478u)) {
        auto targetFn = runtime->lookupFunction(0x1E8478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4308u; }
        if (ctx->pc != 0x1C4308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8478_0x1e8478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4308u; }
        if (ctx->pc != 0x1C4308u) { return; }
    }
    ctx->pc = 0x1C4308u;
    // 0x1c4308: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1c4308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1c430c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c430cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c4310: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1c4310u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4314: 0xe60002a8  swc1        $f0, 0x2A8($s0)
    ctx->pc = 0x1c4314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 680), bits); }
    // 0x1c4318: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1c4318u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c431c: 0x0  nop
    ctx->pc = 0x1c431cu;
    // NOP
label_1c4320:
    // 0x1c4320: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c4320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4324: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4324u;
            // 0x1c4328: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C42D8u: goto label_1c42d8;
            case 0x1C42ECu: goto label_1c42ec;
            case 0x1C4320u: goto label_1c4320;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C432Cu;
    // 0x1c432c: 0x0  nop
    ctx->pc = 0x1c432cu;
    // NOP
}
