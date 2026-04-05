#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3538
// Address: 0x1b3538 - 0x1b35b0
void sub_001B3538_0x1b3538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3538_0x1b3538");
#endif

    ctx->pc = 0x1b3538u;

    // 0x1b3538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b3538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b353c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b353cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b3540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b3540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b3544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b3548: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b3548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b354c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1b354cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1b3550: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1b3550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1b3554: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1b3554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1b3558: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1b3558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1b355c: 0x40f809  jalr        $v0
    ctx->pc = 0x1B355Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B3564u);
        ctx->pc = 0x1B3560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B355Cu;
            // 0x1b3560: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B3564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B3564u; }
            if (ctx->pc != 0x1B3564u) { return; }
        }
        }
    }
    ctx->pc = 0x1B3564u;
    // 0x1b3564: 0x8c440098  lw          $a0, 0x98($v0)
    ctx->pc = 0x1b3564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x1b3568: 0x42942  srl         $a1, $a0, 5
    ctx->pc = 0x1b3568u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 5));
    // 0x1b356c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1b356cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1b3570: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1b3570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1b3574: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x1b3574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1b3578: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x1b3578u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1b357c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1b357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b3580: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3584: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1b3584u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b3588: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x1b3588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1b358c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b3590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b3590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3594: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1b3594u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x1b3598: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1b3598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b359c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b359cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b35a0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1b35a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1b35a4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b35a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1b35a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B35A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B35ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B35A8u;
            // 0x1b35ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B35B0u;
}
