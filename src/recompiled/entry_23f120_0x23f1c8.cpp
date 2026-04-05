#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_23f120
// Address: 0x23f120 - 0x23f1c8
void entry_23f120_0x23f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_23f120_0x23f1c8");
#endif

    ctx->pc = 0x23f120u;

    // 0x23f120: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x23f120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x23f124: 0x24830080  addiu       $v1, $a0, 0x80
    ctx->pc = 0x23f124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x23f128: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F128u;
    {
        const bool branch_taken_0x23f128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x23f128) {
            ctx->pc = 0x23F140u;
            goto label_23f140;
        }
    }
    ctx->pc = 0x23F130u;
    // 0x23f130: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23f130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x23f134: 0xac830110  sw          $v1, 0x110($a0)
    ctx->pc = 0x23f134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 3));
    // 0x23f138: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x23f138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x23f13c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x23f13cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_23f140:
    // 0x23f140: 0x3e00008  jr          $ra
    ctx->pc = 0x23F140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F140u: goto label_23f140;
            case 0x23F194u: goto label_23f194;
            case 0x23F1B0u: goto label_23f1b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F148u;
    // 0x23f148: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x23f148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x23f14c: 0x0  nop
    ctx->pc = 0x23f14cu;
    // NOP
    // 0x23f150: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f154: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f158: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x23f15c: 0x2442c4c0  addiu       $v0, $v0, -0x3B40
    ctx->pc = 0x23f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
    // 0x23f160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23f164: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23f164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f168: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f16c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x23f16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x23f170: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x23f170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x23f174: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23F174u;
    {
        const bool branch_taken_0x23f174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F174u;
            // 0x23f178: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f174) {
            ctx->pc = 0x23F194u;
            goto label_23f194;
        }
    }
    ctx->pc = 0x23F17Cu;
    // 0x23f17c: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x23f17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x23f180: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x23f180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f184: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23f184u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23f188: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23f18c: 0x40f809  jalr        $v0
    ctx->pc = 0x23F18Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23F194u);
        ctx->pc = 0x23F190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F18Cu;
            // 0x23f190: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23F194u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F140u: goto label_23f140;
            case 0x23F194u: goto label_23f194;
            case 0x23F1B0u: goto label_23f1b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23F194u; }
            if (ctx->pc != 0x23F194u) { return; }
        }
        }
    }
    ctx->pc = 0x23F194u;
label_23f194:
    // 0x23f194: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23f194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23f198: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x23f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x23f19c: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x23f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x23f1a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23F1A0u;
    {
        const bool branch_taken_0x23f1a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1A0u;
            // 0x23f1a4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f1a0) {
            ctx->pc = 0x23F1B0u;
            goto label_23f1b0;
        }
    }
    ctx->pc = 0x23F1A8u;
    // 0x23f1a8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x23F1A8u;
    SET_GPR_U32(ctx, 31, 0x23F1B0u);
    ctx->pc = 0x23F1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1A8u;
            // 0x23f1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1B0u; }
        if (ctx->pc != 0x23F1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23F1B0u; }
        if (ctx->pc != 0x23F1B0u) { return; }
    }
    ctx->pc = 0x23F1B0u;
label_23f1b0:
    // 0x23f1b0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x23f1b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f1b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23f1b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23F1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23F1BCu;
            // 0x23f1c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23F140u: goto label_23f140;
            case 0x23F194u: goto label_23f194;
            case 0x23F1B0u: goto label_23f1b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23F1C4u;
    // 0x23f1c4: 0x0  nop
    ctx->pc = 0x23f1c4u;
    // NOP
}
