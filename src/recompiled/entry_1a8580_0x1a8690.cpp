#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1a8580
// Address: 0x1a8580 - 0x1a8690
void entry_1a8580_0x1a8690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1a8580_0x1a8690");
#endif

    ctx->pc = 0x1a8580u;

    // 0x1a8580: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1a8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1a8584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8588: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1a8588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1a858c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1a8590: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1a8590u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8594: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a8594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1a8598: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a8598u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a859c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1a859cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1a85a0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1a85a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85a4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1a85a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1a85a8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1a85a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85ac: 0x8c42cb88  lw          $v0, -0x3478($v0)
    ctx->pc = 0x1a85acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953864)));
    // 0x1a85b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1a85b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85b4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1a85b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1a85b8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1A85B8u;
    {
        const bool branch_taken_0x1a85b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85B8u;
            // 0x1a85bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85b8) {
            ctx->pc = 0x1A8668u;
            goto label_1a8668;
        }
    }
    ctx->pc = 0x1A85C0u;
    // 0x1a85c0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A85C0u;
    {
        const bool branch_taken_0x1a85c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85C0u;
            // 0x1a85c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85c0) {
            ctx->pc = 0x1A85F8u;
            goto label_1a85f8;
        }
    }
    ctx->pc = 0x1A85C8u;
    // 0x1a85c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a85c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a85cc: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a85d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a85d4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a85d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a85d8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a85d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a85dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A85DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A85E4u);
        ctx->pc = 0x1A85E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85DCu;
            // 0x1a85e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A85E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A85E4u; }
            if (ctx->pc != 0x1A85E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A85E4u;
    // 0x1a85e4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x1a85e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a85e8: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a85e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a85ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a85ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a85f0: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A85F0u;
    {
        const bool branch_taken_0x1a85f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a85f0) {
            ctx->pc = 0x1A85F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85F0u;
            // 0x1a85f4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A866Cu;
            goto label_1a866c;
        }
    }
    ctx->pc = 0x1A85F8u;
label_1a85f8:
    // 0x1a85f8: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A85F8u;
    {
        const bool branch_taken_0x1a85f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A85FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A85F8u;
            // 0x1a85fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a85f8) {
            ctx->pc = 0x1A8620u;
            goto label_1a8620;
        }
    }
    ctx->pc = 0x1A8600u;
    // 0x1a8600: 0x8e0500fc  lw          $a1, 0xFC($s0)
    ctx->pc = 0x1a8600u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1a8604: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8604u;
    {
        const bool branch_taken_0x1a8604 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8604u;
            // 0x1a8608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8604) {
            ctx->pc = 0x1A861Cu;
            goto label_1a861c;
        }
    }
    ctx->pc = 0x1A860Cu;
    // 0x1a860c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a8610: 0x50450002  beql        $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A8610u;
    {
        const bool branch_taken_0x1a8610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1a8610) {
            ctx->pc = 0x1A8614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8610u;
            // 0x1a8614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A861Cu;
            goto label_1a861c;
        }
    }
    ctx->pc = 0x1A8618u;
    // 0x1a8618: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a8618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1a861c:
    // 0x1a861c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a861cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8620:
    // 0x1a8620: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a8620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a8624: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1A8624u;
    SET_GPR_U32(ctx, 31, 0x1A862Cu);
    ctx->pc = 0x1A8628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8624u;
            // 0x1a8628: 0x8c44ca14  lw          $a0, -0x35EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953492)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A862Cu; }
        if (ctx->pc != 0x1A862Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A862Cu; }
        if (ctx->pc != 0x1A862Cu) { return; }
    }
    ctx->pc = 0x1A862Cu;
    // 0x1a862c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1a862cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1a8630: 0xac510018  sw          $s1, 0x18($v0)
    ctx->pc = 0x1a8630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 17));
    // 0x1a8634: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a8634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1a8638: 0x24632638  addiu       $v1, $v1, 0x2638
    ctx->pc = 0x1a8638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9784));
    // 0x1a863c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1a863cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1a8640: 0xa4550008  sh          $s5, 0x8($v0)
    ctx->pc = 0x1a8640u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 21));
    // 0x1a8644: 0xac52000c  sw          $s2, 0xC($v0)
    ctx->pc = 0x1a8644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 18));
    // 0x1a8648: 0xac530010  sw          $s3, 0x10($v0)
    ctx->pc = 0x1a8648u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 19));
    // 0x1a864c: 0xac540014  sw          $s4, 0x14($v0)
    ctx->pc = 0x1a864cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 20));
    // 0x1a8650: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1a8650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1a8654: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1a8654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1a8658: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a8658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a865c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1a865cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1a8660: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1a8660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1a8664: 0x0  nop
    ctx->pc = 0x1a8664u;
    // NOP
label_1a8668:
    // 0x1a8668: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1a8668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a866c:
    // 0x1a866c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1a866cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a8670: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1a8670u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a8674: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a8674u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a8678: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1a8678u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a867c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1a867cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8684: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8684u;
            // 0x1a8688: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A85F8u: goto label_1a85f8;
            case 0x1A861Cu: goto label_1a861c;
            case 0x1A8620u: goto label_1a8620;
            case 0x1A8668u: goto label_1a8668;
            case 0x1A866Cu: goto label_1a866c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A868Cu;
    // 0x1a868c: 0x0  nop
    ctx->pc = 0x1a868cu;
    // NOP
}
