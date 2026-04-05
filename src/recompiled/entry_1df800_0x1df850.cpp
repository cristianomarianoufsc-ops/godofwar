#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1df800
// Address: 0x1df800 - 0x1df850
void entry_1df800_0x1df850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1df800_0x1df850");
#endif

    ctx->pc = 0x1df800u;

    // 0x1df800: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1df800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1df804: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1df808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1df808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1df80c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1df80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1df810: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1df810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1df814: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DF814u;
    {
        const bool branch_taken_0x1df814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF814u;
            // 0x1df818: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df814) {
            ctx->pc = 0x1DF848u;
            goto label_1df848;
        }
    }
    ctx->pc = 0x1DF81Cu;
    // 0x1df81c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1DF81Cu;
    {
        const bool branch_taken_0x1df81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF81Cu;
            // 0x1df820: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df81c) {
            ctx->pc = 0x1DF848u;
            goto label_1df848;
        }
    }
    ctx->pc = 0x1DF824u;
    // 0x1df824: 0x0  nop
    ctx->pc = 0x1df824u;
    // NOP
label_1df828:
    // 0x1df828: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x1df828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x1df82c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1df82cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1df830: 0xd84200b0  lqc2        $vf2, 0xB0($v0)
    ctx->pc = 0x1df830u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1df834: 0x4a21133c  vmove.w     $vf1, $vf2
    ctx->pc = 0x1df834u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1df838: 0xf84100b0  sqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x1df838u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1df83c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1df83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1df840: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1DF840u;
    {
        const bool branch_taken_0x1df840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF840u;
            // 0x1df844: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df840) {
            ctx->pc = 0x1DF828u;
            runtime->cooperativeGuestYield();
            goto label_1df828;
        }
    }
    ctx->pc = 0x1DF848u;
label_1df848:
    // 0x1df848: 0x3e00008  jr          $ra
    ctx->pc = 0x1DF848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DF828u: goto label_1df828;
            case 0x1DF848u: goto label_1df848;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DF850u;
}
