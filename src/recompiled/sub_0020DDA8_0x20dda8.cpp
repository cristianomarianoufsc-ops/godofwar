#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DDA8
// Address: 0x20dda8 - 0x20dde8
void sub_0020DDA8_0x20dda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DDA8_0x20dda8");
#endif

    ctx->pc = 0x20dda8u;

    // 0x20dda8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20dda8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20ddac: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20ddacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20ddb0: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x20ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20ddb4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x20ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x20ddb8: 0x8c450104  lw          $a1, 0x104($v0)
    ctx->pc = 0x20ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x20ddbc: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DDBCu;
    {
        const bool branch_taken_0x20ddbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20ddbc) {
            ctx->pc = 0x20DDC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDBCu;
            // 0x20ddc0: 0x94660046  lhu         $a2, 0x46($v1) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DDCCu;
            goto label_20ddcc;
        }
    }
    ctx->pc = 0x20DDC4u;
    // 0x20ddc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20DDC4u;
    {
        const bool branch_taken_0x20ddc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDC4u;
            // 0x20ddc8: 0x78420050  lq          $v0, 0x50($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ddc4) {
            ctx->pc = 0x20DDD8u;
            goto label_20ddd8;
        }
    }
    ctx->pc = 0x20DDCCu;
label_20ddcc:
    // 0x20ddcc: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x20DDCCu;
    SET_GPR_U32(ctx, 31, 0x20DDD4u);
    ctx->pc = 0x20DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDCCu;
            // 0x20ddd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD4u; }
        if (ctx->pc != 0x20DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DDD4u; }
        if (ctx->pc != 0x20DDD4u) { return; }
    }
    ctx->pc = 0x20DDD4u;
    // 0x20ddd4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x20ddd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ddd8:
    // 0x20ddd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ddd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dddc: 0x3e00008  jr          $ra
    ctx->pc = 0x20DDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDDCu;
            // 0x20dde0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DDCCu: goto label_20ddcc;
            case 0x20DDD8u: goto label_20ddd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DDE4u;
    // 0x20dde4: 0x0  nop
    ctx->pc = 0x20dde4u;
    // NOP
}
