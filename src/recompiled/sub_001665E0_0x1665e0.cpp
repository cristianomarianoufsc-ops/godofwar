#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001665E0
// Address: 0x1665e0 - 0x166ac8
void sub_001665E0_0x1665e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001665E0_0x1665e0");
#endif

    ctx->pc = 0x1665e0u;

    // 0x1665e0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1665e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1665e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1665e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1665e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1665e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1665ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1665ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1665f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665f4: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1665f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1665f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1665f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1665fc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1665fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x166600: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x166600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x166604: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x166604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x166608: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x166608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x16660c: 0xc08e210  jal         func_238840
    ctx->pc = 0x16660Cu;
    SET_GPR_U32(ctx, 31, 0x166614u);
    ctx->pc = 0x166610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16660Cu;
            // 0x166610: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238840u;
    if (runtime->hasFunction(0x238840u)) {
        auto targetFn = runtime->lookupFunction(0x238840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166614u; }
        if (ctx->pc != 0x166614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238840_0x238848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166614u; }
        if (ctx->pc != 0x166614u) { return; }
    }
    ctx->pc = 0x166614u;
    // 0x166614: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x166614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x166618: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x166618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16661c: 0xc08e214  jal         func_238850
    ctx->pc = 0x16661Cu;
    SET_GPR_U32(ctx, 31, 0x166624u);
    ctx->pc = 0x166620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16661Cu;
            // 0x166620: 0xa6620004  sh          $v0, 0x4($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238850u;
    if (runtime->hasFunction(0x238850u)) {
        auto targetFn = runtime->lookupFunction(0x238850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166624u; }
        if (ctx->pc != 0x166624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238850_0x238858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166624u; }
        if (ctx->pc != 0x166624u) { return; }
    }
    ctx->pc = 0x166624u;
    // 0x166624: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x166624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166628: 0xc08e212  jal         func_238848
    ctx->pc = 0x166628u;
    SET_GPR_U32(ctx, 31, 0x166630u);
    ctx->pc = 0x16662Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166628u;
            // 0x16662c: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238848u;
    if (runtime->hasFunction(0x238848u)) {
        auto targetFn = runtime->lookupFunction(0x238848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166630u; }
        if (ctx->pc != 0x166630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238848_0x238850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166630u; }
        if (ctx->pc != 0x166630u) { return; }
    }
    ctx->pc = 0x166630u;
    // 0x166630: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x166630u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x166634: 0xc08e216  jal         func_238858
    ctx->pc = 0x166634u;
    SET_GPR_U32(ctx, 31, 0x16663Cu);
    ctx->pc = 0x166638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166634u;
            // 0x166638: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238858u;
    if (runtime->hasFunction(0x238858u)) {
        auto targetFn = runtime->lookupFunction(0x238858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238858_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16663Cu; }
        if (ctx->pc != 0x16663Cu) { return; }
    }
    ctx->pc = 0x16663Cu;
    // 0x16663c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x16663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x166640: 0xa6620006  sh          $v0, 0x6($s3)
    ctx->pc = 0x166640u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x166644: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x166644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x166648: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x166648u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x16664c: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x16664cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x166650: 0xfe600020  sd          $zero, 0x20($s3)
    ctx->pc = 0x166650u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 0));
    // 0x166654: 0x1060007a  beqz        $v1, . + 4 + (0x7A << 2)
    ctx->pc = 0x166654u;
    {
        const bool branch_taken_0x166654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166654u;
            // 0x166658: 0xfe600028  sd          $zero, 0x28($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166654) {
            ctx->pc = 0x166840u;
            goto label_166840;
        }
    }
    ctx->pc = 0x16665Cu;
    // 0x16665c: 0x8ea70004  lw          $a3, 0x4($s5)
    ctx->pc = 0x16665cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x166660: 0x26a6000c  addiu       $a2, $s5, 0xC
    ctx->pc = 0x166660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    // 0x166664: 0x8e880010  lw          $t0, 0x10($s4)
    ctx->pc = 0x166664u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x166668: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x166668u;
    {
        const bool branch_taken_0x166668 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16666Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166668u;
            // 0x16666c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166668) {
            ctx->pc = 0x166698u;
            goto label_166698;
        }
    }
    ctx->pc = 0x166670u;
    // 0x166670: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x166670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166674: 0x0  nop
    ctx->pc = 0x166674u;
    // NOP
label_166678:
    // 0x166678: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x166678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16667c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16667cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x166680: 0x1068006b  beq         $v1, $t0, . + 4 + (0x6B << 2)
    ctx->pc = 0x166680u;
    {
        const bool branch_taken_0x166680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x166684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166680u;
            // 0x166684: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166680) {
            ctx->pc = 0x166830u;
            goto label_166830;
        }
    }
    ctx->pc = 0x166688u;
    // 0x166688: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16668c: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x16668cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x166690: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166690u;
    {
        const bool branch_taken_0x166690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166690u;
            // 0x166694: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166690) {
            ctx->pc = 0x166678u;
            runtime->cooperativeGuestYield();
            goto label_166678;
        }
    }
    ctx->pc = 0x166698u;
label_166698:
    // 0x166698: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16669c:
    // 0x16669c: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x16669Cu;
    {
        const bool branch_taken_0x16669c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1666A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16669Cu;
            // 0x1666a0: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16669c) {
            ctx->pc = 0x166848u;
            goto label_166848;
        }
    }
    ctx->pc = 0x1666A4u;
    // 0x1666a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1666a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1666a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1666a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666ac: 0x8c43e878  lw          $v1, -0x1788($v0)
    ctx->pc = 0x1666acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961272)));
    // 0x1666b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1666b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1666b4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1666b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1666b8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1666b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1666bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1666BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1666C4u);
        ctx->pc = 0x1666C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1666BCu;
            // 0x1666c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1666C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x166830u: goto label_166830;
            case 0x166838u: goto label_166838;
            case 0x166840u: goto label_166840;
            case 0x166848u: goto label_166848;
            case 0x16684Cu: goto label_16684c;
            case 0x166878u: goto label_166878;
            case 0x166898u: goto label_166898;
            case 0x16689Cu: goto label_16689c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A50u: goto label_166a50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1666C4u; }
            if (ctx->pc != 0x1666C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1666C4u;
    // 0x1666c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1666c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666c8: 0x8e910010  lw          $s1, 0x10($s4)
    ctx->pc = 0x1666c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x1666cc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1666CCu;
    SET_GPR_U32(ctx, 31, 0x1666D4u);
    ctx->pc = 0x1666D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666CCu;
            // 0x1666d0: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666D4u; }
        if (ctx->pc != 0x1666D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666D4u; }
        if (ctx->pc != 0x1666D4u) { return; }
    }
    ctx->pc = 0x1666D4u;
    // 0x1666d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1666d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666d8: 0xc08e210  jal         func_238840
    ctx->pc = 0x1666D8u;
    SET_GPR_U32(ctx, 31, 0x1666E0u);
    ctx->pc = 0x1666DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666D8u;
            // 0x1666dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238840u;
    if (runtime->hasFunction(0x238840u)) {
        auto targetFn = runtime->lookupFunction(0x238840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666E0u; }
        if (ctx->pc != 0x1666E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238840_0x238848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666E0u; }
        if (ctx->pc != 0x1666E0u) { return; }
    }
    ctx->pc = 0x1666E0u;
    // 0x1666e0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1666e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1666e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1666e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666e8: 0xc08e214  jal         func_238850
    ctx->pc = 0x1666E8u;
    SET_GPR_U32(ctx, 31, 0x1666F0u);
    ctx->pc = 0x1666ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666E8u;
            // 0x1666ec: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238850u;
    if (runtime->hasFunction(0x238850u)) {
        auto targetFn = runtime->lookupFunction(0x238850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666F0u; }
        if (ctx->pc != 0x1666F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238850_0x238858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666F0u; }
        if (ctx->pc != 0x1666F0u) { return; }
    }
    ctx->pc = 0x1666F0u;
    // 0x1666f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1666f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1666f4: 0xc08e212  jal         func_238848
    ctx->pc = 0x1666F4u;
    SET_GPR_U32(ctx, 31, 0x1666FCu);
    ctx->pc = 0x1666F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1666F4u;
            // 0x1666f8: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238848u;
    if (runtime->hasFunction(0x238848u)) {
        auto targetFn = runtime->lookupFunction(0x238848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666FCu; }
        if (ctx->pc != 0x1666FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238848_0x238850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1666FCu; }
        if (ctx->pc != 0x1666FCu) { return; }
    }
    ctx->pc = 0x1666FCu;
    // 0x1666fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1666fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166700: 0xc08e216  jal         func_238858
    ctx->pc = 0x166700u;
    SET_GPR_U32(ctx, 31, 0x166708u);
    ctx->pc = 0x166704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166700u;
            // 0x166704: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238858u;
    if (runtime->hasFunction(0x238858u)) {
        auto targetFn = runtime->lookupFunction(0x238858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166708u; }
        if (ctx->pc != 0x166708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238858_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166708u; }
        if (ctx->pc != 0x166708u) { return; }
    }
    ctx->pc = 0x166708u;
    // 0x166708: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x166708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x16670c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16670cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166710: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x166710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x166714: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x166714u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x166718: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x166718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16671c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x16671cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x166720: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x166720u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x166724: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x166724u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x166728: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x166728u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16672c: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x16672cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x166730: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x166730u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x166734: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x166734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x166738: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x166738u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16673c: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x16673cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x166740: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x166740u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x166744: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x166744u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x166748: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x166748u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16674c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x16674cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x166750: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x166750u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x166754: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x166754u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x166758: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x166758u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16675c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x16675cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x166760: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x166760u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x166764: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x166764u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x166768: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x166768u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x16676c: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x16676cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x166770: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x166770u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x166774: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x166774u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x166778: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x166778u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x16677c: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x16677cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x166780: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x166780u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x166784: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x166784u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x166788: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x166788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x16678c: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x16678cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x166790: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x166790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x166794: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x166794u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x166798: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x166798u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x16679c: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x16679cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1667a0: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x1667a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1667a4: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x1667a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1667a8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1667a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1667ac: 0xa2020031  sb          $v0, 0x31($s0)
    ctx->pc = 0x1667acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1667b0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1667b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1667b4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1667b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1667b8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1667b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1667bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1667bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1667c0: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x1667c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1667c4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1667c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1667c8: 0xa6000040  sh          $zero, 0x40($s0)
    ctx->pc = 0x1667c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1667cc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1667ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1667d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1667d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1667d4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1667d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1667d8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1667d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1667dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1667dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1667e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1667e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1667e4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1667e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1667e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1667E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1667F0u);
        ctx->pc = 0x1667ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1667E8u;
            // 0x1667ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1667F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x166830u: goto label_166830;
            case 0x166838u: goto label_166838;
            case 0x166840u: goto label_166840;
            case 0x166848u: goto label_166848;
            case 0x16684Cu: goto label_16684c;
            case 0x166878u: goto label_166878;
            case 0x166898u: goto label_166898;
            case 0x16689Cu: goto label_16689c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A50u: goto label_166a50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1667F0u; }
            if (ctx->pc != 0x1667F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1667F0u;
    // 0x1667f0: 0xae700010  sw          $s0, 0x10($s3)
    ctx->pc = 0x1667f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 16));
    // 0x1667f4: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1667f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x1667f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1667f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1667fc: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x1667fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x166800: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x166800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x166804: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166808: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x166808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x16680c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x16680cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x166810: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x166810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x166814: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x166814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166818: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x166818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16681c: 0xb0620013  sdl         $v0, 0x13($v1)
    ctx->pc = 0x16681cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166820: 0xb462000c  sdr         $v0, 0xC($v1)
    ctx->pc = 0x166820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166824: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x166824u;
    {
        const bool branch_taken_0x166824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166824u;
            // 0x166828: 0x8e860014  lw          $a2, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166824) {
            ctx->pc = 0x16684Cu;
            goto label_16684c;
        }
    }
    ctx->pc = 0x16682Cu;
    // 0x16682c: 0x0  nop
    ctx->pc = 0x16682cu;
    // NOP
label_166830:
    // 0x166830: 0x1000ff9a  b           . + 4 + (-0x66 << 2)
    ctx->pc = 0x166830u;
    {
        const bool branch_taken_0x166830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166830u;
            // 0x166834: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166830) {
            ctx->pc = 0x16669Cu;
            runtime->cooperativeGuestYield();
            goto label_16669c;
        }
    }
    ctx->pc = 0x166838u;
label_166838:
    // 0x166838: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x166838u;
    {
        const bool branch_taken_0x166838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16683Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166838u;
            // 0x16683c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166838) {
            ctx->pc = 0x16689Cu;
            goto label_16689c;
        }
    }
    ctx->pc = 0x166840u;
label_166840:
    // 0x166840: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x166840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x166844: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x166844u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_166848:
    // 0x166848: 0x8e860014  lw          $a2, 0x14($s4)
    ctx->pc = 0x166848u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_16684c:
    // 0x16684c: 0x50c00079  beql        $a2, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x16684Cu;
    {
        const bool branch_taken_0x16684c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x16684c) {
            ctx->pc = 0x166850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16684Cu;
            // 0x166850: 0xae600014  sw          $zero, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x166A34u;
            goto label_166a34;
        }
    }
    ctx->pc = 0x166854u;
    // 0x166854: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x166854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x166858: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x166858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x16685c: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x16685Cu;
    {
        const bool branch_taken_0x16685c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16685Cu;
            // 0x166860: 0x26a7000c  addiu       $a3, $s5, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16685c) {
            ctx->pc = 0x166A30u;
            goto label_166a30;
        }
    }
    ctx->pc = 0x166864u;
    // 0x166864: 0x8ea80004  lw          $t0, 0x4($s5)
    ctx->pc = 0x166864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x166868: 0x1100000b  beqz        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x166868u;
    {
        const bool branch_taken_0x166868 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x16686Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166868u;
            // 0x16686c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166868) {
            ctx->pc = 0x166898u;
            goto label_166898;
        }
    }
    ctx->pc = 0x166870u;
    // 0x166870: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x166870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166874: 0x0  nop
    ctx->pc = 0x166874u;
    // NOP
label_166878:
    // 0x166878: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x166878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x16687c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x16687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x166880: 0x1066ffed  beq         $v1, $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x166880u;
    {
        const bool branch_taken_0x166880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x166884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166880u;
            // 0x166884: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166880) {
            ctx->pc = 0x166838u;
            runtime->cooperativeGuestYield();
            goto label_166838;
        }
    }
    ctx->pc = 0x166888u;
    // 0x166888: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16688c: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x16688cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x166890: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166890u;
    {
        const bool branch_taken_0x166890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166890u;
            // 0x166894: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166890) {
            ctx->pc = 0x166878u;
            runtime->cooperativeGuestYield();
            goto label_166878;
        }
    }
    ctx->pc = 0x166898u;
label_166898:
    // 0x166898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16689c:
    // 0x16689c: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x16689Cu;
    {
        const bool branch_taken_0x16689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1668A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16689Cu;
            // 0x1668a0: 0xae620014  sw          $v0, 0x14($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16689c) {
            ctx->pc = 0x166A34u;
            goto label_166a34;
        }
    }
    ctx->pc = 0x1668A4u;
    // 0x1668a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1668a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1668a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1668a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668ac: 0x8c43e878  lw          $v1, -0x1788($v0)
    ctx->pc = 0x1668acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961272)));
    // 0x1668b0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1668b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1668b4: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1668b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1668b8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1668b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1668bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1668BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1668C4u);
        ctx->pc = 0x1668C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1668BCu;
            // 0x1668c0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1668C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x166830u: goto label_166830;
            case 0x166838u: goto label_166838;
            case 0x166840u: goto label_166840;
            case 0x166848u: goto label_166848;
            case 0x16684Cu: goto label_16684c;
            case 0x166878u: goto label_166878;
            case 0x166898u: goto label_166898;
            case 0x16689Cu: goto label_16689c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A50u: goto label_166a50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1668C4u; }
            if (ctx->pc != 0x1668C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1668C4u;
    // 0x1668c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1668c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668c8: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x1668c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x1668cc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1668CCu;
    SET_GPR_U32(ctx, 31, 0x1668D4u);
    ctx->pc = 0x1668D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668CCu;
            // 0x1668d0: 0x8e440048  lw          $a0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668D4u; }
        if (ctx->pc != 0x1668D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668D4u; }
        if (ctx->pc != 0x1668D4u) { return; }
    }
    ctx->pc = 0x1668D4u;
    // 0x1668d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1668d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668d8: 0xc08e210  jal         func_238840
    ctx->pc = 0x1668D8u;
    SET_GPR_U32(ctx, 31, 0x1668E0u);
    ctx->pc = 0x1668DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668D8u;
            // 0x1668dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238840u;
    if (runtime->hasFunction(0x238840u)) {
        auto targetFn = runtime->lookupFunction(0x238840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E0u; }
        if (ctx->pc != 0x1668E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238840_0x238848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668E0u; }
        if (ctx->pc != 0x1668E0u) { return; }
    }
    ctx->pc = 0x1668E0u;
    // 0x1668e0: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x1668e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
    // 0x1668e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1668e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668e8: 0xc08e214  jal         func_238850
    ctx->pc = 0x1668E8u;
    SET_GPR_U32(ctx, 31, 0x1668F0u);
    ctx->pc = 0x1668ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668E8u;
            // 0x1668ec: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238850u;
    if (runtime->hasFunction(0x238850u)) {
        auto targetFn = runtime->lookupFunction(0x238850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668F0u; }
        if (ctx->pc != 0x1668F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238850_0x238858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668F0u; }
        if (ctx->pc != 0x1668F0u) { return; }
    }
    ctx->pc = 0x1668F0u;
    // 0x1668f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1668f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1668f4: 0xc08e212  jal         func_238848
    ctx->pc = 0x1668F4u;
    SET_GPR_U32(ctx, 31, 0x1668FCu);
    ctx->pc = 0x1668F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1668F4u;
            // 0x1668f8: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238848u;
    if (runtime->hasFunction(0x238848u)) {
        auto targetFn = runtime->lookupFunction(0x238848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668FCu; }
        if (ctx->pc != 0x1668FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238848_0x238850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1668FCu; }
        if (ctx->pc != 0x1668FCu) { return; }
    }
    ctx->pc = 0x1668FCu;
    // 0x1668fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1668fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166900: 0xc08e216  jal         func_238858
    ctx->pc = 0x166900u;
    SET_GPR_U32(ctx, 31, 0x166908u);
    ctx->pc = 0x166904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x166900u;
            // 0x166904: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238858u;
    if (runtime->hasFunction(0x238858u)) {
        auto targetFn = runtime->lookupFunction(0x238858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166908u; }
        if (ctx->pc != 0x166908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_238858_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166908u; }
        if (ctx->pc != 0x166908u) { return; }
    }
    ctx->pc = 0x166908u;
    // 0x166908: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x166908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x16690c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16690cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166910: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x166910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x166914: 0x96220010  lhu         $v0, 0x10($s1)
    ctx->pc = 0x166914u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x166918: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x166918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x16691c: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x16691cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x166920: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x166920u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x166924: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x166924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x166928: 0x96220014  lhu         $v0, 0x14($s1)
    ctx->pc = 0x166928u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16692c: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x16692cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x166930: 0x96220016  lhu         $v0, 0x16($s1)
    ctx->pc = 0x166930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x166934: 0xa6020016  sh          $v0, 0x16($s0)
    ctx->pc = 0x166934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 22), (uint16_t)GPR_U32(ctx, 2));
    // 0x166938: 0x96220018  lhu         $v0, 0x18($s1)
    ctx->pc = 0x166938u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x16693c: 0xa6020018  sh          $v0, 0x18($s0)
    ctx->pc = 0x16693cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x166940: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x166940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x166944: 0xa602001a  sh          $v0, 0x1A($s0)
    ctx->pc = 0x166944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x166948: 0x9622001c  lhu         $v0, 0x1C($s1)
    ctx->pc = 0x166948u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x16694c: 0xa602001c  sh          $v0, 0x1C($s0)
    ctx->pc = 0x16694cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    // 0x166950: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x166950u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x166954: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x166954u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x166958: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x166958u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16695c: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x16695cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
    // 0x166960: 0xa6020020  sh          $v0, 0x20($s0)
    ctx->pc = 0x166960u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 2));
    // 0x166964: 0xa6000022  sh          $zero, 0x22($s0)
    ctx->pc = 0x166964u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x166968: 0x96220026  lhu         $v0, 0x26($s1)
    ctx->pc = 0x166968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x16696c: 0xa6020026  sh          $v0, 0x26($s0)
    ctx->pc = 0x16696cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 2));
    // 0x166970: 0x92220028  lbu         $v0, 0x28($s1)
    ctx->pc = 0x166970u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x166974: 0xa2020028  sb          $v0, 0x28($s0)
    ctx->pc = 0x166974u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x166978: 0x92220029  lbu         $v0, 0x29($s1)
    ctx->pc = 0x166978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 41)));
    // 0x16697c: 0xa2020029  sb          $v0, 0x29($s0)
    ctx->pc = 0x16697cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x166980: 0x9222002a  lbu         $v0, 0x2A($s1)
    ctx->pc = 0x166980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x166984: 0xa202002a  sb          $v0, 0x2A($s0)
    ctx->pc = 0x166984u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 42), (uint8_t)GPR_U32(ctx, 2));
    // 0x166988: 0x9222002b  lbu         $v0, 0x2B($s1)
    ctx->pc = 0x166988u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 43)));
    // 0x16698c: 0xa202002b  sb          $v0, 0x2B($s0)
    ctx->pc = 0x16698cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x166990: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x166990u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x166994: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x166994u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x166998: 0x9622002e  lhu         $v0, 0x2E($s1)
    ctx->pc = 0x166998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x16699c: 0xa2000030  sb          $zero, 0x30($s0)
    ctx->pc = 0x16699cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1669a0: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x1669a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x1669a4: 0x92220031  lbu         $v0, 0x31($s1)
    ctx->pc = 0x1669a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 49)));
    // 0x1669a8: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x1669a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
    // 0x1669ac: 0xa2020031  sb          $v0, 0x31($s0)
    ctx->pc = 0x1669acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1669b0: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1669b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x1669b4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1669b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1669b8: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1669b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1669bc: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x1669bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x1669c0: 0xa6000042  sh          $zero, 0x42($s0)
    ctx->pc = 0x1669c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 66), (uint16_t)GPR_U32(ctx, 0));
    // 0x1669c4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1669c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1669c8: 0xa6000040  sh          $zero, 0x40($s0)
    ctx->pc = 0x1669c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 64), (uint16_t)GPR_U32(ctx, 0));
    // 0x1669cc: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x1669ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x1669d0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1669d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1669d4: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x1669d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x1669d8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x1669d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x1669dc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1669dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1669e0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1669e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x1669e4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1669e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1669e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1669E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1669F0u);
        ctx->pc = 0x1669ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1669E8u;
            // 0x1669ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1669F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x166830u: goto label_166830;
            case 0x166838u: goto label_166838;
            case 0x166840u: goto label_166840;
            case 0x166848u: goto label_166848;
            case 0x16684Cu: goto label_16684c;
            case 0x166878u: goto label_166878;
            case 0x166898u: goto label_166898;
            case 0x16689Cu: goto label_16689c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A50u: goto label_166a50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1669F0u; }
            if (ctx->pc != 0x1669F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1669F0u;
    // 0x1669f0: 0xae700014  sw          $s0, 0x14($s3)
    ctx->pc = 0x1669f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 16));
    // 0x1669f4: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x1669f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x1669f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1669f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x1669fc: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x1669fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x166a00: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x166a00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x166a04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x166a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x166a08: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x166a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x166a0c: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x166a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x166a10: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x166a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x166a14: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x166a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166a18: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x166a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x166a1c: 0xb0620013  sdl         $v0, 0x13($v1)
    ctx->pc = 0x166a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166a20: 0xb462000c  sdr         $v0, 0xC($v1)
    ctx->pc = 0x166a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166A24u;
    {
        const bool branch_taken_0x166a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A24u;
            // 0x166a28: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a24) {
            ctx->pc = 0x166A38u;
            goto label_166a38;
        }
    }
    ctx->pc = 0x166A2Cu;
    // 0x166a2c: 0x0  nop
    ctx->pc = 0x166a2cu;
    // NOP
label_166a30:
    // 0x166a30: 0xae660014  sw          $a2, 0x14($s3)
    ctx->pc = 0x166a30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 6));
label_166a34:
    // 0x166a34: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x166a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_166a38:
    // 0x166a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x166a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a3c: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x166a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
    // 0x166a40: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x166a40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x166a44: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x166a44u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x166a48: 0xde820028  ld          $v0, 0x28($s4)
    ctx->pc = 0x166a48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x166a4c: 0xfe620028  sd          $v0, 0x28($s3)
    ctx->pc = 0x166a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 2));
label_166a50:
    // 0x166a50: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x166a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x166a54: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x166a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x166a58: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x166a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x166a5c: 0xdc640030  ld          $a0, 0x30($v1)
    ctx->pc = 0x166a5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x166a60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x166a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x166a64: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x166a64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x166a68: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x166A68u;
    {
        const bool branch_taken_0x166a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x166A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166A68u;
            // 0x166a6c: 0xfc440030  sd          $a0, 0x30($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166a68) {
            ctx->pc = 0x166A50u;
            runtime->cooperativeGuestYield();
            goto label_166a50;
        }
    }
    ctx->pc = 0x166A70u;
    // 0x166a70: 0x8e830058  lw          $v1, 0x58($s4)
    ctx->pc = 0x166a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x166a74: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x166a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166a78: 0xc680005c  lwc1        $f0, 0x5C($s4)
    ctx->pc = 0x166a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166a7c: 0xae630058  sw          $v1, 0x58($s3)
    ctx->pc = 0x166a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 3));
    // 0x166a80: 0xe660005c  swc1        $f0, 0x5C($s3)
    ctx->pc = 0x166a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 92), bits); }
    // 0x166a84: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x166a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x166a88: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x166a88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166a8c: 0xae630060  sw          $v1, 0x60($s3)
    ctx->pc = 0x166a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 3));
    // 0x166a90: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x166a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166a94: 0x8e830064  lw          $v1, 0x64($s4)
    ctx->pc = 0x166a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 100)));
    // 0x166a98: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x166a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166a9c: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x166a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x166aa0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x166aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166aa4: 0x8e830068  lw          $v1, 0x68($s4)
    ctx->pc = 0x166aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x166aa8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x166aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166aac: 0xae630068  sw          $v1, 0x68($s3)
    ctx->pc = 0x166aacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 3));
    // 0x166ab0: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x166ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
    // 0x166ab4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x166ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166ab8: 0xae63006c  sw          $v1, 0x6C($s3)
    ctx->pc = 0x166ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 3));
    // 0x166abc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x166abcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x166AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x166AC0u;
            // 0x166ac4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166678u: goto label_166678;
            case 0x166698u: goto label_166698;
            case 0x16669Cu: goto label_16669c;
            case 0x166830u: goto label_166830;
            case 0x166838u: goto label_166838;
            case 0x166840u: goto label_166840;
            case 0x166848u: goto label_166848;
            case 0x16684Cu: goto label_16684c;
            case 0x166878u: goto label_166878;
            case 0x166898u: goto label_166898;
            case 0x16689Cu: goto label_16689c;
            case 0x166A30u: goto label_166a30;
            case 0x166A34u: goto label_166a34;
            case 0x166A38u: goto label_166a38;
            case 0x166A50u: goto label_166a50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166AC8u;
}
