#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014C1A0
// Address: 0x14c1a0 - 0x14c278
void sub_0014C1A0_0x14c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C1A0_0x14c1a0");
#endif

    ctx->pc = 0x14c1a0u;

    // 0x14c1a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14c1a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14c1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14c1a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14c1ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14c1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1b0: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x14C1B0u;
    {
        const bool branch_taken_0x14c1b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1B0u;
            // 0x14c1b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b0) {
            ctx->pc = 0x14C240u;
            goto label_14c240;
        }
    }
    ctx->pc = 0x14C1B8u;
    // 0x14c1b8: 0xc052ac4  jal         func_14AB10
    ctx->pc = 0x14C1B8u;
    SET_GPR_U32(ctx, 31, 0x14C1C0u);
    ctx->pc = 0x14C1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1B8u;
            // 0x14c1bc: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AB10u;
    if (runtime->hasFunction(0x14AB10u)) {
        auto targetFn = runtime->lookupFunction(0x14AB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1C0u; }
        if (ctx->pc != 0x14C1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ab10_0x14ab20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C1C0u; }
        if (ctx->pc != 0x14C1C0u) { return; }
    }
    ctx->pc = 0x14C1C0u;
    // 0x14c1c0: 0x8c450018  lw          $a1, 0x18($v0)
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14c1c4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x14c1c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14c1c8: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x14c1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x14c1cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c1d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c1d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c1d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c1dc: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x14c1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x14c1e0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x14c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x14c1e4: 0x40f809  jalr        $v0
    ctx->pc = 0x14C1E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C1ECu);
        ctx->pc = 0x14C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C1E4u;
            // 0x14c1e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C1ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C240u: goto label_14c240;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C1ECu; }
            if (ctx->pc != 0x14C1ECu) { return; }
        }
        }
    }
    ctx->pc = 0x14C1ECu;
    // 0x14c1ec: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x14c1ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c1f4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c1f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c1fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c200: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c204: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x14c204u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x14c208: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x14c20c: 0x40f809  jalr        $v0
    ctx->pc = 0x14C20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C214u);
        ctx->pc = 0x14C210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C20Cu;
            // 0x14c210: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C214u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C240u: goto label_14c240;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C214u; }
            if (ctx->pc != 0x14C214u) { return; }
        }
        }
    }
    ctx->pc = 0x14C214u;
    // 0x14c214: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x14c214u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14c218: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14c218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14c21c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14c220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14c220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14c224: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14c228: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x14c228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x14c22c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x14c22cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x14c230: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x14c230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x14c234: 0x40f809  jalr        $v0
    ctx->pc = 0x14C234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C23Cu);
        ctx->pc = 0x14C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C234u;
            // 0x14c238: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C23Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C240u: goto label_14c240;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C23Cu; }
            if (ctx->pc != 0x14C23Cu) { return; }
        }
        }
    }
    ctx->pc = 0x14C23Cu;
    // 0x14c23c: 0x0  nop
    ctx->pc = 0x14c23cu;
    // NOP
label_14c240:
    // 0x14c240: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14c240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14c244: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14c244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14c248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c24c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C24Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C24Cu;
            // 0x14c250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C240u: goto label_14c240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C254u;
    // 0x14c254: 0x0  nop
    ctx->pc = 0x14c254u;
    // NOP
    // 0x14c258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14c258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14c25c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14c260: 0xc053012  jal         func_14C048
    ctx->pc = 0x14C260u;
    SET_GPR_U32(ctx, 31, 0x14C268u);
    ctx->pc = 0x14C264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C260u;
            // 0x14c264: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C048u;
    if (runtime->hasFunction(0x14C048u)) {
        auto targetFn = runtime->lookupFunction(0x14C048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C268u; }
        if (ctx->pc != 0x14C268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C048_0x14c048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C268u; }
        if (ctx->pc != 0x14C268u) { return; }
    }
    ctx->pc = 0x14C268u;
    // 0x14c268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14c26c: 0x3e00008  jr          $ra
    ctx->pc = 0x14C26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C26Cu;
            // 0x14c270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14C240u: goto label_14c240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14C274u;
    // 0x14c274: 0x0  nop
    ctx->pc = 0x14c274u;
    // NOP
}
