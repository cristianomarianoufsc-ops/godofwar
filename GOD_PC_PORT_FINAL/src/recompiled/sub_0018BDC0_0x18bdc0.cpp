#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BDC0
// Address: 0x18bdc0 - 0x18c040
void sub_0018BDC0_0x18bdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BDC0_0x18bdc0");
#endif

    ctx->pc = 0x18bdc0u;

    // 0x18bdc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x18bdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x18bdc4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x18bdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x18bdc8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x18bdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x18bdcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18bdccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdd0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x18bdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x18bdd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18bdd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdd8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x18bdd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x18bddc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x18bddcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bde0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x18bde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x18bde4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x18bde4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bde8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x18bde8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bdec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x18bdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x18bdf0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x18bdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x18bdf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18bdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x18bdf8: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x18bdf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x18bdfc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be00: 0x24a53098  addiu       $a1, $a1, 0x3098
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12440));
    // 0x18be04: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x18BE04u;
    SET_GPR_U32(ctx, 31, 0x18BE0Cu);
    ctx->pc = 0x18BE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE04u;
            // 0x18be08: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE0Cu; }
        if (ctx->pc != 0x18BE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE0Cu; }
        if (ctx->pc != 0x18BE0Cu) { return; }
    }
    ctx->pc = 0x18BE0Cu;
    // 0x18be0c: 0xc05e996  jal         func_17A658
    ctx->pc = 0x18BE0Cu;
    SET_GPR_U32(ctx, 31, 0x18BE14u);
    ctx->pc = 0x18BE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE0Cu;
            // 0x18be10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE14u; }
        if (ctx->pc != 0x18BE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE14u; }
        if (ctx->pc != 0x18BE14u) { return; }
    }
    ctx->pc = 0x18BE14u;
    // 0x18be14: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x18BE14u;
    {
        const bool branch_taken_0x18be14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18be14) {
            ctx->pc = 0x18BE18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE14u;
            // 0x18be18: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BF18u;
            goto label_18bf18;
        }
    }
    ctx->pc = 0x18BE1Cu;
    // 0x18be1c: 0xc05e9ea  jal         func_17A7A8
    ctx->pc = 0x18BE1Cu;
    SET_GPR_U32(ctx, 31, 0x18BE24u);
    ctx->pc = 0x18BE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE1Cu;
            // 0x18be20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A7A8u;
    if (runtime->hasFunction(0x17A7A8u)) {
        auto targetFn = runtime->lookupFunction(0x17A7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE24u; }
        if (ctx->pc != 0x18BE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A7A8_0x17a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE24u; }
        if (ctx->pc != 0x18BE24u) { return; }
    }
    ctx->pc = 0x18BE24u;
    // 0x18be24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18be24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be28: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x18be28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x18be2c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x18be2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18be30: 0x2673e848  addiu       $s3, $s3, -0x17B8
    ctx->pc = 0x18be30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x18be34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18be34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18be38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18be3c: 0x2652007c  addiu       $s2, $s2, 0x7C
    ctx->pc = 0x18be3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 124));
    // 0x18be40: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18be40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x18be44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18be44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18be48: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18be48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18be4c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x18be4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x18be50: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x18be50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x18be54: 0x40f809  jalr        $v0
    ctx->pc = 0x18BE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BE5Cu);
        ctx->pc = 0x18BE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE54u;
            // 0x18be58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BE5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF18u: goto label_18bf18;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFF8u: goto label_18bff8;
            case 0x18C008u: goto label_18c008;
            case 0x18C020u: goto label_18c020;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BE5Cu; }
            if (ctx->pc != 0x18BE5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18BE5Cu;
    // 0x18be5c: 0xc062ea6  jal         func_18BA98
    ctx->pc = 0x18BE5Cu;
    SET_GPR_U32(ctx, 31, 0x18BE64u);
    ctx->pc = 0x18BE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE5Cu;
            // 0x18be60: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BA98u;
    if (runtime->hasFunction(0x18BA98u)) {
        auto targetFn = runtime->lookupFunction(0x18BA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE64u; }
        if (ctx->pc != 0x18BE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BA98_0x18ba98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE64u; }
        if (ctx->pc != 0x18BE64u) { return; }
    }
    ctx->pc = 0x18BE64u;
    // 0x18be64: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x18be64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be68: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x18be68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be6c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x18be6cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18be70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be74: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x18be74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be78: 0xc062efc  jal         func_18BBF0
    ctx->pc = 0x18BE78u;
    SET_GPR_U32(ctx, 31, 0x18BE80u);
    ctx->pc = 0x18BE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE78u;
            // 0x18be7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BBF0u;
    if (runtime->hasFunction(0x18BBF0u)) {
        auto targetFn = runtime->lookupFunction(0x18BBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE80u; }
        if (ctx->pc != 0x18BE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BBF0_0x18bbf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE80u; }
        if (ctx->pc != 0x18BE80u) { return; }
    }
    ctx->pc = 0x18BE80u;
    // 0x18be80: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x18be80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18be84: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x18be84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18be88: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18be88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x18be8c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x18be8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x18be90: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x18be90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x18be94: 0x40f809  jalr        $v0
    ctx->pc = 0x18BE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BE9Cu);
        ctx->pc = 0x18BE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE94u;
            // 0x18be98: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BE9Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF18u: goto label_18bf18;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFF8u: goto label_18bff8;
            case 0x18C008u: goto label_18c008;
            case 0x18C020u: goto label_18c020;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BE9Cu; }
            if (ctx->pc != 0x18BE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18BE9Cu;
    // 0x18be9c: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x18be9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x18bea0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x18bea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bea4: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x18BEA4u;
    SET_GPR_U32(ctx, 31, 0x18BEACu);
    ctx->pc = 0x18BEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEA4u;
            // 0x18bea8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEACu; }
        if (ctx->pc != 0x18BEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEACu; }
        if (ctx->pc != 0x18BEACu) { return; }
    }
    ctx->pc = 0x18BEACu;
    // 0x18beac: 0x3c100019  lui         $s0, 0x19
    ctx->pc = 0x18beacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)25 << 16));
    // 0x18beb0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18beb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18beb4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x18BEB4u;
    SET_GPR_U32(ctx, 31, 0x18BEBCu);
    ctx->pc = 0x18BEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BEB4u;
            // 0x18beb8: 0x2610bd88  addiu       $s0, $s0, -0x4278 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEBCu; }
        if (ctx->pc != 0x18BEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BEBCu; }
        if (ctx->pc != 0x18BEBCu) { return; }
    }
    ctx->pc = 0x18BEBCu;
    // 0x18bebc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x18bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x18bec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18bec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bec4: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x18bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x18bec8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x18bec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x18becc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18BECCu;
    SET_GPR_U32(ctx, 31, 0x18BED4u);
    ctx->pc = 0x18BED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BECCu;
            // 0x18bed0: 0xae340004  sw          $s4, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BED4u; }
        if (ctx->pc != 0x18BED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BED4u; }
        if (ctx->pc != 0x18BED4u) { return; }
    }
    ctx->pc = 0x18BED4u;
    // 0x18bed4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x18bed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x18bed8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x18bed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x18bedc: 0x8e65006c  lw          $a1, 0x6C($s3)
    ctx->pc = 0x18bedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x18bee0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x18bee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18bee4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x18bee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x18bee8: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x18bee8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x18beec: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x18beecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18bef0: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x18bef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x18bef4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x18bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18bef8: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x18bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x18befc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x18befcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x18bf00: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x18bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x18bf04: 0x40f809  jalr        $v0
    ctx->pc = 0x18BF04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BF0Cu);
        ctx->pc = 0x18BF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF04u;
            // 0x18bf08: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BF0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF18u: goto label_18bf18;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFF8u: goto label_18bff8;
            case 0x18C008u: goto label_18c008;
            case 0x18C020u: goto label_18c020;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BF0Cu; }
            if (ctx->pc != 0x18BF0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x18BF0Cu;
    // 0x18bf0c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x18bf0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf10: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x18bf10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18bf14: 0x0  nop
    ctx->pc = 0x18bf14u;
    // NOP
label_18bf18:
    // 0x18bf18: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x18bf18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18bf1c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x18bf1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18bf20: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x18bf20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18bf24: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x18bf24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bf28: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x18bf28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bf2c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x18bf2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bf30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18bf30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bf34: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF34u;
            // 0x18bf38: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF18u: goto label_18bf18;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFF8u: goto label_18bff8;
            case 0x18C008u: goto label_18c008;
            case 0x18C020u: goto label_18c020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18BF3Cu;
    // 0x18bf3c: 0x0  nop
    ctx->pc = 0x18bf3cu;
    // NOP
    // 0x18bf40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18bf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18bf44: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x18bf48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18bf4c: 0x24429b68  addiu       $v0, $v0, -0x6498
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941544));
    // 0x18bf50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18bf50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18bf54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18bf54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18bf58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18bf5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x18bf5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18bf60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18bf64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18bf64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18bf68: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18bf68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18bf6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bf6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bf70: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x18bf70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x18bf74: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x18bf74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x18bf78: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18BF78u;
    {
        const bool branch_taken_0x18bf78 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x18BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF78u;
            // 0x18bf7c: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf78) {
            ctx->pc = 0x18C008u;
            goto label_18c008;
        }
    }
    ctx->pc = 0x18BF80u;
    // 0x18bf80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18bf80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf84: 0x0  nop
    ctx->pc = 0x18bf84u;
    // NOP
label_18bf88:
    // 0x18bf88: 0x26340004  addiu       $s4, $s1, 0x4
    ctx->pc = 0x18bf88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18bf8c: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x18bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x18bf90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bf94: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x18BF94u;
    {
        const bool branch_taken_0x18bf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bf94) {
            ctx->pc = 0x18BF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BF94u;
            // 0x18bf98: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BFF8u;
            goto label_18bff8;
        }
    }
    ctx->pc = 0x18BF9Cu;
    // 0x18bf9c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x18bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18bfa0: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x18BFA0u;
    {
        const bool branch_taken_0x18bfa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x18BFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFA0u;
            // 0x18bfa4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfa0) {
            ctx->pc = 0x18BFDCu;
            goto label_18bfdc;
        }
    }
    ctx->pc = 0x18BFA8u;
    // 0x18bfa8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x18bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x18bfac: 0x0  nop
    ctx->pc = 0x18bfacu;
    // NOP
label_18bfb0:
    // 0x18bfb0: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x18bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x18bfb4: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x18bfb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x18bfb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x18bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18bfbc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18bfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bfc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18bfc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18bfc4: 0xc062ec0  jal         func_18BB00
    ctx->pc = 0x18BFC4u;
    SET_GPR_U32(ctx, 31, 0x18BFCCu);
    ctx->pc = 0x18BFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFC4u;
            // 0x18bfc8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BB00u;
    if (runtime->hasFunction(0x18BB00u)) {
        auto targetFn = runtime->lookupFunction(0x18BB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFCCu; }
        if (ctx->pc != 0x18BFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BB00_0x18bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFCCu; }
        if (ctx->pc != 0x18BFCCu) { return; }
    }
    ctx->pc = 0x18BFCCu;
    // 0x18bfcc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x18bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x18bfd0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x18bfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18bfd4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x18BFD4u;
    {
        const bool branch_taken_0x18bfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFD4u;
            // 0x18bfd8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bfd4) {
            ctx->pc = 0x18BFB0u;
            runtime->cooperativeGuestYield();
            goto label_18bfb0;
        }
    }
    ctx->pc = 0x18BFDCu;
label_18bfdc:
    // 0x18bfdc: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x18bfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x18bfe0: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x18bfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x18bfe4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x18bfe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x18bfe8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x18BFE8u;
    SET_GPR_U32(ctx, 31, 0x18BFF0u);
    ctx->pc = 0x18BFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BFE8u;
            // 0x18bfec: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFF0u; }
        if (ctx->pc != 0x18BFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BFF0u; }
        if (ctx->pc != 0x18BFF0u) { return; }
    }
    ctx->pc = 0x18BFF0u;
    // 0x18bff0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x18bff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x18bff4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x18bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_18bff8:
    // 0x18bff8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x18bff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x18bffc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x18bffcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18c000: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x18C000u;
    {
        const bool branch_taken_0x18c000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C000u;
            // 0x18c004: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c000) {
            ctx->pc = 0x18BF88u;
            runtime->cooperativeGuestYield();
            goto label_18bf88;
        }
    }
    ctx->pc = 0x18C008u;
label_18c008:
    // 0x18c008: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x18c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x18c00c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18C00Cu;
    {
        const bool branch_taken_0x18c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C00Cu;
            // 0x18c010: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c00c) {
            ctx->pc = 0x18C020u;
            goto label_18c020;
        }
    }
    ctx->pc = 0x18C014u;
    // 0x18c014: 0xc062eb6  jal         func_18BAD8
    ctx->pc = 0x18C014u;
    SET_GPR_U32(ctx, 31, 0x18C01Cu);
    ctx->pc = 0x18C018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18C014u;
            // 0x18c018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BAD8u;
    if (runtime->hasFunction(0x18BAD8u)) {
        auto targetFn = runtime->lookupFunction(0x18BAD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C01Cu; }
        if (ctx->pc != 0x18C01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_18bad8_0x18bb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18C01Cu; }
        if (ctx->pc != 0x18C01Cu) { return; }
    }
    ctx->pc = 0x18C01Cu;
    // 0x18c01c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18c01cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18c020:
    // 0x18c020: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18c020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18c024: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18c024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18c028: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18c028u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18c02c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18c02cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c030: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18c030u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c038: 0x3e00008  jr          $ra
    ctx->pc = 0x18C038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18C038u;
            // 0x18c03c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18BF18u: goto label_18bf18;
            case 0x18BF88u: goto label_18bf88;
            case 0x18BFB0u: goto label_18bfb0;
            case 0x18BFDCu: goto label_18bfdc;
            case 0x18BFF8u: goto label_18bff8;
            case 0x18C008u: goto label_18c008;
            case 0x18C020u: goto label_18c020;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18C040u;
}
