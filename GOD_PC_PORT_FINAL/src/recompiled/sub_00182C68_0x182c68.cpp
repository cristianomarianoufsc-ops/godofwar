#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182C68
// Address: 0x182c68 - 0x182d68
void sub_00182C68_0x182c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182C68_0x182c68");
#endif

    ctx->pc = 0x182c68u;

    // 0x182c68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182c6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x182c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x182c70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x182c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x182c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x182c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c7c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x182c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x182c80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x182c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182c84: 0x24a52d90  addiu       $a1, $a1, 0x2D90
    ctx->pc = 0x182c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11664));
    // 0x182c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x182c8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x182c90: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x182C90u;
    SET_GPR_U32(ctx, 31, 0x182C98u);
    ctx->pc = 0x182C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182C90u;
            // 0x182c94: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C98u; }
        if (ctx->pc != 0x182C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182C98u; }
        if (ctx->pc != 0x182C98u) { return; }
    }
    ctx->pc = 0x182C98u;
    // 0x182c98: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x182c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x182c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x182c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x182ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ca4: 0xc05ff44  jal         func_17FD10
    ctx->pc = 0x182CA4u;
    SET_GPR_U32(ctx, 31, 0x182CACu);
    ctx->pc = 0x182CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182CA4u;
            // 0x182ca8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FD10u;
    if (runtime->hasFunction(0x17FD10u)) {
        auto targetFn = runtime->lookupFunction(0x17FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CACu; }
        if (ctx->pc != 0x182CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FD10_0x17fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CACu; }
        if (ctx->pc != 0x182CACu) { return; }
    }
    ctx->pc = 0x182CACu;
    // 0x182cac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x182CACu;
    {
        const bool branch_taken_0x182cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CACu;
            // 0x182cb0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182cac) {
            ctx->pc = 0x182CCCu;
            goto label_182ccc;
        }
    }
    ctx->pc = 0x182CB4u;
    // 0x182cb4: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x182cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x182cb8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x182cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x182cbc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x182cbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x182cc0: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x182cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x182cc4: 0x40f809  jalr        $v0
    ctx->pc = 0x182CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182CCCu);
        ctx->pc = 0x182CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CC4u;
            // 0x182cc8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182CCCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182CCCu: goto label_182ccc;
            case 0x182D20u: goto label_182d20;
            case 0x182D50u: goto label_182d50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182CCCu; }
            if (ctx->pc != 0x182CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x182CCCu;
label_182ccc:
    // 0x182ccc: 0x26320034  addiu       $s2, $s1, 0x34
    ctx->pc = 0x182cccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x182cd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182cd4: 0xc05da7e  jal         func_1769F8
    ctx->pc = 0x182CD4u;
    SET_GPR_U32(ctx, 31, 0x182CDCu);
    ctx->pc = 0x182CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182CD4u;
            // 0x182cd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1769F8u;
    if (runtime->hasFunction(0x1769F8u)) {
        auto targetFn = runtime->lookupFunction(0x1769F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CDCu; }
        if (ctx->pc != 0x182CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001769F8_0x1769f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182CDCu; }
        if (ctx->pc != 0x182CDCu) { return; }
    }
    ctx->pc = 0x182CDCu;
    // 0x182cdc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x182cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ce0: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x182CE0u;
    {
        const bool branch_taken_0x182ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x182CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CE0u;
            // 0x182ce4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182ce0) {
            ctx->pc = 0x182D50u;
            goto label_182d50;
        }
    }
    ctx->pc = 0x182CE8u;
    // 0x182ce8: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x182ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x182cec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x182cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x182cf0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x182cf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x182cf4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x182cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x182cf8: 0x40f809  jalr        $v0
    ctx->pc = 0x182CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182D00u);
        ctx->pc = 0x182CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182CF8u;
            // 0x182cfc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182D00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182CCCu: goto label_182ccc;
            case 0x182D20u: goto label_182d20;
            case 0x182D50u: goto label_182d50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182D00u; }
            if (ctx->pc != 0x182D00u) { return; }
        }
        }
    }
    ctx->pc = 0x182D00u;
    // 0x182d00: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x182d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x182d04: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x182D04u;
    {
        const bool branch_taken_0x182d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D04u;
            // 0x182d08: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182d04) {
            ctx->pc = 0x182D20u;
            goto label_182d20;
        }
    }
    ctx->pc = 0x182D0Cu;
    // 0x182d0c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x182d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x182d10: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x182d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x182d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x182d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d18: 0xc05fbb2  jal         func_17EEC8
    ctx->pc = 0x182D18u;
    SET_GPR_U32(ctx, 31, 0x182D20u);
    ctx->pc = 0x182D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182D18u;
            // 0x182d1c: 0x463024  and         $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EEC8u;
    if (runtime->hasFunction(0x17EEC8u)) {
        auto targetFn = runtime->lookupFunction(0x17EEC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D20u; }
        if (ctx->pc != 0x182D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EEC8_0x17eec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D20u; }
        if (ctx->pc != 0x182D20u) { return; }
    }
    ctx->pc = 0x182D20u;
label_182d20:
    // 0x182d20: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x182d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x182d24: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x182d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x182d28: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x182d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x182d2c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x182d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x182d30: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x182d30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x182d34: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x182d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x182d38: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x182d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x182d3c: 0x40f809  jalr        $v0
    ctx->pc = 0x182D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182D44u);
        ctx->pc = 0x182D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D3Cu;
            // 0x182d40: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182D44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182CCCu: goto label_182ccc;
            case 0x182D20u: goto label_182d20;
            case 0x182D50u: goto label_182d50;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182D44u; }
            if (ctx->pc != 0x182D44u) { return; }
        }
        }
    }
    ctx->pc = 0x182D44u;
    // 0x182d44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x182d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d48: 0xc05dee0  jal         func_177B80
    ctx->pc = 0x182D48u;
    SET_GPR_U32(ctx, 31, 0x182D50u);
    ctx->pc = 0x182D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182D48u;
            // 0x182d4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x177B80u;
    if (runtime->hasFunction(0x177B80u)) {
        auto targetFn = runtime->lookupFunction(0x177B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D50u; }
        if (ctx->pc != 0x182D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00177B80_0x177b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182D50u; }
        if (ctx->pc != 0x182D50u) { return; }
    }
    ctx->pc = 0x182D50u;
label_182d50:
    // 0x182d50: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x182d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x182d54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x182d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182d58: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x182d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182d5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182d60: 0x3e00008  jr          $ra
    ctx->pc = 0x182D60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182D60u;
            // 0x182d64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182CCCu: goto label_182ccc;
            case 0x182D20u: goto label_182d20;
            case 0x182D50u: goto label_182d50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182D68u;
}
