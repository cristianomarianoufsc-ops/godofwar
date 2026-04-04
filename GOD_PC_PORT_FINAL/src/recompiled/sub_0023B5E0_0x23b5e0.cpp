#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023B5E0
// Address: 0x23b5e0 - 0x23b858
void sub_0023B5E0_0x23b5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023B5E0_0x23b5e0");
#endif

    ctx->pc = 0x23b5e0u;

    // 0x23b5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b5e4: 0x24820360  addiu       $v0, $a0, 0x360
    ctx->pc = 0x23b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 864));
    // 0x23b5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b5ec: 0x8c830360  lw          $v1, 0x360($a0)
    ctx->pc = 0x23b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 864)));
    // 0x23b5f0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x23B5F0u;
    {
        const bool branch_taken_0x23b5f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B5F0u;
            // 0x23b5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b5f0) {
            ctx->pc = 0x23B5FCu;
            goto label_23b5fc;
        }
    }
    ctx->pc = 0x23B5F8u;
    // 0x23b5f8: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x23b5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_23b5fc:
    // 0x23b5fc: 0x8c82039c  lw          $v0, 0x39C($a0)
    ctx->pc = 0x23b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 924)));
    // 0x23b600: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B600u;
    {
        const bool branch_taken_0x23b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b600) {
            ctx->pc = 0x23B624u;
            goto label_23b624;
        }
    }
    ctx->pc = 0x23B608u;
    // 0x23b608: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23B608u;
    {
        const bool branch_taken_0x23b608 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B608u;
            // 0x23b60c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b608) {
            ctx->pc = 0x23B630u;
            goto label_23b630;
        }
    }
    ctx->pc = 0x23B610u;
    // 0x23b610: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x23b610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x23b614: 0x8ca20100  lw          $v0, 0x100($a1)
    ctx->pc = 0x23b614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x23b618: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23b618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23b61c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23B61Cu;
    {
        const bool branch_taken_0x23b61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b61c) {
            ctx->pc = 0x23B630u;
            goto label_23b630;
        }
    }
    ctx->pc = 0x23B624u;
label_23b624:
    // 0x23b624: 0xc05a5fc  jal         func_1697F0
    ctx->pc = 0x23B624u;
    SET_GPR_U32(ctx, 31, 0x23B62Cu);
    ctx->pc = 0x1697F0u;
    if (runtime->hasFunction(0x1697F0u)) {
        auto targetFn = runtime->lookupFunction(0x1697F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B62Cu; }
        if (ctx->pc != 0x23B62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001697F0_0x1697f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B62Cu; }
        if (ctx->pc != 0x23B62Cu) { return; }
    }
    ctx->pc = 0x23B62Cu;
    // 0x23b62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23b630:
    // 0x23b630: 0x3e00008  jr          $ra
    ctx->pc = 0x23B630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B630u;
            // 0x23b634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B638u;
    // 0x23b638: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b63c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b640: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b644: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x23b644u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b648: 0x2442f6b0  addiu       $v0, $v0, -0x950
    ctx->pc = 0x23b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964912));
    // 0x23b64c: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x23B64Cu;
    SET_GPR_U32(ctx, 31, 0x23B654u);
    ctx->pc = 0x23B650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B64Cu;
            // 0x23b650: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B170u;
    if (runtime->hasFunction(0x23B170u)) {
        auto targetFn = runtime->lookupFunction(0x23B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B654u; }
        if (ctx->pc != 0x23B654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B170_0x23b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B654u; }
        if (ctx->pc != 0x23B654u) { return; }
    }
    ctx->pc = 0x23B654u;
    // 0x23b654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b658: 0x3e00008  jr          $ra
    ctx->pc = 0x23B658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B658u;
            // 0x23b65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B660u;
    // 0x23b660: 0x8c420474  lw          $v0, 0x474($v0)
    ctx->pc = 0x23b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1140)));
    // 0x23b664: 0x0  nop
    ctx->pc = 0x23b664u;
    // NOP
    // 0x23b668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23b668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23b66c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b674: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x23b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x23b678: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x23b678u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x23b67c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B67Cu;
    {
        const bool branch_taken_0x23b67c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B67Cu;
            // 0x23b680: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b67c) {
            ctx->pc = 0x23B68Cu;
            goto label_23b68c;
        }
    }
    ctx->pc = 0x23B684u;
    // 0x23b684: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23B684u;
    SET_GPR_U32(ctx, 31, 0x23B68Cu);
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B68Cu; }
        if (ctx->pc != 0x23B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B68Cu; }
        if (ctx->pc != 0x23B68Cu) { return; }
    }
    ctx->pc = 0x23B68Cu;
label_23b68c:
    // 0x23b68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b690: 0x3e00008  jr          $ra
    ctx->pc = 0x23B690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B690u;
            // 0x23b694: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B698u;
    // 0x23b698: 0x3e00008  jr          $ra
    ctx->pc = 0x23B698u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B698u;
            // 0x23b69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B6A0u;
    // 0x23b6a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b6a4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b6a8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b6ac: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x23b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x23b6b0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b6b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b6b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b6b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23b6bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23b6bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b6c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b6c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b6c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23b6cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x23b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23b6d0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x23b6d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23b6d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23B6D4u;
    {
        const bool branch_taken_0x23b6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6D4u;
            // 0x23b6d8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6d4) {
            ctx->pc = 0x23B728u;
            goto label_23b728;
        }
    }
    ctx->pc = 0x23B6DCu;
    // 0x23b6dc: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x23b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_23b6e0:
    // 0x23b6e0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x23b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x23b6e4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x23b6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b6e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23b6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b6ec: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B6ECu;
    {
        const bool branch_taken_0x23b6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B6ECu;
            // 0x23b6f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b6ec) {
            ctx->pc = 0x23B710u;
            goto label_23b710;
        }
    }
    ctx->pc = 0x23B6F4u;
    // 0x23b6f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23b6f8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23b6f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23b6fc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23b6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23b700: 0x40f809  jalr        $v0
    ctx->pc = 0x23B700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B708u);
        ctx->pc = 0x23B704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B700u;
            // 0x23b704: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B708u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B708u; }
            if (ctx->pc != 0x23B708u) { return; }
        }
        }
    }
    ctx->pc = 0x23B708u;
    // 0x23b708: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x23B708u;
    SET_GPR_U32(ctx, 31, 0x23B710u);
    ctx->pc = 0x23B70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B708u;
            // 0x23b70c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B710u; }
        if (ctx->pc != 0x23B710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B710u; }
        if (ctx->pc != 0x23B710u) { return; }
    }
    ctx->pc = 0x23B710u;
label_23b710:
    // 0x23b710: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x23b710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x23b714: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23b714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23b718: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x23b718u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23b71c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23b71cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b720: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23B720u;
    {
        const bool branch_taken_0x23b720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b720) {
            ctx->pc = 0x23B724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B720u;
            // 0x23b724: 0x8e030028  lw          $v1, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B6E0u;
            runtime->cooperativeGuestYield();
            goto label_23b6e0;
        }
    }
    ctx->pc = 0x23B728u;
label_23b728:
    // 0x23b728: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x23B728u;
    SET_GPR_U32(ctx, 31, 0x23B730u);
    ctx->pc = 0x23B72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B728u;
            // 0x23b72c: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B730u; }
        if (ctx->pc != 0x23B730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B730u; }
        if (ctx->pc != 0x23B730u) { return; }
    }
    ctx->pc = 0x23B730u;
    // 0x23b730: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x23b730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x23b734: 0xc050fde  jal         func_143F78
    ctx->pc = 0x23B734u;
    SET_GPR_U32(ctx, 31, 0x23B73Cu);
    ctx->pc = 0x23B738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B734u;
            // 0x23b738: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143F78u;
    if (runtime->hasFunction(0x143F78u)) {
        auto targetFn = runtime->lookupFunction(0x143F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B73Cu; }
        if (ctx->pc != 0x23B73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143F78_0x143f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B73Cu; }
        if (ctx->pc != 0x23B73Cu) { return; }
    }
    ctx->pc = 0x23B73Cu;
    // 0x23b73c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b740: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x23b740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23b744: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x23b744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x23b748: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B748u;
    {
        const bool branch_taken_0x23b748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B748u;
            // 0x23b74c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b748) {
            ctx->pc = 0x23B758u;
            goto label_23b758;
        }
    }
    ctx->pc = 0x23B750u;
    // 0x23b750: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23B750u;
    SET_GPR_U32(ctx, 31, 0x23B758u);
    ctx->pc = 0x23B754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B750u;
            // 0x23b754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B758u; }
        if (ctx->pc != 0x23B758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B758u; }
        if (ctx->pc != 0x23B758u) { return; }
    }
    ctx->pc = 0x23B758u;
label_23b758:
    // 0x23b758: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b75c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b764: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23b764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b76c: 0x3e00008  jr          $ra
    ctx->pc = 0x23B76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B76Cu;
            // 0x23b770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B774u;
    // 0x23b774: 0x0  nop
    ctx->pc = 0x23b774u;
    // NOP
    // 0x23b778: 0x3e00008  jr          $ra
    ctx->pc = 0x23B778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B778u;
            // 0x23b77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B780u;
    // 0x23b780: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x23b780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b784: 0x0  nop
    ctx->pc = 0x23b784u;
    // NOP
    // 0x23b788: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x23b788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x23b78c: 0x0  nop
    ctx->pc = 0x23b78cu;
    // NOP
    // 0x23b790: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23b790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23b794: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b798: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x23b798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x23b79c: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x23b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
    // 0x23b7a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x23b7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x23b7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7a8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x23b7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x23b7ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23b7acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23b7b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x23b7b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23b7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23b7b8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23b7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x23b7bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x23b7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23b7c0: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x23b7c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x23b7c4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x23B7C4u;
    {
        const bool branch_taken_0x23b7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7C4u;
            // 0x23b7c8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7c4) {
            ctx->pc = 0x23B818u;
            goto label_23b818;
        }
    }
    ctx->pc = 0x23B7CCu;
    // 0x23b7cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_23b7d0:
    // 0x23b7d0: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x23b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x23b7d4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x23b7d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23b7d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x23b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23b7dc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x23B7DCu;
    {
        const bool branch_taken_0x23b7dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7DCu;
            // 0x23b7e0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b7dc) {
            ctx->pc = 0x23B800u;
            goto label_23b800;
        }
    }
    ctx->pc = 0x23B7E4u;
    // 0x23b7e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x23b7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x23b7e8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x23b7e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x23b7ec: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23b7f0: 0x40f809  jalr        $v0
    ctx->pc = 0x23B7F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23B7F8u);
        ctx->pc = 0x23B7F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7F0u;
            // 0x23b7f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B7F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B7F8u; }
            if (ctx->pc != 0x23B7F8u) { return; }
        }
        }
    }
    ctx->pc = 0x23B7F8u;
    // 0x23b7f8: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x23B7F8u;
    SET_GPR_U32(ctx, 31, 0x23B800u);
    ctx->pc = 0x23B7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B7F8u;
            // 0x23b7fc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B800u; }
        if (ctx->pc != 0x23B800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B800u; }
        if (ctx->pc != 0x23B800u) { return; }
    }
    ctx->pc = 0x23B800u;
label_23b800:
    // 0x23b800: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23b800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23b804: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23b804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x23b808: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x23b808u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x23b80c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x23b80cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23b810: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x23B810u;
    {
        const bool branch_taken_0x23b810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b810) {
            ctx->pc = 0x23B814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B810u;
            // 0x23b814: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B7D0u;
            runtime->cooperativeGuestYield();
            goto label_23b7d0;
        }
    }
    ctx->pc = 0x23B818u;
label_23b818:
    // 0x23b818: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x23B818u;
    SET_GPR_U32(ctx, 31, 0x23B820u);
    ctx->pc = 0x23B81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B818u;
            // 0x23b81c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B820u; }
        if (ctx->pc != 0x23B820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B820u; }
        if (ctx->pc != 0x23B820u) { return; }
    }
    ctx->pc = 0x23B820u;
    // 0x23b820: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23b820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x23b824: 0x32630001  andi        $v1, $s3, 0x1
    ctx->pc = 0x23b824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x23b828: 0x2442f4e0  addiu       $v0, $v0, -0xB20
    ctx->pc = 0x23b828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964448));
    // 0x23b82c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23B82Cu;
    {
        const bool branch_taken_0x23b82c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B82Cu;
            // 0x23b830: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b82c) {
            ctx->pc = 0x23B83Cu;
            goto label_23b83c;
        }
    }
    ctx->pc = 0x23B834u;
    // 0x23b834: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x23B834u;
    SET_GPR_U32(ctx, 31, 0x23B83Cu);
    ctx->pc = 0x23B838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B834u;
            // 0x23b838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B83Cu; }
        if (ctx->pc != 0x23B83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B83Cu; }
        if (ctx->pc != 0x23B83Cu) { return; }
    }
    ctx->pc = 0x23B83Cu;
label_23b83c:
    // 0x23b83c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x23b83cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23b840: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x23b840u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23b844: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b844u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23b848: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x23b848u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23b84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23b84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23b850: 0x3e00008  jr          $ra
    ctx->pc = 0x23B850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B850u;
            // 0x23b854: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23B5FCu: goto label_23b5fc;
            case 0x23B624u: goto label_23b624;
            case 0x23B630u: goto label_23b630;
            case 0x23B68Cu: goto label_23b68c;
            case 0x23B6E0u: goto label_23b6e0;
            case 0x23B710u: goto label_23b710;
            case 0x23B728u: goto label_23b728;
            case 0x23B758u: goto label_23b758;
            case 0x23B7D0u: goto label_23b7d0;
            case 0x23B800u: goto label_23b800;
            case 0x23B818u: goto label_23b818;
            case 0x23B83Cu: goto label_23b83c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23B858u;
}
