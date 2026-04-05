#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00238CC0
// Address: 0x238cc0 - 0x2390e8
void sub_00238CC0_0x238cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238CC0_0x238cc0");
#endif

    ctx->pc = 0x238cc0u;

    // 0x238cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238cc4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x238cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x238cc8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238ccc: 0x244207e0  addiu       $v0, $v0, 0x7E0
    ctx->pc = 0x238cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2016));
    // 0x238cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238cdc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x238cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x238ce0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x238ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x238ce4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x238CE4u;
    {
        const bool branch_taken_0x238ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CE4u;
            // 0x238ce8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238ce4) {
            ctx->pc = 0x238CF4u;
            goto label_238cf4;
        }
    }
    ctx->pc = 0x238CECu;
    // 0x238cec: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x238CECu;
    SET_GPR_U32(ctx, 31, 0x238CF4u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CF4u; }
        if (ctx->pc != 0x238CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238CF4u; }
        if (ctx->pc != 0x238CF4u) { return; }
    }
    ctx->pc = 0x238CF4u;
label_238cf4:
    // 0x238cf4: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x238cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x238cf8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x238CF8u;
    {
        const bool branch_taken_0x238cf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x238CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238CF8u;
            // 0x238cfc: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238cf8) {
            ctx->pc = 0x238D0Cu;
            goto label_238d0c;
        }
    }
    ctx->pc = 0x238D00u;
    // 0x238d00: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x238D00u;
    SET_GPR_U32(ctx, 31, 0x238D08u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D08u; }
        if (ctx->pc != 0x238D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D08u; }
        if (ctx->pc != 0x238D08u) { return; }
    }
    ctx->pc = 0x238D08u;
    // 0x238d08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x238d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_238d0c:
    // 0x238d0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x238d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d10: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x238d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x238d14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238d14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238d18: 0xc08e218  jal         func_238860
    ctx->pc = 0x238D18u;
    SET_GPR_U32(ctx, 31, 0x238D20u);
    ctx->pc = 0x238D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x238D18u;
            // 0x238d1c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D20u; }
        if (ctx->pc != 0x238D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238D20u; }
        if (ctx->pc != 0x238D20u) { return; }
    }
    ctx->pc = 0x238D20u;
    // 0x238d20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238d20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238d24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238d24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238d2c: 0x3e00008  jr          $ra
    ctx->pc = 0x238D2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D2Cu;
            // 0x238d30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238D34u;
    // 0x238d34: 0x0  nop
    ctx->pc = 0x238d34u;
    // NOP
    // 0x238d38: 0x94a50006  lhu         $a1, 0x6($a1)
    ctx->pc = 0x238d38u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x238d3c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x238d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x238d40: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x238d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238d44: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x238d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x238d48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x238d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x238d4c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x238d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x238d50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238d54: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x238d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238d58: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x238d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x238d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x238D5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D5Cu;
            // 0x238d60: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238D64u;
    // 0x238d64: 0x0  nop
    ctx->pc = 0x238d64u;
    // NOP
    // 0x238d68: 0x3e00008  jr          $ra
    ctx->pc = 0x238D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238D70u;
    // 0x238d70: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x238d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x238d74: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x238d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x238d78: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x238d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x238d7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x238d80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x238d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238d84: 0x3e00008  jr          $ra
    ctx->pc = 0x238D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238D84u;
            // 0x238d88: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238D8Cu;
    // 0x238d8c: 0x0  nop
    ctx->pc = 0x238d8cu;
    // NOP
    // 0x238d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238d94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238d98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238d9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238da0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x238da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238da4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x238da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x238da8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x238DA8u;
    {
        const bool branch_taken_0x238da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x238DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DA8u;
            // 0x238dac: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238da8) {
            ctx->pc = 0x238DECu;
            goto label_238dec;
        }
    }
    ctx->pc = 0x238DB0u;
    // 0x238db0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x238db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238db4: 0x0  nop
    ctx->pc = 0x238db4u;
    // NOP
label_238db8:
    // 0x238db8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x238db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x238dbc: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x238dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x238dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238dc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x238dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238dc8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x238DC8u;
    {
        const bool branch_taken_0x238dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x238dc8) {
            ctx->pc = 0x238DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x238DC8u;
            // 0x238dcc: 0x8e220040  lw          $v0, 0x40($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x238DDCu;
            goto label_238ddc;
        }
    }
    ctx->pc = 0x238DD0u;
    // 0x238dd0: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x238DD0u;
    SET_GPR_U32(ctx, 31, 0x238DD8u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD8u; }
        if (ctx->pc != 0x238DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x238DD8u; }
        if (ctx->pc != 0x238DD8u) { return; }
    }
    ctx->pc = 0x238DD8u;
    // 0x238dd8: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x238dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_238ddc:
    // 0x238ddc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x238ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x238de0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x238de0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x238de4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x238DE4u;
    {
        const bool branch_taken_0x238de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x238DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DE4u;
            // 0x238de8: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238de4) {
            ctx->pc = 0x238DB8u;
            runtime->cooperativeGuestYield();
            goto label_238db8;
        }
    }
    ctx->pc = 0x238DECu;
label_238dec:
    // 0x238dec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238decu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238df8: 0x3e00008  jr          $ra
    ctx->pc = 0x238DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238DF8u;
            // 0x238dfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238E00u;
    // 0x238e00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x238e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x238e04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x238e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x238e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x238e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x238e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238e14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x238e14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e18: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x238e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x238e1c: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x238e1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x238e20: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x238e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x238e24: 0x40f809  jalr        $v0
    ctx->pc = 0x238E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E2Cu);
        ctx->pc = 0x238E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E24u;
            // 0x238e28: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238E2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238E2Cu; }
            if (ctx->pc != 0x238E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x238E2Cu;
    // 0x238e2c: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x238e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x238e30: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x238e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x238e34: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x238e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x238e38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238e3c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x238e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x238e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e44: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x238e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x238e48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x238e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x238e4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x238e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238e50: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x238e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x238e54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x238e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x238e58: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x238e58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x238e5c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x238e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x238e60: 0x40f809  jalr        $v0
    ctx->pc = 0x238E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238E68u);
        ctx->pc = 0x238E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E60u;
            // 0x238e64: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238E68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238E68u; }
            if (ctx->pc != 0x238E68u) { return; }
        }
        }
    }
    ctx->pc = 0x238E68u;
    // 0x238e68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x238e68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x238e6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x238e6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238e70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238e74: 0x3e00008  jr          $ra
    ctx->pc = 0x238E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E74u;
            // 0x238e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238E7Cu;
    // 0x238e7c: 0x0  nop
    ctx->pc = 0x238e7cu;
    // NOP
    // 0x238e80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238e84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238e88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238e8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238e8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238e90: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238e94: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x238e94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x238e98: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x238e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x238e9c: 0x40f809  jalr        $v0
    ctx->pc = 0x238E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238EA4u);
        ctx->pc = 0x238EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238E9Cu;
            // 0x238ea0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238EA4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238EA4u; }
            if (ctx->pc != 0x238EA4u) { return; }
        }
        }
    }
    ctx->pc = 0x238EA4u;
    // 0x238ea4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x238ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x238ea8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238eac: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x238eacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x238eb0: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x238eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x238eb4: 0x60f809  jalr        $v1
    ctx->pc = 0x238EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238EBCu);
        ctx->pc = 0x238EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238EB4u;
            // 0x238eb8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238EBCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238EBCu; }
            if (ctx->pc != 0x238EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x238EBCu;
    // 0x238ebc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238ebcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238ec0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x238EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238EC4u;
            // 0x238ec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238ECCu;
    // 0x238ecc: 0x0  nop
    ctx->pc = 0x238eccu;
    // NOP
    // 0x238ed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238ed4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238ed8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238edc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238edcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238ee0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238ee4: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x238ee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x238ee8: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x238ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x238eec: 0x40f809  jalr        $v0
    ctx->pc = 0x238EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238EF4u);
        ctx->pc = 0x238EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238EECu;
            // 0x238ef0: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238EF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238EF4u; }
            if (ctx->pc != 0x238EF4u) { return; }
        }
        }
    }
    ctx->pc = 0x238EF4u;
    // 0x238ef4: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x238ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x238ef8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238efc: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x238efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x238f00: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x238f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x238f04: 0x60f809  jalr        $v1
    ctx->pc = 0x238F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238F0Cu);
        ctx->pc = 0x238F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F04u;
            // 0x238f08: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238F0Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238F0Cu; }
            if (ctx->pc != 0x238F0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x238F0Cu;
    // 0x238f0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238f0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f14: 0x3e00008  jr          $ra
    ctx->pc = 0x238F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F14u;
            // 0x238f18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238F1Cu;
    // 0x238f1c: 0x0  nop
    ctx->pc = 0x238f1cu;
    // NOP
    // 0x238f20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238f24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238f2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238f2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f30: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238f34: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x238f34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x238f38: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x238f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x238f3c: 0x40f809  jalr        $v0
    ctx->pc = 0x238F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F44u);
        ctx->pc = 0x238F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F3Cu;
            // 0x238f40: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238F44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238F44u; }
            if (ctx->pc != 0x238F44u) { return; }
        }
        }
    }
    ctx->pc = 0x238F44u;
    // 0x238f44: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x238f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x238f48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f4c: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x238f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x238f50: 0x8c630044  lw          $v1, 0x44($v1)
    ctx->pc = 0x238f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x238f54: 0x60f809  jalr        $v1
    ctx->pc = 0x238F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238F5Cu);
        ctx->pc = 0x238F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F54u;
            // 0x238f58: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238F5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238F5Cu; }
            if (ctx->pc != 0x238F5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x238F5Cu;
    // 0x238f5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238f60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238f64: 0x3e00008  jr          $ra
    ctx->pc = 0x238F64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F64u;
            // 0x238f68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238F6Cu;
    // 0x238f6c: 0x0  nop
    ctx->pc = 0x238f6cu;
    // NOP
    // 0x238f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x238f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x238f74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x238f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x238f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238f7c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x238f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f80: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x238f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x238f84: 0x844300a0  lh          $v1, 0xA0($v0)
    ctx->pc = 0x238f84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x238f88: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x238f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x238f8c: 0x40f809  jalr        $v0
    ctx->pc = 0x238F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238F94u);
        ctx->pc = 0x238F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238F8Cu;
            // 0x238f90: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238F94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238F94u; }
            if (ctx->pc != 0x238F94u) { return; }
        }
        }
    }
    ctx->pc = 0x238F94u;
    // 0x238f94: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x238f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x238f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x238f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238f9c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x238f9cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x238fa0: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x238fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x238fa4: 0x60f809  jalr        $v1
    ctx->pc = 0x238FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x238FACu);
        ctx->pc = 0x238FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FA4u;
            // 0x238fa8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238FACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238FACu; }
            if (ctx->pc != 0x238FACu) { return; }
        }
        }
    }
    ctx->pc = 0x238FACu;
    // 0x238fac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x238facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x238fb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238fb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x238FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FB4u;
            // 0x238fb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x238FBCu;
    // 0x238fbc: 0x0  nop
    ctx->pc = 0x238fbcu;
    // NOP
    // 0x238fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x238fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x238fc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x238fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x238fc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x238fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x238fcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x238fccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x238fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x238fd4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x238fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238fdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x238fdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fe0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x238fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x238fe4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x238fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x238fe8: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x238fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x238fec: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x238fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x238ff0: 0x40f809  jalr        $v0
    ctx->pc = 0x238FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x238FF8u);
        ctx->pc = 0x238FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x238FF0u;
            // 0x238ff4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x238FF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x238FF8u; }
            if (ctx->pc != 0x238FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x238FF8u;
    // 0x238ff8: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x238ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x238ffc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x238ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x239000: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x239000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x239004: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239008: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x239008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23900c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23900cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239010: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x239010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239014: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x239014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x239018: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x239018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23901c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23901cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x239020: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x239020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x239024: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x239024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x239028: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x239028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x23902c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x23902cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x239030: 0x40f809  jalr        $v0
    ctx->pc = 0x239030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239038u);
        ctx->pc = 0x239034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239030u;
            // 0x239034: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239038u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239038u; }
            if (ctx->pc != 0x239038u) { return; }
        }
        }
    }
    ctx->pc = 0x239038u;
    // 0x239038: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x239038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23903c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23903cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x239040: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x239040u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239048: 0x3e00008  jr          $ra
    ctx->pc = 0x239048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23904Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239048u;
            // 0x23904c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x239050u;
    // 0x239050: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x239050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x239054: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x239054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x239058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x239058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23905c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23905cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239060: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x239060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x239064: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x239064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23906c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23906cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x239070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239074: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x239074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x239078: 0x84440098  lh          $a0, 0x98($v0)
    ctx->pc = 0x239078u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x23907c: 0x8c42009c  lw          $v0, 0x9C($v0)
    ctx->pc = 0x23907cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x239080: 0x40f809  jalr        $v0
    ctx->pc = 0x239080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239088u);
        ctx->pc = 0x239084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239080u;
            // 0x239084: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239088u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239088u; }
            if (ctx->pc != 0x239088u) { return; }
        }
        }
    }
    ctx->pc = 0x239088u;
    // 0x239088: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x239088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x23908c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x23908cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x239090: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x239090u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x239094: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x239094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x239098: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x239098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x23909c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23909cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2390a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2390a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2390a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2390a8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2390a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2390ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2390acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2390b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2390b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2390b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2390b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2390b8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x2390b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2390bc: 0x8c42005c  lw          $v0, 0x5C($v0)
    ctx->pc = 0x2390bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x2390c0: 0x40f809  jalr        $v0
    ctx->pc = 0x2390C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2390C8u);
        ctx->pc = 0x2390C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390C0u;
            // 0x2390c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2390C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2390C8u; }
            if (ctx->pc != 0x2390C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2390C8u;
    // 0x2390c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2390c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2390cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2390ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2390d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2390d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2390d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2390d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2390d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2390D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2390DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390D8u;
            // 0x2390dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2390E0u;
    // 0x2390e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2390E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2390E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2390E0u;
            // 0x2390e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x238CF4u: goto label_238cf4;
            case 0x238D0Cu: goto label_238d0c;
            case 0x238DB8u: goto label_238db8;
            case 0x238DDCu: goto label_238ddc;
            case 0x238DECu: goto label_238dec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2390E8u;
}
