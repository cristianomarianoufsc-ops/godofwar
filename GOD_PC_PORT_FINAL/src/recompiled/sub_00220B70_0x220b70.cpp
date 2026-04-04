#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220B70
// Address: 0x220b70 - 0x220c20
void sub_00220B70_0x220b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220B70_0x220b70");
#endif

    ctx->pc = 0x220b70u;

    // 0x220b70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x220b74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x220b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x220b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x220b7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x220b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x220b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x220b84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x220b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b88: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x220b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x220b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x220b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x220b90: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x220b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x220b94: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B94u;
            // 0x220b98: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220BF0u;
            goto label_220bf0;
        }
    }
    ctx->pc = 0x220B9Cu;
    // 0x220b9c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x220b9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x220ba0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x220ba4: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x220ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x220ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x220bac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x220bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x220bb4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220bb8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x220bb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x220bbc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x220bc0: 0x40f809  jalr        $v0
    ctx->pc = 0x220BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220BC8u);
        ctx->pc = 0x220BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BC0u;
            // 0x220bc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220BC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220BF0u: goto label_220bf0;
            case 0x220C00u: goto label_220c00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220BC8u; }
            if (ctx->pc != 0x220BC8u) { return; }
        }
        }
    }
    ctx->pc = 0x220BC8u;
    // 0x220bc8: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x220BC8u;
    SET_GPR_U32(ctx, 31, 0x220BD0u);
    ctx->pc = 0x220BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BC8u;
            // 0x220bcc: 0x8e44003c  lw          $a0, 0x3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BD0u; }
        if (ctx->pc != 0x220BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220BD0u; }
        if (ctx->pc != 0x220BD0u) { return; }
    }
    ctx->pc = 0x220BD0u;
    // 0x220bd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x220bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bd4: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x220bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x220bd8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x220bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x220bdc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x220bdcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x220be0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x220be4: 0x40f809  jalr        $v0
    ctx->pc = 0x220BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220BECu);
        ctx->pc = 0x220BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BE4u;
            // 0x220be8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220BECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220BF0u: goto label_220bf0;
            case 0x220C00u: goto label_220c00;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220BECu; }
            if (ctx->pc != 0x220BECu) { return; }
        }
        }
    }
    ctx->pc = 0x220BECu;
    // 0x220bec: 0x0  nop
    ctx->pc = 0x220becu;
    // NOP
label_220bf0:
    // 0x220bf0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x220BF0u;
    {
        const bool branch_taken_0x220bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BF0u;
            // 0x220bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bf0) {
            ctx->pc = 0x220C00u;
            goto label_220c00;
        }
    }
    ctx->pc = 0x220BF8u;
    // 0x220bf8: 0xc05c294  jal         func_170A50
    ctx->pc = 0x220BF8u;
    SET_GPR_U32(ctx, 31, 0x220C00u);
    ctx->pc = 0x220BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220BF8u;
            // 0x220bfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C00u; }
        if (ctx->pc != 0x220C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C00u; }
        if (ctx->pc != 0x220C00u) { return; }
    }
    ctx->pc = 0x220C00u;
label_220c00:
    // 0x220c00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x220c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x220c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220c08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x220c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220c0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x220c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220c10: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x220c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220c14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x220c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220c18: 0x3e00008  jr          $ra
    ctx->pc = 0x220C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C18u;
            // 0x220c1c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x220BF0u: goto label_220bf0;
            case 0x220C00u: goto label_220c00;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220C20u;
}
