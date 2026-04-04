#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00280CB0
// Address: 0x280cb0 - 0x2811d0
void sub_00280CB0_0x280cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280CB0_0x280cb0");
#endif

    ctx->pc = 0x280cb0u;

    // 0x280cb0: 0x27bdfa00  addiu       $sp, $sp, -0x600
    ctx->pc = 0x280cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965760));
    // 0x280cb4: 0xffb605c0  sd          $s6, 0x5C0($sp)
    ctx->pc = 0x280cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1472), GPR_U64(ctx, 22));
    // 0x280cb8: 0xffb705d0  sd          $s7, 0x5D0($sp)
    ctx->pc = 0x280cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1488), GPR_U64(ctx, 23));
    // 0x280cbc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x280cbcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cc0: 0xffb10570  sd          $s1, 0x570($sp)
    ctx->pc = 0x280cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1392), GPR_U64(ctx, 17));
    // 0x280cc4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x280cc4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cc8: 0xffb00560  sd          $s0, 0x560($sp)
    ctx->pc = 0x280cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1376), GPR_U64(ctx, 16));
    // 0x280ccc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x280cccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd0: 0xffbf05f0  sd          $ra, 0x5F0($sp)
    ctx->pc = 0x280cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 31));
    // 0x280cd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x280cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280cd8: 0xffbe05e0  sd          $fp, 0x5E0($sp)
    ctx->pc = 0x280cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1504), GPR_U64(ctx, 30));
    // 0x280cdc: 0xffb505b0  sd          $s5, 0x5B0($sp)
    ctx->pc = 0x280cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1456), GPR_U64(ctx, 21));
    // 0x280ce0: 0xffb405a0  sd          $s4, 0x5A0($sp)
    ctx->pc = 0x280ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1440), GPR_U64(ctx, 20));
    // 0x280ce4: 0xffb30590  sd          $s3, 0x590($sp)
    ctx->pc = 0x280ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1424), GPR_U64(ctx, 19));
    // 0x280ce8: 0xffb20580  sd          $s2, 0x580($sp)
    ctx->pc = 0x280ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1408), GPR_U64(ctx, 18));
    // 0x280cec: 0xafa70544  sw          $a3, 0x544($sp)
    ctx->pc = 0x280cecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 7));
    // 0x280cf0: 0xafa90548  sw          $t1, 0x548($sp)
    ctx->pc = 0x280cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1352), GPR_U32(ctx, 9));
    // 0x280cf4: 0xc0a0b74  jal         func_282DD0
    ctx->pc = 0x280CF4u;
    SET_GPR_U32(ctx, 31, 0x280CFCu);
    ctx->pc = 0x280CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280CF4u;
            // 0x280cf8: 0xafa0054c  sw          $zero, 0x54C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282DD0u;
    if (runtime->hasFunction(0x282DD0u)) {
        auto targetFn = runtime->lookupFunction(0x282DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CFCu; }
        if (ctx->pc != 0x280CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_282dd0_0x282e08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280CFCu; }
        if (ctx->pc != 0x280CFCu) { return; }
    }
    ctx->pc = 0x280CFCu;
    // 0x280cfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280CFCu;
    {
        const bool branch_taken_0x280cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280CFCu;
            // 0x280d00: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280cfc) {
            ctx->pc = 0x280D10u;
            goto label_280d10;
        }
    }
    ctx->pc = 0x280D04u;
    // 0x280d04: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280d08: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x280D08u;
    {
        const bool branch_taken_0x280d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D08u;
            // 0x280d0c: 0x34420013  ori         $v0, $v0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d08) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280D10u;
label_280d10:
    // 0x280d10: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x280d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x280d14: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x280d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x280d18: 0x2442c9c8  addiu       $v0, $v0, -0x3638
    ctx->pc = 0x280d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953416));
    // 0x280d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x280d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x280d20: 0x8c44088c  lw          $a0, 0x88C($v0)
    ctx->pc = 0x280d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2188)));
    // 0x280d24: 0x10800089  beqz        $a0, . + 4 + (0x89 << 2)
    ctx->pc = 0x280D24u;
    {
        const bool branch_taken_0x280d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D24u;
            // 0x280d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d24) {
            ctx->pc = 0x280F4Cu;
            goto label_280f4c;
        }
    }
    ctx->pc = 0x280D2Cu;
    // 0x280d2c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d30: 0xc09f50c  jal         func_27D430
    ctx->pc = 0x280D30u;
    SET_GPR_U32(ctx, 31, 0x280D38u);
    ctx->pc = 0x280D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D30u;
            // 0x280d34: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D430u;
    if (runtime->hasFunction(0x27D430u)) {
        auto targetFn = runtime->lookupFunction(0x27D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D38u; }
        if (ctx->pc != 0x280D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D430_0x27d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D38u; }
        if (ctx->pc != 0x280D38u) { return; }
    }
    ctx->pc = 0x280D38u;
    // 0x280d38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x280D38u;
    {
        const bool branch_taken_0x280d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D38u;
            // 0x280d3c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d38) {
            ctx->pc = 0x280D58u;
            goto label_280d58;
        }
    }
    ctx->pc = 0x280D40u;
    // 0x280d40: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x280d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x280d44: 0x24525238  addiu       $s2, $v0, 0x5238
    ctx->pc = 0x280d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21048));
    // 0x280d48: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x280D48u;
    SET_GPR_U32(ctx, 31, 0x280D50u);
    ctx->pc = 0x280D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D48u;
            // 0x280d4c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D50u; }
        if (ctx->pc != 0x280D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D50u; }
        if (ctx->pc != 0x280D50u) { return; }
    }
    ctx->pc = 0x280D50u;
    // 0x280d50: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280D50u;
    {
        const bool branch_taken_0x280d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D50u;
            // 0x280d54: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d50) {
            ctx->pc = 0x280D64u;
            goto label_280d64;
        }
    }
    ctx->pc = 0x280D58u;
label_280d58:
    // 0x280d58: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280d5c: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x280D5Cu;
    {
        const bool branch_taken_0x280d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280D5Cu;
            // 0x280d60: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280d5c) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280D64u;
label_280d64:
    // 0x280d64: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x280d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d68: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280D68u;
    SET_GPR_U32(ctx, 31, 0x280D70u);
    ctx->pc = 0x280D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D68u;
            // 0x280d6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D70u; }
        if (ctx->pc != 0x280D70u) { return; }
    }
    ctx->pc = 0x280D70u;
    // 0x280d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d74: 0xc0a34ee  jal         func_28D3B8
    ctx->pc = 0x280D74u;
    SET_GPR_U32(ctx, 31, 0x280D7Cu);
    ctx->pc = 0x280D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D74u;
            // 0x280d78: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D3B8u;
    if (runtime->hasFunction(0x28D3B8u)) {
        auto targetFn = runtime->lookupFunction(0x28D3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D7Cu; }
        if (ctx->pc != 0x280D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28d3b8_0x28d408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D7Cu; }
        if (ctx->pc != 0x280D7Cu) { return; }
    }
    ctx->pc = 0x280D7Cu;
    // 0x280d7c: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x280d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x280d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x280d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280d84: 0xafa30550  sw          $v1, 0x550($sp)
    ctx->pc = 0x280d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1360), GPR_U32(ctx, 3));
    // 0x280d88: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x280D88u;
    SET_GPR_U32(ctx, 31, 0x280D90u);
    ctx->pc = 0x280D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D88u;
            // 0x280d8c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D90u; }
        if (ctx->pc != 0x280D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280D90u; }
        if (ctx->pc != 0x280D90u) { return; }
    }
    ctx->pc = 0x280D90u;
    // 0x280d90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x280d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x280d94: 0x8fa40550  lw          $a0, 0x550($sp)
    ctx->pc = 0x280d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x280d98: 0xc0a2644  jal         func_289910
    ctx->pc = 0x280D98u;
    SET_GPR_U32(ctx, 31, 0x280DA0u);
    ctx->pc = 0x280D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280D98u;
            // 0x280d9c: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA0u; }
        if (ctx->pc != 0x280DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA0u; }
        if (ctx->pc != 0x280DA0u) { return; }
    }
    ctx->pc = 0x280DA0u;
    // 0x280da0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x280DA0u;
    SET_GPR_U32(ctx, 31, 0x280DA8u);
    ctx->pc = 0x280DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280DA0u;
            // 0x280da4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA8u; }
        if (ctx->pc != 0x280DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DA8u; }
        if (ctx->pc != 0x280DA8u) { return; }
    }
    ctx->pc = 0x280DA8u;
    // 0x280da8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x280DA8u;
    {
        const bool branch_taken_0x280da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DA8u;
            // 0x280dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280da8) {
            ctx->pc = 0x280DCCu;
            goto label_280dcc;
        }
    }
    ctx->pc = 0x280DB0u;
    // 0x280db0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x280db0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280db4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280db8: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x280db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x280dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280dc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dc4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x280DC4u;
    {
        const bool branch_taken_0x280dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DC4u;
            // 0x280dc8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280dc4) {
            ctx->pc = 0x280DE0u;
            goto label_280de0;
        }
    }
    ctx->pc = 0x280DCCu;
label_280dcc:
    // 0x280dcc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dd0: 0x27a60340  addiu       $a2, $sp, 0x340
    ctx->pc = 0x280dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x280dd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x280dd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280dd8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x280dd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280ddc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x280ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280de0:
    // 0x280de0: 0xc09fc16  jal         func_27F058
    ctx->pc = 0x280DE0u;
    SET_GPR_U32(ctx, 31, 0x280DE8u);
    ctx->pc = 0x27F058u;
    if (runtime->hasFunction(0x27F058u)) {
        auto targetFn = runtime->lookupFunction(0x27F058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DE8u; }
        if (ctx->pc != 0x280DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F058_0x27f058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280DE8u; }
        if (ctx->pc != 0x280DE8u) { return; }
    }
    ctx->pc = 0x280DE8u;
    // 0x280de8: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x280de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x280dec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x280decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280df0: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x280df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x280df4: 0x148300e9  bne         $a0, $v1, . + 4 + (0xE9 << 2)
    ctx->pc = 0x280DF4u;
    {
        const bool branch_taken_0x280df4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x280DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280DF4u;
            // 0x280df8: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280df4) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280DFCu;
    // 0x280dfc: 0x97a20340  lhu         $v0, 0x340($sp)
    ctx->pc = 0x280dfcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x280e00: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x280e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x280e04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280E04u;
    {
        const bool branch_taken_0x280e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E04u;
            // 0x280e08: 0x27a50140  addiu       $a1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e04) {
            ctx->pc = 0x280E18u;
            goto label_280e18;
        }
    }
    ctx->pc = 0x280E0Cu;
    // 0x280e0c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280e10: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x280E10u;
    {
        const bool branch_taken_0x280e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E10u;
            // 0x280e14: 0x34420014  ori         $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e10) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280E18u;
label_280e18:
    // 0x280e18: 0x8fa60350  lw          $a2, 0x350($sp)
    ctx->pc = 0x280e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x280e1c: 0xafa50554  sw          $a1, 0x554($sp)
    ctx->pc = 0x280e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1364), GPR_U32(ctx, 5));
    // 0x280e20: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e24: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x280E24u;
    SET_GPR_U32(ctx, 31, 0x280E2Cu);
    ctx->pc = 0x280E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E24u;
            // 0x280e28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E2Cu; }
        if (ctx->pc != 0x280E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E2Cu; }
        if (ctx->pc != 0x280E2Cu) { return; }
    }
    ctx->pc = 0x280E2Cu;
    // 0x280e2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e30: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x280E30u;
    {
        const bool branch_taken_0x280e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E30u;
            // 0x280e34: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e30) {
            ctx->pc = 0x280E7Cu;
            goto label_280e7c;
        }
    }
    ctx->pc = 0x280E38u;
    // 0x280e38: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x280e38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x280e3c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x280e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x280e40: 0x104000c5  beqz        $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x280E40u;
    {
        const bool branch_taken_0x280e40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E40u;
            // 0x280e44: 0x27b30180  addiu       $s3, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e40) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280E48u;
    // 0x280e48: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x280e48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x280e4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e50: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x280E50u;
    SET_GPR_U32(ctx, 31, 0x280E58u);
    ctx->pc = 0x280E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E50u;
            // 0x280e54: 0x24c55220  addiu       $a1, $a2, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E58u; }
        if (ctx->pc != 0x280E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E58u; }
        if (ctx->pc != 0x280E58u) { return; }
    }
    ctx->pc = 0x280E58u;
    // 0x280e58: 0x144000bf  bnez        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x280E58u;
    {
        const bool branch_taken_0x280e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E58u;
            // 0x280e5c: 0x8fa60350  lw          $a2, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e58) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280E60u;
    // 0x280e60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e64: 0x8fa50554  lw          $a1, 0x554($sp)
    ctx->pc = 0x280e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
    // 0x280e68: 0xc09f732  jal         func_27DCC8
    ctx->pc = 0x280E68u;
    SET_GPR_U32(ctx, 31, 0x280E70u);
    ctx->pc = 0x280E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280E68u;
            // 0x280e6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27DCC8u;
    if (runtime->hasFunction(0x27DCC8u)) {
        auto targetFn = runtime->lookupFunction(0x27DCC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E70u; }
        if (ctx->pc != 0x280E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027DCC8_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280E70u; }
        if (ctx->pc != 0x280E70u) { return; }
    }
    ctx->pc = 0x280E70u;
    // 0x280e70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x280e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280e74: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x280E74u;
    {
        const bool branch_taken_0x280e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E74u;
            // 0x280e78: 0xafa20540  sw          $v0, 0x540($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e74) {
            ctx->pc = 0x280EA0u;
            goto label_280ea0;
        }
    }
    ctx->pc = 0x280E7Cu;
label_280e7c:
    // 0x280e7c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280e80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x280e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x280e84: 0x546200c5  bnel        $v1, $v0, . + 4 + (0xC5 << 2)
    ctx->pc = 0x280E84u;
    {
        const bool branch_taken_0x280e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280e84) {
            ctx->pc = 0x280E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280E84u;
            // 0x280e88: 0x8fa20540  lw          $v0, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280E8Cu;
    // 0x280e8c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280e90: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x280e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
    // 0x280e94: 0xafa20540  sw          $v0, 0x540($sp)
    ctx->pc = 0x280e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 2));
    // 0x280e98: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x280E98u;
    {
        const bool branch_taken_0x280e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280E98u;
            // 0x280e9c: 0x8fa20540  lw          $v0, 0x540($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280e98) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280EA0u;
label_280ea0:
    // 0x280ea0: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x280ea0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x280ea4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x280ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x280ea8: 0x104000ab  beqz        $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x280EA8u;
    {
        const bool branch_taken_0x280ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EA8u;
            // 0x280eac: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ea8) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280EB0u;
    // 0x280eb0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x280eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280eb4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x280EB4u;
    SET_GPR_U32(ctx, 31, 0x280EBCu);
    ctx->pc = 0x280EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280EB4u;
            // 0x280eb8: 0x24e55228  addiu       $a1, $a3, 0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 21032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EBCu; }
        if (ctx->pc != 0x280EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280EBCu; }
        if (ctx->pc != 0x280EBCu) { return; }
    }
    ctx->pc = 0x280EBCu;
    // 0x280ebc: 0x144000a6  bnez        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x280EBCu;
    {
        const bool branch_taken_0x280ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EBCu;
            // 0x280ec0: 0x8fa30344  lw          $v1, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ebc) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280EC4u;
    // 0x280ec4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x280ec4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x280ec8: 0x144000a3  bnez        $v0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x280EC8u;
    {
        const bool branch_taken_0x280ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ec8) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280ED0u;
    // 0x280ed0: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x280ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x280ed4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280ED4u;
    {
        const bool branch_taken_0x280ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280ED4u;
            // 0x280ed8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ed4) {
            ctx->pc = 0x280EF0u;
            goto label_280ef0;
        }
    }
    ctx->pc = 0x280EDCu;
    // 0x280edc: 0x8fa80548  lw          $t0, 0x548($sp)
    ctx->pc = 0x280edcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x280ee0: 0x550000ad  bnel        $t0, $zero, . + 4 + (0xAD << 2)
    ctx->pc = 0x280EE0u;
    {
        const bool branch_taken_0x280ee0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x280ee0) {
            ctx->pc = 0x280EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280EE0u;
            // 0x280ee4: 0xad000000  sw          $zero, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281198u;
            goto label_281198;
        }
    }
    ctx->pc = 0x280EE8u;
    // 0x280ee8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x280EE8u;
    {
        const bool branch_taken_0x280ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EE8u;
            // 0x280eec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ee8) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280EF0u;
label_280ef0:
    // 0x280ef0: 0x120000a3  beqz        $s0, . + 4 + (0xA3 << 2)
    ctx->pc = 0x280EF0u;
    {
        const bool branch_taken_0x280ef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x280EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EF0u;
            // 0x280ef4: 0x8fb40350  lw          $s4, 0x350($sp) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280ef0) {
            ctx->pc = 0x281180u;
            goto label_281180;
        }
    }
    ctx->pc = 0x280EF8u;
    // 0x280ef8: 0x2462fffe  addiu       $v0, $v1, -0x2
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x280efc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x280EFCu;
    {
        const bool branch_taken_0x280efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x280F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280EFCu;
            // 0x280f00: 0xafa20344  sw          $v0, 0x344($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280efc) {
            ctx->pc = 0x280F18u;
            goto label_280f18;
        }
    }
    ctx->pc = 0x280F04u;
    // 0x280f04: 0x8fa90548  lw          $t1, 0x548($sp)
    ctx->pc = 0x280f04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
    // 0x280f08: 0x552000a3  bnel        $t1, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x280F08u;
    {
        const bool branch_taken_0x280f08 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f08) {
            ctx->pc = 0x280F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x280F08u;
            // 0x280f0c: 0xad200000  sw          $zero, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281198u;
            goto label_281198;
        }
    }
    ctx->pc = 0x280F10u;
    // 0x280f10: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x280F10u;
    {
        const bool branch_taken_0x280f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F10u;
            // 0x280f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f10) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280F18u;
label_280f18:
    // 0x280f18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x280f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f20: 0xc09f64a  jal         func_27D928
    ctx->pc = 0x280F20u;
    SET_GPR_U32(ctx, 31, 0x280F28u);
    ctx->pc = 0x280F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280F20u;
            // 0x280f24: 0x27a60540  addiu       $a2, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D928u;
    if (runtime->hasFunction(0x27D928u)) {
        auto targetFn = runtime->lookupFunction(0x27D928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F28u; }
        if (ctx->pc != 0x280F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D928_0x27d928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F28u; }
        if (ctx->pc != 0x280F28u) { return; }
    }
    ctx->pc = 0x280F28u;
    // 0x280f28: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x280f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x280f2c: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x280f30: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x280f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x280f34: 0x10830088  beq         $a0, $v1, . + 4 + (0x88 << 2)
    ctx->pc = 0x280F34u;
    {
        const bool branch_taken_0x280f34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x280F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F34u;
            // 0x280f38: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f34) {
            ctx->pc = 0x281158u;
            goto label_281158;
        }
    }
    ctx->pc = 0x280F3Cu;
    // 0x280f3c: 0x10800091  beqz        $a0, . + 4 + (0x91 << 2)
    ctx->pc = 0x280F3Cu;
    {
        const bool branch_taken_0x280f3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F3Cu;
            // 0x280f40: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f3c) {
            ctx->pc = 0x281184u;
            goto label_281184;
        }
    }
    ctx->pc = 0x280F44u;
label_280f44:
    // 0x280f44: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x280F44u;
    {
        const bool branch_taken_0x280f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F44u;
            // 0x280f48: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f44) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280F4Cu;
label_280f4c:
    // 0x280f4c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x280f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x280f50: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x280F50u;
    {
        const bool branch_taken_0x280f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F50u;
            // 0x280f54: 0x3442006f  ori         $v0, $v0, 0x6F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)111);
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f50) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x280F58u;
label_280f58:
    // 0x280f58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x280f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f5c: 0x2450db00  addiu       $s0, $v0, -0x2500
    ctx->pc = 0x280f5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957824));
    // 0x280f60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x280f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x280f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f68: 0xc0a076a  jal         func_281DA8
    ctx->pc = 0x280F68u;
    SET_GPR_U32(ctx, 31, 0x280F70u);
    ctx->pc = 0x280F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x280F68u;
            // 0x280f6c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281DA8u;
    if (runtime->hasFunction(0x281DA8u)) {
        auto targetFn = runtime->lookupFunction(0x281DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F70u; }
        if (ctx->pc != 0x280F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281DA8_0x281da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280F70u; }
        if (ctx->pc != 0x280F70u) { return; }
    }
    ctx->pc = 0x280F70u;
    // 0x280f70: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x280F70u;
    {
        const bool branch_taken_0x280f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F70u;
            // 0x280f74: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f70) {
            ctx->pc = 0x280F4Cu;
            runtime->cooperativeGuestYield();
            goto label_280f4c;
        }
    }
    ctx->pc = 0x280F78u;
    // 0x280f78: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x280f78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f7c: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x280f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_280f80:
    // 0x280f80: 0x8fa40554  lw          $a0, 0x554($sp)
    ctx->pc = 0x280f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1364)));
    // 0x280f84: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x280f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x280f88: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x280F88u;
    {
        const bool branch_taken_0x280f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x280F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280F88u;
            // 0x280f8c: 0x240182d  daddu       $v1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280f88) {
            ctx->pc = 0x280FF0u;
            goto label_280ff0;
        }
    }
    ctx->pc = 0x280F90u;
    // 0x280f90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280f94:
    // 0x280f94: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x280f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x280f98: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x280f98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x280f9c: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x280f9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x280fa0: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x280fa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x280fa4: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x280fa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x280fa8: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x280fa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x280fac: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x280facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x280fb0: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x280fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x280fb4: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x280fb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fb8: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x280fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fbc: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x280fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fc0: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x280fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fc4: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x280fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fc8: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x280fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fcc: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x280fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fd0: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x280fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x280fd4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x280fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x280fd8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x280fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x280fdc: 0x0  nop
    ctx->pc = 0x280fdcu;
    // NOP
    // 0x280fe0: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x280FE0u;
    {
        const bool branch_taken_0x280fe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x280fe0) {
            ctx->pc = 0x280F94u;
            runtime->cooperativeGuestYield();
            goto label_280f94;
        }
    }
    ctx->pc = 0x280FE8u;
    // 0x280fe8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x280FE8u;
    {
        const bool branch_taken_0x280fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x280FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x280FE8u;
            // 0x280fec: 0x97a30140  lhu         $v1, 0x140($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x280fe8) {
            ctx->pc = 0x28102Cu;
            goto label_28102c;
        }
    }
    ctx->pc = 0x280FF0u;
label_280ff0:
    // 0x280ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x280ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_280ff4:
    // 0x280ff4: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x280ff4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x280ff8: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x280ff8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x280ffc: 0xdc660010  ld          $a2, 0x10($v1)
    ctx->pc = 0x280ffcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x281000: 0xdc670018  ld          $a3, 0x18($v1)
    ctx->pc = 0x281000u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x281004: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x281004u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x281008: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x281008u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x28100c: 0xfc860010  sd          $a2, 0x10($a0)
    ctx->pc = 0x28100cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 6));
    // 0x281010: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x281010u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x281014: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x281014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x281018: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x281018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x28101c: 0x0  nop
    ctx->pc = 0x28101cu;
    // NOP
    // 0x281020: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x281020u;
    {
        const bool branch_taken_0x281020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281020) {
            ctx->pc = 0x280FF4u;
            runtime->cooperativeGuestYield();
            goto label_280ff4;
        }
    }
    ctx->pc = 0x281028u;
    // 0x281028: 0x97a30140  lhu         $v1, 0x140($sp)
    ctx->pc = 0x281028u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
label_28102c:
    // 0x28102c: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x28102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x281030: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x281030u;
    {
        const bool branch_taken_0x281030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281030u;
            // 0x281034: 0xa3a0019f  sb          $zero, 0x19F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 415), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281030) {
            ctx->pc = 0x281104u;
            goto label_281104;
        }
    }
    ctx->pc = 0x281038u;
    // 0x281038: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x281038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x28103c: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x28103Cu;
    {
        const bool branch_taken_0x28103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28103Cu;
            // 0x281040: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28103c) {
            ctx->pc = 0x281108u;
            goto label_281108;
        }
    }
    ctx->pc = 0x281044u;
    // 0x281044: 0x8fa50550  lw          $a1, 0x550($sp)
    ctx->pc = 0x281044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1360)));
    // 0x281048: 0xc09f452  jal         func_27D148
    ctx->pc = 0x281048u;
    SET_GPR_U32(ctx, 31, 0x281050u);
    ctx->pc = 0x28104Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281048u;
            // 0x28104c: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D148u;
    if (runtime->hasFunction(0x27D148u)) {
        auto targetFn = runtime->lookupFunction(0x27D148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281050u; }
        if (ctx->pc != 0x281050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d148_0x27d2c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281050u; }
        if (ctx->pc != 0x281050u) { return; }
    }
    ctx->pc = 0x281050u;
    // 0x281050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x281050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281054: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x281054u;
    {
        const bool branch_taken_0x281054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x281054) {
            ctx->pc = 0x281058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281054u;
            // 0x281058: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281108u;
            goto label_281108;
        }
    }
    ctx->pc = 0x28105Cu;
    // 0x28105c: 0x56e00029  bnel        $s7, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x28105Cu;
    {
        const bool branch_taken_0x28105c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x28105c) {
            ctx->pc = 0x281060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28105Cu;
            // 0x281060: 0x26f7ffff  addiu       $s7, $s7, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281104u;
            goto label_281104;
        }
    }
    ctx->pc = 0x281064u;
    // 0x281064: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x281064u;
    {
        const bool branch_taken_0x281064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x281068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281064u;
            // 0x281068: 0x8fa80544  lw          $t0, 0x544($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281064) {
            ctx->pc = 0x2810E0u;
            goto label_2810e0;
        }
    }
    ctx->pc = 0x28106Cu;
    // 0x28106c: 0x1900001c  blez        $t0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28106Cu;
    {
        const bool branch_taken_0x28106c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x281070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28106Cu;
            // 0x281070: 0x8fa30144  lw          $v1, 0x144($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28106c) {
            ctx->pc = 0x2810E0u;
            goto label_2810e0;
        }
    }
    ctx->pc = 0x281074u;
    // 0x281074: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x281074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x281078: 0x97a20140  lhu         $v0, 0x140($sp)
    ctx->pc = 0x281078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x28107c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28107cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281080: 0x6ba9014f  ldl         $t1, 0x14F($sp)
    ctx->pc = 0x281080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x281084: 0x6fa90148  ldr         $t1, 0x148($sp)
    ctx->pc = 0x281084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x281088: 0xb2290007  sdl         $t1, 0x7($s1)
    ctx->pc = 0x281088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28108c: 0xb6290000  sdr         $t1, 0x0($s1)
    ctx->pc = 0x28108cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x281090: 0x6ba9015f  ldl         $t1, 0x15F($sp)
    ctx->pc = 0x281090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x281094: 0x6fa90158  ldr         $t1, 0x158($sp)
    ctx->pc = 0x281094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x281098: 0xb229000f  sdl         $t1, 0xF($s1)
    ctx->pc = 0x281098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28109c: 0xb6290008  sdr         $t1, 0x8($s1)
    ctx->pc = 0x28109cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2810a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x2810a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x2810a4: 0xc0a2644  jal         func_289910
    ctx->pc = 0x2810A4u;
    SET_GPR_U32(ctx, 31, 0x2810ACu);
    ctx->pc = 0x2810A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810A4u;
            // 0x2810a8: 0xa6220014  sh          $v0, 0x14($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810ACu; }
        if (ctx->pc != 0x2810ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810ACu; }
        if (ctx->pc != 0x2810ACu) { return; }
    }
    ctx->pc = 0x2810ACu;
    // 0x2810ac: 0x3c09002c  lui         $t1, 0x2C
    ctx->pc = 0x2810acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)44 << 16));
    // 0x2810b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2810b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810b4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x2810B4u;
    SET_GPR_U32(ctx, 31, 0x2810BCu);
    ctx->pc = 0x2810B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810B4u;
            // 0x2810b8: 0x25255220  addiu       $a1, $t1, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 21024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810BCu; }
        if (ctx->pc != 0x2810BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810BCu; }
        if (ctx->pc != 0x2810BCu) { return; }
    }
    ctx->pc = 0x2810BCu;
    // 0x2810bc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2810BCu;
    {
        const bool branch_taken_0x2810bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2810C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810BCu;
            // 0x2810c0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810bc) {
            ctx->pc = 0x2810D0u;
            goto label_2810d0;
        }
    }
    ctx->pc = 0x2810C4u;
    // 0x2810c4: 0x97a20340  lhu         $v0, 0x340($sp)
    ctx->pc = 0x2810c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x2810c8: 0xa6220014  sh          $v0, 0x14($s1)
    ctx->pc = 0x2810c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x2810cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2810ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2810d0:
    // 0x2810d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2810d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2810d4: 0x24455228  addiu       $a1, $v0, 0x5228
    ctx->pc = 0x2810d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21032));
    // 0x2810d8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x2810D8u;
    SET_GPR_U32(ctx, 31, 0x2810E0u);
    ctx->pc = 0x2810DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2810D8u;
            // 0x2810dc: 0x26310038  addiu       $s1, $s1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810E0u; }
        if (ctx->pc != 0x2810E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2810E0u; }
        if (ctx->pc != 0x2810E0u) { return; }
    }
    ctx->pc = 0x2810E0u;
label_2810e0:
    // 0x2810e0: 0x8fa30544  lw          $v1, 0x544($sp)
    ctx->pc = 0x2810e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1348)));
    // 0x2810e4: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2810E4u;
    {
        const bool branch_taken_0x2810e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2810E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810E4u;
            // 0x2810e8: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810e4) {
            ctx->pc = 0x281104u;
            goto label_281104;
        }
    }
    ctx->pc = 0x2810ECu;
    // 0x2810ec: 0x3c3102a  slt         $v0, $fp, $v1
    ctx->pc = 0x2810ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2810f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2810F0u;
    {
        const bool branch_taken_0x2810f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2810F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810F0u;
            // 0x2810f4: 0x8fa20344  lw          $v0, 0x344($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810f0) {
            ctx->pc = 0x281108u;
            goto label_281108;
        }
    }
    ctx->pc = 0x2810F8u;
    // 0x2810f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2810f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2810fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2810FCu;
    {
        const bool branch_taken_0x2810fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2810FCu;
            // 0x281100: 0xafa5054c  sw          $a1, 0x54C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2810fc) {
            ctx->pc = 0x281128u;
            goto label_281128;
        }
    }
    ctx->pc = 0x281104u;
label_281104:
    // 0x281104: 0x8fa20344  lw          $v0, 0x344($sp)
    ctx->pc = 0x281104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_281108:
    // 0x281108: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x281108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28110c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28110Cu;
    {
        const bool branch_taken_0x28110c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28110Cu;
            // 0x281110: 0xafa20344  sw          $v0, 0x344($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28110c) {
            ctx->pc = 0x281164u;
            goto label_281164;
        }
    }
    ctx->pc = 0x281114u;
    // 0x281114: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x281114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x281118: 0x26100200  addiu       $s0, $s0, 0x200
    ctx->pc = 0x281118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x28111c: 0x2aa20002  slti        $v0, $s5, 0x2
    ctx->pc = 0x28111cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x281120: 0x1440ff97  bnez        $v0, . + 4 + (-0x69 << 2)
    ctx->pc = 0x281120u;
    {
        const bool branch_taken_0x281120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281120u;
            // 0x281124: 0x26520200  addiu       $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281120) {
            ctx->pc = 0x280F80u;
            runtime->cooperativeGuestYield();
            goto label_280f80;
        }
    }
    ctx->pc = 0x281128u;
label_281128:
    // 0x281128: 0x8fa6054c  lw          $a2, 0x54C($sp)
    ctx->pc = 0x281128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
    // 0x28112c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281130: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x281130u;
    {
        const bool branch_taken_0x281130 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x281134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281130u;
            // 0x281134: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281130) {
            ctx->pc = 0x28118Cu;
            goto label_28118c;
        }
    }
    ctx->pc = 0x281138u;
    // 0x281138: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x281138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28113c: 0xc09f64a  jal         func_27D928
    ctx->pc = 0x28113Cu;
    SET_GPR_U32(ctx, 31, 0x281144u);
    ctx->pc = 0x281140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28113Cu;
            // 0x281140: 0x27a60540  addiu       $a2, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D928u;
    if (runtime->hasFunction(0x27D928u)) {
        auto targetFn = runtime->lookupFunction(0x27D928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281144u; }
        if (ctx->pc != 0x281144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D928_0x27d928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281144u; }
        if (ctx->pc != 0x281144u) { return; }
    }
    ctx->pc = 0x281144u;
    // 0x281144: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x281144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x281148: 0x8fa40540  lw          $a0, 0x540($sp)
    ctx->pc = 0x281148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1344)));
    // 0x28114c: 0x34630059  ori         $v1, $v1, 0x59
    ctx->pc = 0x28114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)89);
    // 0x281150: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x281150u;
    {
        const bool branch_taken_0x281150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x281154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281150u;
            // 0x281154: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281150) {
            ctx->pc = 0x281170u;
            goto label_281170;
        }
    }
    ctx->pc = 0x281158u;
label_281158:
    // 0x281158: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x281158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x28115c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28115Cu;
    {
        const bool branch_taken_0x28115c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28115Cu;
            // 0x281160: 0x34429002  ori         $v0, $v0, 0x9002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28115c) {
            ctx->pc = 0x28119Cu;
            goto label_28119c;
        }
    }
    ctx->pc = 0x281164u;
label_281164:
    // 0x281164: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x281164u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281168: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x281168u;
    {
        const bool branch_taken_0x281168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28116Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281168u;
            // 0x28116c: 0xafa7054c  sw          $a3, 0x54C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1356), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281168) {
            ctx->pc = 0x281128u;
            runtime->cooperativeGuestYield();
            goto label_281128;
        }
    }
    ctx->pc = 0x281170u;
label_281170:
    // 0x281170: 0x1480ff74  bnez        $a0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x281170u;
    {
        const bool branch_taken_0x281170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x281174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281170u;
            // 0x281174: 0x8fa8054c  lw          $t0, 0x54C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281170) {
            ctx->pc = 0x280F44u;
            runtime->cooperativeGuestYield();
            goto label_280f44;
        }
    }
    ctx->pc = 0x281178u;
    // 0x281178: 0x15000005  bnez        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x281178u;
    {
        const bool branch_taken_0x281178 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x28117Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281178u;
            // 0x28117c: 0x8fa90548  lw          $t1, 0x548($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281178) {
            ctx->pc = 0x281190u;
            goto label_281190;
        }
    }
    ctx->pc = 0x281180u;
label_281180:
    // 0x281180: 0x8fa20344  lw          $v0, 0x344($sp)
    ctx->pc = 0x281180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 836)));
label_281184:
    // 0x281184: 0x1440ff74  bnez        $v0, . + 4 + (-0x8C << 2)
    ctx->pc = 0x281184u;
    {
        const bool branch_taken_0x281184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281184u;
            // 0x281188: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281184) {
            ctx->pc = 0x280F58u;
            runtime->cooperativeGuestYield();
            goto label_280f58;
        }
    }
    ctx->pc = 0x28118Cu;
label_28118c:
    // 0x28118c: 0x8fa90548  lw          $t1, 0x548($sp)
    ctx->pc = 0x28118cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1352)));
label_281190:
    // 0x281190: 0x55200001  bnel        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x281190u;
    {
        const bool branch_taken_0x281190 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x281190) {
            ctx->pc = 0x281194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281190u;
            // 0x281194: 0xad3e0000  sw          $fp, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281198u;
            goto label_281198;
        }
    }
    ctx->pc = 0x281198u;
label_281198:
    // 0x281198: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28119c:
    // 0x28119c: 0xdfbf05f0  ld          $ra, 0x5F0($sp)
    ctx->pc = 0x28119cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
    // 0x2811a0: 0xdfbe05e0  ld          $fp, 0x5E0($sp)
    ctx->pc = 0x2811a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1504)));
    // 0x2811a4: 0xdfb705d0  ld          $s7, 0x5D0($sp)
    ctx->pc = 0x2811a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1488)));
    // 0x2811a8: 0xdfb605c0  ld          $s6, 0x5C0($sp)
    ctx->pc = 0x2811a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1472)));
    // 0x2811ac: 0xdfb505b0  ld          $s5, 0x5B0($sp)
    ctx->pc = 0x2811acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1456)));
    // 0x2811b0: 0xdfb405a0  ld          $s4, 0x5A0($sp)
    ctx->pc = 0x2811b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1440)));
    // 0x2811b4: 0xdfb30590  ld          $s3, 0x590($sp)
    ctx->pc = 0x2811b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1424)));
    // 0x2811b8: 0xdfb20580  ld          $s2, 0x580($sp)
    ctx->pc = 0x2811b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1408)));
    // 0x2811bc: 0xdfb10570  ld          $s1, 0x570($sp)
    ctx->pc = 0x2811bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1392)));
    // 0x2811c0: 0xdfb00560  ld          $s0, 0x560($sp)
    ctx->pc = 0x2811c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1376)));
    // 0x2811c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2811C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2811C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2811C4u;
            // 0x2811c8: 0x27bd0600  addiu       $sp, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x280D10u: goto label_280d10;
            case 0x280D58u: goto label_280d58;
            case 0x280D64u: goto label_280d64;
            case 0x280DCCu: goto label_280dcc;
            case 0x280DE0u: goto label_280de0;
            case 0x280E18u: goto label_280e18;
            case 0x280E7Cu: goto label_280e7c;
            case 0x280EA0u: goto label_280ea0;
            case 0x280EF0u: goto label_280ef0;
            case 0x280F18u: goto label_280f18;
            case 0x280F44u: goto label_280f44;
            case 0x280F4Cu: goto label_280f4c;
            case 0x280F58u: goto label_280f58;
            case 0x280F80u: goto label_280f80;
            case 0x280F94u: goto label_280f94;
            case 0x280FF0u: goto label_280ff0;
            case 0x280FF4u: goto label_280ff4;
            case 0x28102Cu: goto label_28102c;
            case 0x2810D0u: goto label_2810d0;
            case 0x2810E0u: goto label_2810e0;
            case 0x281104u: goto label_281104;
            case 0x281108u: goto label_281108;
            case 0x281128u: goto label_281128;
            case 0x281158u: goto label_281158;
            case 0x281164u: goto label_281164;
            case 0x281170u: goto label_281170;
            case 0x281180u: goto label_281180;
            case 0x281184u: goto label_281184;
            case 0x28118Cu: goto label_28118c;
            case 0x281190u: goto label_281190;
            case 0x281198u: goto label_281198;
            case 0x28119Cu: goto label_28119c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2811CCu;
    // 0x2811cc: 0x0  nop
    ctx->pc = 0x2811ccu;
    // NOP
}
