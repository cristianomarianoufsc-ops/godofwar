#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7B30
// Address: 0x1c7b30 - 0x1c7d28
void sub_001C7B30_0x1c7b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7B30_0x1c7b30");
#endif

    ctx->pc = 0x1c7b30u;

    // 0x1c7b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c7b34: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1c7b38: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1c7b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1c7b3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1c7b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1c7b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c7b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b44: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c7b48: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x1c7b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c7b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c7b50: 0x1440006f  bnez        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1C7B50u;
    {
        const bool branch_taken_0x1c7b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B50u;
            // 0x1c7b54: 0x7fa50000  sq          $a1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7b50) {
            ctx->pc = 0x1C7D10u;
            goto label_1c7d10;
        }
    }
    ctx->pc = 0x1C7B58u;
    // 0x1c7b58: 0xda020110  lqc2        $vf2, 0x110($s0)
    ctx->pc = 0x1c7b58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x1c7b5c: 0x48a51800  qmtc2.ni    $a1, $vf3
    ctx->pc = 0x1c7b5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c7b60: 0x4be2186c  vsub.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x1c7b60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7b64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1c7b64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7b68: 0x3c01b8d1  lui         $at, 0xB8D1
    ctx->pc = 0x1c7b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47313 << 16));
    // 0x1c7b6c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c7b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c7b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7b74: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x1c7b74u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7b78: 0x700417c9  prot3w      $v0, $a0
    ctx->pc = 0x1c7b78u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c7b7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c7b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7b80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7b80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7b84: 0x0  nop
    ctx->pc = 0x1c7b84u;
    // NOP
    // 0x1c7b88: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x1C7B88u;
    {
        const bool branch_taken_0x1c7b88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7b88) {
            ctx->pc = 0x1C7B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B88u;
            // 0x1c7b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7BC8u;
            goto label_1c7bc8;
        }
    }
    ctx->pc = 0x1C7B90u;
    // 0x1c7b90: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1c7b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1c7b94: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1c7b94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1c7b98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7b9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c7b9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7ba0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7BA0u;
    {
        const bool branch_taken_0x1c7ba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7ba0) {
            ctx->pc = 0x1C7BC8u;
            goto label_1c7bc8;
        }
    }
    ctx->pc = 0x1C7BA8u;
    // 0x1c7ba8: 0x7a020260  lq          $v0, 0x260($s0)
    ctx->pc = 0x1c7ba8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c7bac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c7bacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7bb0: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c7bb0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c7bb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c7bb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7bb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7bb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7bbc: 0x0  nop
    ctx->pc = 0x1c7bbcu;
    // NOP
    // 0x1c7bc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7BC0u;
    {
        const bool branch_taken_0x1c7bc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7bc0) {
            ctx->pc = 0x1C7BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BC0u;
            // 0x1c7bc4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7BC8u;
            goto label_1c7bc8;
        }
    }
    ctx->pc = 0x1C7BC8u;
label_1c7bc8:
    // 0x1c7bc8: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1C7BC8u;
    {
        const bool branch_taken_0x1c7bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BC8u;
            // 0x1c7bcc: 0x48261000  qmfc2.ni    $a2, $vf2 (Delay Slot)
        SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bc8) {
            ctx->pc = 0x1C7D10u;
            goto label_1c7d10;
        }
    }
    ctx->pc = 0x1C7BD0u;
    // 0x1c7bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c7bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bd4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c7bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7bd8: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x1c7bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x1c7bdc: 0xc0788da  jal         func_1E2368
    ctx->pc = 0x1C7BDCu;
    SET_GPR_U32(ctx, 31, 0x1C7BE4u);
    ctx->pc = 0x1C7BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BDCu;
            // 0x1c7be0: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E2368u;
    if (runtime->hasFunction(0x1E2368u)) {
        auto targetFn = runtime->lookupFunction(0x1E2368u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BE4u; }
        if (ctx->pc != 0x1C7BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E2368_0x1e2368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BE4u; }
        if (ctx->pc != 0x1C7BE4u) { return; }
    }
    ctx->pc = 0x1C7BE4u;
    // 0x1c7be4: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1C7BE4u;
    {
        const bool branch_taken_0x1c7be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BE4u;
            // 0x1c7be8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7be4) {
            ctx->pc = 0x1C7D10u;
            goto label_1c7d10;
        }
    }
    ctx->pc = 0x1C7BECu;
    // 0x1c7bec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1c7becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7bf0: 0xc4405ed8  lwc1        $f0, 0x5ED8($v0)
    ctx->pc = 0x1c7bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c7bf4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c7bf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7bf8: 0x0  nop
    ctx->pc = 0x1c7bf8u;
    // NOP
    // 0x1c7bfc: 0x45000040  bc1f        . + 4 + (0x40 << 2)
    ctx->pc = 0x1C7BFCu;
    {
        const bool branch_taken_0x1c7bfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C7C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BFCu;
            // 0x1c7c00: 0x3c030033  lui         $v1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bfc) {
            ctx->pc = 0x1C7D00u;
            goto label_1c7d00;
        }
    }
    ctx->pc = 0x1C7C04u;
    // 0x1c7c04: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x1c7c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x1c7c08: 0x8c635e6c  lw          $v1, 0x5E6C($v1)
    ctx->pc = 0x1c7c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24172)));
    // 0x1c7c0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c7c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c7c10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1c7c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c7c14: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1c7c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x1c7c18: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1c7c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1c7c1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c7c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c7c20: 0x14600037  bnez        $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C7C20u;
    {
        const bool branch_taken_0x1c7c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C20u;
            // 0x1c7c24: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c20) {
            ctx->pc = 0x1C7D00u;
            goto label_1c7d00;
        }
    }
    ctx->pc = 0x1C7C28u;
    // 0x1c7c28: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x1c7c2c: 0x8e030174  lw          $v1, 0x174($s0)
    ctx->pc = 0x1c7c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x1c7c30: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x1c7c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x1c7c34: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x1c7c34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1c7c38: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c7c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c7c3c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c7c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c7c40: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x1c7c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x1c7c44: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x1c7c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x1c7c48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1c7c48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1c7c4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c7c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c7c50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c7c54: 0x3c013f96  lui         $at, 0x3F96
    ctx->pc = 0x1c7c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16278 << 16));
    // 0x1c7c58: 0x3421872b  ori         $at, $at, 0x872B
    ctx->pc = 0x1c7c58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34603);
    // 0x1c7c5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c7c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7c60: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x1c7c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x1c7c64: 0xe60202a0  swc1        $f2, 0x2A0($s0)
    ctx->pc = 0x1c7c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 672), bits); }
    // 0x1c7c68: 0xe6010150  swc1        $f1, 0x150($s0)
    ctx->pc = 0x1c7c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
    // 0x1c7c6c: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x1c7c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
    // 0x1c7c70: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x1c7c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x1c7c74: 0xda0100e0  lqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7c74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1c7c78: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x1c7c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c7c7c: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c7c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c7c80: 0xfa0100e0  sqc2        $vf1, 0xE0($s0)
    ctx->pc = 0x1c7c80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c7c84: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c7c88: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C7C88u;
    {
        const bool branch_taken_0x1c7c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C88u;
            // 0x1c7c8c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c88) {
            ctx->pc = 0x1C7CA8u;
            goto label_1c7ca8;
        }
    }
    ctx->pc = 0x1C7C90u;
    // 0x1c7c90: 0xc090d56  jal         func_243558
    ctx->pc = 0x1C7C90u;
    SET_GPR_U32(ctx, 31, 0x1C7C98u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C98u; }
        if (ctx->pc != 0x1C7C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C98u; }
        if (ctx->pc != 0x1C7C98u) { return; }
    }
    ctx->pc = 0x1C7C98u;
    // 0x1c7c98: 0x80420013  lb          $v0, 0x13($v0)
    ctx->pc = 0x1c7c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x1c7c9c: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1c7c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1c7ca0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1c7ca0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1c7ca4: 0x0  nop
    ctx->pc = 0x1c7ca4u;
    // NOP
label_1c7ca8:
    // 0x1c7ca8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C7CA8u;
    {
        const bool branch_taken_0x1c7ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ca8) {
            ctx->pc = 0x1C7CF0u;
            goto label_1c7cf0;
        }
    }
    ctx->pc = 0x1C7CB0u;
    // 0x1c7cb0: 0x8e040324  lw          $a0, 0x324($s0)
    ctx->pc = 0x1c7cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x1c7cb4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1c7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c7cb8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1C7CB8u;
    {
        const bool branch_taken_0x1c7cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CB8u;
            // 0x1c7cbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cb8) {
            ctx->pc = 0x1C7CE0u;
            goto label_1c7ce0;
        }
    }
    ctx->pc = 0x1C7CC0u;
    // 0x1c7cc0: 0xc090d58  jal         func_243560
    ctx->pc = 0x1C7CC0u;
    SET_GPR_U32(ctx, 31, 0x1C7CC8u);
    ctx->pc = 0x243560u;
    if (runtime->hasFunction(0x243560u)) {
        auto targetFn = runtime->lookupFunction(0x243560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CC8u; }
        if (ctx->pc != 0x1C7CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243560_0x243568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CC8u; }
        if (ctx->pc != 0x1C7CC8u) { return; }
    }
    ctx->pc = 0x1C7CC8u;
    // 0x1c7cc8: 0xc4410178  lwc1        $f1, 0x178($v0)
    ctx->pc = 0x1c7cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c7ccc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1c7cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7cd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c7cd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c7cd4: 0x0  nop
    ctx->pc = 0x1c7cd4u;
    // NOP
    // 0x1c7cd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1C7CD8u;
    {
        const bool branch_taken_0x1c7cd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c7cd8) {
            ctx->pc = 0x1C7CDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD8u;
            // 0x1c7cdc: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7CE0u;
            goto label_1c7ce0;
        }
    }
    ctx->pc = 0x1C7CE0u;
label_1c7ce0:
    // 0x1c7ce0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7CE0u;
    {
        const bool branch_taken_0x1c7ce0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7ce0) {
            ctx->pc = 0x1C7CF0u;
            goto label_1c7cf0;
        }
    }
    ctx->pc = 0x1C7CE8u;
    // 0x1c7ce8: 0xc08235e  jal         func_208D78
    ctx->pc = 0x1C7CE8u;
    SET_GPR_U32(ctx, 31, 0x1C7CF0u);
    ctx->pc = 0x1C7CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CE8u;
            // 0x1c7cec: 0x8e040324  lw          $a0, 0x324($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208D78u;
    if (runtime->hasFunction(0x208D78u)) {
        auto targetFn = runtime->lookupFunction(0x208D78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CF0u; }
        if (ctx->pc != 0x1C7CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208D78_0x208d78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CF0u; }
        if (ctx->pc != 0x1C7CF0u) { return; }
    }
    ctx->pc = 0x1C7CF0u;
label_1c7cf0:
    // 0x1c7cf0: 0xc07a22e  jal         func_1E88B8
    ctx->pc = 0x1C7CF0u;
    SET_GPR_U32(ctx, 31, 0x1C7CF8u);
    ctx->pc = 0x1C7CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CF0u;
            // 0x1c7cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E88B8u;
    if (runtime->hasFunction(0x1E88B8u)) {
        auto targetFn = runtime->lookupFunction(0x1E88B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CF8u; }
        if (ctx->pc != 0x1C7CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E88B8_0x1e88b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7CF8u; }
        if (ctx->pc != 0x1C7CF8u) { return; }
    }
    ctx->pc = 0x1C7CF8u;
    // 0x1c7cf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C7CF8u;
    {
        const bool branch_taken_0x1c7cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CF8u;
            // 0x1c7cfc: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cf8) {
            ctx->pc = 0x1C7D14u;
            goto label_1c7d14;
        }
    }
    ctx->pc = 0x1C7D00u;
label_1c7d00:
    // 0x1c7d00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c7d04: 0xae00024c  sw          $zero, 0x24C($s0)
    ctx->pc = 0x1c7d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 588), GPR_U32(ctx, 0));
    // 0x1c7d08: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c7d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c7d0c: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1c7d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
label_1c7d10:
    // 0x1c7d10: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1c7d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7d14:
    // 0x1c7d14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1c7d14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c7d18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1c7d18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c7d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c7d20: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D20u;
            // 0x1c7d24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C7BC8u: goto label_1c7bc8;
            case 0x1C7CA8u: goto label_1c7ca8;
            case 0x1C7CE0u: goto label_1c7ce0;
            case 0x1C7CF0u: goto label_1c7cf0;
            case 0x1C7D00u: goto label_1c7d00;
            case 0x1C7D10u: goto label_1c7d10;
            case 0x1C7D14u: goto label_1c7d14;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C7D28u;
}
