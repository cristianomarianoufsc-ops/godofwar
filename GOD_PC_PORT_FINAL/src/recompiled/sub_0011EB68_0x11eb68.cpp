#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011EB68
// Address: 0x11eb68 - 0x11ec60
void sub_0011EB68_0x11eb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EB68_0x11eb68");
#endif

    ctx->pc = 0x11eb68u;

    // 0x11eb68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11eb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11eb6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11eb70: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x11eb70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x11eb74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11eb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eb78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11eb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11eb7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11eb7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11eb80: 0x7fa50000  sq          $a1, 0x0($sp)
    ctx->pc = 0x11eb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 5));
    // 0x11eb84: 0x8e021058  lw          $v0, 0x1058($s0)
    ctx->pc = 0x11eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4184)));
    // 0x11eb88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EB88u;
    {
        const bool branch_taken_0x11eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB88u;
            // 0x11eb8c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb88) {
            ctx->pc = 0x11EB98u;
            goto label_11eb98;
        }
    }
    ctx->pc = 0x11EB90u;
    // 0x11eb90: 0xc0476d0  jal         func_11DB40
    ctx->pc = 0x11EB90u;
    SET_GPR_U32(ctx, 31, 0x11EB98u);
    ctx->pc = 0x11DB40u;
    if (runtime->hasFunction(0x11DB40u)) {
        auto targetFn = runtime->lookupFunction(0x11DB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB98u; }
        if (ctx->pc != 0x11EB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DB40_0x11db40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EB98u; }
        if (ctx->pc != 0x11EB98u) { return; }
    }
    ctx->pc = 0x11EB98u;
label_11eb98:
    // 0x11eb98: 0x8e021050  lw          $v0, 0x1050($s0)
    ctx->pc = 0x11eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11eb9c: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EB9Cu;
    {
        const bool branch_taken_0x11eb9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x11EBA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB9Cu;
            // 0x11eba0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb9c) {
            ctx->pc = 0x11EBE4u;
            goto label_11ebe4;
        }
    }
    ctx->pc = 0x11EBA4u;
    // 0x11eba4: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x11eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_11eba8:
    // 0x11eba8: 0x7ba50000  lq          $a1, 0x0($sp)
    ctx->pc = 0x11eba8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ebac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11ebb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x11ebb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x11ebb4: 0x8c42083c  lw          $v0, 0x83C($v0)
    ctx->pc = 0x11ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2108)));
    // 0x11ebb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x11ebb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11ebbc: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x11ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x11ebc0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x11ebc4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x11ebc8: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x11ebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x11ebcc: 0x40f809  jalr        $v0
    ctx->pc = 0x11EBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EBD4u);
        ctx->pc = 0x11EBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBCCu;
            // 0x11ebd0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11EBD4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EB98u: goto label_11eb98;
            case 0x11EBA8u: goto label_11eba8;
            case 0x11EBE4u: goto label_11ebe4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11EBD4u; }
            if (ctx->pc != 0x11EBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x11EBD4u;
    // 0x11ebd4: 0x8e021050  lw          $v0, 0x1050($s0)
    ctx->pc = 0x11ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11ebd8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x11ebd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11ebdc: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x11EBDCu;
    {
        const bool branch_taken_0x11ebdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EBDCu;
            // 0x11ebe0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebdc) {
            ctx->pc = 0x11EBA8u;
            runtime->cooperativeGuestYield();
            goto label_11eba8;
        }
    }
    ctx->pc = 0x11EBE4u;
label_11ebe4:
    // 0x11ebe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ebe8: 0xae02105c  sw          $v0, 0x105C($s0)
    ctx->pc = 0x11ebe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4188), GPR_U32(ctx, 2));
    // 0x11ebec: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x11ebecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x11ebf0: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x11ebf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x11ebf4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x11ebf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x11ebf8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x11ebf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ebfc: 0x4a211880  vaddx.w     $vf2, $vf3, $vf1x
    ctx->pc = 0x11ebfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x11ec00: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x11ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x11ec04: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x11ec04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x11ec08: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x11ec08u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ec0c: 0x8e071050  lw          $a3, 0x1050($s0)
    ctx->pc = 0x11ec0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11ec10: 0x2508f170  addiu       $t0, $t0, -0xE90
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294963568));
    // 0x11ec14: 0x8e041054  lw          $a0, 0x1054($s0)
    ctx->pc = 0x11ec14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4180)));
    // 0x11ec18: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x11ec1c: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x11ec1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x11ec20: 0x24c6083c  addiu       $a2, $a2, 0x83C
    ctx->pc = 0x11ec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2108));
    // 0x11ec24: 0x473823  subu        $a3, $v0, $a3
    ctx->pc = 0x11ec24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x11ec28: 0xc05d53a  jal         func_1754E8
    ctx->pc = 0x11EC28u;
    SET_GPR_U32(ctx, 31, 0x11EC30u);
    ctx->pc = 0x11EC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC28u;
            // 0x11ec2c: 0x2063021  addu        $a2, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (runtime->hasFunction(0x1754E8u)) {
        auto targetFn = runtime->lookupFunction(0x1754E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC30u; }
        if (ctx->pc != 0x11EC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001754E8_0x1754e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EC30u; }
        if (ctx->pc != 0x11EC30u) { return; }
    }
    ctx->pc = 0x11EC30u;
    // 0x11ec30: 0x8e031050  lw          $v1, 0x1050($s0)
    ctx->pc = 0x11ec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4176)));
    // 0x11ec34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11ec34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ec38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ec3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11ec3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ec40: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11ec44: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11ec44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11ec48: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x11ec48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x11ec4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11ec4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ec50: 0xac60083c  sw          $zero, 0x83C($v1)
    ctx->pc = 0x11ec50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2108), GPR_U32(ctx, 0));
    // 0x11ec54: 0x3e00008  jr          $ra
    ctx->pc = 0x11EC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EC54u;
            // 0x11ec58: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EB98u: goto label_11eb98;
            case 0x11EBA8u: goto label_11eba8;
            case 0x11EBE4u: goto label_11ebe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11EC5Cu;
    // 0x11ec5c: 0x0  nop
    ctx->pc = 0x11ec5cu;
    // NOP
}
