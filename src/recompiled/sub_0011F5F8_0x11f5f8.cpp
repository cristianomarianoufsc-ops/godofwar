#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F5F8
// Address: 0x11f5f8 - 0x11f870
void sub_0011F5F8_0x11f5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F5F8_0x11f5f8");
#endif

    ctx->pc = 0x11f5f8u;

    // 0x11f5f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x11f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x11f5fc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x11f5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x11f600: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x11f600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x11f604: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x11f604u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f608: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x11f608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x11f60c: 0x26d4162c  addiu       $s4, $s6, 0x162C
    ctx->pc = 0x11f60cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 5676));
    // 0x11f610: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x11f610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x11f614: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x11f614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x11f618: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11f618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x11f61c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x11f61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x11f620: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x11f620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x11f624: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x11f624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x11f628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f62c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f630: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11f634: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x11f634u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f638: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11f638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f63c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11f640: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11f640u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11f644: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11f648: 0x40f809  jalr        $v0
    ctx->pc = 0x11F648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F650u);
        ctx->pc = 0x11F64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F648u;
            // 0x11f64c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F650u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F650u; }
            if (ctx->pc != 0x11F650u) { return; }
        }
        }
    }
    ctx->pc = 0x11F650u;
    // 0x11f650: 0x96c34632  lhu         $v1, 0x4632($s6)
    ctx->pc = 0x11f650u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 17970)));
    // 0x11f654: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x11F654u;
    {
        const bool branch_taken_0x11f654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F654u;
            // 0x11f658: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f654) {
            ctx->pc = 0x11F784u;
            goto label_11f784;
        }
    }
    ctx->pc = 0x11F65Cu;
    // 0x11f65c: 0x0  nop
    ctx->pc = 0x11f65cu;
    // NOP
label_11f660:
    // 0x11f660: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x11f660u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11f664: 0x52200043  beql        $s1, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x11F664u;
    {
        const bool branch_taken_0x11f664 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f664) {
            ctx->pc = 0x11F668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F664u;
            // 0x11f668: 0x96c24632  lhu         $v0, 0x4632($s6) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 17970)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F774u;
            goto label_11f774;
        }
    }
    ctx->pc = 0x11F66Cu;
    // 0x11f66c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x11f66cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11f670: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x11f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x11f674: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x11F674u;
    {
        const bool branch_taken_0x11f674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F674u;
            // 0x11f678: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f674) {
            ctx->pc = 0x11F760u;
            goto label_11f760;
        }
    }
    ctx->pc = 0x11F67Cu;
    // 0x11f67c: 0x27c2ec58  addiu       $v0, $fp, -0x13A8
    ctx->pc = 0x11f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962264));
    // 0x11f680: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x11f680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x11f684: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f688: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11f688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11f68c: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x11f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x11f690: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x11F690u;
    {
        const bool branch_taken_0x11f690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F690u;
            // 0x11f694: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f690) {
            ctx->pc = 0x11F760u;
            goto label_11f760;
        }
    }
    ctx->pc = 0x11F698u;
    // 0x11f698: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x11f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f69c: 0x2452e848  addiu       $s2, $v0, -0x17B8
    ctx->pc = 0x11f69cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11f6a0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x11f6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x11f6a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11f6a8: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x11f6a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x11f6ac: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x11f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x11f6b0: 0x40f809  jalr        $v0
    ctx->pc = 0x11F6B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F6B8u);
        ctx->pc = 0x11F6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6B0u;
            // 0x11f6b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F6B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F6B8u; }
            if (ctx->pc != 0x11F6B8u) { return; }
        }
        }
    }
    ctx->pc = 0x11F6B8u;
    // 0x11f6b8: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x11f6b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11f6bc: 0x12700016  beq         $s3, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11F6BCu;
    {
        const bool branch_taken_0x11f6bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x11F6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6BCu;
            // 0x11f6c0: 0x27c2ec58  addiu       $v0, $fp, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6bc) {
            ctx->pc = 0x11F718u;
            goto label_11f718;
        }
    }
    ctx->pc = 0x11F6C4u;
    // 0x11f6c4: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F6C4u;
    {
        const bool branch_taken_0x11f6c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6C4u;
            // 0x11f6c8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f6c4) {
            ctx->pc = 0x11F6E8u;
            goto label_11f6e8;
        }
    }
    ctx->pc = 0x11F6CCu;
    // 0x11f6cc: 0x8e43006c  lw          $v1, 0x6C($s2)
    ctx->pc = 0x11f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x11f6d0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11f6d4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11f6d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11f6d8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11f6dc: 0x40f809  jalr        $v0
    ctx->pc = 0x11F6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F6E4u);
        ctx->pc = 0x11F6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F6DCu;
            // 0x11f6e0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F6E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F6E4u; }
            if (ctx->pc != 0x11F6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x11F6E4u;
    // 0x11f6e4: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x11f6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11f6e8:
    // 0x11f6e8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11f6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f6ec: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x11f6ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11f6f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f6f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11f6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x11f6f8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11f6f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f6fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11f6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11f700: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11f704: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11f704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11f708: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11f708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11f70c: 0x40f809  jalr        $v0
    ctx->pc = 0x11F70Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F714u);
        ctx->pc = 0x11F710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F70Cu;
            // 0x11f710: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F714u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F714u; }
            if (ctx->pc != 0x11F714u) { return; }
        }
        }
    }
    ctx->pc = 0x11F714u;
    // 0x11f714: 0x27c2ec58  addiu       $v0, $fp, -0x13A8
    ctx->pc = 0x11f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962264));
label_11f718:
    // 0x11f718: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x11f718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x11f71c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11f720: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11f724: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x11f724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x11f728: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x11F728u;
    {
        const bool branch_taken_0x11f728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f728) {
            ctx->pc = 0x11F760u;
            goto label_11f760;
        }
    }
    ctx->pc = 0x11F730u;
    // 0x11f730: 0x2604ffec  addiu       $a0, $s0, -0x14
    ctx->pc = 0x11f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x11f734: 0x0  nop
    ctx->pc = 0x11f734u;
    // NOP
label_11f738:
    // 0x11f738: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x11f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x11f73c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x11f73cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x11f740: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x11f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x11f744: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11f744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f748: 0x84430010  lh          $v1, 0x10($v0)
    ctx->pc = 0x11f748u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11f74c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x11f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x11f750: 0x40f809  jalr        $v0
    ctx->pc = 0x11F750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F758u);
        ctx->pc = 0x11F754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F750u;
            // 0x11f754: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F758u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F758u; }
            if (ctx->pc != 0x11F758u) { return; }
        }
        }
    }
    ctx->pc = 0x11F758u;
    // 0x11f758: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F758u;
    {
        const bool branch_taken_0x11f758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f758) {
            ctx->pc = 0x11F75Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F758u;
            // 0x11f75c: 0x2604ffec  addiu       $a0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F738u;
            runtime->cooperativeGuestYield();
            goto label_11f738;
        }
    }
    ctx->pc = 0x11F760u;
label_11f760:
    // 0x11f760: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F760u;
    {
        const bool branch_taken_0x11f760 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F760u;
            // 0x11f764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f760) {
            ctx->pc = 0x11F770u;
            goto label_11f770;
        }
    }
    ctx->pc = 0x11F768u;
    // 0x11f768: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x11F768u;
    SET_GPR_U32(ctx, 31, 0x11F770u);
    ctx->pc = 0x11F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F768u;
            // 0x11f76c: 0x26850004  addiu       $a1, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F770u; }
        if (ctx->pc != 0x11F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F770u; }
        if (ctx->pc != 0x11F770u) { return; }
    }
    ctx->pc = 0x11F770u;
label_11f770:
    // 0x11f770: 0x96c24632  lhu         $v0, 0x4632($s6)
    ctx->pc = 0x11f770u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 17970)));
label_11f774:
    // 0x11f774: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x11f774u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x11f778: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x11f778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x11f77c: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x11F77Cu;
    {
        const bool branch_taken_0x11f77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F77Cu;
            // 0x11f780: 0x26940018  addiu       $s4, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f77c) {
            ctx->pc = 0x11F660u;
            runtime->cooperativeGuestYield();
            goto label_11f660;
        }
    }
    ctx->pc = 0x11F784u;
label_11f784:
    // 0x11f784: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F784u;
    {
        const bool branch_taken_0x11f784 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F784u;
            // 0x11f788: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f784) {
            ctx->pc = 0x11F7A8u;
            goto label_11f7a8;
        }
    }
    ctx->pc = 0x11F78Cu;
    // 0x11f78c: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11f790: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11f794: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11f794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11f798: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11f79c: 0x40f809  jalr        $v0
    ctx->pc = 0x11F79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11F7A4u);
        ctx->pc = 0x11F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F79Cu;
            // 0x11f7a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11F7A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11F7A4u; }
            if (ctx->pc != 0x11F7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x11F7A4u;
    // 0x11f7a4: 0x0  nop
    ctx->pc = 0x11f7a4u;
    // NOP
label_11f7a8:
    // 0x11f7a8: 0xa6c04632  sh          $zero, 0x4632($s6)
    ctx->pc = 0x11f7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 17970), (uint16_t)GPR_U32(ctx, 0));
    // 0x11f7ac: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x11f7acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11f7b0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x11f7b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11f7b4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x11f7b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11f7b8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x11f7b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f7bc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x11f7bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f7c0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x11f7c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f7c4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x11f7c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f7c8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x11f7c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f7cc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x11f7ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f7d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x11F7D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7D4u;
            // 0x11f7d8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F7DCu;
    // 0x11f7dc: 0x0  nop
    ctx->pc = 0x11f7dcu;
    // NOP
    // 0x11f7e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11f7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11f7e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11f7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x11f7e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11f7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x11f7ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11f7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f7f0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11f7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11f7f4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11f7f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11f7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x11f7fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11F7FCu;
    {
        const bool branch_taken_0x11f7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F7FCu;
            // 0x11f800: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f7fc) {
            ctx->pc = 0x11F830u;
            goto label_11f830;
        }
    }
    ctx->pc = 0x11F804u;
    // 0x11f804: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f808: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11f808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11f80c: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x11f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x11f810: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x11f810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x11f814: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x11f814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f818: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x11f818u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x11f81c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x11f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x11f820: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x11f820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x11f824: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11f828: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11F828u;
    SET_GPR_U32(ctx, 31, 0x11F830u);
    ctx->pc = 0x11F82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F828u;
            // 0x11f82c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F830u; }
        if (ctx->pc != 0x11F830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F830u; }
        if (ctx->pc != 0x11F830u) { return; }
    }
    ctx->pc = 0x11F830u;
label_11f830:
    // 0x11f830: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x11f830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
    // 0x11f834: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x11f834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x11f838: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x11f838u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f83c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x11f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x11f840: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x11f840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x11f844: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x11f844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x11f848: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11f848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11f84c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11f84cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11f850: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x11f850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11f854: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x11F854u;
    SET_GPR_U32(ctx, 31, 0x11F85Cu);
    ctx->pc = 0x11F858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F854u;
            // 0x11f858: 0x8c44e89c  lw          $a0, -0x1764($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F85Cu; }
        if (ctx->pc != 0x11F85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F85Cu; }
        if (ctx->pc != 0x11F85Cu) { return; }
    }
    ctx->pc = 0x11F85Cu;
    // 0x11f85c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11f85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11f860: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11f860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11f864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11f864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f868: 0x3e00008  jr          $ra
    ctx->pc = 0x11F868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F868u;
            // 0x11f86c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F660u: goto label_11f660;
            case 0x11F6E8u: goto label_11f6e8;
            case 0x11F718u: goto label_11f718;
            case 0x11F738u: goto label_11f738;
            case 0x11F760u: goto label_11f760;
            case 0x11F770u: goto label_11f770;
            case 0x11F774u: goto label_11f774;
            case 0x11F784u: goto label_11f784;
            case 0x11F7A8u: goto label_11f7a8;
            case 0x11F830u: goto label_11f830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F870u;
}
