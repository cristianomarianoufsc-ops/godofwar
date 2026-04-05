#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012D5A8
// Address: 0x12d5a8 - 0x12dac8
void sub_0012D5A8_0x12d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D5A8_0x12d5a8");
#endif

    ctx->pc = 0x12d5a8u;

    // 0x12d5a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12d5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12d5ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x12d5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x12d5b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x12d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x12d5b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x12d5b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d5b8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x12d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x12d5bc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x12d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x12d5c0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x12d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x12d5c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12d5c8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x12d5c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x12d5cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d5d0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d5d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x12d5d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x12d5d8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x12D5D8u;
    {
        const bool branch_taken_0x12d5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5D8u;
            // 0x12d5dc: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5d8) {
            ctx->pc = 0x12D778u;
            goto label_12d778;
        }
    }
    ctx->pc = 0x12D5E0u;
    // 0x12d5e0: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x12d5e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x12d5e4: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d5e8: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12d5e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d5ec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12d5f0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D5F0u;
    {
        const bool branch_taken_0x12d5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D5F0u;
            // 0x12d5f4: 0x8e92002c  lw          $s2, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d5f0) {
            ctx->pc = 0x12D620u;
            goto label_12d620;
        }
    }
    ctx->pc = 0x12D5F8u;
    // 0x12d5f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12d5fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d600: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x12d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x12d604: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12d604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12d608: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d60c: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x12d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x12d610: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d614: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12d614u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12d618: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d61c: 0x0  nop
    ctx->pc = 0x12d61cu;
    // NOP
label_12d620:
    // 0x12d620: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x12d620u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x12d624: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12d624u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12d628: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d62c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d630: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x12d630u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x12d634: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d638: 0xae63ed60  sw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d638u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 3));
    // 0x12d63c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d640: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D640u;
    SET_GPR_U32(ctx, 31, 0x12D648u);
    ctx->pc = 0x12D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D640u;
            // 0x12d644: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D648u; }
        if (ctx->pc != 0x12D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D648u; }
        if (ctx->pc != 0x12D648u) { return; }
    }
    ctx->pc = 0x12D648u;
    // 0x12d648: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x12d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x12d64c: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d650: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d658: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12d658u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d65c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12d660: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12d660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12d664: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12d664u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12d668: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d66c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d670: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d678: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x12d678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12d67c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12d67cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12d680: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12d680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12d684: 0x40f809  jalr        $v0
    ctx->pc = 0x12D684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D68Cu);
        ctx->pc = 0x12D688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D684u;
            // 0x12d688: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12D68Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D620u: goto label_12d620;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D710u: goto label_12d710;
            case 0x12D730u: goto label_12d730;
            case 0x12D768u: goto label_12d768;
            case 0x12D778u: goto label_12d778;
            case 0x12D7D8u: goto label_12d7d8;
            case 0x12D878u: goto label_12d878;
            case 0x12D898u: goto label_12d898;
            case 0x12D8D8u: goto label_12d8d8;
            case 0x12D8F8u: goto label_12d8f8;
            case 0x12D9B0u: goto label_12d9b0;
            case 0x12D9D0u: goto label_12d9d0;
            case 0x12DA08u: goto label_12da08;
            case 0x12DA38u: goto label_12da38;
            case 0x12DA70u: goto label_12da70;
            case 0x12DA8Cu: goto label_12da8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D68Cu; }
            if (ctx->pc != 0x12D68Cu) { return; }
        }
        }
    }
    ctx->pc = 0x12D68Cu;
    // 0x12d68c: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d694: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d698: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D698u;
    SET_GPR_U32(ctx, 31, 0x12D6A0u);
    ctx->pc = 0x12D69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D698u;
            // 0x12d69c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6A0u; }
        if (ctx->pc != 0x12D6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6A0u; }
        if (ctx->pc != 0x12D6A0u) { return; }
    }
    ctx->pc = 0x12D6A0u;
    // 0x12d6a0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12d6a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6a8: 0xc04b29e  jal         func_12CA78
    ctx->pc = 0x12D6A8u;
    SET_GPR_U32(ctx, 31, 0x12D6B0u);
    ctx->pc = 0x12D6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6A8u;
            // 0x12d6ac: 0x8c45f1ac  lw          $a1, -0xE54($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963628)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CA78u;
    if (runtime->hasFunction(0x12CA78u)) {
        auto targetFn = runtime->lookupFunction(0x12CA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6B0u; }
        if (ctx->pc != 0x12D6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CA78_0x12ca78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D6B0u; }
        if (ctx->pc != 0x12D6B0u) { return; }
    }
    ctx->pc = 0x12D6B0u;
    // 0x12d6b0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12d6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12d6b4: 0x8ca4f168  lw          $a0, -0xE98($a1)
    ctx->pc = 0x12d6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294963560)));
    // 0x12d6b8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d6bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D6BCu;
    {
        const bool branch_taken_0x12d6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6BCu;
            // 0x12d6c0: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d6bc) {
            ctx->pc = 0x12D6E8u;
            goto label_12d6e8;
        }
    }
    ctx->pc = 0x12D6C4u;
    // 0x12d6c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12d6c8:
    // 0x12d6c8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d6cc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d6d0: 0x0  nop
    ctx->pc = 0x12d6d0u;
    // NOP
    // 0x12d6d4: 0x0  nop
    ctx->pc = 0x12d6d4u;
    // NOP
    // 0x12d6d8: 0x0  nop
    ctx->pc = 0x12d6d8u;
    // NOP
    // 0x12d6dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D6DCu;
    {
        const bool branch_taken_0x12d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d6dc) {
            ctx->pc = 0x12D6E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D6DCu;
            // 0x12d6e0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D6C8u;
            runtime->cooperativeGuestYield();
            goto label_12d6c8;
        }
    }
    ctx->pc = 0x12D6E4u;
    // 0x12d6e4: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x12d6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_12d6e8:
    // 0x12d6e8: 0x3c036000  lui         $v1, 0x6000
    ctx->pc = 0x12d6e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)24576 << 16));
    // 0x12d6ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12d6f0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12d6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12d6f4: 0xaca2f168  sw          $v0, -0xE98($a1)
    ctx->pc = 0x12d6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 2));
    // 0x12d6f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12d6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d6fc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d700: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D700u;
    {
        const bool branch_taken_0x12d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D700u;
            // 0x12d704: 0x8e62ed60  lw          $v0, -0x12A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d700) {
            ctx->pc = 0x12D730u;
            goto label_12d730;
        }
    }
    ctx->pc = 0x12D708u;
    // 0x12d708: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12d70c: 0x0  nop
    ctx->pc = 0x12d70cu;
    // NOP
label_12d710:
    // 0x12d710: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d714: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d718: 0x0  nop
    ctx->pc = 0x12d718u;
    // NOP
    // 0x12d71c: 0x0  nop
    ctx->pc = 0x12d71cu;
    // NOP
    // 0x12d720: 0x0  nop
    ctx->pc = 0x12d720u;
    // NOP
    // 0x12d724: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D724u;
    {
        const bool branch_taken_0x12d724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d724) {
            ctx->pc = 0x12D728u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D724u;
            // 0x12d728: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D710u;
            runtime->cooperativeGuestYield();
            goto label_12d710;
        }
    }
    ctx->pc = 0x12D72Cu;
    // 0x12d72c: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_12d730:
    // 0x12d730: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x12d730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12d734: 0xaca4f168  sw          $a0, -0xE98($a1)
    ctx->pc = 0x12d734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294963560), GPR_U32(ctx, 4));
    // 0x12d738: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12d738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d73c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d73cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d740: 0xae65ed60  sw          $a1, -0x12A0($s3)
    ctx->pc = 0x12d740u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 5));
    // 0x12d744: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d748: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x12d748u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d74c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d750: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D750u;
    {
        const bool branch_taken_0x12d750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D750u;
            // 0x12d754: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d750) {
            ctx->pc = 0x12D768u;
            goto label_12d768;
        }
    }
    ctx->pc = 0x12D758u;
    // 0x12d758: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d758u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d75c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d760: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D760u;
    SET_GPR_U32(ctx, 31, 0x12D768u);
    ctx->pc = 0x12D764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D760u;
            // 0x12d764: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D768u; }
        if (ctx->pc != 0x12D768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D768u; }
        if (ctx->pc != 0x12D768u) { return; }
    }
    ctx->pc = 0x12D768u;
label_12d768:
    // 0x12d768: 0x26c3bb98  addiu       $v1, $s6, -0x4468
    ctx->pc = 0x12d768u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d76c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x12d76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12d770: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12d770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12d774: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x12d774u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_12d778:
    // 0x12d778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d77c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x12d77cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12d780: 0x2a21004  sllv        $v0, $v0, $s5
    ctx->pc = 0x12d780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 21) & 0x1F));
    // 0x12d784: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x12d784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x12d788: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12d788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12d78c: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x12D78Cu;
    {
        const bool branch_taken_0x12d78c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D78Cu;
            // 0x12d790: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d78c) {
            ctx->pc = 0x12DA38u;
            goto label_12da38;
        }
    }
    ctx->pc = 0x12D794u;
    // 0x12d794: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x12d794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12d798: 0x8c520024  lw          $s2, 0x24($v0)
    ctx->pc = 0x12d798u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x12d79c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x12d79cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x12d7a0: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d7a4: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x12d7a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d7a8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12d7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12d7ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D7ACu;
    {
        const bool branch_taken_0x12d7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12D7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7ACu;
            // 0x12d7b0: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d7ac) {
            ctx->pc = 0x12D7D8u;
            goto label_12d7d8;
        }
    }
    ctx->pc = 0x12D7B4u;
    // 0x12d7b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x12d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x12d7b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12d7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d7bc: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x12d7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x12d7c0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12d7c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12d7c8: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x12d7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x12d7cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12d7d0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12d7d4: 0x8e63ed60  lw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_12d7d8:
    // 0x12d7d8: 0x2630ed68  addiu       $s0, $s1, -0x1298
    ctx->pc = 0x12d7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12d7dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12d7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d7e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d7e4: 0x3c16002d  lui         $s6, 0x2D
    ctx->pc = 0x12d7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)45 << 16));
    // 0x12d7e8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x12d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12d7ec: 0xae63ed60  sw          $v1, -0x12A0($s3)
    ctx->pc = 0x12d7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 3));
    // 0x12d7f0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d7f4: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D7F4u;
    SET_GPR_U32(ctx, 31, 0x12D7FCu);
    ctx->pc = 0x12D7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D7F4u;
            // 0x12d7f8: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7FCu; }
        if (ctx->pc != 0x12D7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D7FCu; }
        if (ctx->pc != 0x12D7FCu) { return; }
    }
    ctx->pc = 0x12D7FCu;
    // 0x12d7fc: 0x26450018  addiu       $a1, $s2, 0x18
    ctx->pc = 0x12d7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x12d800: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12d800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12d804: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12d808: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12d808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d80c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x12d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d810: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12d810u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12d814: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x12d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12d818: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x12d818u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x12d81c: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d824: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12d828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d82c: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x12d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x12d830: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x12d830u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x12d834: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x12d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12d838: 0x40f809  jalr        $v0
    ctx->pc = 0x12D838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12D840u);
        ctx->pc = 0x12D83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D838u;
            // 0x12d83c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12D840u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D620u: goto label_12d620;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D710u: goto label_12d710;
            case 0x12D730u: goto label_12d730;
            case 0x12D768u: goto label_12d768;
            case 0x12D778u: goto label_12d778;
            case 0x12D7D8u: goto label_12d7d8;
            case 0x12D878u: goto label_12d878;
            case 0x12D898u: goto label_12d898;
            case 0x12D8D8u: goto label_12d8d8;
            case 0x12D8F8u: goto label_12d8f8;
            case 0x12D9B0u: goto label_12d9b0;
            case 0x12D9D0u: goto label_12d9d0;
            case 0x12DA08u: goto label_12da08;
            case 0x12DA38u: goto label_12da38;
            case 0x12DA70u: goto label_12da70;
            case 0x12DA8Cu: goto label_12da8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12D840u; }
            if (ctx->pc != 0x12D840u) { return; }
        }
        }
    }
    ctx->pc = 0x12D840u;
    // 0x12d840: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
    // 0x12d844: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x12d844u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x12d848: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d848u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d84c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12d850: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12D850u;
    SET_GPR_U32(ctx, 31, 0x12D858u);
    ctx->pc = 0x12D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D850u;
            // 0x12d854: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D858u; }
        if (ctx->pc != 0x12D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D858u; }
        if (ctx->pc != 0x12D858u) { return; }
    }
    ctx->pc = 0x12D858u;
    // 0x12d858: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x12d858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x12d85c: 0x8e43f168  lw          $v1, -0xE98($s2)
    ctx->pc = 0x12d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12d860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d864: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12d864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12d868: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D868u;
    {
        const bool branch_taken_0x12d868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D868u;
            // 0x12d86c: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d868) {
            ctx->pc = 0x12D898u;
            goto label_12d898;
        }
    }
    ctx->pc = 0x12D870u;
    // 0x12d870: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12d870u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12d874: 0x0  nop
    ctx->pc = 0x12d874u;
    // NOP
label_12d878:
    // 0x12d878: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x12d878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x12d87c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x12d87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x12d880: 0x0  nop
    ctx->pc = 0x12d880u;
    // NOP
    // 0x12d884: 0x0  nop
    ctx->pc = 0x12d884u;
    // NOP
    // 0x12d888: 0x0  nop
    ctx->pc = 0x12d888u;
    // NOP
    // 0x12d88c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D88Cu;
    {
        const bool branch_taken_0x12d88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d88c) {
            ctx->pc = 0x12D890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D88Cu;
            // 0x12d890: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D878u;
            runtime->cooperativeGuestYield();
            goto label_12d878;
        }
    }
    ctx->pc = 0x12D894u;
    // 0x12d894: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12d894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_12d898:
    // 0x12d898: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x12d898u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12d89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12d89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12d8a0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x12d8a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x12d8a4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x12d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x12d8a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x12d8a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8ac: 0x8e05f1ac  lw          $a1, -0xE54($s0)
    ctx->pc = 0x12d8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x12d8b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x12d8b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d8b4: 0xc04b3f4  jal         func_12CFD0
    ctx->pc = 0x12D8B4u;
    SET_GPR_U32(ctx, 31, 0x12D8BCu);
    ctx->pc = 0x12D8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8B4u;
            // 0x12d8b8: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CFD0u;
    if (runtime->hasFunction(0x12CFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12CFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8BCu; }
        if (ctx->pc != 0x12D8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012CFD0_0x12cfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D8BCu; }
        if (ctx->pc != 0x12D8BCu) { return; }
    }
    ctx->pc = 0x12D8BCu;
    // 0x12d8bc: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x12d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x12d8c0: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x12d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d8c4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d8c8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d8cc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12D8CCu;
    {
        const bool branch_taken_0x12d8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8CCu;
            // 0x12d8d0: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d8cc) {
            ctx->pc = 0x12D8F8u;
            goto label_12d8f8;
        }
    }
    ctx->pc = 0x12D8D4u;
    // 0x12d8d4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_12d8d8:
    // 0x12d8d8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d8dc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d8e0: 0x0  nop
    ctx->pc = 0x12d8e0u;
    // NOP
    // 0x12d8e4: 0x0  nop
    ctx->pc = 0x12d8e4u;
    // NOP
    // 0x12d8e8: 0x0  nop
    ctx->pc = 0x12d8e8u;
    // NOP
    // 0x12d8ec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D8ECu;
    {
        const bool branch_taken_0x12d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d8ec) {
            ctx->pc = 0x12D8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D8ECu;
            // 0x12d8f0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D8D8u;
            runtime->cooperativeGuestYield();
            goto label_12d8d8;
        }
    }
    ctx->pc = 0x12D8F4u;
    // 0x12d8f4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12d8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_12d8f8:
    // 0x12d8f8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x12d8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x12d8fc: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x12d8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x12d900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12d900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12d904: 0x3c046000  lui         $a0, 0x6000
    ctx->pc = 0x12d904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24576 << 16));
    // 0x12d908: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12D908u;
    SET_GPR_U32(ctx, 31, 0x12D910u);
    ctx->pc = 0x12D90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D908u;
            // 0x12d90c: 0xae43f168  sw          $v1, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D910u; }
        if (ctx->pc != 0x12D910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D910u; }
        if (ctx->pc != 0x12D910u) { return; }
    }
    ctx->pc = 0x12D910u;
    // 0x12d910: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12d910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d914: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12d914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12d918: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12d918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d91c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12d920: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12D920u;
    SET_GPR_U32(ctx, 31, 0x12D928u);
    ctx->pc = 0x12D924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D920u;
            // 0x12d924: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D928u; }
        if (ctx->pc != 0x12D928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D928u; }
        if (ctx->pc != 0x12D928u) { return; }
    }
    ctx->pc = 0x12D928u;
    // 0x12d928: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x12d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d92c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12d92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12d930: 0x34038001  ori         $v1, $zero, 0x8001
    ctx->pc = 0x12d930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x12d934: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12d934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12d938: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12d938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12d93c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x12d93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12d940: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12d940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12d944: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x12d944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x12d948: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12d948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12d94c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12d94cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12d950: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12d950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12d954: 0x8c62dd58  lw          $v0, -0x22A8($v1)
    ctx->pc = 0x12d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958424)));
    // 0x12d958: 0x9c83f1a8  lwu         $v1, -0xE58($a0)
    ctx->pc = 0x12d958u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294963624)));
    // 0x12d95c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x12d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x12d960: 0x9e05f1ac  lwu         $a1, -0xE54($s0)
    ctx->pc = 0x12d960u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4294963628)));
    // 0x12d964: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12d964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12d968: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x12d968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d96c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x12d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x12d970: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x12d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x12d974: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x12d974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x12d978: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x12d978u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x12d97c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x12d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x12d980: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12d980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x12d984: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x12d984u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x12d988: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12D988u;
    SET_GPR_U32(ctx, 31, 0x12D990u);
    ctx->pc = 0x12D98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12D988u;
            // 0x12d98c: 0xae42f168  sw          $v0, -0xE98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D990u; }
        if (ctx->pc != 0x12D990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D990u; }
        if (ctx->pc != 0x12D990u) { return; }
    }
    ctx->pc = 0x12D990u;
    // 0x12d990: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12D990u;
    SET_GPR_U32(ctx, 31, 0x12D998u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D998u; }
        if (ctx->pc != 0x12D998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12D998u; }
        if (ctx->pc != 0x12D998u) { return; }
    }
    ctx->pc = 0x12D998u;
    // 0x12d998: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x12d998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x12d99c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d99cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d9a0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12D9A0u;
    {
        const bool branch_taken_0x12d9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9A0u;
            // 0x12d9a4: 0x8e62ed60  lw          $v0, -0x12A0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9a0) {
            ctx->pc = 0x12D9D0u;
            goto label_12d9d0;
        }
    }
    ctx->pc = 0x12D9A8u;
    // 0x12d9a8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12d9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12d9ac: 0x0  nop
    ctx->pc = 0x12d9acu;
    // NOP
label_12d9b0:
    // 0x12d9b0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x12d9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x12d9b4: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x12d9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x12d9b8: 0x0  nop
    ctx->pc = 0x12d9b8u;
    // NOP
    // 0x12d9bc: 0x0  nop
    ctx->pc = 0x12d9bcu;
    // NOP
    // 0x12d9c0: 0x0  nop
    ctx->pc = 0x12d9c0u;
    // NOP
    // 0x12d9c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12D9C4u;
    {
        const bool branch_taken_0x12d9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12d9c4) {
            ctx->pc = 0x12D9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9C4u;
            // 0x12d9c8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12D9B0u;
            runtime->cooperativeGuestYield();
            goto label_12d9b0;
        }
    }
    ctx->pc = 0x12D9CCu;
    // 0x12d9cc: 0x8e62ed60  lw          $v0, -0x12A0($s3)
    ctx->pc = 0x12d9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294962528)));
label_12d9d0:
    // 0x12d9d0: 0x2631ed68  addiu       $s1, $s1, -0x1298
    ctx->pc = 0x12d9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962536));
    // 0x12d9d4: 0xae44f168  sw          $a0, -0xE98($s2)
    ctx->pc = 0x12d9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 4));
    // 0x12d9d8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x12d9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12d9dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12d9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12d9e0: 0xae65ed60  sw          $a1, -0x12A0($s3)
    ctx->pc = 0x12d9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294962528), GPR_U32(ctx, 5));
    // 0x12d9e4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12d9e8: 0x2ca30100  sltiu       $v1, $a1, 0x100
    ctx->pc = 0x12d9e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x12d9ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x12d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12d9f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D9F0u;
    {
        const bool branch_taken_0x12d9f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12D9F0u;
            // 0x12d9f4: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d9f0) {
            ctx->pc = 0x12DA08u;
            goto label_12da08;
        }
    }
    ctx->pc = 0x12D9F8u;
    // 0x12d9f8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x12d9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x12d9fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x12d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x12da00: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x12DA00u;
    SET_GPR_U32(ctx, 31, 0x12DA08u);
    ctx->pc = 0x12DA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA00u;
            // 0x12da04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA08u; }
        if (ctx->pc != 0x12DA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12DA08u; }
        if (ctx->pc != 0x12DA08u) { return; }
    }
    ctx->pc = 0x12DA08u;
label_12da08:
    // 0x12da08: 0x26c4bb98  addiu       $a0, $s6, -0x4468
    ctx->pc = 0x12da08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949784));
    // 0x12da0c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x12da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x12da10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12da14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12da14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12da18: 0x2a31804  sllv        $v1, $v1, $s5
    ctx->pc = 0x12da18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 21) & 0x1F));
    // 0x12da1c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x12da1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x12da20: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x12da20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x12da24: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x12da24u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x12da28: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x12da28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12da2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12da30: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x12da30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x12da34: 0x0  nop
    ctx->pc = 0x12da34u;
    // NOP
label_12da38:
    // 0x12da38: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x12da38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x12da3c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x12da3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x12da40: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x12da40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x12da44: 0x8c83f1b4  lw          $v1, -0xE4C($a0)
    ctx->pc = 0x12da44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963636)));
    // 0x12da48: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x12da48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x12da4c: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x12da4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x12da50: 0x8cc7f168  lw          $a3, -0xE98($a2)
    ctx->pc = 0x12da50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x12da54: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x12da54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
    // 0x12da58: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x12da58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12da5c: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x12da5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x12da60: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12DA60u;
    {
        const bool branch_taken_0x12da60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA60u;
            // 0x12da64: 0xac83f1b4  sw          $v1, -0xE4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294963636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12da60) {
            ctx->pc = 0x12DA8Cu;
            goto label_12da8c;
        }
    }
    ctx->pc = 0x12DA68u;
    // 0x12da68: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x12da68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x12da6c: 0x0  nop
    ctx->pc = 0x12da6cu;
    // NOP
label_12da70:
    // 0x12da70: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x12da70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x12da74: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x12da74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x12da78: 0x0  nop
    ctx->pc = 0x12da78u;
    // NOP
    // 0x12da7c: 0x0  nop
    ctx->pc = 0x12da7cu;
    // NOP
    // 0x12da80: 0x0  nop
    ctx->pc = 0x12da80u;
    // NOP
    // 0x12da84: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12DA84u;
    {
        const bool branch_taken_0x12da84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12da84) {
            ctx->pc = 0x12DA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12DA84u;
            // 0x12da88: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12DA70u;
            runtime->cooperativeGuestYield();
            goto label_12da70;
        }
    }
    ctx->pc = 0x12DA8Cu;
label_12da8c:
    // 0x12da8c: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x12da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x12da90: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x12da90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x12da94: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x12da94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12da98: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x12da98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12da9c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x12da9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12daa0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12daa0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12daa4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x12daa4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12daa8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x12daa8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12daac: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x12daacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12dab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dab4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x12dab4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x12dab8: 0xacc3f168  sw          $v1, -0xE98($a2)
    ctx->pc = 0x12dab8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 3));
    // 0x12dabc: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x12dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x12dac0: 0x3e00008  jr          $ra
    ctx->pc = 0x12DAC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12DAC0u;
            // 0x12dac4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12D620u: goto label_12d620;
            case 0x12D6C8u: goto label_12d6c8;
            case 0x12D6E8u: goto label_12d6e8;
            case 0x12D710u: goto label_12d710;
            case 0x12D730u: goto label_12d730;
            case 0x12D768u: goto label_12d768;
            case 0x12D778u: goto label_12d778;
            case 0x12D7D8u: goto label_12d7d8;
            case 0x12D878u: goto label_12d878;
            case 0x12D898u: goto label_12d898;
            case 0x12D8D8u: goto label_12d8d8;
            case 0x12D8F8u: goto label_12d8f8;
            case 0x12D9B0u: goto label_12d9b0;
            case 0x12D9D0u: goto label_12d9d0;
            case 0x12DA08u: goto label_12da08;
            case 0x12DA38u: goto label_12da38;
            case 0x12DA70u: goto label_12da70;
            case 0x12DA8Cu: goto label_12da8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12DAC8u;
}
