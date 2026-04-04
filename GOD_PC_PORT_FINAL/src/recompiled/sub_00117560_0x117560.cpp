#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117560
// Address: 0x117560 - 0x1176f8
void sub_00117560_0x117560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117560_0x117560");
#endif

    ctx->pc = 0x117560u;

    // 0x117560: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x117560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x117564: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x117564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x117568: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x117568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x11756c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11756cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117570: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x117570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x117574: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x117574u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117578: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x117578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x11757c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x11757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x117580: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x117580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x117584: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x117584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x117588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11758c: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x11758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x117590: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x117590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x117594: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x117594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x117598: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x117598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x11759c: 0x40f809  jalr        $v0
    ctx->pc = 0x11759Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1175A4u);
        ctx->pc = 0x1175A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11759Cu;
            // 0x1175a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1175A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1175C8u: goto label_1175c8;
            case 0x117640u: goto label_117640;
            case 0x117664u: goto label_117664;
            case 0x1176D0u: goto label_1176d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1175A4u; }
            if (ctx->pc != 0x1175A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1175A4u;
    // 0x1175a4: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1175A4u;
    {
        const bool branch_taken_0x1175a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1175A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175A4u;
            // 0x1175a8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175a4) {
            ctx->pc = 0x1176D0u;
            goto label_1176d0;
        }
    }
    ctx->pc = 0x1175ACu;
    // 0x1175ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1175acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1175b0: 0xc045d1c  jal         func_117470
    ctx->pc = 0x1175B0u;
    SET_GPR_U32(ctx, 31, 0x1175B8u);
    ctx->pc = 0x1175B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1175B0u;
            // 0x1175b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117470u;
    if (runtime->hasFunction(0x117470u)) {
        auto targetFn = runtime->lookupFunction(0x117470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175B8u; }
        if (ctx->pc != 0x1175B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117470_0x117470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1175B8u; }
        if (ctx->pc != 0x1175B8u) { return; }
    }
    ctx->pc = 0x1175B8u;
    // 0x1175b8: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x1175b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x1175bc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x1175BCu;
    {
        const bool branch_taken_0x1175bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1175C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1175BCu;
            // 0x1175c0: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1175bc) {
            ctx->pc = 0x1176D0u;
            goto label_1176d0;
        }
    }
    ctx->pc = 0x1175C4u;
    // 0x1175c4: 0x0  nop
    ctx->pc = 0x1175c4u;
    // NOP
label_1175c8:
    // 0x1175c8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x1175c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1175cc: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1175ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1175d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1175d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1175d4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1175d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1175d8: 0x2ac02  srl         $s5, $v0, 16
    ctx->pc = 0x1175d8u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1175dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1175dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1175e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1175e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1175e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1175e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1175e8: 0x8c65002c  lw          $a1, 0x2C($v1)
    ctx->pc = 0x1175e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1175ec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1175ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1175f0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1175f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1175f4: 0x2476e848  addiu       $s6, $v1, -0x17B8
    ctx->pc = 0x1175f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1175f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1175f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1175fc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1175fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x117600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117604: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x117604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x117608: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x117608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x11760c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x11760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x117610: 0x40f809  jalr        $v0
    ctx->pc = 0x117610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117618u);
        ctx->pc = 0x117614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117610u;
            // 0x117614: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117618u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1175C8u: goto label_1175c8;
            case 0x117640u: goto label_117640;
            case 0x117664u: goto label_117664;
            case 0x1176D0u: goto label_1176d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117618u; }
            if (ctx->pc != 0x117618u) { return; }
        }
        }
    }
    ctx->pc = 0x117618u;
    // 0x117618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x117618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11761c: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x11761cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x117620: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x117620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x117624: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x117624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x117628: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x117628u;
    {
        const bool branch_taken_0x117628 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x117628) {
            ctx->pc = 0x11762Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x117628u;
            // 0x11762c: 0x8e30005c  lw          $s0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x117640u;
            goto label_117640;
        }
    }
    ctx->pc = 0x117630u;
    // 0x117630: 0xc04c492  jal         func_131248
    ctx->pc = 0x117630u;
    SET_GPR_U32(ctx, 31, 0x117638u);
    ctx->pc = 0x117634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117630u;
            // 0x117634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117638u; }
        if (ctx->pc != 0x117638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117638u; }
        if (ctx->pc != 0x117638u) { return; }
    }
    ctx->pc = 0x117638u;
    // 0x117638: 0x8e30005c  lw          $s0, 0x5C($s1)
    ctx->pc = 0x117638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x11763c: 0x0  nop
    ctx->pc = 0x11763cu;
    // NOP
label_117640:
    // 0x117640: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x117640u;
    {
        const bool branch_taken_0x117640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x117644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117640u;
            // 0x117644: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117640) {
            ctx->pc = 0x117664u;
            goto label_117664;
        }
    }
    ctx->pc = 0x117648u;
    // 0x117648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11764c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11764cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117650: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x117650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117654: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x117654u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x117658: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x117658u;
    SET_GPR_U32(ctx, 31, 0x117660u);
    ctx->pc = 0x11765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117658u;
            // 0x11765c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117660u; }
        if (ctx->pc != 0x117660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117660u; }
        if (ctx->pc != 0x117660u) { return; }
    }
    ctx->pc = 0x117660u;
    // 0x117660: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x117660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
label_117664:
    // 0x117664: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x117664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x117668: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x117668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11766c: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x11766cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x117670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117674: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x117674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x117678: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x117678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x11767c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11767cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x117680: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x117680u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x117684: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x117684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x117688: 0x40f809  jalr        $v0
    ctx->pc = 0x117688u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x117690u);
        ctx->pc = 0x11768Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x117688u;
            // 0x11768c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x117690u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1175C8u: goto label_1175c8;
            case 0x117640u: goto label_117640;
            case 0x117664u: goto label_117664;
            case 0x1176D0u: goto label_1176d0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x117690u; }
            if (ctx->pc != 0x117690u) { return; }
        }
        }
    }
    ctx->pc = 0x117690u;
    // 0x117690: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x117690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x117694: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x117694u;
    SET_GPR_U32(ctx, 31, 0x11769Cu);
    ctx->pc = 0x117698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117694u;
            // 0x117698: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11769Cu; }
        if (ctx->pc != 0x11769Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11769Cu; }
        if (ctx->pc != 0x11769Cu) { return; }
    }
    ctx->pc = 0x11769Cu;
    // 0x11769c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x11769cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1176a0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1176a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1176a4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1176a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1176a8: 0x8e440044  lw          $a0, 0x44($s2)
    ctx->pc = 0x1176a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1176ac: 0xae420044  sw          $v0, 0x44($s2)
    ctx->pc = 0x1176acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
    // 0x1176b0: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x1176b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x1176b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1176b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1176b8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x1176b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x1176bc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1176bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1176c0: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1176c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1176c4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x1176C4u;
    {
        const bool branch_taken_0x1176c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1176C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1176C4u;
            // 0x1176c8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1176c4) {
            ctx->pc = 0x1175C8u;
            runtime->cooperativeGuestYield();
            goto label_1175c8;
        }
    }
    ctx->pc = 0x1176CCu;
    // 0x1176cc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1176ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1176d0:
    // 0x1176d0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1176d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1176d4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1176d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1176d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1176d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1176dc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1176dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1176e0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1176e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1176e4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1176e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1176e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1176e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1176ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1176ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1176F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1176ECu;
            // 0x1176f0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1175C8u: goto label_1175c8;
            case 0x117640u: goto label_117640;
            case 0x117664u: goto label_117664;
            case 0x1176D0u: goto label_1176d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1176F4u;
    // 0x1176f4: 0x0  nop
    ctx->pc = 0x1176f4u;
    // NOP
}
