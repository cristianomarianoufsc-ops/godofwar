#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12f348
// Address: 0x12f348 - 0x12f398
void entry_12f348_0x12f398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12f348_0x12f398");
#endif

    ctx->pc = 0x12f348u;

    // 0x12f348: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x12f348u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f34c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12f34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12f350:
    // 0x12f350: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x12f350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x12f354: 0x18e0000a  blez        $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x12F354u;
    {
        const bool branch_taken_0x12f354 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x12F358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F354u;
            // 0x12f358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f354) {
            ctx->pc = 0x12F380u;
            goto label_12f380;
        }
    }
    ctx->pc = 0x12F35Cu;
    // 0x12f35c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x12f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_12f360:
    // 0x12f360: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x12f360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x12f364: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x12f364u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12f368: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f36c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12f370: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12f370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12f374: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x12f374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x12f378: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12F378u;
    {
        const bool branch_taken_0x12f378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f378) {
            ctx->pc = 0x12F37Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12F378u;
            // 0x12f37c: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12F360u;
            runtime->cooperativeGuestYield();
            goto label_12f360;
        }
    }
    ctx->pc = 0x12F380u;
label_12f380:
    // 0x12f380: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x12f380u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x12f384: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12F384u;
    {
        const bool branch_taken_0x12f384 = (GPR_S32(ctx, 8) >= 0);
        ctx->pc = 0x12F388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F384u;
            // 0x12f388: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f384) {
            ctx->pc = 0x12F350u;
            runtime->cooperativeGuestYield();
            goto label_12f350;
        }
    }
    ctx->pc = 0x12F38Cu;
    // 0x12f38c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f390: 0x3e00008  jr          $ra
    ctx->pc = 0x12F390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F390u;
            // 0x12f394: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F350u: goto label_12f350;
            case 0x12F360u: goto label_12f360;
            case 0x12F380u: goto label_12f380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12F398u;
}
