#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00207178
// Address: 0x207178 - 0x2071e8
void sub_00207178_0x207178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207178_0x207178");
#endif

    ctx->pc = 0x207178u;

    // 0x207178: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20717c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20717cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x207180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207184: 0xc081c1e  jal         func_207078
    ctx->pc = 0x207184u;
    SET_GPR_U32(ctx, 31, 0x20718Cu);
    ctx->pc = 0x207078u;
    if (runtime->hasFunction(0x207078u)) {
        auto targetFn = runtime->lookupFunction(0x207078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20718Cu; }
        if (ctx->pc != 0x20718Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207078_0x207078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20718Cu; }
        if (ctx->pc != 0x20718Cu) { return; }
    }
    ctx->pc = 0x20718Cu;
    // 0x20718c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20718cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x207190: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x207190u;
    {
        const bool branch_taken_0x207190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207190u;
            // 0x207194: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207190) {
            ctx->pc = 0x2071D4u;
            goto label_2071d4;
        }
    }
    ctx->pc = 0x207198u;
    // 0x207198: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x207198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20719c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x20719cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x2071a0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2071a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x2071a4: 0x40f809  jalr        $v0
    ctx->pc = 0x2071A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2071ACu);
        ctx->pc = 0x2071A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071A4u;
            // 0x2071a8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2071ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2071ACu; }
            if (ctx->pc != 0x2071ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2071ACu;
    // 0x2071ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2071ACu;
    {
        const bool branch_taken_0x2071ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071ACu;
            // 0x2071b0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071ac) {
            ctx->pc = 0x2071D4u;
            goto label_2071d4;
        }
    }
    ctx->pc = 0x2071B4u;
    // 0x2071b4: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x2071b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2071b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2071b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2071bc: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x2071bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2071c0: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x2071c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2071c4: 0x40f809  jalr        $v0
    ctx->pc = 0x2071C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2071CCu);
        ctx->pc = 0x2071C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071C4u;
            // 0x2071c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2071CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2071CCu; }
            if (ctx->pc != 0x2071CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2071CCu;
    // 0x2071cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2071CCu;
    {
        const bool branch_taken_0x2071cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2071D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071CCu;
            // 0x2071d0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2071cc) {
            ctx->pc = 0x2071D8u;
            goto label_2071d8;
        }
    }
    ctx->pc = 0x2071D4u;
label_2071d4:
    // 0x2071d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2071d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2071d8:
    // 0x2071d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2071d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2071dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2071DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2071E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2071DCu;
            // 0x2071e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2071D4u: goto label_2071d4;
            case 0x2071D8u: goto label_2071d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2071E4u;
    // 0x2071e4: 0x0  nop
    ctx->pc = 0x2071e4u;
    // NOP
}
