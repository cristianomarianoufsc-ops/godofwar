#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012B808
// Address: 0x12b808 - 0x12b878
void sub_0012B808_0x12b808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B808_0x12b808");
#endif

    ctx->pc = 0x12b808u;

    // 0x12b808: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12b808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12b80c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12b80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12b810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b814: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12b814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12b818: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12b818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12b81c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b820: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x12b820u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x12b824: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x12b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x12b828: 0xae42bdec  sw          $v0, -0x4214($s2)
    ctx->pc = 0x12b828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950380), GPR_U32(ctx, 2));
    // 0x12b82c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12b82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12b830: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x12b830u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12b834: 0x2442f1b8  addiu       $v0, $v0, -0xE48
    ctx->pc = 0x12b834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963640));
    // 0x12b838: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12b838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12b83c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12b840: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12b840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12b844: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x12b844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x12b848: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x12b848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x12b84c: 0x40f809  jalr        $v0
    ctx->pc = 0x12B84Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12B854u);
        ctx->pc = 0x12B850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B84Cu;
            // 0x12b850: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12B854u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12B854u; }
            if (ctx->pc != 0x12B854u) { return; }
        }
        }
    }
    ctx->pc = 0x12B854u;
    // 0x12b854: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x12b854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x12b858: 0xae40bdec  sw          $zero, -0x4214($s2)
    ctx->pc = 0x12b858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950380), GPR_U32(ctx, 0));
    // 0x12b85c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12b85cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12b860: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12b860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b864: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12b864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b868: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12b868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b870: 0x3e00008  jr          $ra
    ctx->pc = 0x12B870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12B870u;
            // 0x12b874: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12B878u;
}
