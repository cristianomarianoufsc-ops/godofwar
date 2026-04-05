#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C6A0
// Address: 0x27c6a0 - 0x27c7c0
void sub_0027C6A0_0x27c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C6A0_0x27c6a0");
#endif

    ctx->pc = 0x27c6a0u;

    // 0x27c6a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27c6a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27c6a8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27c6ac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27c6b0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x27c6b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27c6b8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27c6b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27c6c0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x27c6c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6c4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27c6c8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27c6c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6cc: 0x8c433310  lw          $v1, 0x3310($v0)
    ctx->pc = 0x27c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13072)));
    // 0x27c6d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27c6d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27c6d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27c6dc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C6DCu;
    {
        const bool branch_taken_0x27c6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6DCu;
            // 0x27c6e0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6dc) {
            ctx->pc = 0x27C6F0u;
            goto label_27c6f0;
        }
    }
    ctx->pc = 0x27C6E4u;
    // 0x27c6e4: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c6e8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x27C6E8u;
    {
        const bool branch_taken_0x27c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6E8u;
            // 0x27c6ec: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c6e8) {
            ctx->pc = 0x27C798u;
            goto label_27c798;
        }
    }
    ctx->pc = 0x27C6F0u;
label_27c6f0:
    // 0x27c6f0: 0xc0a0bd8  jal         func_282F60
    ctx->pc = 0x27C6F0u;
    SET_GPR_U32(ctx, 31, 0x27C6F8u);
    ctx->pc = 0x27C6F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6F0u;
            // 0x27c6f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282F60u;
    if (runtime->hasFunction(0x282F60u)) {
        auto targetFn = runtime->lookupFunction(0x282F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6F8u; }
        if (ctx->pc != 0x27C6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282f60_0x282fa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6F8u; }
        if (ctx->pc != 0x27C6F8u) { return; }
    }
    ctx->pc = 0x27C6F8u;
    // 0x27c6f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27c6f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c6fc: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C6FCu;
    {
        const bool branch_taken_0x27c6fc = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27c6fc) {
            ctx->pc = 0x27C710u;
            goto label_27c710;
        }
    }
    ctx->pc = 0x27C704u;
    // 0x27c704: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c708: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x27C708u;
    {
        const bool branch_taken_0x27c708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C708u;
            // 0x27c70c: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c708) {
            ctx->pc = 0x27C798u;
            goto label_27c798;
        }
    }
    ctx->pc = 0x27C710u;
label_27c710:
    // 0x27c710: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x27C710u;
    SET_GPR_U32(ctx, 31, 0x27C718u);
    ctx->pc = 0x27C714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C710u;
            // 0x27c714: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C718u; }
        if (ctx->pc != 0x27C718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C718u; }
        if (ctx->pc != 0x27C718u) { return; }
    }
    ctx->pc = 0x27C718u;
    // 0x27c718: 0x2c420080  sltiu       $v0, $v0, 0x80
    ctx->pc = 0x27c718u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x27c71c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C71Cu;
    {
        const bool branch_taken_0x27c71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C71Cu;
            // 0x27c720: 0x3c120031  lui         $s2, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c71c) {
            ctx->pc = 0x27C730u;
            goto label_27c730;
        }
    }
    ctx->pc = 0x27C724u;
    // 0x27c724: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c728: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x27C728u;
    {
        const bool branch_taken_0x27c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C728u;
            // 0x27c72c: 0x3442005b  ori         $v0, $v0, 0x5B (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)91);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c728) {
            ctx->pc = 0x27C798u;
            goto label_27c798;
        }
    }
    ctx->pc = 0x27C730u;
label_27c730:
    // 0x27c730: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x27C730u;
    SET_GPR_U32(ctx, 31, 0x27C738u);
    ctx->pc = 0x27C734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C730u;
            // 0x27c734: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C738u; }
        if (ctx->pc != 0x27C738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C738u; }
        if (ctx->pc != 0x27C738u) { return; }
    }
    ctx->pc = 0x27C738u;
    // 0x27c738: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c73c: 0x24700380  addiu       $s0, $v1, 0x380
    ctx->pc = 0x27c73cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x27c740: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x27c740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27c744: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C744u;
    {
        const bool branch_taken_0x27c744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c744) {
            ctx->pc = 0x27C748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27C744u;
            // 0x27c748: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27C760u;
            goto label_27c760;
        }
    }
    ctx->pc = 0x27C74Cu;
    // 0x27c74c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C74Cu;
    SET_GPR_U32(ctx, 31, 0x27C754u);
    ctx->pc = 0x27C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C74Cu;
            // 0x27c750: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C754u; }
        if (ctx->pc != 0x27C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C754u; }
        if (ctx->pc != 0x27C754u) { return; }
    }
    ctx->pc = 0x27C754u;
    // 0x27c754: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c758: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27C758u;
    {
        const bool branch_taken_0x27c758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C758u;
            // 0x27c75c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c758) {
            ctx->pc = 0x27C798u;
            goto label_27c798;
        }
    }
    ctx->pc = 0x27C760u;
label_27c760:
    // 0x27c760: 0xac710380  sw          $s1, 0x380($v1)
    ctx->pc = 0x27c760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 17));
    // 0x27c764: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x27c764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x27c768: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c76c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x27C76Cu;
    SET_GPR_U32(ctx, 31, 0x27C774u);
    ctx->pc = 0x27C770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C76Cu;
            // 0x27c770: 0x2604041c  addiu       $a0, $s0, 0x41C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1052));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C774u; }
        if (ctx->pc != 0x27C774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C774u; }
        if (ctx->pc != 0x27C774u) { return; }
    }
    ctx->pc = 0x27C774u;
    // 0x27c774: 0xae140014  sw          $s4, 0x14($s0)
    ctx->pc = 0x27c774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 20));
    // 0x27c778: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c77c: 0x8c6408a4  lw          $a0, 0x8A4($v1)
    ctx->pc = 0x27c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2212)));
    // 0x27c780: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x27c780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x27c784: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C784u;
    SET_GPR_U32(ctx, 31, 0x27C78Cu);
    ctx->pc = 0x27C788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C784u;
            // 0x27c788: 0xae160010  sw          $s6, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C78Cu; }
        if (ctx->pc != 0x27C78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C78Cu; }
        if (ctx->pc != 0x27C78Cu) { return; }
    }
    ctx->pc = 0x27C78Cu;
    // 0x27c78c: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x27C78Cu;
    SET_GPR_U32(ctx, 31, 0x27C794u);
    ctx->pc = 0x27C790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C78Cu;
            // 0x27c790: 0x8e4408ac  lw          $a0, 0x8AC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2220)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C794u; }
        if (ctx->pc != 0x27C794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C794u; }
        if (ctx->pc != 0x27C794u) { return; }
    }
    ctx->pc = 0x27C794u;
    // 0x27c794: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c794u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c798:
    // 0x27c798: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27c798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27c79c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27c79cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27c7a0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27c7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c7a4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27c7a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c7a8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27c7a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c7ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27c7acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c7b0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27c7b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c7b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c7b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c7b8: 0x3e00008  jr          $ra
    ctx->pc = 0x27C7B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C7BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C7B8u;
            // 0x27c7bc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C6F0u: goto label_27c6f0;
            case 0x27C710u: goto label_27c710;
            case 0x27C730u: goto label_27c730;
            case 0x27C760u: goto label_27c760;
            case 0x27C798u: goto label_27c798;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C7C0u;
}
