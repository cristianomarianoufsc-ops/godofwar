#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019F718
// Address: 0x19f718 - 0x19f7b8
void sub_0019F718_0x19f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F718_0x19f718");
#endif

    ctx->pc = 0x19f718u;

    // 0x19f718: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x19f718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19f71c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19f71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19f720: 0x8c42c9ec  lw          $v0, -0x3614($v0)
    ctx->pc = 0x19f720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953452)));
    // 0x19f724: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19f724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19f728: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x19F728u;
    {
        const bool branch_taken_0x19f728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19F72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F728u;
            // 0x19f72c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f728) {
            ctx->pc = 0x19F7A8u;
            goto label_19f7a8;
        }
    }
    ctx->pc = 0x19F730u;
    // 0x19f730: 0xc067da4  jal         func_19F690
    ctx->pc = 0x19F730u;
    SET_GPR_U32(ctx, 31, 0x19F738u);
    ctx->pc = 0x19F734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F730u;
            // 0x19f734: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F690u;
    if (runtime->hasFunction(0x19F690u)) {
        auto targetFn = runtime->lookupFunction(0x19F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F738u; }
        if (ctx->pc != 0x19F738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F690_0x19f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F738u; }
        if (ctx->pc != 0x19F738u) { return; }
    }
    ctx->pc = 0x19F738u;
    // 0x19f738: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x19f738u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19f73c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x19f73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x19f740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19f740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19f744: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x19f744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x19f748: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19f748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f74c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19f750: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19f750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19f754: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19f754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x19f758: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x19f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19f75c: 0x40f809  jalr        $v0
    ctx->pc = 0x19F75Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F764u);
        ctx->pc = 0x19F760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F75Cu;
            // 0x19f760: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F764u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F7A8u: goto label_19f7a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F764u; }
            if (ctx->pc != 0x19F764u) { return; }
        }
        }
    }
    ctx->pc = 0x19F764u;
    // 0x19f764: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19f764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19f768: 0xc04c992  jal         func_132648
    ctx->pc = 0x19F768u;
    SET_GPR_U32(ctx, 31, 0x19F770u);
    ctx->pc = 0x19F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F768u;
            // 0x19f76c: 0x24843ee8  addiu       $a0, $a0, 0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F770u; }
        if (ctx->pc != 0x19F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F770u; }
        if (ctx->pc != 0x19F770u) { return; }
    }
    ctx->pc = 0x19F770u;
    // 0x19f770: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19f770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19f774: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x19f774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x19f778: 0xac62c9f0  sw          $v0, -0x3610($v1)
    ctx->pc = 0x19f778u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953456), GPR_U32(ctx, 2));
    // 0x19f77c: 0xc04c992  jal         func_132648
    ctx->pc = 0x19F77Cu;
    SET_GPR_U32(ctx, 31, 0x19F784u);
    ctx->pc = 0x19F780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19F77Cu;
            // 0x19f780: 0x24843ef0  addiu       $a0, $a0, 0x3EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F784u; }
        if (ctx->pc != 0x19F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19F784u; }
        if (ctx->pc != 0x19F784u) { return; }
    }
    ctx->pc = 0x19F784u;
    // 0x19f784: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x19f784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x19f788: 0xac62c9f4  sw          $v0, -0x360C($v1)
    ctx->pc = 0x19f788u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294953460), GPR_U32(ctx, 2));
    // 0x19f78c: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x19f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x19f790: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19f790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19f794: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x19f794u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x19f798: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x19f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19f79c: 0x40f809  jalr        $v0
    ctx->pc = 0x19F79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F7A4u);
        ctx->pc = 0x19F7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F79Cu;
            // 0x19f7a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19F7A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F7A8u: goto label_19f7a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19F7A4u; }
            if (ctx->pc != 0x19F7A4u) { return; }
        }
        }
    }
    ctx->pc = 0x19F7A4u;
    // 0x19f7a4: 0x0  nop
    ctx->pc = 0x19f7a4u;
    // NOP
label_19f7a8:
    // 0x19f7a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19f7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f7b0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19F7B0u;
            // 0x19f7b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19F7A8u: goto label_19f7a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19F7B8u;
}
