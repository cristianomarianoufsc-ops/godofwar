#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_282ca0
// Address: 0x282ca0 - 0x282dd0
void entry_282ca0_0x282dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_282ca0_0x282dd0");
#endif

    ctx->pc = 0x282ca0u;

    // 0x282ca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x282ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x282ca4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x282ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x282ca8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x282ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x282cac: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x282cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x282cb0: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x282cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x282cb4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x282cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x282cb8: 0x24712748  addiu       $s1, $v1, 0x2748
    ctx->pc = 0x282cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 10056));
    // 0x282cbc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x282cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x282cc0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x282cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x282cc4: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x282cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x282cc8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x282cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x282ccc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x282cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282cd0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x282cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x282cd4: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x282cd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x282cd8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x282cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x282cdc: 0xc09ecae  jal         func_27B2B8
    ctx->pc = 0x282CDCu;
    SET_GPR_U32(ctx, 31, 0x282CE4u);
    ctx->pc = 0x282CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282CDCu;
            // 0x282ce0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B2B8u;
    if (runtime->hasFunction(0x27B2B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B2B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CE4u; }
        if (ctx->pc != 0x282CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B2B8_0x27b2b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282CE4u; }
        if (ctx->pc != 0x282CE4u) { return; }
    }
    ctx->pc = 0x282CE4u;
    // 0x282ce4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x282ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x282ce8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x282CE8u;
    {
        const bool branch_taken_0x282ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x282CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CE8u;
            // 0x282cec: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282ce8) {
            ctx->pc = 0x282CF8u;
            goto label_282cf8;
        }
    }
    ctx->pc = 0x282CF0u;
    // 0x282cf0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x282CF0u;
    {
        const bool branch_taken_0x282cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282CF0u;
            // 0x282cf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282cf0) {
            ctx->pc = 0x282DACu;
            goto label_282dac;
        }
    }
    ctx->pc = 0x282CF8u;
label_282cf8:
    // 0x282cf8: 0x3c130032  lui         $s3, 0x32
    ctx->pc = 0x282cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)50 << 16));
    // 0x282cfc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x282cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d00: 0x8c890010  lw          $t1, 0x10($a0)
    ctx->pc = 0x282d00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x282d04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x282d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d08: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x282d08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282d0c: 0x8c68000c  lw          $t0, 0xC($v1)
    ctx->pc = 0x282d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x282d10: 0x266227c0  addiu       $v0, $s3, 0x27C0
    ctx->pc = 0x282d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282d14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x282d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x282d18: 0xac540020  sw          $s4, 0x20($v0)
    ctx->pc = 0x282d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 20));
    // 0x282d1c: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x282d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x282d20: 0x24072080  addiu       $a3, $zero, 0x2080
    ctx->pc = 0x282d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x282d24: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x282d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x282d28: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x282d28u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x282d2c: 0xac48000c  sw          $t0, 0xC($v0)
    ctx->pc = 0x282d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 8));
    // 0x282d30: 0x26104840  addiu       $s0, $s0, 0x4840
    ctx->pc = 0x282d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x282d34: 0xac490010  sw          $t1, 0x10($v0)
    ctx->pc = 0x282d34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 9));
    // 0x282d38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d3c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x282d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x282d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x282d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d44: 0xae6027c0  sw          $zero, 0x27C0($s3)
    ctx->pc = 0x282d44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10176), GPR_U32(ctx, 0));
    // 0x282d48: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x282d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x282d4c: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x282d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x282d50: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x282d50u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x282d54: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x282d54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x282d58: 0x3c150028  lui         $s5, 0x28
    ctx->pc = 0x282d58u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)40 << 16));
    // 0x282d5c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x282d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x282d60: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x282D60u;
    SET_GPR_U32(ctx, 31, 0x282D68u);
    ctx->pc = 0x282D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D60u;
            // 0x282d64: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D68u; }
        if (ctx->pc != 0x282D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D68u; }
        if (ctx->pc != 0x282D68u) { return; }
    }
    ctx->pc = 0x282D68u;
    // 0x282d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x282d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d6c: 0xc0a5118  jal         func_294460
    ctx->pc = 0x282D6Cu;
    SET_GPR_U32(ctx, 31, 0x282D74u);
    ctx->pc = 0x282D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D6Cu;
            // 0x282d70: 0x248500ff  addiu       $a1, $a0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D74u; }
        if (ctx->pc != 0x282D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D74u; }
        if (ctx->pc != 0x282D74u) { return; }
    }
    ctx->pc = 0x282D74u;
    // 0x282d74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x282d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x282d78: 0xae223624  sw          $v0, 0x3624($s1)
    ctx->pc = 0x282d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 13860), GPR_U32(ctx, 2));
    // 0x282d7c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x282d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_282d80:
    // 0x282d80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x282d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282d84: 0x8e253624  lw          $a1, 0x3624($s1)
    ctx->pc = 0x282d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 13860)));
    // 0x282d88: 0x266727c0  addiu       $a3, $s3, 0x27C0
    ctx->pc = 0x282d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 10176));
    // 0x282d8c: 0xc09ed5a  jal         func_27B568
    ctx->pc = 0x282D8Cu;
    SET_GPR_U32(ctx, 31, 0x282D94u);
    ctx->pc = 0x282D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282D8Cu;
            // 0x282d90: 0x26a82118  addiu       $t0, $s5, 0x2118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 8472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B568u;
    if (runtime->hasFunction(0x27B568u)) {
        auto targetFn = runtime->lookupFunction(0x27B568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D94u; }
        if (ctx->pc != 0x282D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027B568_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282D94u; }
        if (ctx->pc != 0x282D94u) { return; }
    }
    ctx->pc = 0x282D94u;
    // 0x282d94: 0x5454fffa  bnel        $v0, $s4, . + 4 + (-0x6 << 2)
    ctx->pc = 0x282D94u;
    {
        const bool branch_taken_0x282d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x282d94) {
            ctx->pc = 0x282D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282D94u;
            // 0x282d98: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282D80u;
            runtime->cooperativeGuestYield();
            goto label_282d80;
        }
    }
    ctx->pc = 0x282D9Cu;
    // 0x282d9c: 0xc0a07fc  jal         func_281FF0
    ctx->pc = 0x282D9Cu;
    SET_GPR_U32(ctx, 31, 0x282DA4u);
    ctx->pc = 0x281FF0u;
    if (runtime->hasFunction(0x281FF0u)) {
        auto targetFn = runtime->lookupFunction(0x281FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DA4u; }
        if (ctx->pc != 0x282DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FF0_0x281ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282DA4u; }
        if (ctx->pc != 0x282DA4u) { return; }
    }
    ctx->pc = 0x282DA4u;
    // 0x282da4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x282da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x282da8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x282da8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_282dac:
    // 0x282dac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x282dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x282db0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x282db0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x282db4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x282db4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282db8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x282db8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x282dbc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x282dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x282dc0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x282dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282dc4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x282dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x282DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282DC8u;
            // 0x282dcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282CF8u: goto label_282cf8;
            case 0x282D80u: goto label_282d80;
            case 0x282DACu: goto label_282dac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x282DD0u;
}
