#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132768
// Address: 0x132768 - 0x1327b8
void sub_00132768_0x132768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132768_0x132768");
#endif

    ctx->pc = 0x132768u;

    // 0x132768: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13276c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x132770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132774: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132778: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x132778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13277c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x13277cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x132780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132784: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132788: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x132788u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13278c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x13278cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x132790: 0x40f809  jalr        $v0
    ctx->pc = 0x132790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132798u);
        ctx->pc = 0x132794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132790u;
            // 0x132794: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132798u; }
            if (ctx->pc != 0x132798u) { return; }
        }
        }
    }
    ctx->pc = 0x132798u;
    // 0x132798: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x132798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x13279c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13279cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327a0: 0xc04c822  jal         func_132088
    ctx->pc = 0x1327A0u;
    SET_GPR_U32(ctx, 31, 0x1327A8u);
    ctx->pc = 0x1327A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1327A0u;
            // 0x1327a4: 0x24840188  addiu       $a0, $a0, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132088u;
    if (runtime->hasFunction(0x132088u)) {
        auto targetFn = runtime->lookupFunction(0x132088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327A8u; }
        if (ctx->pc != 0x1327A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132088_0x132088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327A8u; }
        if (ctx->pc != 0x1327A8u) { return; }
    }
    ctx->pc = 0x1327A8u;
    // 0x1327a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1327a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1327ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1327acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1327b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1327B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1327B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1327B0u;
            // 0x1327b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1327B8u;
}
