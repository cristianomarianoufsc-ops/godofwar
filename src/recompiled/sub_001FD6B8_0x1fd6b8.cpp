#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD6B8
// Address: 0x1fd6b8 - 0x1fd8d8
void sub_001FD6B8_0x1fd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD6B8_0x1fd6b8");
#endif

    ctx->pc = 0x1fd6b8u;

    // 0x1fd6b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd6bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd6c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd6c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd6c4: 0xc07f4c8  jal         func_1FD320
    ctx->pc = 0x1FD6C4u;
    SET_GPR_U32(ctx, 31, 0x1FD6CCu);
    ctx->pc = 0x1FD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6C4u;
            // 0x1fd6c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD320u;
    if (runtime->hasFunction(0x1FD320u)) {
        auto targetFn = runtime->lookupFunction(0x1FD320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6CCu; }
        if (ctx->pc != 0x1FD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd320_0x1fd340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD6CCu; }
        if (ctx->pc != 0x1FD6CCu) { return; }
    }
    ctx->pc = 0x1FD6CCu;
    // 0x1fd6cc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1fd6d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fd6d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6d4: 0x246396b0  addiu       $v1, $v1, -0x6950
    ctx->pc = 0x1fd6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940336));
    // 0x1fd6d8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1fd6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1fd6dc: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1fd6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1fd6e0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1fd6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1fd6e4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fd6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fd6e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd6ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd6ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD6F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6F0u;
            // 0x1fd6f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD6F8u;
    // 0x1fd6f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd6fc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1fd6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1fd700: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fd704: 0x244296b0  addiu       $v0, $v0, -0x6950
    ctx->pc = 0x1fd704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940336));
    // 0x1fd708: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fd708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fd70c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd70cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd714: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1fd714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x1fd718: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1fd71c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD71Cu;
    {
        const bool branch_taken_0x1fd71c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD71Cu;
            // 0x1fd720: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd71c) {
            ctx->pc = 0x1FD72Cu;
            goto label_1fd72c;
        }
    }
    ctx->pc = 0x1FD724u;
    // 0x1fd724: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1FD724u;
    SET_GPR_U32(ctx, 31, 0x1FD72Cu);
    ctx->pc = 0x1FD728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD724u;
            // 0x1fd728: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (runtime->hasFunction(0x1FE690u)) {
        auto targetFn = runtime->lookupFunction(0x1FE690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD72Cu; }
        if (ctx->pc != 0x1FD72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE690_0x1fe690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD72Cu; }
        if (ctx->pc != 0x1FD72Cu) { return; }
    }
    ctx->pc = 0x1FD72Cu;
label_1fd72c:
    // 0x1fd72c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1fd72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fd730: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD730u;
    {
        const bool branch_taken_0x1fd730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd730) {
            ctx->pc = 0x1FD734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD730u;
            // 0x1fd734: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD744u;
            goto label_1fd744;
        }
    }
    ctx->pc = 0x1FD738u;
    // 0x1fd738: 0xc07fbf8  jal         func_1FEFE0
    ctx->pc = 0x1FD738u;
    SET_GPR_U32(ctx, 31, 0x1FD740u);
    ctx->pc = 0x1FD73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD738u;
            // 0x1fd73c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFE0u;
    if (runtime->hasFunction(0x1FEFE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD740u; }
        if (ctx->pc != 0x1FD740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEFE0_0x1fefe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD740u; }
        if (ctx->pc != 0x1FD740u) { return; }
    }
    ctx->pc = 0x1FD740u;
    // 0x1fd740: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fd740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1fd744:
    // 0x1fd744: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1fd744u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fd748: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd74c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD74Cu;
    {
        const bool branch_taken_0x1fd74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD74Cu;
            // 0x1fd750: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd74c) {
            ctx->pc = 0x1FD780u;
            goto label_1fd780;
        }
    }
    ctx->pc = 0x1FD754u;
    // 0x1fd754: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fd754u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd758: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fd758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fd75c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd760: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd764: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fd764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd768: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd76c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1fd76cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1fd770: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1fd770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fd774: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD77Cu);
        ctx->pc = 0x1FD778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD774u;
            // 0x1fd778: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD77Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD77Cu; }
            if (ctx->pc != 0x1FD77Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD77Cu;
    // 0x1fd77c: 0x0  nop
    ctx->pc = 0x1fd77cu;
    // NOP
label_1fd780:
    // 0x1fd780: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x1fd780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1fd784: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1fd784u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd788: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fd788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fd78c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1fd78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1fd790: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fd790u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fd794: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd798: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1fd798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd79c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd7a0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1fd7a4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1fd7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1fd7a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD7B0u);
        ctx->pc = 0x1FD7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7A8u;
            // 0x1fd7ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD7B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7B0u; }
            if (ctx->pc != 0x1FD7B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD7B0u;
    // 0x1fd7b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1fd7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1fd7b4: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1fd7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1fd7b8: 0x244296e8  addiu       $v0, $v0, -0x6918
    ctx->pc = 0x1fd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940392));
    // 0x1fd7bc: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fd7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fd7c0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD7C0u;
    {
        const bool branch_taken_0x1fd7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7C0u;
            // 0x1fd7c4: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7c0) {
            ctx->pc = 0x1FD7D0u;
            goto label_1fd7d0;
        }
    }
    ctx->pc = 0x1FD7C8u;
    // 0x1fd7c8: 0xc07f478  jal         func_1FD1E0
    ctx->pc = 0x1FD7C8u;
    SET_GPR_U32(ctx, 31, 0x1FD7D0u);
    ctx->pc = 0x1FD7CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7C8u;
            // 0x1fd7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD1E0u;
    if (runtime->hasFunction(0x1FD1E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FD1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7D0u; }
        if (ctx->pc != 0x1FD7D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1fd1e0_0x1fd208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD7D0u; }
        if (ctx->pc != 0x1FD7D0u) { return; }
    }
    ctx->pc = 0x1FD7D0u;
label_1fd7d0:
    // 0x1fd7d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fd7d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fd7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd7d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd7d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD7DCu;
            // 0x1fd7e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD7E4u;
    // 0x1fd7e4: 0x0  nop
    ctx->pc = 0x1fd7e4u;
    // NOP
    // 0x1fd7e8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1fd7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1fd7ec: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1fd7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1fd7f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1fd7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1fd7f4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1fd7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1fd7f8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fd7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7fc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1fd7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1fd800: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1fd800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1fd804: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD804u;
    {
        const bool branch_taken_0x1fd804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD804u;
            // 0x1fd808: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd804) {
            ctx->pc = 0x1FD824u;
            goto label_1fd824;
        }
    }
    ctx->pc = 0x1FD80Cu;
    // 0x1fd80c: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1FD80Cu;
    SET_GPR_U32(ctx, 31, 0x1FD814u);
    ctx->pc = 0x1FD810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD80Cu;
            // 0x1fd810: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD814u; }
        if (ctx->pc != 0x1FD814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD814u; }
        if (ctx->pc != 0x1FD814u) { return; }
    }
    ctx->pc = 0x1FD814u;
    // 0x1fd814: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd818: 0xc07f93c  jal         func_1FE4F0
    ctx->pc = 0x1FD818u;
    SET_GPR_U32(ctx, 31, 0x1FD820u);
    ctx->pc = 0x1FD81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD818u;
            // 0x1fd81c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE4F0u;
    if (runtime->hasFunction(0x1FE4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1FE4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD820u; }
        if (ctx->pc != 0x1FD820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FE4F0_0x1fe4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD820u; }
        if (ctx->pc != 0x1FD820u) { return; }
    }
    ctx->pc = 0x1FD820u;
    // 0x1fd820: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x1fd820u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_1fd824:
    // 0x1fd824: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x1fd828: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD828u;
    {
        const bool branch_taken_0x1fd828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd828) {
            ctx->pc = 0x1FD82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD828u;
            // 0x1fd82c: 0x8e420030  lw          $v0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FD84Cu;
            goto label_1fd84c;
        }
    }
    ctx->pc = 0x1FD830u;
    // 0x1fd830: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1FD830u;
    SET_GPR_U32(ctx, 31, 0x1FD838u);
    ctx->pc = 0x1FD834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD830u;
            // 0x1fd834: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD838u; }
        if (ctx->pc != 0x1FD838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD838u; }
        if (ctx->pc != 0x1FD838u) { return; }
    }
    ctx->pc = 0x1FD838u;
    // 0x1fd838: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fd838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd83c: 0xc07fba4  jal         func_1FEE90
    ctx->pc = 0x1FD83Cu;
    SET_GPR_U32(ctx, 31, 0x1FD844u);
    ctx->pc = 0x1FD840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD83Cu;
            // 0x1fd840: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE90u;
    if (runtime->hasFunction(0x1FEE90u)) {
        auto targetFn = runtime->lookupFunction(0x1FEE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD844u; }
        if (ctx->pc != 0x1FD844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FEE90_0x1fee90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD844u; }
        if (ctx->pc != 0x1FD844u) { return; }
    }
    ctx->pc = 0x1FD844u;
    // 0x1fd844: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x1fd844u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
    // 0x1fd848: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1fd848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1fd84c:
    // 0x1fd84c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FD84Cu;
    {
        const bool branch_taken_0x1fd84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD84Cu;
            // 0x1fd850: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd84c) {
            ctx->pc = 0x1FD8C0u;
            goto label_1fd8c0;
        }
    }
    ctx->pc = 0x1FD854u;
    // 0x1fd854: 0xc05c162  jal         func_170588
    ctx->pc = 0x1FD854u;
    SET_GPR_U32(ctx, 31, 0x1FD85Cu);
    ctx->pc = 0x1FD858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD854u;
            // 0x1fd858: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170588u;
    if (runtime->hasFunction(0x170588u)) {
        auto targetFn = runtime->lookupFunction(0x170588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD85Cu; }
        if (ctx->pc != 0x1FD85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_170588_0x170620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FD85Cu; }
        if (ctx->pc != 0x1FD85Cu) { return; }
    }
    ctx->pc = 0x1FD85Cu;
    // 0x1fd85c: 0x97a20000  lhu         $v0, 0x0($sp)
    ctx->pc = 0x1fd85cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd860: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1fd860u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1fd864: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x1fd868: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd86c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fd86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fd870: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fd870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd874: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd878: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd87c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1fd87cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1fd880: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x1fd880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1fd884: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD884u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD88Cu);
        ctx->pc = 0x1FD888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD884u;
            // 0x1fd888: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD88Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD88Cu; }
            if (ctx->pc != 0x1FD88Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD88Cu;
    // 0x1fd88c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd890: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1fd890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd894: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd898: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1fd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1fd89c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd89cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd8a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd8a8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1fd8a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1fd8ac: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1fd8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1fd8b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD8B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD8B8u);
        ctx->pc = 0x1FD8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8B0u;
            // 0x1fd8b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD8B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD8B8u; }
            if (ctx->pc != 0x1FD8B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1FD8B8u;
    // 0x1fd8b8: 0xae500030  sw          $s0, 0x30($s2)
    ctx->pc = 0x1fd8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 16));
    // 0x1fd8bc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1fd8bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1fd8c0:
    // 0x1fd8c0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1fd8c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fd8c4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1fd8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fd8c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1fd8c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fd8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD8CCu;
            // 0x1fd8d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD72Cu: goto label_1fd72c;
            case 0x1FD744u: goto label_1fd744;
            case 0x1FD780u: goto label_1fd780;
            case 0x1FD7D0u: goto label_1fd7d0;
            case 0x1FD824u: goto label_1fd824;
            case 0x1FD84Cu: goto label_1fd84c;
            case 0x1FD8C0u: goto label_1fd8c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD8D4u;
    // 0x1fd8d4: 0x0  nop
    ctx->pc = 0x1fd8d4u;
    // NOP
}
