#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132480
// Address: 0x132480 - 0x132508
void sub_00132480_0x132480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132480_0x132480");
#endif

    ctx->pc = 0x132480u;

    // 0x132480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132484: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x132484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x132488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13248c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132490: 0xc05e996  jal         func_17A658
    ctx->pc = 0x132490u;
    SET_GPR_U32(ctx, 31, 0x132498u);
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132498u; }
        if (ctx->pc != 0x132498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x132498u; }
        if (ctx->pc != 0x132498u) { return; }
    }
    ctx->pc = 0x132498u;
    // 0x132498: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x132498u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13249c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13249Cu;
    {
        const bool branch_taken_0x13249c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13249Cu;
            // 0x1324a0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13249c) {
            ctx->pc = 0x1324F0u;
            goto label_1324f0;
        }
    }
    ctx->pc = 0x1324A4u;
    // 0x1324a4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1324a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1324a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1324a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1324ac: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1324acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1324b0: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1324b4: 0x40f809  jalr        $v0
    ctx->pc = 0x1324B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1324BCu);
        ctx->pc = 0x1324B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1324B4u;
            // 0x1324b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1324BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1324D0u: goto label_1324d0;
            case 0x1324F0u: goto label_1324f0;
            case 0x1324F4u: goto label_1324f4;
            case 0x1324F8u: goto label_1324f8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1324BCu; }
            if (ctx->pc != 0x1324BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1324BCu;
    // 0x1324bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1324bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1324c0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1324C0u;
    {
        const bool branch_taken_0x1324c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1324C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1324C0u;
            // 0x1324c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1324c0) {
            ctx->pc = 0x1324F4u;
            goto label_1324f4;
        }
    }
    ctx->pc = 0x1324C8u;
    // 0x1324c8: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x1324c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x1324cc: 0x0  nop
    ctx->pc = 0x1324ccu;
    // NOP
label_1324d0:
    // 0x1324d0: 0x26040188  addiu       $a0, $s0, 0x188
    ctx->pc = 0x1324d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x1324d4: 0xc08c85c  jal         func_232170
    ctx->pc = 0x1324D4u;
    SET_GPR_U32(ctx, 31, 0x1324DCu);
    ctx->pc = 0x1324D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1324D4u;
            // 0x1324d8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232170u;
    if (runtime->hasFunction(0x232170u)) {
        auto targetFn = runtime->lookupFunction(0x232170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1324DCu; }
        if (ctx->pc != 0x1324DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00232170_0x232170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1324DCu; }
        if (ctx->pc != 0x1324DCu) { return; }
    }
    ctx->pc = 0x1324DCu;
    // 0x1324dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1324DCu;
    {
        const bool branch_taken_0x1324dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1324dc) {
            ctx->pc = 0x1324E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1324DCu;
            // 0x1324e0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1324F8u;
            goto label_1324f8;
        }
    }
    ctx->pc = 0x1324E4u;
    // 0x1324e4: 0x8e100050  lw          $s0, 0x50($s0)
    ctx->pc = 0x1324e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1324e8: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1324E8u;
    {
        const bool branch_taken_0x1324e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1324e8) {
            ctx->pc = 0x1324ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1324E8u;
            // 0x1324ec: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1324D0u;
            runtime->cooperativeGuestYield();
            goto label_1324d0;
        }
    }
    ctx->pc = 0x1324F0u;
label_1324f0:
    // 0x1324f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1324f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1324f4:
    // 0x1324f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1324f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1324f8:
    // 0x1324f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1324f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1324fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1324fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132500: 0x3e00008  jr          $ra
    ctx->pc = 0x132500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132500u;
            // 0x132504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1324D0u: goto label_1324d0;
            case 0x1324F0u: goto label_1324f0;
            case 0x1324F4u: goto label_1324f4;
            case 0x1324F8u: goto label_1324f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132508u;
}
