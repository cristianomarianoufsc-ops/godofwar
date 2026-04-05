#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002323F8
// Address: 0x2323f8 - 0x2324d8
void sub_002323F8_0x2323f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002323F8_0x2323f8");
#endif

    ctx->pc = 0x2323f8u;

    // 0x2323f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2323f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2323fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2323fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x232400: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x232400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x232404: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x232404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232408: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x232408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23240c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23240cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x232410: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232414: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x232414u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x232418: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x232418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x23241c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x23241cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x232420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x232420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x232424: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x232424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x232428: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x232428u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23242c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23242cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232430: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x232430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x232434: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x232434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x232438: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x232438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x23243c: 0x40f809  jalr        $v0
    ctx->pc = 0x23243Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232444u);
        ctx->pc = 0x232440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23243Cu;
            // 0x232440: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232444u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232450u: goto label_232450;
            case 0x232478u: goto label_232478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232444u; }
            if (ctx->pc != 0x232444u) { return; }
        }
        }
    }
    ctx->pc = 0x232444u;
    // 0x232444: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x232444u;
    {
        const bool branch_taken_0x232444 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x232448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232444u;
            // 0x232448: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232444) {
            ctx->pc = 0x232450u;
            goto label_232450;
        }
    }
    ctx->pc = 0x23244Cu;
    // 0x23244c: 0x8e330028  lw          $s3, 0x28($s1)
    ctx->pc = 0x23244cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_232450:
    // 0x232450: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x232450u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x232454: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x232454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x232458: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232458u;
    {
        const bool branch_taken_0x232458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23245Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232458u;
            // 0x23245c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232458) {
            ctx->pc = 0x232478u;
            goto label_232478;
        }
    }
    ctx->pc = 0x232460u;
    // 0x232460: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x232460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232464: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x232464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x232468: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x232468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x23246c: 0x40f809  jalr        $v0
    ctx->pc = 0x23246Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232474u);
        ctx->pc = 0x232470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23246Cu;
            // 0x232470: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232474u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232450u: goto label_232450;
            case 0x232478u: goto label_232478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232474u; }
            if (ctx->pc != 0x232474u) { return; }
        }
        }
    }
    ctx->pc = 0x232474u;
    // 0x232474: 0x0  nop
    ctx->pc = 0x232474u;
    // NOP
label_232478:
    // 0x232478: 0x2630002c  addiu       $s0, $s1, 0x2C
    ctx->pc = 0x232478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x23247c: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x23247cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x232480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232484: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x232484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232488: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x232488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23248c: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x23248cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x232490: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x232490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x232494: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x232494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x232498: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x232498u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
    // 0x23249c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23249cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2324a0: 0x84840030  lh          $a0, 0x30($a0)
    ctx->pc = 0x2324a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2324a4: 0x40f809  jalr        $v0
    ctx->pc = 0x2324A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2324ACu);
        ctx->pc = 0x2324A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2324A4u;
            // 0x2324a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2324ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232450u: goto label_232450;
            case 0x232478u: goto label_232478;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2324ACu; }
            if (ctx->pc != 0x2324ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2324ACu;
    // 0x2324ac: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x2324acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2324b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2324b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2324b4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2324b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2324b8: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x2324b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
    // 0x2324bc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2324bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2324c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2324c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2324c4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2324c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2324c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2324c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2324cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2324CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2324D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2324CCu;
            // 0x2324d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x232450u: goto label_232450;
            case 0x232478u: goto label_232478;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2324D4u;
    // 0x2324d4: 0x0  nop
    ctx->pc = 0x2324d4u;
    // NOP
}
