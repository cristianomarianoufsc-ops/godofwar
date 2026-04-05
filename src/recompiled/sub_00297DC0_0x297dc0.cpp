#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00297DC0
// Address: 0x297dc0 - 0x297fc8
void sub_00297DC0_0x297dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297DC0_0x297dc0");
#endif

    ctx->pc = 0x297dc0u;

    // 0x297dc0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x297dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x297dc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297dc8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x297dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297dcc: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x297dccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x297dd0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x297dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x297dd4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x297dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x297dd8: 0x2611aac0  addiu       $s1, $s0, -0x5540
    ctx->pc = 0x297dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945472));
    // 0x297ddc: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x297ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x297de0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x297de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x297de4: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x297DE4u;
    SET_GPR_U32(ctx, 31, 0x297DECu);
    ctx->pc = 0x297DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297DE4u;
            // 0x297de8: 0xffb20040  sd          $s2, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DECu; }
        if (ctx->pc != 0x297DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DECu; }
        if (ctx->pc != 0x297DECu) { return; }
    }
    ctx->pc = 0x297DECu;
    // 0x297dec: 0xae00aac0  sw          $zero, -0x5540($s0)
    ctx->pc = 0x297decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294945472), GPR_U32(ctx, 0));
    // 0x297df0: 0xc0a648c  jal         func_299230
    ctx->pc = 0x297DF0u;
    SET_GPR_U32(ctx, 31, 0x297DF8u);
    ctx->pc = 0x297DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297DF0u;
            // 0x297df4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DF8u; }
        if (ctx->pc != 0x297DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297DF8u; }
        if (ctx->pc != 0x297DF8u) { return; }
    }
    ctx->pc = 0x297DF8u;
    // 0x297df8: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x297df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x297dfc: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x297dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x297e00: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297e00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297e04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x297e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e08: 0x24a57928  addiu       $a1, $a1, 0x7928
    ctx->pc = 0x297e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31016));
    // 0x297e0c: 0x24c6aa80  addiu       $a2, $a2, -0x5580
    ctx->pc = 0x297e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945408));
    // 0x297e10: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x297E10u;
    SET_GPR_U32(ctx, 31, 0x297E18u);
    ctx->pc = 0x297E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E10u;
            // 0x297e14: 0x34840011  ori         $a0, $a0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)17);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E18u; }
        if (ctx->pc != 0x297E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E18u; }
        if (ctx->pc != 0x297E18u) { return; }
    }
    ctx->pc = 0x297E18u;
    // 0x297e18: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x297e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x297e1c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x297e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x297e20: 0x24a57d78  addiu       $a1, $a1, 0x7D78
    ctx->pc = 0x297e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32120));
    // 0x297e24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x297e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e28: 0xc0a59f4  jal         func_2967D0
    ctx->pc = 0x297E28u;
    SET_GPR_U32(ctx, 31, 0x297E30u);
    ctx->pc = 0x297E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E28u;
            // 0x297e2c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2967D0u;
    if (runtime->hasFunction(0x2967D0u)) {
        auto targetFn = runtime->lookupFunction(0x2967D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E30u; }
        if (ctx->pc != 0x297E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2967d0_0x296848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E30u; }
        if (ctx->pc != 0x297E30u) { return; }
    }
    ctx->pc = 0x297E30u;
    // 0x297e30: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x297E30u;
    {
        const bool branch_taken_0x297e30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E30u;
            // 0x297e34: 0x3c130033  lui         $s3, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e30) {
            ctx->pc = 0x297E6Cu;
            goto label_297e6c;
        }
    }
    ctx->pc = 0x297E38u;
    // 0x297e38: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x297E38u;
    SET_GPR_U32(ctx, 31, 0x297E40u);
    ctx->pc = 0x297E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E38u;
            // 0x297e3c: 0x2670aa40  addiu       $s0, $s3, -0x55C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E40u; }
        if (ctx->pc != 0x297E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E40u; }
        if (ctx->pc != 0x297E40u) { return; }
    }
    ctx->pc = 0x297E40u;
    // 0x297e40: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x297E40u;
    {
        const bool branch_taken_0x297e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297e40) {
            ctx->pc = 0x297E70u;
            goto label_297e70;
        }
    }
    ctx->pc = 0x297E48u;
label_297e48:
    // 0x297e48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x297e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297e4c: 0x0  nop
    ctx->pc = 0x297e4cu;
    // NOP
label_297e50:
    // 0x297e50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x297e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x297e54: 0x0  nop
    ctx->pc = 0x297e54u;
    // NOP
    // 0x297e58: 0x0  nop
    ctx->pc = 0x297e58u;
    // NOP
    // 0x297e5c: 0x0  nop
    ctx->pc = 0x297e5cu;
    // NOP
    // 0x297e60: 0x0  nop
    ctx->pc = 0x297e60u;
    // NOP
    // 0x297e64: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x297E64u;
    {
        const bool branch_taken_0x297e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x297e64) {
            ctx->pc = 0x297E50u;
            runtime->cooperativeGuestYield();
            goto label_297e50;
        }
    }
    ctx->pc = 0x297E6Cu;
label_297e6c:
    // 0x297e6c: 0x2670aa40  addiu       $s0, $s3, -0x55C0
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945344));
label_297e70:
    // 0x297e70: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x297e70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x297e74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e78: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x297e78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x297e7c: 0xc0a5ca4  jal         func_297290
    ctx->pc = 0x297E7Cu;
    SET_GPR_U32(ctx, 31, 0x297E84u);
    ctx->pc = 0x297E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E7Cu;
            // 0x297e80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297290u;
    if (runtime->hasFunction(0x297290u)) {
        auto targetFn = runtime->lookupFunction(0x297290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E84u; }
        if (ctx->pc != 0x297E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297290_0x297290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297E84u; }
        if (ctx->pc != 0x297E84u) { return; }
    }
    ctx->pc = 0x297E84u;
    // 0x297e84: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x297E84u;
    {
        const bool branch_taken_0x297e84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x297E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E84u;
            // 0x297e88: 0x2402ffea  addiu       $v0, $zero, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e84) {
            ctx->pc = 0x297FA8u;
            goto label_297fa8;
        }
    }
    ctx->pc = 0x297E8Cu;
    // 0x297e8c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x297e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x297e90: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x297E90u;
    {
        const bool branch_taken_0x297e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297E90u;
            // 0x297e94: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e90) {
            ctx->pc = 0x297E48u;
            runtime->cooperativeGuestYield();
            goto label_297e48;
        }
    }
    ctx->pc = 0x297E98u;
    // 0x297e98: 0xc0a5db2  jal         func_2976C8
    ctx->pc = 0x297E98u;
    SET_GPR_U32(ctx, 31, 0x297EA0u);
    ctx->pc = 0x297E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297E98u;
            // 0x297e9c: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2976C8u;
    if (runtime->hasFunction(0x2976C8u)) {
        auto targetFn = runtime->lookupFunction(0x2976C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA0u; }
        if (ctx->pc != 0x297EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2976c8_0x297740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA0u; }
        if (ctx->pc != 0x297EA0u) { return; }
    }
    ctx->pc = 0x297EA0u;
    // 0x297ea0: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x297EA0u;
    SET_GPR_U32(ctx, 31, 0x297EA8u);
    ctx->pc = 0x297EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EA0u;
            // 0x297ea4: 0x8e844b50  lw          $a0, 0x4B50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297EA8u; }
        if (ctx->pc != 0x297EA8u) { return; }
    }
    ctx->pc = 0x297EA8u;
    // 0x297ea8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x297ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x297eac: 0x2463a840  addiu       $v1, $v1, -0x57C0
    ctx->pc = 0x297eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944832));
    // 0x297eb0: 0x24640200  addiu       $a0, $v1, 0x200
    ctx->pc = 0x297eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
    // 0x297eb4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x297eb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x297eb8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x297EB8u;
    {
        const bool branch_taken_0x297eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297EB8u;
            // 0x297ebc: 0x3c120033  lui         $s2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297eb8) {
            ctx->pc = 0x297EECu;
            goto label_297eec;
        }
    }
    ctx->pc = 0x297EC0u;
    // 0x297ec0: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x297ec0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x297ec4: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x297ec4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
label_297ec8:
    // 0x297ec8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x297ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x297ecc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x297eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x297ed0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x297ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x297ed4: 0x0  nop
    ctx->pc = 0x297ed4u;
    // NOP
    // 0x297ed8: 0x0  nop
    ctx->pc = 0x297ed8u;
    // NOP
    // 0x297edc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x297EDCu;
    {
        const bool branch_taken_0x297edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x297edc) {
            ctx->pc = 0x297EC8u;
            runtime->cooperativeGuestYield();
            goto label_297ec8;
        }
    }
    ctx->pc = 0x297EE4u;
    // 0x297ee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297EE4u;
    {
        const bool branch_taken_0x297ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297EE4u;
            // 0x297ee8: 0x8e844b50  lw          $a0, 0x4B50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ee4) {
            ctx->pc = 0x297EF8u;
            goto label_297ef8;
        }
    }
    ctx->pc = 0x297EECu;
label_297eec:
    // 0x297eec: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x297eecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x297ef0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x297ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x297ef4: 0x8e844b50  lw          $a0, 0x4B50($s4)
    ctx->pc = 0x297ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 19280)));
label_297ef8:
    // 0x297ef8: 0xc0a4f10  jal         func_293C40
    ctx->pc = 0x297EF8u;
    SET_GPR_U32(ctx, 31, 0x297F00u);
    ctx->pc = 0x297EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297EF8u;
            // 0x297efc: 0x26109f80  addiu       $s0, $s0, -0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C40u;
    if (runtime->hasFunction(0x293C40u)) {
        auto targetFn = runtime->lookupFunction(0x293C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F00u; }
        if (ctx->pc != 0x297F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c40_0x293c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F00u; }
        if (ctx->pc != 0x297F00u) { return; }
    }
    ctx->pc = 0x297F00u;
    // 0x297f00: 0x26239fc0  addiu       $v1, $s1, -0x6040
    ctx->pc = 0x297f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942656));
    // 0x297f04: 0x26479300  addiu       $a3, $s2, -0x6D00
    ctx->pc = 0x297f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939392));
    // 0x297f08: 0xae439300  sw          $v1, -0x6D00($s2)
    ctx->pc = 0x297f08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294939392), GPR_U32(ctx, 3));
    // 0x297f0c: 0x2664aa40  addiu       $a0, $s3, -0x55C0
    ctx->pc = 0x297f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945344));
    // 0x297f10: 0x24630440  addiu       $v1, $v1, 0x440
    ctx->pc = 0x297f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x297f14: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x297f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x297f18: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x297f18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x297f1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x297f1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x297f20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x297f24: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x297f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x297f28: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x297f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x297f2c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x297f2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f30: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x297f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x297f34: 0xc0a5df2  jal         func_2977C8
    ctx->pc = 0x297F34u;
    SET_GPR_U32(ctx, 31, 0x297F3Cu);
    ctx->pc = 0x297F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x297F34u;
            // 0x297f38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2977C8u;
    if (runtime->hasFunction(0x2977C8u)) {
        auto targetFn = runtime->lookupFunction(0x2977C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F3Cu; }
        if (ctx->pc != 0x297F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002977C8_0x2977c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297F3Cu; }
        if (ctx->pc != 0x297F3Cu) { return; }
    }
    ctx->pc = 0x297F3Cu;
    // 0x297f3c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x297F3Cu;
    {
        const bool branch_taken_0x297f3c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x297F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F3Cu;
            // 0x297f40: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f3c) {
            ctx->pc = 0x297F50u;
            goto label_297f50;
        }
    }
    ctx->pc = 0x297F44u;
    // 0x297f44: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x297f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x297f48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x297F48u;
    {
        const bool branch_taken_0x297f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297F48u;
            // 0x297f4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297f48) {
            ctx->pc = 0x297FA8u;
            goto label_297fa8;
        }
    }
    ctx->pc = 0x297F50u;
label_297f50:
    // 0x297f50: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x297f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x297f54: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x297f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x297f58: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x297f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x297f5c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x297f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x297f60: 0x24a8aa68  addiu       $t0, $a1, -0x5598
    ctx->pc = 0x297f60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945384));
    // 0x297f64: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x297f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x297f68: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x297f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x297f6c: 0xa9040003  swl         $a0, 0x3($t0)
    ctx->pc = 0x297f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297f70: 0xb9040000  swr         $a0, 0x0($t0)
    ctx->pc = 0x297f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297f74: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x297f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x297f78: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x297f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x297f7c: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x297f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297f80: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x297f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x297f84: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x297f84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x297f88: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x297f88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x297f8c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x297f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297f90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297f94: 0xaca44b44  sw          $a0, 0x4B44($a1)
    ctx->pc = 0x297f94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 19268), GPR_U32(ctx, 4));
    // 0x297f98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x297f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297f9c: 0x38630002  xori        $v1, $v1, 0x2
    ctx->pc = 0x297f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x297fa0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x297fa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x297fa4: 0xacc34b48  sw          $v1, 0x4B48($a2)
    ctx->pc = 0x297fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 19272), GPR_U32(ctx, 3));
label_297fa8:
    // 0x297fa8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x297fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x297fac: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x297facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x297fb0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x297fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x297fb4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297fb8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x297fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297fbc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x297FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x297FC0u;
            // 0x297fc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297E48u: goto label_297e48;
            case 0x297E50u: goto label_297e50;
            case 0x297E6Cu: goto label_297e6c;
            case 0x297E70u: goto label_297e70;
            case 0x297EC8u: goto label_297ec8;
            case 0x297EECu: goto label_297eec;
            case 0x297EF8u: goto label_297ef8;
            case 0x297F50u: goto label_297f50;
            case 0x297FA8u: goto label_297fa8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297FC8u;
}
