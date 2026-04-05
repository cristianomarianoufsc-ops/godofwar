#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BE28
// Address: 0x19be28 - 0x19c830
void sub_0019BE28_0x19be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BE28_0x19be28");
#endif

    ctx->pc = 0x19be28u;

    // 0x19be28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19be28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19be2c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19be2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19be30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19be34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19be38: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19BE38u;
    {
        const bool branch_taken_0x19be38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE38u;
            // 0x19be3c: 0xac44c9b0  sw          $a0, -0x3650($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294953392), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be38) {
            ctx->pc = 0x19BE6Cu;
            goto label_19be6c;
        }
    }
    ctx->pc = 0x19BE40u;
    // 0x19be40: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19be40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19be44: 0x8e04c9b8  lw          $a0, -0x3648($s0)
    ctx->pc = 0x19be44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953400)));
    // 0x19be48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BE48u;
    {
        const bool branch_taken_0x19be48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19be48) {
            ctx->pc = 0x19BE5Cu;
            goto label_19be5c;
        }
    }
    ctx->pc = 0x19BE50u;
    // 0x19be50: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19BE50u;
    SET_GPR_U32(ctx, 31, 0x19BE58u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE58u; }
        if (ctx->pc != 0x19BE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE58u; }
        if (ctx->pc != 0x19BE58u) { return; }
    }
    ctx->pc = 0x19BE58u;
    // 0x19be58: 0xae00c9b8  sw          $zero, -0x3648($s0)
    ctx->pc = 0x19be58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953400), GPR_U32(ctx, 0));
label_19be5c:
    // 0x19be5c: 0xc066ebe  jal         func_19BAF8
    ctx->pc = 0x19BE5Cu;
    SET_GPR_U32(ctx, 31, 0x19BE64u);
    ctx->pc = 0x19BAF8u;
    if (runtime->hasFunction(0x19BAF8u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE64u; }
        if (ctx->pc != 0x19BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BAF8_0x19baf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE64u; }
        if (ctx->pc != 0x19BE64u) { return; }
    }
    ctx->pc = 0x19BE64u;
    // 0x19be64: 0xc0891de  jal         func_224778
    ctx->pc = 0x19BE64u;
    SET_GPR_U32(ctx, 31, 0x19BE6Cu);
    ctx->pc = 0x19BE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE64u;
            // 0x19be68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224778u;
    if (runtime->hasFunction(0x224778u)) {
        auto targetFn = runtime->lookupFunction(0x224778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE6Cu; }
        if (ctx->pc != 0x19BE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224778_0x224778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE6Cu; }
        if (ctx->pc != 0x19BE6Cu) { return; }
    }
    ctx->pc = 0x19BE6Cu;
label_19be6c:
    // 0x19be6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19be6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19be70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be74: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE74u;
            // 0x19be78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BE7Cu;
    // 0x19be7c: 0x0  nop
    ctx->pc = 0x19be7cu;
    // NOP
    // 0x19be80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19be84: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19be88: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19be88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19be8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19be90: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19be94: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x19be94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19be98: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19be98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19be9c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BE9Cu;
    {
        const bool branch_taken_0x19be9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE9Cu;
            // 0x19bea0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19be9c) {
            ctx->pc = 0x19BEACu;
            goto label_19beac;
        }
    }
    ctx->pc = 0x19BEA4u;
    // 0x19bea4: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x19BEA4u;
    SET_GPR_U32(ctx, 31, 0x19BEACu);
    ctx->pc = 0x19BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEA4u;
            // 0x19bea8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEACu; }
        if (ctx->pc != 0x19BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEACu; }
        if (ctx->pc != 0x19BEACu) { return; }
    }
    ctx->pc = 0x19BEACu;
label_19beac:
    // 0x19beac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19beb0: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19beb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19beb4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19beb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19beb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19beb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bebc: 0x3e00008  jr          $ra
    ctx->pc = 0x19BEBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEBCu;
            // 0x19bec0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BEC4u;
    // 0x19bec4: 0x0  nop
    ctx->pc = 0x19bec4u;
    // NOP
    // 0x19bec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19bec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19becc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19beccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19bed0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19bed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19bed4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bed8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19bedc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x19bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x19bee0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19bee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19bee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BEE4u;
    {
        const bool branch_taken_0x19bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEE4u;
            // 0x19bee8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bee4) {
            ctx->pc = 0x19BEF4u;
            goto label_19bef4;
        }
    }
    ctx->pc = 0x19BEECu;
    // 0x19beec: 0xc066ed2  jal         func_19BB48
    ctx->pc = 0x19BEECu;
    SET_GPR_U32(ctx, 31, 0x19BEF4u);
    ctx->pc = 0x19BEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BEECu;
            // 0x19bef0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BB48u;
    if (runtime->hasFunction(0x19BB48u)) {
        auto targetFn = runtime->lookupFunction(0x19BB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEF4u; }
        if (ctx->pc != 0x19BEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BB48_0x19bb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BEF4u; }
        if (ctx->pc != 0x19BEF4u) { return; }
    }
    ctx->pc = 0x19BEF4u;
label_19bef4:
    // 0x19bef4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19bef8: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19bef8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19befc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19befcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bf00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bf00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bf04: 0x3e00008  jr          $ra
    ctx->pc = 0x19BF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF04u;
            // 0x19bf08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BF0Cu;
    // 0x19bf0c: 0x0  nop
    ctx->pc = 0x19bf0cu;
    // NOP
    // 0x19bf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bf14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bf18: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19bf18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bf1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19bf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bf24: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x19bf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x19bf28: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19bf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19bf2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19BF2Cu;
    {
        const bool branch_taken_0x19bf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF2Cu;
            // 0x19bf30: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf2c) {
            ctx->pc = 0x19BF64u;
            goto label_19bf64;
        }
    }
    ctx->pc = 0x19BF34u;
    // 0x19bf34: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bf38: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19bf3c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19bf3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19bf40: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19bf44: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19bf48: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19bf4c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19bf4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bf50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bf54: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19BF54u;
    {
        const bool branch_taken_0x19bf54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF54u;
            // 0x19bf58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf54) {
            ctx->pc = 0x19BF60u;
            goto label_19bf60;
        }
    }
    ctx->pc = 0x19BF5Cu;
    // 0x19bf5c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19bf60:
    // 0x19bf60: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x19bf60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19bf64:
    // 0x19bf64: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BF64u;
    {
        const bool branch_taken_0x19bf64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF64u;
            // 0x19bf68: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bf64) {
            ctx->pc = 0x19BFB0u;
            goto label_19bfb0;
        }
    }
    ctx->pc = 0x19BF6Cu;
    // 0x19bf6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19bf70: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19bf70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19bf74: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19bf78: 0x40f809  jalr        $v0
    ctx->pc = 0x19BF78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BF80u);
        ctx->pc = 0x19BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF78u;
            // 0x19bf7c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BF80u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BF80u; }
            if (ctx->pc != 0x19BF80u) { return; }
        }
        }
    }
    ctx->pc = 0x19BF80u;
    // 0x19bf80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19bf80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf88: 0xc081a5a  jal         func_206968
    ctx->pc = 0x19BF88u;
    SET_GPR_U32(ctx, 31, 0x19BF90u);
    ctx->pc = 0x19BF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF88u;
            // 0x19bf8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF90u; }
        if (ctx->pc != 0x19BF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BF90u; }
        if (ctx->pc != 0x19BF90u) { return; }
    }
    ctx->pc = 0x19BF90u;
    // 0x19bf90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bf90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19bf94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bf98: 0xc081a18  jal         func_206860
    ctx->pc = 0x19BF98u;
    SET_GPR_U32(ctx, 31, 0x19BFA0u);
    ctx->pc = 0x19BF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BF98u;
            // 0x19bf9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFA0u; }
        if (ctx->pc != 0x19BFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BFA0u; }
        if (ctx->pc != 0x19BFA0u) { return; }
    }
    ctx->pc = 0x19BFA0u;
    // 0x19bfa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BFA0u;
    {
        const bool branch_taken_0x19bfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFA0u;
            // 0x19bfa4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfa0) {
            ctx->pc = 0x19BFB8u;
            goto label_19bfb8;
        }
    }
    ctx->pc = 0x19BFA8u;
    // 0x19bfa8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19bfac: 0x0  nop
    ctx->pc = 0x19bfacu;
    // NOP
label_19bfb0:
    // 0x19bfb0: 0xac40c9b4  sw          $zero, -0x364C($v0)
    ctx->pc = 0x19bfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953396), GPR_U32(ctx, 0));
    // 0x19bfb4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19bfb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19bfb8:
    // 0x19bfb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19bfb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19bfbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bfbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bfc0: 0x3e00008  jr          $ra
    ctx->pc = 0x19BFC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFC0u;
            // 0x19bfc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BFC8u;
    // 0x19bfc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bfcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19bfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19bfd0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19bfd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bfd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19bfd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bfd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bfdc: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x19bfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x19bfe0: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19bfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19bfe4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19BFE4u;
    {
        const bool branch_taken_0x19bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BFE4u;
            // 0x19bfe8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bfe4) {
            ctx->pc = 0x19C01Cu;
            goto label_19c01c;
        }
    }
    ctx->pc = 0x19BFECu;
    // 0x19bfec: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19bfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19bff0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19bff4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19bff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19bff8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19bffc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19c000: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19c000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c004: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19c004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c008: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c00c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C00Cu;
    {
        const bool branch_taken_0x19c00c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19C010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C00Cu;
            // 0x19c010: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c00c) {
            ctx->pc = 0x19C018u;
            goto label_19c018;
        }
    }
    ctx->pc = 0x19C014u;
    // 0x19c014: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19c014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19c018:
    // 0x19c018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c01c:
    // 0x19c01c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c020: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19c020u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19c024: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19c024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19c028: 0x40f809  jalr        $v0
    ctx->pc = 0x19C028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C030u);
        ctx->pc = 0x19C02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C028u;
            // 0x19c02c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C030u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C030u; }
            if (ctx->pc != 0x19C030u) { return; }
        }
        }
    }
    ctx->pc = 0x19C030u;
    // 0x19c030: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c038: 0xc081a18  jal         func_206860
    ctx->pc = 0x19C038u;
    SET_GPR_U32(ctx, 31, 0x19C040u);
    ctx->pc = 0x19C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C038u;
            // 0x19c03c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C040u; }
        if (ctx->pc != 0x19C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C040u; }
        if (ctx->pc != 0x19C040u) { return; }
    }
    ctx->pc = 0x19C040u;
    // 0x19c040: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C040u;
    {
        const bool branch_taken_0x19c040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C040u;
            // 0x19c044: 0x3c02001a  lui         $v0, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c040) {
            ctx->pc = 0x19C058u;
            goto label_19c058;
        }
    }
    ctx->pc = 0x19C048u;
    // 0x19c048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19c04c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c050: 0xac43c9b4  sw          $v1, -0x364C($v0)
    ctx->pc = 0x19c050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953396), GPR_U32(ctx, 3));
    // 0x19c054: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19c054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
label_19c058:
    // 0x19c058: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x19c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c05c: 0x2442bf10  addiu       $v0, $v0, -0x40F0
    ctx->pc = 0x19c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950672));
    // 0x19c060: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x19c060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x19c064: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x19c064u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x19c068: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19c068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c06c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19c06cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19c070: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19c070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19c074: 0x40f809  jalr        $v0
    ctx->pc = 0x19C074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C07Cu);
        ctx->pc = 0x19C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C074u;
            // 0x19c078: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C07Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C07Cu; }
            if (ctx->pc != 0x19C07Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19C07Cu;
    // 0x19c07c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19c07cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c080: 0xc081a44  jal         func_206910
    ctx->pc = 0x19C080u;
    SET_GPR_U32(ctx, 31, 0x19C088u);
    ctx->pc = 0x19C084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C080u;
            // 0x19c084: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C088u; }
        if (ctx->pc != 0x19C088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C088u; }
        if (ctx->pc != 0x19C088u) { return; }
    }
    ctx->pc = 0x19C088u;
    // 0x19c088: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c08c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c08cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c094: 0x3e00008  jr          $ra
    ctx->pc = 0x19C094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C094u;
            // 0x19c098: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C09Cu;
    // 0x19c09c: 0x0  nop
    ctx->pc = 0x19c09cu;
    // NOP
    // 0x19c0a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x19c0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x19c0a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c0a8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x19c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x19c0ac: 0x8c42c9b0  lw          $v0, -0x3650($v0)
    ctx->pc = 0x19c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953392)));
    // 0x19c0b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x19c0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0b4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x19c0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x19c0b8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x19c0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x19c0bc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x19c0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x19c0c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x19c0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x19c0c4: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x19C0C4u;
    {
        const bool branch_taken_0x19c0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0C4u;
            // 0x19c0c8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c0c4) {
            ctx->pc = 0x19C200u;
            goto label_19c200;
        }
    }
    ctx->pc = 0x19C0CCu;
    // 0x19c0cc: 0xc066ebe  jal         func_19BAF8
    ctx->pc = 0x19C0CCu;
    SET_GPR_U32(ctx, 31, 0x19C0D4u);
    ctx->pc = 0x19C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0CCu;
            // 0x19c0d0: 0x3c140033  lui         $s4, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF8u;
    if (runtime->hasFunction(0x19BAF8u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0D4u; }
        if (ctx->pc != 0x19C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BAF8_0x19baf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C0D4u; }
        if (ctx->pc != 0x19C0D4u) { return; }
    }
    ctx->pc = 0x19C0D4u;
    // 0x19c0d4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19c0d4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c0d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19c0dc: 0x2684e848  addiu       $a0, $s4, -0x17B8
    ctx->pc = 0x19c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x19c0e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19c0e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19c0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c0e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c0ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c0f0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19c0f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19c0f4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19c0f8: 0x40f809  jalr        $v0
    ctx->pc = 0x19C0F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C100u);
        ctx->pc = 0x19C0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C0F8u;
            // 0x19c0fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C100u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C100u; }
            if (ctx->pc != 0x19C100u) { return; }
        }
        }
    }
    ctx->pc = 0x19C100u;
    // 0x19c100: 0x8e640060  lw          $a0, 0x60($s3)
    ctx->pc = 0x19c100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x19c104: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x19c104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x19c108: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x19C108u;
    {
        const bool branch_taken_0x19c108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C108u;
            // 0x19c10c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c108) {
            ctx->pc = 0x19C144u;
            goto label_19c144;
        }
    }
    ctx->pc = 0x19C110u;
    // 0x19c110: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19c110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c114: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x19c114u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x19c118: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19c118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19c11c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c120: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19c124: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19c124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c128: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19c128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c12c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c130: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C130u;
    {
        const bool branch_taken_0x19c130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x19C134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C130u;
            // 0x19c134: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c130) {
            ctx->pc = 0x19C140u;
            goto label_19c140;
        }
    }
    ctx->pc = 0x19C138u;
    // 0x19c138: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x19c138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19c13c: 0x0  nop
    ctx->pc = 0x19c13cu;
    // NOP
label_19c140:
    // 0x19c140: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x19c140u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c144:
    // 0x19c144: 0x8cf20000  lw          $s2, 0x0($a3)
    ctx->pc = 0x19c144u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19c148: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19c148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19c14c: 0x24843ae8  addiu       $a0, $a0, 0x3AE8
    ctx->pc = 0x19c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15080));
    // 0x19c150: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c154: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19C154u;
    SET_GPR_U32(ctx, 31, 0x19C15Cu);
    ctx->pc = 0x19C158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C154u;
            // 0x19c158: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C15Cu; }
        if (ctx->pc != 0x19C15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C15Cu; }
        if (ctx->pc != 0x19C15Cu) { return; }
    }
    ctx->pc = 0x19C15Cu;
    // 0x19c15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c160: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x19C160u;
    SET_GPR_U32(ctx, 31, 0x19C168u);
    ctx->pc = 0x19C164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C160u;
            // 0x19c164: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C168u; }
        if (ctx->pc != 0x19C168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C168u; }
        if (ctx->pc != 0x19C168u) { return; }
    }
    ctx->pc = 0x19C168u;
    // 0x19c168: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19c168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c16c: 0x620001d  bltz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x19C16Cu;
    {
        const bool branch_taken_0x19c16c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x19C170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C16Cu;
            // 0x19c170: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c16c) {
            ctx->pc = 0x19C1E4u;
            goto label_19c1e4;
        }
    }
    ctx->pc = 0x19C174u;
    // 0x19c174: 0x8e500104  lw          $s0, 0x104($s2)
    ctx->pc = 0x19c174u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x19c178: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19c178u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x19c17c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x19c17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19c180: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x19C180u;
    {
        const bool branch_taken_0x19c180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x19c180) {
            ctx->pc = 0x19C184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C180u;
            // 0x19c184: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C198u;
            goto label_19c198;
        }
    }
    ctx->pc = 0x19C188u;
    // 0x19c188: 0xc04da64  jal         func_136990
    ctx->pc = 0x19C188u;
    SET_GPR_U32(ctx, 31, 0x19C190u);
    ctx->pc = 0x19C18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C188u;
            // 0x19c18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C190u; }
        if (ctx->pc != 0x19C190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C190u; }
        if (ctx->pc != 0x19C190u) { return; }
    }
    ctx->pc = 0x19C190u;
    // 0x19c190: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19c190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19c194: 0x0  nop
    ctx->pc = 0x19c194u;
    // NOP
label_19c198:
    // 0x19c198: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x19c198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x19c19c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x19c19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19c1a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19c1a4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x19c1a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c1a8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19c1ac: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x19c1acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19c1b0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x19c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x19c1b4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x19c1b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c1b8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19c1bc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x19c1bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x19c1c0: 0xc089990  jal         func_226640
    ctx->pc = 0x19C1C0u;
    SET_GPR_U32(ctx, 31, 0x19C1C8u);
    ctx->pc = 0x19C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1C0u;
            // 0x19c1c4: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C8u; }
        if (ctx->pc != 0x19C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1C8u; }
        if (ctx->pc != 0x19C1C8u) { return; }
    }
    ctx->pc = 0x19C1C8u;
    // 0x19c1c8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x19c1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x19c1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1d0: 0x24a53af0  addiu       $a1, $a1, 0x3AF0
    ctx->pc = 0x19c1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15088));
    // 0x19c1d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x19c1d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x19c1d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c1dc: 0xc089df8  jal         func_2277E0
    ctx->pc = 0x19C1DCu;
    SET_GPR_U32(ctx, 31, 0x19C1E4u);
    ctx->pc = 0x19C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1DCu;
            // 0x19c1e0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2277E0u;
    if (runtime->hasFunction(0x2277E0u)) {
        auto targetFn = runtime->lookupFunction(0x2277E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E4u; }
        if (ctx->pc != 0x19C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002277E0_0x2277e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C1E4u; }
        if (ctx->pc != 0x19C1E4u) { return; }
    }
    ctx->pc = 0x19C1E4u;
label_19c1e4:
    // 0x19c1e4: 0x2682e848  addiu       $v0, $s4, -0x17B8
    ctx->pc = 0x19c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294961224));
    // 0x19c1e8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x19c1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19c1ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19c1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19c1f0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19c1f4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x19c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19c1f8: 0x40f809  jalr        $v0
    ctx->pc = 0x19C1F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C200u);
        ctx->pc = 0x19C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C1F8u;
            // 0x19c1fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C200u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C200u; }
            if (ctx->pc != 0x19C200u) { return; }
        }
        }
    }
    ctx->pc = 0x19C200u;
label_19c200:
    // 0x19c200: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c204: 0xa662002a  sh          $v0, 0x2A($s3)
    ctx->pc = 0x19c204u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c208: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x19c208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19c20c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x19c20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19c210: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x19c210u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c214: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x19c214u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c218: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x19c218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c21c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c220: 0x3e00008  jr          $ra
    ctx->pc = 0x19C220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C220u;
            // 0x19c224: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C228u;
    // 0x19c228: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x19c228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x19c22c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x19c22cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c230: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19c230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x19c234: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x19c234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x19c238: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x19c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x19c23c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x19c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19c240: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19c240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x19c244: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x19c244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x19c248: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x19c248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x19c24c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x19c24cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x19c250: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x19c250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x19c254: 0x8cc50060  lw          $a1, 0x60($a2)
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x19c258: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19c258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19c25c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19C25Cu;
    {
        const bool branch_taken_0x19c25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C25Cu;
            // 0x19c260: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c25c) {
            ctx->pc = 0x19C294u;
            goto label_19c294;
        }
    }
    ctx->pc = 0x19C264u;
    // 0x19c264: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19c264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c268: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19c268u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19c26c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19c26cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19c270: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c274: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19c274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19c278: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19c278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c27c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19c27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c280: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c284: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C284u;
    {
        const bool branch_taken_0x19c284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x19C288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C284u;
            // 0x19c288: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c284) {
            ctx->pc = 0x19C290u;
            goto label_19c290;
        }
    }
    ctx->pc = 0x19C28Cu;
    // 0x19c28c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19c28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19c290:
    // 0x19c290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c294:
    // 0x19c294: 0x8cd50064  lw          $s5, 0x64($a2)
    ctx->pc = 0x19c294u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
    // 0x19c298: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x19c29c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c29cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c2a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19c2a4: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x19c2a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x19c2a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c2ac: 0x8c54cd58  lw          $s4, -0x32A8($v0)
    ctx->pc = 0x19c2acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19c2b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x19c2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2b4: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x19c2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19c2b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x19c2b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2bc: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c2bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c2c0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x19c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x19c2c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c2c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c2cc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19c2ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c2d0: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19c2d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x19c2d4: 0xc076798  jal         func_1D9E60
    ctx->pc = 0x19C2D4u;
    SET_GPR_U32(ctx, 31, 0x19C2DCu);
    ctx->pc = 0x19C2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2D4u;
            // 0x19c2d8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9E60u;
    if (runtime->hasFunction(0x1D9E60u)) {
        auto targetFn = runtime->lookupFunction(0x1D9E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2DCu; }
        if (ctx->pc != 0x19C2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9E60_0x1d9e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2DCu; }
        if (ctx->pc != 0x19C2DCu) { return; }
    }
    ctx->pc = 0x19C2DCu;
    // 0x19c2dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x19c2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2e0: 0x1a60006a  blez        $s3, . + 4 + (0x6A << 2)
    ctx->pc = 0x19C2E0u;
    {
        const bool branch_taken_0x19c2e0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x19C2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2E0u;
            // 0x19c2e4: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2e0) {
            ctx->pc = 0x19C48Cu;
            goto label_19c48c;
        }
    }
    ctx->pc = 0x19C2E8u;
    // 0x19c2e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2ec: 0x0  nop
    ctx->pc = 0x19c2ecu;
    // NOP
label_19c2f0:
    // 0x19c2f0: 0xc0767cc  jal         func_1D9F30
    ctx->pc = 0x19C2F0u;
    SET_GPR_U32(ctx, 31, 0x19C2F8u);
    ctx->pc = 0x19C2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C2F0u;
            // 0x19c2f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F30u;
    if (runtime->hasFunction(0x1D9F30u)) {
        auto targetFn = runtime->lookupFunction(0x1D9F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2F8u; }
        if (ctx->pc != 0x19C2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d9f30_0x1d9f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C2F8u; }
        if (ctx->pc != 0x19C2F8u) { return; }
    }
    ctx->pc = 0x19C2F8u;
    // 0x19c2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c2fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x19c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x19c300: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x19c300u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19c304: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x19c304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x19c308: 0x40f809  jalr        $v0
    ctx->pc = 0x19C308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C310u);
        ctx->pc = 0x19C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C308u;
            // 0x19c30c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C310u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C310u; }
            if (ctx->pc != 0x19C310u) { return; }
        }
        }
    }
    ctx->pc = 0x19C310u;
    // 0x19c310: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19c310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19c314: 0x12020058  beq         $s0, $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x19C314u;
    {
        const bool branch_taken_0x19c314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C314u;
            // 0x19c318: 0x32020007  andi        $v0, $s0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c314) {
            ctx->pc = 0x19C478u;
            goto label_19c478;
        }
    }
    ctx->pc = 0x19C31Cu;
    // 0x19c31c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x19C31Cu;
    {
        const bool branch_taken_0x19c31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c31c) {
            ctx->pc = 0x19C320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C31Cu;
            // 0x19c320: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C354u;
            goto label_19c354;
        }
    }
    ctx->pc = 0x19C324u;
    // 0x19c324: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c328: 0x101dc2  srl         $v1, $s0, 23
    ctx->pc = 0x19c328u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 23));
    // 0x19c32c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19c32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19c330: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c334: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19c334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19c338: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19c338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c33c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19c33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c344: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19C344u;
    {
        const bool branch_taken_0x19c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x19C348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C344u;
            // 0x19c348: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c344) {
            ctx->pc = 0x19C350u;
            goto label_19c350;
        }
    }
    ctx->pc = 0x19C34Cu;
    // 0x19c34c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19c34cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19c350:
    // 0x19c350: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c354:
    // 0x19c354: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c35c: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x19c35cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
    // 0x19c360: 0x8c4200ec  lw          $v0, 0xEC($v0)
    ctx->pc = 0x19c360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
    // 0x19c364: 0x40f809  jalr        $v0
    ctx->pc = 0x19C364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C36Cu);
        ctx->pc = 0x19C368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C364u;
            // 0x19c368: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C36Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C36Cu; }
            if (ctx->pc != 0x19C36Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19C36Cu;
    // 0x19c36c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19c36cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19c370: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c374: 0xc0909c4  jal         func_242710
    ctx->pc = 0x19C374u;
    SET_GPR_U32(ctx, 31, 0x19C37Cu);
    ctx->pc = 0x19C378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C374u;
            // 0x19c378: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C37Cu; }
        if (ctx->pc != 0x19C37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C37Cu; }
        if (ctx->pc != 0x19C37Cu) { return; }
    }
    ctx->pc = 0x19C37Cu;
    // 0x19c37c: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x19c37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19c380: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x19c380u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19c384: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x19c384u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c388: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x19c388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19c38c: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x19c38cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c390: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x19c390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19c394: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x19c394u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x19c398: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x19c398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x19c39c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c39cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c3a0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x19c3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19c3a4: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x19c3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19c3a8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x19c3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c3ac: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c3b0: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x19c3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x19c3b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c3b8: 0x84a400c0  lh          $a0, 0xC0($a1)
    ctx->pc = 0x19c3b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x19c3bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c3bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c3c0: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x19c3c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19c3c4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x19c3c8: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x19c3c8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19c3cc: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x19c3ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x19c3d0: 0x4483a800  mtc1        $v1, $f21
    ctx->pc = 0x19c3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x19c3d4: 0x8ca200c4  lw          $v0, 0xC4($a1)
    ctx->pc = 0x19c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x19c3d8: 0x46150544  c1          0x150544
    ctx->pc = 0x19c3d8u;
    ctx->f[21] = FPU_SQRT_S(ctx->f[0]);
    // 0x19c3dc: 0x40f809  jalr        $v0
    ctx->pc = 0x19C3DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C3E4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C3E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C3E4u; }
            if (ctx->pc != 0x19C3E4u) { return; }
        }
        }
    }
    ctx->pc = 0x19C3E4u;
    // 0x19c3e4: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x19c3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x19c3e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c3ec: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19c3ecu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x19c3f0: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x19c3f0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x19c3f4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x19c3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19c3f8: 0x0  nop
    ctx->pc = 0x19c3f8u;
    // NOP
    // 0x19c3fc: 0x4502001f  bc1fl       . + 4 + (0x1F << 2)
    ctx->pc = 0x19C3FCu;
    {
        const bool branch_taken_0x19c3fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19c3fc) {
            ctx->pc = 0x19C400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C3FCu;
            // 0x19c400: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C47Cu;
            goto label_19c47c;
        }
    }
    ctx->pc = 0x19C404u;
    // 0x19c404: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x19c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x19c408: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x19c408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19c40c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x19c40cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c410: 0x4a810080  vaddx.y     $vf2, $vf0, $vf1x
    ctx->pc = 0x19c410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19c414: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x19c414u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19c418: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x19c418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19c41c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x19c41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c420: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x19c420u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19c424: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x19c424u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x19c428: 0x4a0003bf  vwaitq
    ctx->pc = 0x19c428u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x19c42c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x19c42cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19c430: 0x4a0002ff  vnop
    ctx->pc = 0x19c430u;
    // NOP operation, no action needed for VU0
    // 0x19c434: 0x4a0002ff  vnop
    ctx->pc = 0x19c434u;
    // NOP operation, no action needed for VU0
    // 0x19c438: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x19c438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x19c43c: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x19c43cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x19c440: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x19c440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19c444: 0xfba20000  sqc2        $vf2, 0x0($sp)
    ctx->pc = 0x19c444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19c448: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x19c448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x19c44c: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x19c44cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x19c450: 0x4be31098  vmulx.xyzw  $vf2, $vf2, $vf3x
    ctx->pc = 0x19c450u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19c454: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x19c454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19c458: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x19c458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x19c45c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x19c45cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x19c460: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x19c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x19c464: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x19c464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x19c468: 0x48251800  qmfc2.ni    $a1, $vf3
    ctx->pc = 0x19c468u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x19c46c: 0x40f809  jalr        $v0
    ctx->pc = 0x19C46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C474u);
        ctx->pc = 0x19C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C46Cu;
            // 0x19c470: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C474u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C474u; }
            if (ctx->pc != 0x19C474u) { return; }
        }
        }
    }
    ctx->pc = 0x19C474u;
    // 0x19c474: 0x0  nop
    ctx->pc = 0x19c474u;
    // NOP
label_19c478:
    // 0x19c478: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x19c478u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_19c47c:
    // 0x19c47c: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x19c47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x19c480: 0x5440ff9b  bnel        $v0, $zero, . + 4 + (-0x65 << 2)
    ctx->pc = 0x19C480u;
    {
        const bool branch_taken_0x19c480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19c480) {
            ctx->pc = 0x19C484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19C480u;
            // 0x19c484: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19C2F0u;
            runtime->cooperativeGuestYield();
            goto label_19c2f0;
        }
    }
    ctx->pc = 0x19C488u;
    // 0x19c488: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x19c488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_19c48c:
    // 0x19c48c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x19c48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19c490: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19c490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x19c494: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x19c494u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19c498: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x19c498u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19c49c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x19c49cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19c4a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19c4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19c4a4: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x19c4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x19c4a8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x19c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x19c4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x19C4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4ACu;
            // 0x19c4b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C4B4u;
    // 0x19c4b4: 0x0  nop
    ctx->pc = 0x19c4b4u;
    // NOP
    // 0x19c4b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c4b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c4bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c4c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c4c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c4c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c4c8: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x19c4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x19c4cc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x19c4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x19c4d0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19C4D0u;
    {
        const bool branch_taken_0x19c4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C4D0u;
            // 0x19c4d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c4d0) {
            ctx->pc = 0x19C508u;
            goto label_19c508;
        }
    }
    ctx->pc = 0x19C4D8u;
    // 0x19c4d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x19c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19c4dc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x19c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x19c4e0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x19c4e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19c4e4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c4e8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x19c4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x19c4ec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19c4f0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19c4f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19c4f8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19C4F8u;
    {
        const bool branch_taken_0x19c4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x19c4f8) {
            ctx->pc = 0x19C508u;
            goto label_19c508;
        }
    }
    ctx->pc = 0x19C500u;
    // 0x19c500: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19c500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x19c504: 0x0  nop
    ctx->pc = 0x19c504u;
    // NOP
label_19c508:
    // 0x19c508: 0xc0721f0  jal         func_1C87C0
    ctx->pc = 0x19C508u;
    SET_GPR_U32(ctx, 31, 0x19C510u);
    ctx->pc = 0x1C87C0u;
    if (runtime->hasFunction(0x1C87C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C87C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C510u; }
        if (ctx->pc != 0x19C510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1c87c0_0x1c87f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C510u; }
        if (ctx->pc != 0x19C510u) { return; }
    }
    ctx->pc = 0x19C510u;
    // 0x19c510: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c514: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c514u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c518: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c51c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c51cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c520: 0x3e00008  jr          $ra
    ctx->pc = 0x19C520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C520u;
            // 0x19c524: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C528u;
    // 0x19c528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c534: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c538: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x19c538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x19c53c: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x19c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x19c540: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x19c540u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x19c544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c548: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x19c548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x19c54c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19c550: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19c550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19c554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c558: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x19c558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19c55c: 0x8c84cd58  lw          $a0, -0x32A8($a0)
    ctx->pc = 0x19c55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954328)));
    // 0x19c560: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c564: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x19c564u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x19c568: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c56c: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x19c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19c570: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c574: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c574u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c578: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19c578u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x19c57c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19c57cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19c580: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c584: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19c584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19c588: 0xc07616a  jal         func_1D85A8
    ctx->pc = 0x19C588u;
    SET_GPR_U32(ctx, 31, 0x19C590u);
    ctx->pc = 0x1D85A8u;
    if (runtime->hasFunction(0x1D85A8u)) {
        auto targetFn = runtime->lookupFunction(0x1D85A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d85a8_0x1d86b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C590u; }
        if (ctx->pc != 0x19C590u) { return; }
    }
    ctx->pc = 0x19C590u;
    // 0x19c590: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c594: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c594u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c598: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x19C5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C5A0u;
            // 0x19c5a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C5A8u;
    // 0x19c5a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c5ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5b8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x19c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x19c5bc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x19c5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x19c5c0: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x19c5c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x19c5c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19c5c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c5c8: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x19c5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x19c5cc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19c5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19c5d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19c5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x19c5d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c5d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19c5d8: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x19c5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19c5dc: 0x8c84cd58  lw          $a0, -0x32A8($a0)
    ctx->pc = 0x19c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954328)));
    // 0x19c5e0: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c5e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c5e4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x19c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x19c5e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c5ec: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x19c5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19c5f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c5f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c5f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19c5f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c5f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19c5f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x19c5fc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19c5fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x19c600: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x19c600u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x19c604: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x19c604u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x19c608: 0xc07604c  jal         func_1D8130
    ctx->pc = 0x19C608u;
    SET_GPR_U32(ctx, 31, 0x19C610u);
    ctx->pc = 0x1D8130u;
    if (runtime->hasFunction(0x1D8130u)) {
        auto targetFn = runtime->lookupFunction(0x1D8130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C610u; }
        if (ctx->pc != 0x19C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8130_0x1d85a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C610u; }
        if (ctx->pc != 0x19C610u) { return; }
    }
    ctx->pc = 0x19C610u;
    // 0x19c610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c614: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c614u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c618: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c61c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c620: 0x3e00008  jr          $ra
    ctx->pc = 0x19C620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C620u;
            // 0x19c624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C628u;
    // 0x19c628: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c62c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c630: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c634: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c638: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c63c: 0x8c44cd58  lw          $a0, -0x32A8($v0)
    ctx->pc = 0x19c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19c640: 0xc076cbc  jal         func_1DB2F0
    ctx->pc = 0x19C640u;
    SET_GPR_U32(ctx, 31, 0x19C648u);
    ctx->pc = 0x19C644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C640u;
            // 0x19c644: 0x8e050068  lw          $a1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB2F0u;
    if (runtime->hasFunction(0x1DB2F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C648u; }
        if (ctx->pc != 0x19C648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DB2F0_0x1db2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C648u; }
        if (ctx->pc != 0x19C648u) { return; }
    }
    ctx->pc = 0x19C648u;
    // 0x19c648: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c64c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c64cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c658: 0x3e00008  jr          $ra
    ctx->pc = 0x19C658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C658u;
            // 0x19c65c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C660u;
    // 0x19c660: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c668: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x19c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x19c66c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C66Cu;
    {
        const bool branch_taken_0x19c66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C66Cu;
            // 0x19c670: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c66c) {
            ctx->pc = 0x19C680u;
            goto label_19c680;
        }
    }
    ctx->pc = 0x19C674u;
    // 0x19c674: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x19c674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19c678: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x19C678u;
    SET_GPR_U32(ctx, 31, 0x19C680u);
    ctx->pc = 0x19C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C678u;
            // 0x19c67c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C680u; }
        if (ctx->pc != 0x19C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C680u; }
        if (ctx->pc != 0x19C680u) { return; }
    }
    ctx->pc = 0x19C680u;
label_19c680:
    // 0x19c680: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c684: 0x3e00008  jr          $ra
    ctx->pc = 0x19C684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C684u;
            // 0x19c688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C68Cu;
    // 0x19c68c: 0x0  nop
    ctx->pc = 0x19c68cu;
    // NOP
    // 0x19c690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c694: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c69c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c69cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6a0: 0x8e050068  lw          $a1, 0x68($s0)
    ctx->pc = 0x19c6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x19c6a4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x19c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x19c6a8: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19c6ac: 0x2442c660  addiu       $v0, $v0, -0x39A0
    ctx->pc = 0x19c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
    // 0x19c6b0: 0x8c63cb94  lw          $v1, -0x346C($v1)
    ctx->pc = 0x19c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953876)));
    // 0x19c6b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19C6B4u;
    {
        const bool branch_taken_0x19c6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6B4u;
            // 0x19c6b8: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6b4) {
            ctx->pc = 0x19C6C8u;
            goto label_19c6c8;
        }
    }
    ctx->pc = 0x19C6BCu;
    // 0x19c6bc: 0xc0873a6  jal         func_21CE98
    ctx->pc = 0x19C6BCu;
    SET_GPR_U32(ctx, 31, 0x19C6C4u);
    ctx->pc = 0x19C6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6BCu;
            // 0x19c6c0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CE98u;
    if (runtime->hasFunction(0x21CE98u)) {
        auto targetFn = runtime->lookupFunction(0x21CE98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6C4u; }
        if (ctx->pc != 0x19C6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021CE98_0x21ce98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C6C4u; }
        if (ctx->pc != 0x19C6C4u) { return; }
    }
    ctx->pc = 0x19C6C4u;
    // 0x19c6c4: 0x0  nop
    ctx->pc = 0x19c6c4u;
    // NOP
label_19c6c8:
    // 0x19c6c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c6cc: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c6ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c6d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c6d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19C6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6D8u;
            // 0x19c6dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C6E0u;
    // 0x19c6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19c6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19c6e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19c6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c6f0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x19c6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x19c6f4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c6f8: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x19c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x19c6fc: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x19C6FCu;
    {
        const bool branch_taken_0x19c6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C6FCu;
            // 0x19c700: 0x8e050068  lw          $a1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c6fc) {
            ctx->pc = 0x19C738u;
            goto label_19c738;
        }
    }
    ctx->pc = 0x19C704u;
    // 0x19c704: 0x3c020780  lui         $v0, 0x780
    ctx->pc = 0x19c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1920 << 16));
    // 0x19c708: 0x94630004  lhu         $v1, 0x4($v1)
    ctx->pc = 0x19c708u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c70c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19c70cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19c710: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x19c710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x19c714: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x19c714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x19c718: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x19c718u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x19c71c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x19c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x19c720: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x19c720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x19c724: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x19c724u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19c728: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x19c728u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x19c72c: 0xc06e5e0  jal         func_1B9780
    ctx->pc = 0x19C72Cu;
    SET_GPR_U32(ctx, 31, 0x19C734u);
    ctx->pc = 0x1B9780u;
    if (runtime->hasFunction(0x1B9780u)) {
        auto targetFn = runtime->lookupFunction(0x1B9780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C734u; }
        if (ctx->pc != 0x19C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9780_0x1b9780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C734u; }
        if (ctx->pc != 0x19C734u) { return; }
    }
    ctx->pc = 0x19C734u;
    // 0x19c734: 0x0  nop
    ctx->pc = 0x19c734u;
    // NOP
label_19c738:
    // 0x19c738: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c73c: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x19c73cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c740: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19c740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c748: 0x3e00008  jr          $ra
    ctx->pc = 0x19C748u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C748u;
            // 0x19c74c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C750u;
    // 0x19c750: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c754: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c758: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c75c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c760: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c764: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c768: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19c76c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c770: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19c770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c774: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19c774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19c778: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19c77c: 0x40f809  jalr        $v0
    ctx->pc = 0x19C77Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C784u);
        ctx->pc = 0x19C780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C77Cu;
            // 0x19c780: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C784u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C784u; }
            if (ctx->pc != 0x19C784u) { return; }
        }
        }
    }
    ctx->pc = 0x19C784u;
    // 0x19c784: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c788: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c78c: 0xc080362  jal         func_200D88
    ctx->pc = 0x19C78Cu;
    SET_GPR_U32(ctx, 31, 0x19C794u);
    ctx->pc = 0x19C790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C78Cu;
            // 0x19c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C794u; }
        if (ctx->pc != 0x19C794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C794u; }
        if (ctx->pc != 0x19C794u) { return; }
    }
    ctx->pc = 0x19C794u;
    // 0x19c794: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c798: 0xc080362  jal         func_200D88
    ctx->pc = 0x19C798u;
    SET_GPR_U32(ctx, 31, 0x19C7A0u);
    ctx->pc = 0x19C79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C798u;
            // 0x19c79c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7A0u; }
        if (ctx->pc != 0x19C7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C7A0u; }
        if (ctx->pc != 0x19C7A0u) { return; }
    }
    ctx->pc = 0x19C7A0u;
    // 0x19c7a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c7a4: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x19c7a4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c7a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c7ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x19C7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7B4u;
            // 0x19c7b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C7BCu;
    // 0x19c7bc: 0x0  nop
    ctx->pc = 0x19c7bcu;
    // NOP
    // 0x19c7c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c7c4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19c7c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c7cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c7d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c7d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7d8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x19c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x19c7dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19c7e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19c7e4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19c7e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19c7e8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19c7ec: 0x40f809  jalr        $v0
    ctx->pc = 0x19C7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C7F4u);
        ctx->pc = 0x19C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7ECu;
            // 0x19c7f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19C7F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19C7F4u; }
            if (ctx->pc != 0x19C7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x19C7F4u;
    // 0x19c7f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c7f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19c7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c7fc: 0xc080358  jal         func_200D60
    ctx->pc = 0x19C7FCu;
    SET_GPR_U32(ctx, 31, 0x19C804u);
    ctx->pc = 0x19C800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C7FCu;
            // 0x19c800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C804u; }
        if (ctx->pc != 0x19C804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C804u; }
        if (ctx->pc != 0x19C804u) { return; }
    }
    ctx->pc = 0x19C804u;
    // 0x19c804: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c808: 0xc080358  jal         func_200D60
    ctx->pc = 0x19C808u;
    SET_GPR_U32(ctx, 31, 0x19C810u);
    ctx->pc = 0x19C80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19C808u;
            // 0x19c80c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C810u; }
        if (ctx->pc != 0x19C810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19C810u; }
        if (ctx->pc != 0x19C810u) { return; }
    }
    ctx->pc = 0x19C810u;
    // 0x19c810: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19c814: 0xa622002a  sh          $v0, 0x2A($s1)
    ctx->pc = 0x19c814u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x19c818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c81c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c81cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c824: 0x3e00008  jr          $ra
    ctx->pc = 0x19C824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19C824u;
            // 0x19c828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BE5Cu: goto label_19be5c;
            case 0x19BE6Cu: goto label_19be6c;
            case 0x19BEACu: goto label_19beac;
            case 0x19BEF4u: goto label_19bef4;
            case 0x19BF60u: goto label_19bf60;
            case 0x19BF64u: goto label_19bf64;
            case 0x19BFB0u: goto label_19bfb0;
            case 0x19BFB8u: goto label_19bfb8;
            case 0x19C018u: goto label_19c018;
            case 0x19C01Cu: goto label_19c01c;
            case 0x19C058u: goto label_19c058;
            case 0x19C140u: goto label_19c140;
            case 0x19C144u: goto label_19c144;
            case 0x19C198u: goto label_19c198;
            case 0x19C1E4u: goto label_19c1e4;
            case 0x19C200u: goto label_19c200;
            case 0x19C290u: goto label_19c290;
            case 0x19C294u: goto label_19c294;
            case 0x19C2F0u: goto label_19c2f0;
            case 0x19C350u: goto label_19c350;
            case 0x19C354u: goto label_19c354;
            case 0x19C478u: goto label_19c478;
            case 0x19C47Cu: goto label_19c47c;
            case 0x19C48Cu: goto label_19c48c;
            case 0x19C508u: goto label_19c508;
            case 0x19C680u: goto label_19c680;
            case 0x19C6C8u: goto label_19c6c8;
            case 0x19C738u: goto label_19c738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19C82Cu;
    // 0x19c82c: 0x0  nop
    ctx->pc = 0x19c82cu;
    // NOP
}
