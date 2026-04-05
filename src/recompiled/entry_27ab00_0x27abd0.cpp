#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27ab00
// Address: 0x27ab00 - 0x27abd0
void entry_27ab00_0x27abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27ab00_0x27abd0");
#endif

    ctx->pc = 0x27ab00u;

    // 0x27ab00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27ab04: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27ab04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27ab08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27ab08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27ab0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ab0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab10: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27ab10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27ab14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27ab14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27ab1c: 0xc09e9ae  jal         func_27A6B8
    ctx->pc = 0x27AB1Cu;
    SET_GPR_U32(ctx, 31, 0x27AB24u);
    ctx->pc = 0x27AB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB1Cu;
            // 0x27ab20: 0x24040027  addiu       $a0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27A6B8u;
    if (runtime->hasFunction(0x27A6B8u)) {
        auto targetFn = runtime->lookupFunction(0x27A6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB24u; }
        if (ctx->pc != 0x27AB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027A6B8_0x27a6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB24u; }
        if (ctx->pc != 0x27AB24u) { return; }
    }
    ctx->pc = 0x27AB24u;
    // 0x27ab24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27AB24u;
    {
        const bool branch_taken_0x27ab24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB24u;
            // 0x27ab28: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab24) {
            ctx->pc = 0x27AB34u;
            goto label_27ab34;
        }
    }
    ctx->pc = 0x27AB2Cu;
    // 0x27ab2c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x27AB2Cu;
    {
        const bool branch_taken_0x27ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB2Cu;
            // 0x27ab30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab2c) {
            ctx->pc = 0x27ABB8u;
            goto label_27abb8;
        }
    }
    ctx->pc = 0x27AB34u;
label_27ab34:
    // 0x27ab34: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x27ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x27ab38: 0x24502900  addiu       $s0, $v0, 0x2900
    ctx->pc = 0x27ab38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10496));
    // 0x27ab3c: 0x24843280  addiu       $a0, $a0, 0x3280
    ctx->pc = 0x27ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12928));
    // 0x27ab40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27ab44: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x27ab44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x27ab48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ab48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ab4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab50: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ab50u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab54: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x27ab54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab58: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x27ab58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x27ab5c: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x27AB5Cu;
    SET_GPR_U32(ctx, 31, 0x27AB64u);
    ctx->pc = 0x27AB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB5Cu;
            // 0x27ab60: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB64u; }
        if (ctx->pc != 0x27AB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB64u; }
        if (ctx->pc != 0x27AB64u) { return; }
    }
    ctx->pc = 0x27AB64u;
    // 0x27ab64: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AB64u;
    {
        const bool branch_taken_0x27ab64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27AB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB64u;
            // 0x27ab68: 0x3c052000  lui         $a1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab64) {
            ctx->pc = 0x27AB80u;
            goto label_27ab80;
        }
    }
    ctx->pc = 0x27AB6Cu;
    // 0x27ab6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27ab70: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27AB70u;
    SET_GPR_U32(ctx, 31, 0x27AB78u);
    ctx->pc = 0x27AB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB70u;
            // 0x27ab74: 0x8c44172c  lw          $a0, 0x172C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5932)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB78u; }
        if (ctx->pc != 0x27AB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27AB78u; }
        if (ctx->pc != 0x27AB78u) { return; }
    }
    ctx->pc = 0x27AB78u;
    // 0x27ab78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27AB78u;
    {
        const bool branch_taken_0x27ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27AB78u;
            // 0x27ab7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab78) {
            ctx->pc = 0x27ABB8u;
            goto label_27abb8;
        }
    }
    ctx->pc = 0x27AB80u;
label_27ab80:
    // 0x27ab80: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x27ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x27ab84: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x27ab84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x27ab88: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x27ab88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27ab8c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27ab90: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x27ab90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x27ab94: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x27ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x27ab98: 0x2052825  or          $a1, $s0, $a1
    ctx->pc = 0x27ab98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 5));
    // 0x27ab9c: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x27ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x27aba0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27aba4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x27aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x27aba8: 0x8cc4172c  lw          $a0, 0x172C($a2)
    ctx->pc = 0x27aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5932)));
    // 0x27abac: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27ABACu;
    SET_GPR_U32(ctx, 31, 0x27ABB4u);
    ctx->pc = 0x27ABB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABACu;
            // 0x27abb0: 0x8cb00000  lw          $s0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABB4u; }
        if (ctx->pc != 0x27ABB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27ABB4u; }
        if (ctx->pc != 0x27ABB4u) { return; }
    }
    ctx->pc = 0x27ABB4u;
    // 0x27abb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27abb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27abb8:
    // 0x27abb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27abb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27abbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27abbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27abc0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27abc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27abc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27abc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27abc8: 0x3e00008  jr          $ra
    ctx->pc = 0x27ABC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27ABC8u;
            // 0x27abcc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27AB34u: goto label_27ab34;
            case 0x27AB80u: goto label_27ab80;
            case 0x27ABB8u: goto label_27abb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27ABD0u;
}
