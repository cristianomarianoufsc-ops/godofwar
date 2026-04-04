#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245140
// Address: 0x245140 - 0x245210
void sub_00245140_0x245140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245140_0x245140");
#endif

    ctx->pc = 0x245140u;

    // 0x245140: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x245140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x245144: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x245144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x245148: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x245148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x24514c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24514cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245150: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x245154: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x245154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245158: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x245158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x24515c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x24515cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x245160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245164: 0x9623007c  lhu         $v1, 0x7C($s1)
    ctx->pc = 0x245164u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x245168: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x245168u;
    {
        const bool branch_taken_0x245168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245168u;
            // 0x24516c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245168) {
            ctx->pc = 0x245184u;
            goto label_245184;
        }
    }
    ctx->pc = 0x245170u;
    // 0x245170: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x245170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x245174: 0xc096b8a  jal         func_25AE28
    ctx->pc = 0x245174u;
    SET_GPR_U32(ctx, 31, 0x24517Cu);
    ctx->pc = 0x245178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245174u;
            // 0x245178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AE28u;
    if (runtime->hasFunction(0x25AE28u)) {
        auto targetFn = runtime->lookupFunction(0x25AE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24517Cu; }
        if (ctx->pc != 0x24517Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_25ae28_0x25ae38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24517Cu; }
        if (ctx->pc != 0x24517Cu) { return; }
    }
    ctx->pc = 0x24517Cu;
    // 0x24517c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x24517Cu;
    {
        const bool branch_taken_0x24517c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24517Cu;
            // 0x245180: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24517c) {
            ctx->pc = 0x2451F4u;
            goto label_2451f4;
        }
    }
    ctx->pc = 0x245184u;
label_245184:
    // 0x245184: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x245184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x245188: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x245188u;
    {
        const bool branch_taken_0x245188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24518Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245188u;
            // 0x24518c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245188) {
            ctx->pc = 0x2451BCu;
            goto label_2451bc;
        }
    }
    ctx->pc = 0x245190u;
    // 0x245190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x245190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245194: 0xc0742c4  jal         func_1D0B10
    ctx->pc = 0x245194u;
    SET_GPR_U32(ctx, 31, 0x24519Cu);
    ctx->pc = 0x245198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245194u;
            // 0x245198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B10u;
    if (runtime->hasFunction(0x1D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24519Cu; }
        if (ctx->pc != 0x24519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0B10_0x1d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24519Cu; }
        if (ctx->pc != 0x24519Cu) { return; }
    }
    ctx->pc = 0x24519Cu;
    // 0x24519c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x24519cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2451a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2451a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2451a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451a8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2451a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451ac: 0xc096b8e  jal         func_25AE38
    ctx->pc = 0x2451ACu;
    SET_GPR_U32(ctx, 31, 0x2451B4u);
    ctx->pc = 0x2451B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451ACu;
            // 0x2451b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AE38u;
    if (runtime->hasFunction(0x25AE38u)) {
        auto targetFn = runtime->lookupFunction(0x25AE38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451B4u; }
        if (ctx->pc != 0x2451B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AE38_0x25ae38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451B4u; }
        if (ctx->pc != 0x2451B4u) { return; }
    }
    ctx->pc = 0x2451B4u;
    // 0x2451b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2451B4u;
    {
        const bool branch_taken_0x2451b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2451B4u;
            // 0x2451b8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451b4) {
            ctx->pc = 0x2451F4u;
            goto label_2451f4;
        }
    }
    ctx->pc = 0x2451BCu;
label_2451bc:
    // 0x2451bc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2451BCu;
    {
        const bool branch_taken_0x2451bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2451C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2451BCu;
            // 0x2451c0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451bc) {
            ctx->pc = 0x2451D0u;
            goto label_2451d0;
        }
    }
    ctx->pc = 0x2451C4u;
    // 0x2451c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2451c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2451c8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2451C8u;
    {
        const bool branch_taken_0x2451c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2451c8) {
            ctx->pc = 0x2451D4u;
            goto label_2451d4;
        }
    }
    ctx->pc = 0x2451D0u;
label_2451d0:
    // 0x2451d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2451d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2451d4:
    // 0x2451d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2451D4u;
    {
        const bool branch_taken_0x2451d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2451D4u;
            // 0x2451d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451d4) {
            ctx->pc = 0x2451F0u;
            goto label_2451f0;
        }
    }
    ctx->pc = 0x2451DCu;
    // 0x2451dc: 0x26100018  addiu       $s0, $s0, 0x18
    ctx->pc = 0x2451dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x2451e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2451e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2451e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2451e8: 0xc096b96  jal         func_25AE58
    ctx->pc = 0x2451E8u;
    SET_GPR_U32(ctx, 31, 0x2451F0u);
    ctx->pc = 0x2451ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2451E8u;
            // 0x2451ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25AE58u;
    if (runtime->hasFunction(0x25AE58u)) {
        auto targetFn = runtime->lookupFunction(0x25AE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451F0u; }
        if (ctx->pc != 0x2451F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025AE58_0x25ae58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2451F0u; }
        if (ctx->pc != 0x2451F0u) { return; }
    }
    ctx->pc = 0x2451F0u;
label_2451f0:
    // 0x2451f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2451f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2451f4:
    // 0x2451f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2451f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2451f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2451f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2451fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2451fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x245200: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x245200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x245204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x245204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245208: 0x3e00008  jr          $ra
    ctx->pc = 0x245208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24520Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245208u;
            // 0x24520c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245184u: goto label_245184;
            case 0x2451BCu: goto label_2451bc;
            case 0x2451D0u: goto label_2451d0;
            case 0x2451D4u: goto label_2451d4;
            case 0x2451F0u: goto label_2451f0;
            case 0x2451F4u: goto label_2451f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245210u;
}
