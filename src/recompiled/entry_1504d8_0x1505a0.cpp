#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1504d8
// Address: 0x1504d8 - 0x1505a0
void entry_1504d8_0x1505a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1504d8_0x1505a0");
#endif

    ctx->pc = 0x1504d8u;

    // 0x1504d8: 0xdc8200c0  ld          $v0, 0xC0($a0)
    ctx->pc = 0x1504d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x1504dc: 0x30421800  andi        $v0, $v0, 0x1800
    ctx->pc = 0x1504dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6144);
    // 0x1504e0: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1504E0u;
    {
        const bool branch_taken_0x1504e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1504e0) {
            ctx->pc = 0x150598u;
            goto label_150598;
        }
    }
    ctx->pc = 0x1504E8u;
    // 0x1504e8: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1504e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1504ec: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x1504ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1504f0: 0x19000029  blez        $t0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1504F0u;
    {
        const bool branch_taken_0x1504f0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1504F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1504F0u;
            // 0x1504f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1504f0) {
            ctx->pc = 0x150598u;
            goto label_150598;
        }
    }
    ctx->pc = 0x1504F8u;
    // 0x1504f8: 0x8c8200d0  lw          $v0, 0xD0($a0)
    ctx->pc = 0x1504f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x1504fc: 0x0  nop
    ctx->pc = 0x1504fcu;
    // NOP
label_150500:
    // 0x150500: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x150500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x150504: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x150504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15050c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15050cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x150510: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x150510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150514: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x150514u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150518: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x150518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x15051c: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x15051cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x150520: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x150520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x150524: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x150524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x150528: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x150528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x15052c: 0x84a20040  lh          $v0, 0x40($a1)
    ctx->pc = 0x15052cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x150530: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x150530u;
    {
        const bool branch_taken_0x150530 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x150534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150530u;
            // 0x150534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150530) {
            ctx->pc = 0x150588u;
            goto label_150588;
        }
    }
    ctx->pc = 0x150538u;
    // 0x150538: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x150538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x15053c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15053cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x150540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x150540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x150544: 0x0  nop
    ctx->pc = 0x150544u;
    // NOP
label_150548:
    // 0x150548: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x150548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15054c: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x15054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x150550: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x150550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x150554: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x150554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x150558: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x150558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x15055c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x15055cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x150560: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x150560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x150564: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x150564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x150568: 0x4be00053  vmaxw.xyzw  $vf1, $vf0, $vf0w
    ctx->pc = 0x150568u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x15056c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15056cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x150570: 0x84a20040  lh          $v0, 0x40($a1)
    ctx->pc = 0x150570u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x150574: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x150574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x150578: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x150578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15057c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x15057Cu;
    {
        const bool branch_taken_0x15057c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x150580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15057Cu;
            // 0x150580: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15057c) {
            ctx->pc = 0x150548u;
            runtime->cooperativeGuestYield();
            goto label_150548;
        }
    }
    ctx->pc = 0x150584u;
    // 0x150584: 0x0  nop
    ctx->pc = 0x150584u;
    // NOP
label_150588:
    // 0x150588: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x150588u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x15058c: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x15058cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x150590: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
    ctx->pc = 0x150590u;
    {
        const bool branch_taken_0x150590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x150590) {
            ctx->pc = 0x150594u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x150590u;
            // 0x150594: 0x8c8200d0  lw          $v0, 0xD0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x150500u;
            runtime->cooperativeGuestYield();
            goto label_150500;
        }
    }
    ctx->pc = 0x150598u;
label_150598:
    // 0x150598: 0x3e00008  jr          $ra
    ctx->pc = 0x150598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x150500u: goto label_150500;
            case 0x150548u: goto label_150548;
            case 0x150588u: goto label_150588;
            case 0x150598u: goto label_150598;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1505A0u;
}
