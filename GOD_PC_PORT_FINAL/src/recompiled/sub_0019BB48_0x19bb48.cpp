#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019BB48
// Address: 0x19bb48 - 0x19be28
void sub_0019BB48_0x19bb48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BB48_0x19bb48");
#endif

    ctx->pc = 0x19bb48u;

    // 0x19bb48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x19bb4c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x19bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x19bb50: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x19bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x19bb54: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19bb54u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19bb58: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19bb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb5c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x19bb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x19bb60: 0x8e04cd58  lw          $a0, -0x32A8($s0)
    ctx->pc = 0x19bb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954328)));
    // 0x19bb64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19bb64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x19bb68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x19bb68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x19bb6c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x19bb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x19bb70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19bb74: 0xc0761e2  jal         func_1D8788
    ctx->pc = 0x19BB74u;
    SET_GPR_U32(ctx, 31, 0x19BB7Cu);
    ctx->pc = 0x19BB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB74u;
            // 0x19bb78: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8788u;
    if (runtime->hasFunction(0x1D8788u)) {
        auto targetFn = runtime->lookupFunction(0x1D8788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB7Cu; }
        if (ctx->pc != 0x19BB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8788_0x1d8800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB7Cu; }
        if (ctx->pc != 0x19BB7Cu) { return; }
    }
    ctx->pc = 0x19BB7Cu;
    // 0x19bb7c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x19bb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x19bb80: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x19bb80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x19bb84: 0x8e05cd58  lw          $a1, -0x32A8($s0)
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954328)));
    // 0x19bb88: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x19bb88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x19bb8c: 0x2463e190  addiu       $v1, $v1, -0x1E70
    ctx->pc = 0x19bb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959504));
    // 0x19bb90: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x19bb90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19bb94: 0x1220007e  beqz        $s1, . + 4 + (0x7E << 2)
    ctx->pc = 0x19BB94u;
    {
        const bool branch_taken_0x19bb94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB94u;
            // 0x19bb98: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb94) {
            ctx->pc = 0x19BD90u;
            goto label_19bd90;
        }
    }
    ctx->pc = 0x19BB9Cu;
    // 0x19bb9c: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19bba0: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x19bba0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x19bba4: 0x8e63c9b8  lw          $v1, -0x3648($s3)
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953400)));
    // 0x19bba8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x19bba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x19bbac: 0x14600094  bnez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x19BBACu;
    {
        const bool branch_taken_0x19bbac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBACu;
            // 0x19bbb0: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbac) {
            ctx->pc = 0x19BE00u;
            goto label_19be00;
        }
    }
    ctx->pc = 0x19BBB4u;
    // 0x19bbb4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19bbb8: 0x8c42c9b0  lw          $v0, -0x3650($v0)
    ctx->pc = 0x19bbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953392)));
    // 0x19bbbc: 0x54400091  bnel        $v0, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x19BBBCu;
    {
        const bool branch_taken_0x19bbbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bbbc) {
            ctx->pc = 0x19BBC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBBCu;
            // 0x19bbc0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BE04u;
            goto label_19be04;
        }
    }
    ctx->pc = 0x19BBC4u;
    // 0x19bbc4: 0xc066ebe  jal         func_19BAF8
    ctx->pc = 0x19BBC4u;
    SET_GPR_U32(ctx, 31, 0x19BBCCu);
    ctx->pc = 0x19BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBC4u;
            // 0x19bbc8: 0x3c150033  lui         $s5, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BAF8u;
    if (runtime->hasFunction(0x19BAF8u)) {
        auto targetFn = runtime->lookupFunction(0x19BAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BAF8_0x19baf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBCCu; }
        if (ctx->pc != 0x19BBCCu) { return; }
    }
    ctx->pc = 0x19BBCCu;
    // 0x19bbcc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19bbccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19bbd0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19bbd4: 0x26a4e848  addiu       $a0, $s5, -0x17B8
    ctx->pc = 0x19bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x19bbd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19bbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19bbdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19bbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbe0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bbe4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19bbe8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19bbec: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19bbf0: 0x40f809  jalr        $v0
    ctx->pc = 0x19BBF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BBF8u);
        ctx->pc = 0x19BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBF0u;
            // 0x19bbf4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BBF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BBF8u; }
            if (ctx->pc != 0x19BBF8u) { return; }
        }
        }
    }
    ctx->pc = 0x19BBF8u;
    // 0x19bbf8: 0xc04c992  jal         func_132648
    ctx->pc = 0x19BBF8u;
    SET_GPR_U32(ctx, 31, 0x19BC00u);
    ctx->pc = 0x19BBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBF8u;
            // 0x19bbfc: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC00u; }
        if (ctx->pc != 0x19BC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC00u; }
        if (ctx->pc != 0x19BC00u) { return; }
    }
    ctx->pc = 0x19BC00u;
    // 0x19bc00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19bc00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc04: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x19BC04u;
    {
        const bool branch_taken_0x19bc04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC04u;
            // 0x19bc08: 0xae63c9b8  sw          $v1, -0x3648($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294953400), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc04) {
            ctx->pc = 0x19BD20u;
            goto label_19bd20;
        }
    }
    ctx->pc = 0x19BC0Cu;
    // 0x19bc0c: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x19bc0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x19bc10: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x19bc14: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x19bc18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bc1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bc20: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19bc24: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BC24u;
    {
        const bool branch_taken_0x19bc24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC24u;
            // 0x19bc28: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc24) {
            ctx->pc = 0x19BC38u;
            goto label_19bc38;
        }
    }
    ctx->pc = 0x19BC2Cu;
    // 0x19bc2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bc2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x19BC30u;
    {
        const bool branch_taken_0x19bc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC30u;
            // 0x19bc34: 0x44280b  movn        $a1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc30) {
            ctx->pc = 0x19BC3Cu;
            goto label_19bc3c;
        }
    }
    ctx->pc = 0x19BC38u;
label_19bc38:
    // 0x19bc38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19bc3c:
    // 0x19bc3c: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19BC3Cu;
    {
        const bool branch_taken_0x19bc3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC3Cu;
            // 0x19bc40: 0x24a600c0  addiu       $a2, $a1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc3c) {
            ctx->pc = 0x19BC88u;
            goto label_19bc88;
        }
    }
    ctx->pc = 0x19BC44u;
    // 0x19bc44: 0xdca200c0  ld          $v0, 0xC0($a1)
    ctx->pc = 0x19bc44u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 192)));
    // 0x19bc48: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x19bc48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x19bc4c: 0x31bbc  dsll32      $v1, $v1, 14
    ctx->pc = 0x19bc4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 14));
    // 0x19bc50: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x19bc54: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19bc54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19bc58: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x19bc58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x19bc5c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19bc5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19bc60: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x19bc60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x19bc64: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x19bc64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x19bc68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19bc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19bc6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19bc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc70: 0xfca200c0  sd          $v0, 0xC0($a1)
    ctx->pc = 0x19bc70u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 192), GPR_U64(ctx, 2));
    // 0x19bc74: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19bc78: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x19bc78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19bc7c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x19bc7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x19bc80: 0xc05420c  jal         func_150830
    ctx->pc = 0x19BC80u;
    SET_GPR_U32(ctx, 31, 0x19BC88u);
    ctx->pc = 0x19BC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC80u;
            // 0x19bc84: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC88u; }
        if (ctx->pc != 0x19BC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC88u; }
        if (ctx->pc != 0x19BC88u) { return; }
    }
    ctx->pc = 0x19BC88u;
label_19bc88:
    // 0x19bc88: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x19bc88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19bc8c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19bc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19bc90: 0x24843ae0  addiu       $a0, $a0, 0x3AE0
    ctx->pc = 0x19bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15072));
    // 0x19bc94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc98: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x19BC98u;
    SET_GPR_U32(ctx, 31, 0x19BCA0u);
    ctx->pc = 0x19BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC98u;
            // 0x19bc9c: 0x8e300104  lw          $s0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCA0u; }
        if (ctx->pc != 0x19BCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCA0u; }
        if (ctx->pc != 0x19BCA0u) { return; }
    }
    ctx->pc = 0x19BCA0u;
    // 0x19bca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bca4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x19BCA4u;
    SET_GPR_U32(ctx, 31, 0x19BCACu);
    ctx->pc = 0x19BCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCA4u;
            // 0x19bca8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCACu; }
        if (ctx->pc != 0x19BCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCACu; }
        if (ctx->pc != 0x19BCACu) { return; }
    }
    ctx->pc = 0x19BCACu;
    // 0x19bcac: 0x8e65c9b8  lw          $a1, -0x3648($s3)
    ctx->pc = 0x19bcacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953400)));
    // 0x19bcb0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x19bcb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19bcb4: 0xc04c518  jal         func_131460
    ctx->pc = 0x19BCB4u;
    SET_GPR_U32(ctx, 31, 0x19BCBCu);
    ctx->pc = 0x19BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCB4u;
            // 0x19bcb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    }
    ctx->pc = 0x19BCBCu;
    // 0x19bcbc: 0x8e63c9b8  lw          $v1, -0x3648($s3)
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953400)));
    // 0x19bcc0: 0x8c6200f4  lw          $v0, 0xF4($v1)
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 244)));
    // 0x19bcc4: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x19bcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x19bcc8: 0xac6200f4  sw          $v0, 0xF4($v1)
    ctx->pc = 0x19bcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
    // 0x19bccc: 0x2682ec58  addiu       $v0, $s4, -0x13A8
    ctx->pc = 0x19bcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962264));
    // 0x19bcd0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x19bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x19bcd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19bcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19bcd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19bcdc: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x19bce0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x19BCE0u;
    {
        const bool branch_taken_0x19bce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bce0) {
            ctx->pc = 0x19BCE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCE0u;
            // 0x19bce4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BD24u;
            goto label_19bd24;
        }
    }
    ctx->pc = 0x19BCE8u;
    // 0x19bce8: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x19bce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x19bcec: 0x0  nop
    ctx->pc = 0x19bcecu;
    // NOP
label_19bcf0:
    // 0x19bcf0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcf4: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x19bcf4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x19bcf8: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x19bcf8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19bcfc: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x19bcfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x19bd00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19BD00u;
    {
        const bool branch_taken_0x19bd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd00) {
            ctx->pc = 0x19BD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD00u;
            // 0x19bd04: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BD18u;
            goto label_19bd18;
        }
    }
    ctx->pc = 0x19BD08u;
    // 0x19bd08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19bd08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19bd0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19bd0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19bd10: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x19bd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x19bd14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19bd18:
    // 0x19bd18: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x19BD18u;
    {
        const bool branch_taken_0x19bd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD18u;
            // 0x19bd1c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd18) {
            ctx->pc = 0x19BCF0u;
            runtime->cooperativeGuestYield();
            goto label_19bcf0;
        }
    }
    ctx->pc = 0x19BD20u;
label_19bd20:
    // 0x19bd20: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_19bd24:
    // 0x19bd24: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19bd28: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19bd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19bd2c: 0x40f809  jalr        $v0
    ctx->pc = 0x19BD2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BD34u);
        ctx->pc = 0x19BD30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD2Cu;
            // 0x19bd30: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BD34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BD34u; }
            if (ctx->pc != 0x19BD34u) { return; }
        }
        }
    }
    ctx->pc = 0x19BD34u;
    // 0x19bd34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd38: 0xa44300a8  sh          $v1, 0xA8($v0)
    ctx->pc = 0x19bd38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 3));
    // 0x19bd3c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19bd40: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19bd44: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19bd48: 0x40f809  jalr        $v0
    ctx->pc = 0x19BD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BD50u);
        ctx->pc = 0x19BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD48u;
            // 0x19bd4c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BD50u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BD50u; }
            if (ctx->pc != 0x19BD50u) { return; }
        }
        }
    }
    ctx->pc = 0x19BD50u;
    // 0x19bd50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19bd50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bd54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd58: 0xc080362  jal         func_200D88
    ctx->pc = 0x19BD58u;
    SET_GPR_U32(ctx, 31, 0x19BD60u);
    ctx->pc = 0x19BD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD58u;
            // 0x19bd5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD60u; }
        if (ctx->pc != 0x19BD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD60u; }
        if (ctx->pc != 0x19BD60u) { return; }
    }
    ctx->pc = 0x19BD60u;
    // 0x19bd60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd64: 0xc080362  jal         func_200D88
    ctx->pc = 0x19BD64u;
    SET_GPR_U32(ctx, 31, 0x19BD6Cu);
    ctx->pc = 0x19BD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD64u;
            // 0x19bd68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D88u;
    if (runtime->hasFunction(0x200D88u)) {
        auto targetFn = runtime->lookupFunction(0x200D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD6Cu; }
        if (ctx->pc != 0x19BD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d88_0x200db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD6Cu; }
        if (ctx->pc != 0x19BD6Cu) { return; }
    }
    ctx->pc = 0x19BD6Cu;
    // 0x19bd6c: 0x26a2e848  addiu       $v0, $s5, -0x17B8
    ctx->pc = 0x19bd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x19bd70: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x19bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19bd74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19bd78: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19bd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19bd7c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x19bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19bd80: 0x40f809  jalr        $v0
    ctx->pc = 0x19BD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BD88u);
        ctx->pc = 0x19BD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD80u;
            // 0x19bd84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BD88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BD88u; }
            if (ctx->pc != 0x19BD88u) { return; }
        }
        }
    }
    ctx->pc = 0x19BD88u;
    // 0x19bd88: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x19BD88u;
    {
        const bool branch_taken_0x19bd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD88u;
            // 0x19bd8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd88) {
            ctx->pc = 0x19BE04u;
            goto label_19be04;
        }
    }
    ctx->pc = 0x19BD90u;
label_19bd90:
    // 0x19bd90: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x19bd94: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x19bd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x19bd98: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x19bd98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x19bd9c: 0x8e04c9b8  lw          $a0, -0x3648($s0)
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953400)));
    // 0x19bda0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x19bda4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19BDA4u;
    {
        const bool branch_taken_0x19bda4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDA4u;
            // 0x19bda8: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bda4) {
            ctx->pc = 0x19BDB8u;
            goto label_19bdb8;
        }
    }
    ctx->pc = 0x19BDACu;
    // 0x19bdac: 0xc04c9da  jal         func_132768
    ctx->pc = 0x19BDACu;
    SET_GPR_U32(ctx, 31, 0x19BDB4u);
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDB4u; }
        if (ctx->pc != 0x19BDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDB4u; }
        if (ctx->pc != 0x19BDB4u) { return; }
    }
    ctx->pc = 0x19BDB4u;
    // 0x19bdb4: 0xae00c9b8  sw          $zero, -0x3648($s0)
    ctx->pc = 0x19bdb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953400), GPR_U32(ctx, 0));
label_19bdb8:
    // 0x19bdb8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19bdbc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x19bdbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x19bdc0: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x19bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x19bdc4: 0x40f809  jalr        $v0
    ctx->pc = 0x19BDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BDCCu);
        ctx->pc = 0x19BDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDC4u;
            // 0x19bdc8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BDCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BDCCu; }
            if (ctx->pc != 0x19BDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x19BDCCu;
    // 0x19bdcc: 0xa44000a8  sh          $zero, 0xA8($v0)
    ctx->pc = 0x19bdccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 168), (uint16_t)GPR_U32(ctx, 0));
    // 0x19bdd0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19bdd4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x19bdd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x19bdd8: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x19bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x19bddc: 0x40f809  jalr        $v0
    ctx->pc = 0x19BDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19BDE4u);
        ctx->pc = 0x19BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDDCu;
            // 0x19bde0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19BDE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19BDE4u; }
            if (ctx->pc != 0x19BDE4u) { return; }
        }
        }
    }
    ctx->pc = 0x19BDE4u;
    // 0x19bde4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19bde4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bde8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bde8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdec: 0xc080358  jal         func_200D60
    ctx->pc = 0x19BDECu;
    SET_GPR_U32(ctx, 31, 0x19BDF4u);
    ctx->pc = 0x19BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDECu;
            // 0x19bdf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF4u; }
        if (ctx->pc != 0x19BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF4u; }
        if (ctx->pc != 0x19BDF4u) { return; }
    }
    ctx->pc = 0x19BDF4u;
    // 0x19bdf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19bdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdf8: 0xc080358  jal         func_200D60
    ctx->pc = 0x19BDF8u;
    SET_GPR_U32(ctx, 31, 0x19BE00u);
    ctx->pc = 0x19BDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDF8u;
            // 0x19bdfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200D60u;
    if (runtime->hasFunction(0x200D60u)) {
        auto targetFn = runtime->lookupFunction(0x200D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE00u; }
        if (ctx->pc != 0x19BE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_200d60_0x200d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BE00u; }
        if (ctx->pc != 0x19BE00u) { return; }
    }
    ctx->pc = 0x19BE00u;
label_19be00:
    // 0x19be00: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x19be00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19be04:
    // 0x19be04: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x19be04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19be08: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x19be08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19be0c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x19be0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19be10: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x19be10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19be14: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x19be14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE1Cu;
            // 0x19be20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BC38u: goto label_19bc38;
            case 0x19BC3Cu: goto label_19bc3c;
            case 0x19BC88u: goto label_19bc88;
            case 0x19BCF0u: goto label_19bcf0;
            case 0x19BD18u: goto label_19bd18;
            case 0x19BD20u: goto label_19bd20;
            case 0x19BD24u: goto label_19bd24;
            case 0x19BD90u: goto label_19bd90;
            case 0x19BDB8u: goto label_19bdb8;
            case 0x19BE00u: goto label_19be00;
            case 0x19BE04u: goto label_19be04;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BE24u;
    // 0x19be24: 0x0  nop
    ctx->pc = 0x19be24u;
    // NOP
}
