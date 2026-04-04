#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1dbd38
// Address: 0x1dbd38 - 0x1dbd90
void entry_1dbd38_0x1dbd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1dbd38_0x1dbd90");
#endif

    ctx->pc = 0x1dbd38u;

    // 0x1dbd38: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1dbd38u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1dbd3c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1dbd3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd40: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1dbd40u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1dbd44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dbd44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbd48: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x1dbd48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x1dbd4c: 0x0  nop
    ctx->pc = 0x1dbd4cu;
    // NOP
label_1dbd50:
    // 0x1dbd50: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x1dbd50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1dbd54: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1dbd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbd58: 0x84420038  lh          $v0, 0x38($v0)
    ctx->pc = 0x1dbd58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1dbd5c: 0x54450004  bnel        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBD5Cu;
    {
        const bool branch_taken_0x1dbd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1dbd5c) {
            ctx->pc = 0x1DBD60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD5Cu;
            // 0x1dbd60: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBD70u;
            goto label_1dbd70;
        }
    }
    ctx->pc = 0x1DBD64u;
    // 0x1dbd64: 0x1041021  addu        $v0, $t0, $a0
    ctx->pc = 0x1dbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1dbd68: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD68u;
            // 0x1dbd6c: 0x94420044  lhu         $v0, 0x44($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBD50u: goto label_1dbd50;
            case 0x1DBD70u: goto label_1dbd70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBD70u;
label_1dbd70:
    // 0x1dbd70: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x1dbd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x1dbd74: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x1dbd74u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1dbd78: 0x28c20006  slti        $v0, $a2, 0x6
    ctx->pc = 0x1dbd78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1dbd7c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1DBD7Cu;
    {
        const bool branch_taken_0x1dbd7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD7Cu;
            // 0x1dbd80: 0xe33821  addu        $a3, $a3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbd7c) {
            ctx->pc = 0x1DBD50u;
            runtime->cooperativeGuestYield();
            goto label_1dbd50;
        }
    }
    ctx->pc = 0x1DBD84u;
    // 0x1dbd84: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBD84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBD84u;
            // 0x1dbd88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBD50u: goto label_1dbd50;
            case 0x1DBD70u: goto label_1dbd70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBD8Cu;
    // 0x1dbd8c: 0x0  nop
    ctx->pc = 0x1dbd8cu;
    // NOP
}
