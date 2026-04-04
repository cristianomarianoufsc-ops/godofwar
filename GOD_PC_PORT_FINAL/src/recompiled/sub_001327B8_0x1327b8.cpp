#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001327B8
// Address: 0x1327b8 - 0x132820
void sub_001327B8_0x1327b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001327B8_0x1327b8");
#endif

    ctx->pc = 0x1327b8u;

    // 0x1327b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1327b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1327bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1327bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1327c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1327c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1327c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1327c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1327c8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1327C8u;
    SET_GPR_U32(ctx, 31, 0x1327D0u);
    ctx->pc = 0x1327CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1327C8u;
            // 0x1327cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327D0u; }
        if (ctx->pc != 0x1327D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1327D0u; }
        if (ctx->pc != 0x1327D0u) { return; }
    }
    ctx->pc = 0x1327D0u;
    // 0x1327d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1327d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327d4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1327D4u;
    {
        const bool branch_taken_0x1327d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1327D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1327D4u;
            // 0x1327d8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1327d4) {
            ctx->pc = 0x132808u;
            goto label_132808;
        }
    }
    ctx->pc = 0x1327DCu;
    // 0x1327dc: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1327dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1327e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1327e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1327e4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1327e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1327e8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1327e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1327ec: 0x40f809  jalr        $v0
    ctx->pc = 0x1327ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1327F4u);
        ctx->pc = 0x1327F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1327ECu;
            // 0x1327f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1327F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132808u: goto label_132808;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1327F4u; }
            if (ctx->pc != 0x1327F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1327F4u;
    // 0x1327f4: 0x24440188  addiu       $a0, $v0, 0x188
    ctx->pc = 0x1327f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 392));
    // 0x1327f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1327f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1327fc: 0xc04c7d0  jal         func_131F40
    ctx->pc = 0x1327FCu;
    SET_GPR_U32(ctx, 31, 0x132804u);
    ctx->pc = 0x132800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1327FCu;
            // 0x132800: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131F40u;
    if (runtime->hasFunction(0x131F40u)) {
        auto targetFn = runtime->lookupFunction(0x131F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132804u; }
        if (ctx->pc != 0x132804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131F40_0x131f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132804u; }
        if (ctx->pc != 0x132804u) { return; }
    }
    ctx->pc = 0x132804u;
    // 0x132804: 0x0  nop
    ctx->pc = 0x132804u;
    // NOP
label_132808:
    // 0x132808: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x132808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13280c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13280cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132810: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132814: 0x3e00008  jr          $ra
    ctx->pc = 0x132814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132814u;
            // 0x132818: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132808u: goto label_132808;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13281Cu;
    // 0x13281c: 0x0  nop
    ctx->pc = 0x13281cu;
    // NOP
}
