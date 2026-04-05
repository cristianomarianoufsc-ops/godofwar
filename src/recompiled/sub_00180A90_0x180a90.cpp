#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180A90
// Address: 0x180a90 - 0x180ae8
void sub_00180A90_0x180a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180A90_0x180a90");
#endif

    ctx->pc = 0x180a90u;

    // 0x180a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180a94: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x180a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x180a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180a9c: 0x2407ffe1  addiu       $a3, $zero, -0x1F
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
    // 0x180aa0: 0x30c6000f  andi        $a2, $a2, 0xF
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x180aa4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x180aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x180aa8: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x180aac: 0x8c88000c  lw          $t0, 0xC($a0)
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x180ab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x180ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x180ab4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x180ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x180ab8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x180ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x180abc: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x180abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x180ac0: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x180ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x180ac4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x180ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x180ac8: 0x85020010  lh          $v0, 0x10($t0)
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x180acc: 0x8d030014  lw          $v1, 0x14($t0)
    ctx->pc = 0x180accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x180ad0: 0x60f809  jalr        $v1
    ctx->pc = 0x180AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x180AD8u);
        ctx->pc = 0x180AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180AD0u;
            // 0x180ad4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x180AD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x180AD8u; }
            if (ctx->pc != 0x180AD8u) { return; }
        }
        }
    }
    ctx->pc = 0x180AD8u;
    // 0x180ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180adc: 0x3e00008  jr          $ra
    ctx->pc = 0x180ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180ADCu;
            // 0x180ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180AE4u;
    // 0x180ae4: 0x0  nop
    ctx->pc = 0x180ae4u;
    // NOP
}
