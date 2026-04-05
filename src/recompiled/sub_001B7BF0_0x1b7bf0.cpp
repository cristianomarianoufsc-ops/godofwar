#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7BF0
// Address: 0x1b7bf0 - 0x1b7ce0
void sub_001B7BF0_0x1b7bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7BF0_0x1b7bf0");
#endif

    ctx->pc = 0x1b7bf0u;

    // 0x1b7bf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b7bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b7bf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b7bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b7bf8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b7bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b7bfc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b7bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b7c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b7c04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b7c04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b7c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b7c0c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b7c0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7c14: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x1b7c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1b7c18:
    // 0x1b7c18: 0x26221558  addiu       $v0, $s1, 0x1558
    ctx->pc = 0x1b7c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 5464));
    // 0x1b7c1c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1b7c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b7c20: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1b7c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b7c24: 0x50800024  beql        $a0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B7C24u;
    {
        const bool branch_taken_0x1b7c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7c24) {
            ctx->pc = 0x1B7C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C24u;
            // 0x1b7c28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B7CB8u;
            goto label_1b7cb8;
        }
    }
    ctx->pc = 0x1B7C2Cu;
    // 0x1b7c2c: 0xc052ac8  jal         func_14AB20
    ctx->pc = 0x1B7C2Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C34u);
    ctx->pc = 0x14AB20u;
    if (runtime->hasFunction(0x14AB20u)) {
        auto targetFn = runtime->lookupFunction(0x14AB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C34u; }
        if (ctx->pc != 0x1B7C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_14ab20_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C34u; }
        if (ctx->pc != 0x1B7C34u) { return; }
    }
    ctx->pc = 0x1B7C34u;
    // 0x1b7c34: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b7c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c38: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x1B7C38u;
    SET_GPR_U32(ctx, 31, 0x1B7C40u);
    ctx->pc = 0x1B7C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C38u;
            // 0x1b7c3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C40u; }
        if (ctx->pc != 0x1B7C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C40u; }
        if (ctx->pc != 0x1B7C40u) { return; }
    }
    ctx->pc = 0x1B7C40u;
    // 0x1b7c40: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1B7C40u;
    {
        const bool branch_taken_0x1b7c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C40u;
            // 0x1b7c44: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7c40) {
            ctx->pc = 0x1B7CB8u;
            goto label_1b7cb8;
        }
    }
    ctx->pc = 0x1B7C48u;
    // 0x1b7c48: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b7c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b7c4c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7c50: 0x24a555e0  addiu       $a1, $a1, 0x55E0
    ctx->pc = 0x1b7c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21984));
    // 0x1b7c54: 0x8c5000e0  lw          $s0, 0xE0($v0)
    ctx->pc = 0x1b7c54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x1b7c58: 0xc052b4a  jal         func_14AD28
    ctx->pc = 0x1B7C58u;
    SET_GPR_U32(ctx, 31, 0x1B7C60u);
    ctx->pc = 0x1B7C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C58u;
            // 0x1b7c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD28u;
    if (runtime->hasFunction(0x14AD28u)) {
        auto targetFn = runtime->lookupFunction(0x14AD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C60u; }
        if (ctx->pc != 0x1B7C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD28_0x14ad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C60u; }
        if (ctx->pc != 0x1B7C60u) { return; }
    }
    ctx->pc = 0x1B7C60u;
    // 0x1b7c60: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c68: 0x24a555f8  addiu       $a1, $a1, 0x55F8
    ctx->pc = 0x1b7c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22008));
    // 0x1b7c6c: 0xc052b4a  jal         func_14AD28
    ctx->pc = 0x1B7C6Cu;
    SET_GPR_U32(ctx, 31, 0x1B7C74u);
    ctx->pc = 0x1B7C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C6Cu;
            // 0x1b7c70: 0xae2214ac  sw          $v0, 0x14AC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD28u;
    if (runtime->hasFunction(0x14AD28u)) {
        auto targetFn = runtime->lookupFunction(0x14AD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C74u; }
        if (ctx->pc != 0x1B7C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD28_0x14ad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C74u; }
        if (ctx->pc != 0x1B7C74u) { return; }
    }
    ctx->pc = 0x1B7C74u;
    // 0x1b7c74: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7c78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c7c: 0x24a55610  addiu       $a1, $a1, 0x5610
    ctx->pc = 0x1b7c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22032));
    // 0x1b7c80: 0xc052b4a  jal         func_14AD28
    ctx->pc = 0x1B7C80u;
    SET_GPR_U32(ctx, 31, 0x1B7C88u);
    ctx->pc = 0x1B7C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C80u;
            // 0x1b7c84: 0xae2214b0  sw          $v0, 0x14B0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD28u;
    if (runtime->hasFunction(0x14AD28u)) {
        auto targetFn = runtime->lookupFunction(0x14AD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C88u; }
        if (ctx->pc != 0x1B7C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD28_0x14ad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C88u; }
        if (ctx->pc != 0x1B7C88u) { return; }
    }
    ctx->pc = 0x1B7C88u;
    // 0x1b7c88: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1b7c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1b7c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7c90: 0x24a55628  addiu       $a1, $a1, 0x5628
    ctx->pc = 0x1b7c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22056));
    // 0x1b7c94: 0xc052b4a  jal         func_14AD28
    ctx->pc = 0x1B7C94u;
    SET_GPR_U32(ctx, 31, 0x1B7C9Cu);
    ctx->pc = 0x1B7C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7C94u;
            // 0x1b7c98: 0xae2214b4  sw          $v0, 0x14B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5300), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AD28u;
    if (runtime->hasFunction(0x14AD28u)) {
        auto targetFn = runtime->lookupFunction(0x14AD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C9Cu; }
        if (ctx->pc != 0x1B7C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AD28_0x14ad28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7C9Cu; }
        if (ctx->pc != 0x1B7C9Cu) { return; }
    }
    ctx->pc = 0x1B7C9Cu;
    // 0x1b7c9c: 0x8e2514ac  lw          $a1, 0x14AC($s1)
    ctx->pc = 0x1b7c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5292)));
    // 0x1b7ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b7ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7ca4: 0xc06de88  jal         func_1B7A20
    ctx->pc = 0x1B7CA4u;
    SET_GPR_U32(ctx, 31, 0x1B7CACu);
    ctx->pc = 0x1B7CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CA4u;
            // 0x1b7ca8: 0xae2214b8  sw          $v0, 0x14B8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7A20u;
    if (runtime->hasFunction(0x1B7A20u)) {
        auto targetFn = runtime->lookupFunction(0x1B7A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CACu; }
        if (ctx->pc != 0x1B7CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b7a20_0x1b7a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7CACu; }
        if (ctx->pc != 0x1B7CACu) { return; }
    }
    ctx->pc = 0x1B7CACu;
    // 0x1b7cac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7CACu;
    {
        const bool branch_taken_0x1b7cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CACu;
            // 0x1b7cb0: 0xae2214a8  sw          $v0, 0x14A8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cac) {
            ctx->pc = 0x1B7CC4u;
            goto label_1b7cc4;
        }
    }
    ctx->pc = 0x1B7CB4u;
    // 0x1b7cb4: 0x0  nop
    ctx->pc = 0x1b7cb4u;
    // NOP
label_1b7cb8:
    // 0x1b7cb8: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b7cb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b7cbc: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1B7CBCu;
    {
        const bool branch_taken_0x1b7cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CBCu;
            // 0x1b7cc0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7cbc) {
            ctx->pc = 0x1B7C18u;
            runtime->cooperativeGuestYield();
            goto label_1b7c18;
        }
    }
    ctx->pc = 0x1B7CC4u;
label_1b7cc4:
    // 0x1b7cc4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b7cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b7cc8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b7cc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b7ccc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b7cccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7cd0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b7cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7cd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7CD8u;
            // 0x1b7cdc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B7C18u: goto label_1b7c18;
            case 0x1B7CB8u: goto label_1b7cb8;
            case 0x1B7CC4u: goto label_1b7cc4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B7CE0u;
}
