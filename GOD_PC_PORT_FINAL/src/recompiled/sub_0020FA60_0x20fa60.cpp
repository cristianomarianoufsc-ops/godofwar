#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020FA60
// Address: 0x20fa60 - 0x20fc10
void sub_0020FA60_0x20fa60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020FA60_0x20fa60");
#endif

    ctx->pc = 0x20fa60u;

    // 0x20fa60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20fa60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20fa64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20fa64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20fa68: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x20fa68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x20fa6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20fa6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fa70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fa74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20fa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20fa78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fa7c: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x20fa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x20fa80: 0xda010120  lqc2        $vf1, 0x120($s0)
    ctx->pc = 0x20fa80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x20fa84: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x20fa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20fa88: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x20fa88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20fa8c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x20fa8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x20fa90: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x20fa90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x20fa94: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x20fa94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20fa98: 0xda020130  lqc2        $vf2, 0x130($s0)
    ctx->pc = 0x20fa98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x20fa9c: 0x4a820845  vsuby.y     $vf1, $vf1, $vf2y
    ctx->pc = 0x20fa9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20faa0: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x20faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x20faa4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x20faa4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20faa8: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x20faa8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20faac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20faacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20fab0: 0x30620380  andi        $v0, $v1, 0x380
    ctx->pc = 0x20fab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)896);
    // 0x20fab4: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x20FAB4u;
    {
        const bool branch_taken_0x20fab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAB4u;
            // 0x20fab8: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fab4) {
            ctx->pc = 0x20FB90u;
            goto label_20fb90;
        }
    }
    ctx->pc = 0x20FABCu;
    // 0x20fabc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x20FABCu;
    {
        const bool branch_taken_0x20fabc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fabc) {
            ctx->pc = 0x20FAC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20FABCu;
            // 0x20fac0: 0x7a0200e0  lq          $v0, 0xE0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20FB0Cu;
            goto label_20fb0c;
        }
    }
    ctx->pc = 0x20FAC4u;
    // 0x20fac4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x20fac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fac8: 0x0  nop
    ctx->pc = 0x20fac8u;
    // NOP
    // 0x20facc: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x20FACCu;
    {
        const bool branch_taken_0x20facc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FACCu;
            // 0x20fad0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20facc) {
            ctx->pc = 0x20FB08u;
            goto label_20fb08;
        }
    }
    ctx->pc = 0x20FAD4u;
    // 0x20fad4: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x20fad4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20fad8: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x20FAD8u;
    SET_GPR_U32(ctx, 31, 0x20FAE0u);
    ctx->pc = 0x20FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAD8u;
            // 0x20fadc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAE0u; }
        if (ctx->pc != 0x20FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAE0u; }
        if (ctx->pc != 0x20FAE0u) { return; }
    }
    ctx->pc = 0x20FAE0u;
    // 0x20fae0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20FAE0u;
    {
        const bool branch_taken_0x20fae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fae0) {
            ctx->pc = 0x20FAF8u;
            goto label_20faf8;
        }
    }
    ctx->pc = 0x20FAE8u;
    // 0x20fae8: 0xc083e64  jal         func_20F990
    ctx->pc = 0x20FAE8u;
    SET_GPR_U32(ctx, 31, 0x20FAF0u);
    ctx->pc = 0x20FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAE8u;
            // 0x20faec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20F990u;
    if (runtime->hasFunction(0x20F990u)) {
        auto targetFn = runtime->lookupFunction(0x20F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAF0u; }
        if (ctx->pc != 0x20FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020F990_0x20f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FAF0u; }
        if (ctx->pc != 0x20FAF0u) { return; }
    }
    ctx->pc = 0x20FAF0u;
    // 0x20faf0: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x20FAF0u;
    {
        const bool branch_taken_0x20faf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAF0u;
            // 0x20faf4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20faf0) {
            ctx->pc = 0x20FBFCu;
            goto label_20fbfc;
        }
    }
    ctx->pc = 0x20FAF8u;
label_20faf8:
    // 0x20faf8: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x20FAF8u;
    SET_GPR_U32(ctx, 31, 0x20FB00u);
    ctx->pc = 0x20FAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FAF8u;
            // 0x20fafc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA20u;
    if (runtime->hasFunction(0x20FA20u)) {
        auto targetFn = runtime->lookupFunction(0x20FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB00u; }
        if (ctx->pc != 0x20FB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20fa20_0x20fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB00u; }
        if (ctx->pc != 0x20FB00u) { return; }
    }
    ctx->pc = 0x20FB00u;
    // 0x20fb00: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x20FB00u;
    {
        const bool branch_taken_0x20fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB00u;
            // 0x20fb04: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb00) {
            ctx->pc = 0x20FBFCu;
            goto label_20fbfc;
        }
    }
    ctx->pc = 0x20FB08u;
label_20fb08:
    // 0x20fb08: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x20fb08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
label_20fb0c:
    // 0x20fb0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x20fb0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fb10: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fb10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fb14: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x20fb14u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20fb18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fb18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fb1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20fb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fb20: 0x0  nop
    ctx->pc = 0x20fb20u;
    // NOP
    // 0x20fb24: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x20FB24u;
    {
        const bool branch_taken_0x20fb24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB24u;
            // 0x20fb28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb24) {
            ctx->pc = 0x20FB3Cu;
            goto label_20fb3c;
        }
    }
    ctx->pc = 0x20FB2Cu;
    // 0x20fb2c: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x20fb2cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20fb30: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x20FB30u;
    SET_GPR_U32(ctx, 31, 0x20FB38u);
    ctx->pc = 0x20FB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB30u;
            // 0x20fb34: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB38u; }
        if (ctx->pc != 0x20FB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB38u; }
        if (ctx->pc != 0x20FB38u) { return; }
    }
    ctx->pc = 0x20FB38u;
    // 0x20fb38: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x20fb38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20fb3c:
    // 0x20fb3c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x20FB3Cu;
    {
        const bool branch_taken_0x20fb3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fb3c) {
            ctx->pc = 0x20FB80u;
            goto label_20fb80;
        }
    }
    ctx->pc = 0x20FB44u;
    // 0x20fb44: 0xc083e88  jal         func_20FA20
    ctx->pc = 0x20FB44u;
    SET_GPR_U32(ctx, 31, 0x20FB4Cu);
    ctx->pc = 0x20FB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB44u;
            // 0x20fb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA20u;
    if (runtime->hasFunction(0x20FA20u)) {
        auto targetFn = runtime->lookupFunction(0x20FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB4Cu; }
        if (ctx->pc != 0x20FB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20fa20_0x20fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB4Cu; }
        if (ctx->pc != 0x20FB4Cu) { return; }
    }
    ctx->pc = 0x20FB4Cu;
    // 0x20fb4c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x20fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x20fb50: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x20fb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x20fb54: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20fb54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20fb58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20fb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fb5c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x20fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x20fb60: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x20fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x20fb64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20fb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20fb68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20fb68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fb6c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x20fb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x20fb70: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x20fb70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20fb74: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20fb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x20fb78: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x20FB78u;
    {
        const bool branch_taken_0x20fb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB78u;
            // 0x20fb7c: 0xe460000c  swc1        $f0, 0xC($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb78) {
            ctx->pc = 0x20FBF4u;
            goto label_20fbf4;
        }
    }
    ctx->pc = 0x20FB80u;
label_20fb80:
    // 0x20fb80: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x20FB80u;
    SET_GPR_U32(ctx, 31, 0x20FB88u);
    ctx->pc = 0x20FB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB80u;
            // 0x20fb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (runtime->hasFunction(0x20FA40u)) {
        auto targetFn = runtime->lookupFunction(0x20FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB88u; }
        if (ctx->pc != 0x20FB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20fa40_0x20fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FB88u; }
        if (ctx->pc != 0x20FB88u) { return; }
    }
    ctx->pc = 0x20FB88u;
    // 0x20fb88: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20FB88u;
    {
        const bool branch_taken_0x20fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FB88u;
            // 0x20fb8c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fb88) {
            ctx->pc = 0x20FBFCu;
            goto label_20fbfc;
        }
    }
    ctx->pc = 0x20FB90u;
label_20fb90:
    // 0x20fb90: 0x7a0200e0  lq          $v0, 0xE0($s0)
    ctx->pc = 0x20fb90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x20fb94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20fb94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20fb98: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x20fb98u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x20fb9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20fb9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fba0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20fba0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20fba4: 0x0  nop
    ctx->pc = 0x20fba4u;
    // NOP
    // 0x20fba8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x20FBA8u;
    {
        const bool branch_taken_0x20fba8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20FBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBA8u;
            // 0x20fbac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fba8) {
            ctx->pc = 0x20FBF8u;
            goto label_20fbf8;
        }
    }
    ctx->pc = 0x20FBB0u;
    // 0x20fbb0: 0x7a060110  lq          $a2, 0x110($s0)
    ctx->pc = 0x20fbb0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x20fbb4: 0xc079308  jal         func_1E4C20
    ctx->pc = 0x20FBB4u;
    SET_GPR_U32(ctx, 31, 0x20FBBCu);
    ctx->pc = 0x20FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBB4u;
            // 0x20fbb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4C20u;
    if (runtime->hasFunction(0x1E4C20u)) {
        auto targetFn = runtime->lookupFunction(0x1E4C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBBCu; }
        if (ctx->pc != 0x20FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4C20_0x1e4c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBBCu; }
        if (ctx->pc != 0x20FBBCu) { return; }
    }
    ctx->pc = 0x20FBBCu;
    // 0x20fbbc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20FBBCu;
    {
        const bool branch_taken_0x20fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fbbc) {
            ctx->pc = 0x20FBC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBBCu;
            // 0x20fbc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20FBFCu;
            goto label_20fbfc;
        }
    }
    ctx->pc = 0x20FBC4u;
    // 0x20fbc4: 0xc083e90  jal         func_20FA40
    ctx->pc = 0x20FBC4u;
    SET_GPR_U32(ctx, 31, 0x20FBCCu);
    ctx->pc = 0x20FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20FBC4u;
            // 0x20fbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20FA40u;
    if (runtime->hasFunction(0x20FA40u)) {
        auto targetFn = runtime->lookupFunction(0x20FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBCCu; }
        if (ctx->pc != 0x20FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_20fa40_0x20fa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FBCCu; }
        if (ctx->pc != 0x20FBCCu) { return; }
    }
    ctx->pc = 0x20FBCCu;
    // 0x20fbcc: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x20fbd0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x20fbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x20fbd4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20fbd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x20fbd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20fbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20fbdc: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x20fbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x20fbe0: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x20fbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x20fbe4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x20fbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x20fbe8: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x20fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x20fbec: 0xe474000c  swc1        $f20, 0xC($v1)
    ctx->pc = 0x20fbecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x20fbf0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x20fbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_20fbf4:
    // 0x20fbf4: 0xae020174  sw          $v0, 0x174($s0)
    ctx->pc = 0x20fbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 2));
label_20fbf8:
    // 0x20fbf8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20fbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20fbfc:
    // 0x20fbfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20fbfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fc00: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x20fc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20fc04: 0x3e00008  jr          $ra
    ctx->pc = 0x20FC04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20FC04u;
            // 0x20fc08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FAF8u: goto label_20faf8;
            case 0x20FB08u: goto label_20fb08;
            case 0x20FB0Cu: goto label_20fb0c;
            case 0x20FB3Cu: goto label_20fb3c;
            case 0x20FB80u: goto label_20fb80;
            case 0x20FB90u: goto label_20fb90;
            case 0x20FBF4u: goto label_20fbf4;
            case 0x20FBF8u: goto label_20fbf8;
            case 0x20FBFCu: goto label_20fbfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FC0Cu;
    // 0x20fc0c: 0x0  nop
    ctx->pc = 0x20fc0cu;
    // NOP
}
