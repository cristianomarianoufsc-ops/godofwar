#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00106408
// Address: 0x106408 - 0x106468
void sub_00106408_0x106408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106408_0x106408");
#endif

    ctx->pc = 0x106408u;

    // 0x106408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x106408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10640c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10640cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x106410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x106414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106418: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x106418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x10641c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x10641cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x106420: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x106420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x106424: 0x40f809  jalr        $v0
    ctx->pc = 0x106424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10642Cu);
        ctx->pc = 0x106428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x106424u;
            // 0x106428: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10642Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10642Cu; }
            if (ctx->pc != 0x10642Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10642Cu;
    // 0x10642c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10642cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106430: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x106430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x106434: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x106434u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x106438: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x106438u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x10643c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x10643cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x106440: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x106440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x106444: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x106444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x106448: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x106448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x10644c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x10644cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x106450: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x106450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106458: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x106458u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x10645c: 0x3e00008  jr          $ra
    ctx->pc = 0x10645Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10645Cu;
            // 0x106460: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x106464u;
    // 0x106464: 0x0  nop
    ctx->pc = 0x106464u;
    // NOP
}
