#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00244C48
// Address: 0x244c48 - 0x244d08
void sub_00244C48_0x244c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244C48_0x244c48");
#endif

    ctx->pc = 0x244c48u;

    // 0x244c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244c4c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244c50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x244c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x244c54: 0x2442ead8  addiu       $v0, $v0, -0x1528
    ctx->pc = 0x244c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961880));
    // 0x244c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x244c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244c64: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x244c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x244c68: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x244c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x244c6c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x244C6Cu;
    {
        const bool branch_taken_0x244c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244C6Cu;
            // 0x244c70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c6c) {
            ctx->pc = 0x244C80u;
            goto label_244c80;
        }
    }
    ctx->pc = 0x244C74u;
    // 0x244c74: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x244c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x244c78: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x244C78u;
    SET_GPR_U32(ctx, 31, 0x244C80u);
    ctx->pc = 0x244C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C78u;
            // 0x244c7c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C80u; }
        if (ctx->pc != 0x244C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C80u; }
        if (ctx->pc != 0x244C80u) { return; }
    }
    ctx->pc = 0x244C80u;
label_244c80:
    // 0x244c80: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x244c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x244c84: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x244C84u;
    {
        const bool branch_taken_0x244c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c84) {
            ctx->pc = 0x244C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x244C84u;
            // 0x244c88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x244C98u;
            goto label_244c98;
        }
    }
    ctx->pc = 0x244C8Cu;
    // 0x244c8c: 0xc07cf86  jal         func_1F3E18
    ctx->pc = 0x244C8Cu;
    SET_GPR_U32(ctx, 31, 0x244C94u);
    ctx->pc = 0x244C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244C8Cu;
            // 0x244c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3E18u;
    if (runtime->hasFunction(0x1F3E18u)) {
        auto targetFn = runtime->lookupFunction(0x1F3E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C94u; }
        if (ctx->pc != 0x244C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1f3e18_0x1f3e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244C94u; }
        if (ctx->pc != 0x244C94u) { return; }
    }
    ctx->pc = 0x244C94u;
    // 0x244c94: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x244c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244c98:
    // 0x244c98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244c98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x244CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CA0u;
            // 0x244ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244C80u: goto label_244c80;
            case 0x244C98u: goto label_244c98;
            case 0x244CCCu: goto label_244ccc;
            case 0x244CFCu: goto label_244cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244CA8u;
    // 0x244ca8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244cac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244cb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244cb4: 0x24428a18  addiu       $v0, $v0, -0x75E8
    ctx->pc = 0x244cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937112));
    // 0x244cb8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x244cb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x244cbc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244CBCu;
    {
        const bool branch_taken_0x244cbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CBCu;
            // 0x244cc0: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cbc) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244CC4u;
    // 0x244cc4: 0xc07ff8a  jal         func_1FFE28
    ctx->pc = 0x244CC4u;
    SET_GPR_U32(ctx, 31, 0x244CCCu);
    ctx->pc = 0x1FFE28u;
    if (runtime->hasFunction(0x1FFE28u)) {
        auto targetFn = runtime->lookupFunction(0x1FFE28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CCCu; }
        if (ctx->pc != 0x244CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1ffe28_0x1ffe50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CCCu; }
        if (ctx->pc != 0x244CCCu) { return; }
    }
    ctx->pc = 0x244CCCu;
label_244ccc:
    // 0x244ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x244CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CD0u;
            // 0x244cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244C80u: goto label_244c80;
            case 0x244C98u: goto label_244c98;
            case 0x244CCCu: goto label_244ccc;
            case 0x244CFCu: goto label_244cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244CD8u;
    // 0x244cd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244cdc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x244cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x244ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244ce4: 0x24428a00  addiu       $v0, $v0, -0x7600
    ctx->pc = 0x244ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937088));
    // 0x244ce8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x244ce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x244cec: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244CECu;
    {
        const bool branch_taken_0x244cec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244CECu;
            // 0x244cf0: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cec) {
            ctx->pc = 0x244CFCu;
            goto label_244cfc;
        }
    }
    ctx->pc = 0x244CF4u;
    // 0x244cf4: 0xc079818  jal         func_1E6060
    ctx->pc = 0x244CF4u;
    SET_GPR_U32(ctx, 31, 0x244CFCu);
    ctx->pc = 0x1E6060u;
    if (runtime->hasFunction(0x1E6060u)) {
        auto targetFn = runtime->lookupFunction(0x1E6060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CFCu; }
        if (ctx->pc != 0x244CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1e6060_0x1e6088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244CFCu; }
        if (ctx->pc != 0x244CFCu) { return; }
    }
    ctx->pc = 0x244CFCu;
label_244cfc:
    // 0x244cfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244cfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244d00: 0x3e00008  jr          $ra
    ctx->pc = 0x244D00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244D00u;
            // 0x244d04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244C80u: goto label_244c80;
            case 0x244C98u: goto label_244c98;
            case 0x244CCCu: goto label_244ccc;
            case 0x244CFCu: goto label_244cfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x244D08u;
}
