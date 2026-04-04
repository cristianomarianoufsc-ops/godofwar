#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170820
// Address: 0x170820 - 0x1708b0
void sub_00170820_0x170820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170820_0x170820");
#endif

    ctx->pc = 0x170820u;

    // 0x170820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170824: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170828: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x170828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x17082c: 0x24840074  addiu       $a0, $a0, 0x74
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 116));
    // 0x170830: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x170830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x170834: 0x1044001a  beq         $v0, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x170834u;
    {
        const bool branch_taken_0x170834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x170838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170834u;
            // 0x170838: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170834) {
            ctx->pc = 0x1708A0u;
            goto label_1708a0;
        }
    }
    ctx->pc = 0x17083Cu;
    // 0x17083c: 0x0  nop
    ctx->pc = 0x17083cu;
    // NOP
label_170840:
    // 0x170840: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x170840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x170844: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170848: 0x2462fff0  addiu       $v0, $v1, -0x10
    ctx->pc = 0x170848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x17084c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x17084cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x170850: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x170850u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x170854: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x170854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x170858: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x170858u;
    {
        const bool branch_taken_0x170858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170858u;
            // 0x17085c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170858) {
            ctx->pc = 0x170890u;
            goto label_170890;
        }
    }
    ctx->pc = 0x170860u;
    // 0x170860: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x170860u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x170864: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x170864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x170868: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x170868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x17086c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17086cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x170870: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170874: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x170874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170878: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17087c: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x170880: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x170884: 0x40f809  jalr        $v0
    ctx->pc = 0x170884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17088Cu);
        ctx->pc = 0x170888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170884u;
            // 0x170888: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17088Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170840u: goto label_170840;
            case 0x170890u: goto label_170890;
            case 0x1708A0u: goto label_1708a0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17088Cu; }
            if (ctx->pc != 0x17088Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17088Cu;
    // 0x17088c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_170890:
    // 0x170890: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x170890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170894: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x170894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170898: 0x1443ffe9  bne         $v0, $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x170898u;
    {
        const bool branch_taken_0x170898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170898u;
            // 0x17089c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170898) {
            ctx->pc = 0x170840u;
            runtime->cooperativeGuestYield();
            goto label_170840;
        }
    }
    ctx->pc = 0x1708A0u;
label_1708a0:
    // 0x1708a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1708a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1708a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1708A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1708A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708A4u;
            // 0x1708a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170840u: goto label_170840;
            case 0x170890u: goto label_170890;
            case 0x1708A0u: goto label_1708a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1708ACu;
    // 0x1708ac: 0x0  nop
    ctx->pc = 0x1708acu;
    // NOP
}
