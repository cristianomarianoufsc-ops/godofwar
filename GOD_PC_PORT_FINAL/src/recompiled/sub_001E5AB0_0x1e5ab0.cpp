#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E5AB0
// Address: 0x1e5ab0 - 0x1e5b90
void sub_001E5AB0_0x1e5ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5AB0_0x1e5ab0");
#endif

    ctx->pc = 0x1e5ab0u;

    // 0x1e5ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e5ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1e5ab4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e5ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1e5ab8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e5ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e5abc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e5abcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ac0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1e5ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1e5ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5ac8: 0x8e04024c  lw          $a0, 0x24C($s0)
    ctx->pc = 0x1e5ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 588)));
    // 0x1e5acc: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1E5ACCu;
    {
        const bool branch_taken_0x1e5acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5ACCu;
            // 0x1e5ad0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5acc) {
            ctx->pc = 0x1E5B38u;
            goto label_1e5b38;
        }
    }
    ctx->pc = 0x1E5AD4u;
    // 0x1e5ad4: 0x8c910104  lw          $s1, 0x104($a0)
    ctx->pc = 0x1e5ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1e5ad8: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1e5ad8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1e5adc: 0xde220040  ld          $v0, 0x40($s1)
    ctx->pc = 0x1e5adcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x1e5ae0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5AE0u;
    {
        const bool branch_taken_0x1e5ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1E5AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AE0u;
            // 0x1e5ae4: 0x8e120250  lw          $s2, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ae0) {
            ctx->pc = 0x1E5AF0u;
            goto label_1e5af0;
        }
    }
    ctx->pc = 0x1E5AE8u;
    // 0x1e5ae8: 0xc04da64  jal         func_136990
    ctx->pc = 0x1E5AE8u;
    SET_GPR_U32(ctx, 31, 0x1E5AF0u);
    ctx->pc = 0x1E5AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5AE8u;
            // 0x1e5aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AF0u; }
        if (ctx->pc != 0x1E5AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5AF0u; }
        if (ctx->pc != 0x1E5AF0u) { return; }
    }
    ctx->pc = 0x1E5AF0u;
label_1e5af0:
    // 0x1e5af0: 0x8e23008c  lw          $v1, 0x8C($s1)
    ctx->pc = 0x1e5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x1e5af4: 0x121180  sll         $v0, $s2, 6
    ctx->pc = 0x1e5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 6));
    // 0x1e5af8: 0x260401c0  addiu       $a0, $s0, 0x1C0
    ctx->pc = 0x1e5af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 448));
    // 0x1e5afc: 0xda020080  lqc2        $vf2, 0x80($s0)
    ctx->pc = 0x1e5afcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1e5b00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e5b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e5b04: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1e5b04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5b08: 0x7e0201c0  sq          $v0, 0x1C0($s0)
    ctx->pc = 0x1e5b08u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 448), GPR_VEC(ctx, 2));
    // 0x1e5b0c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1e5b0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1e5b10: 0x7e0201d0  sq          $v0, 0x1D0($s0)
    ctx->pc = 0x1e5b10u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 464), GPR_VEC(ctx, 2));
    // 0x1e5b14: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1e5b14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5b18: 0x7e0201e0  sq          $v0, 0x1E0($s0)
    ctx->pc = 0x1e5b18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 480), GPR_VEC(ctx, 2));
    // 0x1e5b1c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1e5b1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e5b20: 0x7e0201f0  sq          $v0, 0x1F0($s0)
    ctx->pc = 0x1e5b20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 496), GPR_VEC(ctx, 2));
    // 0x1e5b24: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1e5b24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e5b28: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1e5b28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5b2c: 0xfa020200  sqc2        $vf2, 0x200($s0)
    ctx->pc = 0x1e5b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1e5b30: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x1e5b30u;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x1e5b34: 0xf8810030  sqc2        $vf1, 0x30($a0)
    ctx->pc = 0x1e5b34u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e5b38:
    // 0x1e5b38: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e5b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5b3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e5b3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5b40: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1e5b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5b44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5b48: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B48u;
            // 0x1e5b4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B88u: goto label_1e5b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5B50u;
    // 0x1e5b50: 0x8c830174  lw          $v1, 0x174($a0)
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x1e5b54: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1e5b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1e5b58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E5B58u;
    {
        const bool branch_taken_0x1e5b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B58u;
            // 0x1e5b5c: 0x30620030  andi        $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5b58) {
            ctx->pc = 0x1E5B68u;
            goto label_1e5b68;
        }
    }
    ctx->pc = 0x1E5B60u;
    // 0x1e5b60: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B60u;
            // 0x1e5b64: 0x78820210  lq          $v0, 0x210($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B88u: goto label_1e5b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5B68u;
label_1e5b68:
    // 0x1e5b68: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5B68u;
    {
        const bool branch_taken_0x1e5b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5b68) {
            ctx->pc = 0x1E5B88u;
            goto label_1e5b88;
        }
    }
    ctx->pc = 0x1E5B70u;
    // 0x1e5b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5b74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5b74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5b78: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1e5b78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5b7c: 0x4a820840  vaddx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x1e5b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5b80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B80u;
            // 0x1e5b84: 0x48220800  qmfc2.ni    $v0, $vf1 (Delay Slot)
        SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B88u: goto label_1e5b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5B88u;
label_1e5b88:
    // 0x1e5b88: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5B88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5B88u;
            // 0x1e5b8c: 0x78820220  lq          $v0, 0x220($a0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 544)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5AF0u: goto label_1e5af0;
            case 0x1E5B38u: goto label_1e5b38;
            case 0x1E5B68u: goto label_1e5b68;
            case 0x1E5B88u: goto label_1e5b88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5B90u;
}
