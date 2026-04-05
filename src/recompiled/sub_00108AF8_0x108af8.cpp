#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00108AF8
// Address: 0x108af8 - 0x108b80
void sub_00108AF8_0x108af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108AF8_0x108af8");
#endif

    ctx->pc = 0x108af8u;

    // 0x108af8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108afc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x108afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x108b00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x108b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x108b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x108b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x108b0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x108b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x108b14: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x108b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x108b18: 0x8c43e854  lw          $v1, -0x17AC($v0)
    ctx->pc = 0x108b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x108b1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x108b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x108b20: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x108b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x108b24: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x108b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x108b28: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x108b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x108b2c: 0x40f809  jalr        $v0
    ctx->pc = 0x108B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108B34u);
        ctx->pc = 0x108B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B2Cu;
            // 0x108b30: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x108B34u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108B50u: goto label_108b50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x108B34u; }
            if (ctx->pc != 0x108B34u) { return; }
        }
        }
    }
    ctx->pc = 0x108B34u;
    // 0x108b34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x108b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b38: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x108b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x108b3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x108B3Cu;
    {
        const bool branch_taken_0x108b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x108B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B3Cu;
            // 0x108b40: 0x8e100028  lw          $s0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b3c) {
            ctx->pc = 0x108B50u;
            goto label_108b50;
        }
    }
    ctx->pc = 0x108B44u;
    // 0x108b44: 0xc046044  jal         func_118110
    ctx->pc = 0x108B44u;
    SET_GPR_U32(ctx, 31, 0x108B4Cu);
    ctx->pc = 0x108B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B44u;
            // 0x108b48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (runtime->hasFunction(0x118110u)) {
        auto targetFn = runtime->lookupFunction(0x118110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B4Cu; }
        if (ctx->pc != 0x108B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00118110_0x118110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B4Cu; }
        if (ctx->pc != 0x108B4Cu) { return; }
    }
    ctx->pc = 0x108B4Cu;
    // 0x108b4c: 0x0  nop
    ctx->pc = 0x108b4cu;
    // NOP
label_108b50:
    // 0x108b50: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x108b50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x108b54: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x108b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108b58: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x108b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x108b5c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x108B5Cu;
    SET_GPR_U32(ctx, 31, 0x108B64u);
    ctx->pc = 0x108B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B5Cu;
            // 0x108b60: 0x8c4400c0  lw          $a0, 0xC0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B64u; }
        if (ctx->pc != 0x108B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B64u; }
        if (ctx->pc != 0x108B64u) { return; }
    }
    ctx->pc = 0x108B64u;
    // 0x108b64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x108b64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x108b68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x108b68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108b6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x108b6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108b70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108b74: 0x3e00008  jr          $ra
    ctx->pc = 0x108B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B74u;
            // 0x108b78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x108B50u: goto label_108b50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x108B7Cu;
    // 0x108b7c: 0x0  nop
    ctx->pc = 0x108b7cu;
    // NOP
}
