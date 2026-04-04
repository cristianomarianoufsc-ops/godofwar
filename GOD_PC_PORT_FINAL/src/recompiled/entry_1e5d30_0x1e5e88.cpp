#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1e5d30
// Address: 0x1e5d30 - 0x1e5e88
void entry_1e5d30_0x1e5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1e5d30_0x1e5e88");
#endif

    ctx->pc = 0x1e5d30u;

    // 0x1e5d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e5d34: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1e5d34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d38: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e5d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1e5d3c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x1e5d3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e5d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e5d44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e5d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e5d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e5d4c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1e5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e5d50: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x1e5d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x1e5d54: 0x3c05fff0  lui         $a1, 0xFFF0
    ctx->pc = 0x1e5d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65520 << 16));
    // 0x1e5d58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1e5d58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1e5d5c: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x1e5d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1e5d60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e5d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e5d64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e5d68: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e5d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e5d6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1e5d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1e5d70: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x1e5d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e5d74: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E5D74u;
    {
        const bool branch_taken_0x1e5d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5D74u;
            // 0x1e5d78: 0xad030000  sw          $v1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5d74) {
            ctx->pc = 0x1E5D88u;
            goto label_1e5d88;
        }
    }
    ctx->pc = 0x1E5D7Cu;
    // 0x1e5d7c: 0x651024  and         $v0, $v1, $a1
    ctx->pc = 0x1e5d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1e5d80: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1e5d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1e5d84: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1e5d84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_1e5d88:
    // 0x1e5d88: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x1e5d88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1e5d8c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e5d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e5d90: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1e5d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e5d94: 0x3c02ff80  lui         $v0, 0xFF80
    ctx->pc = 0x1e5d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65408 << 16));
    // 0x1e5d98: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x1e5d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1e5d9c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x1e5d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x1e5da0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1e5da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1e5da4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x1e5da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x1e5da8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1e5dac: 0x2404fff8  addiu       $a0, $zero, -0x8
    ctx->pc = 0x1e5dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x1e5db0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e5db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e5db4: 0x30e70007  andi        $a3, $a3, 0x7
    ctx->pc = 0x1e5db4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x1e5db8: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1e5db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1e5dbc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1e5dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1e5dc0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x1e5dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1e5dc4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x1e5dc8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x1e5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1e5dcc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1e5dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1e5dd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1e5dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1e5dd4: 0x635c0  sll         $a2, $a2, 23
    ctx->pc = 0x1e5dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x1e5dd8: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x1e5dd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1e5ddc: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x1e5ddcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x1e5de0: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x1e5de0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x1e5de4: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x1e5de4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x1e5de8: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x1e5de8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x1e5dec: 0xacb00004  sw          $s0, 0x4($a1)
    ctx->pc = 0x1e5decu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 16));
    // 0x1e5df0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1E5DF0u;
    {
        const bool branch_taken_0x1e5df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DF0u;
            // 0x1e5df4: 0xacb10000  sw          $s1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5df0) {
            ctx->pc = 0x1E5E70u;
            goto label_1e5e70;
        }
    }
    ctx->pc = 0x1E5DF8u;
    // 0x1e5df8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x1e5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1e5dfc: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E5DFCu;
    {
        const bool branch_taken_0x1e5dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5DFCu;
            // 0x1e5e00: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5dfc) {
            ctx->pc = 0x1E5E40u;
            goto label_1e5e40;
        }
    }
    ctx->pc = 0x1E5E04u;
    // 0x1e5e04: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e5e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e5e08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e0c: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1e5e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1e5e10: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1e5e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1e5e14: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1e5e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1e5e18: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1e5e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1e5e1c: 0x40f809  jalr        $v0
    ctx->pc = 0x1E5E1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E5E24u);
        ctx->pc = 0x1E5E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E1Cu;
            // 0x1e5e20: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5E24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E70u: goto label_1e5e70;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E24u; }
            if (ctx->pc != 0x1E5E24u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5E24u;
    // 0x1e5e24: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1E5E24u;
    SET_GPR_U32(ctx, 31, 0x1E5E2Cu);
    ctx->pc = 0x1E5E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E24u;
            // 0x1e5e28: 0x8c440094  lw          $a0, 0x94($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E2Cu; }
        if (ctx->pc != 0x1E5E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E2Cu; }
        if (ctx->pc != 0x1E5E2Cu) { return; }
    }
    ctx->pc = 0x1E5E2Cu;
    // 0x1e5e2c: 0xc08ee3a  jal         func_23B8E8
    ctx->pc = 0x1E5E2Cu;
    SET_GPR_U32(ctx, 31, 0x1E5E34u);
    ctx->pc = 0x1E5E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E2Cu;
            // 0x1e5e30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B8E8u;
    if (runtime->hasFunction(0x23B8E8u)) {
        auto targetFn = runtime->lookupFunction(0x23B8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E34u; }
        if (ctx->pc != 0x1E5E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b8e8_0x23b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E34u; }
        if (ctx->pc != 0x1E5E34u) { return; }
    }
    ctx->pc = 0x1E5E34u;
    // 0x1e5e34: 0xae0200fc  sw          $v0, 0xFC($s0)
    ctx->pc = 0x1e5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 2));
    // 0x1e5e38: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e5e3c: 0x0  nop
    ctx->pc = 0x1e5e3cu;
    // NOP
label_1e5e40:
    // 0x1e5e40: 0x8e1000fc  lw          $s0, 0xFC($s0)
    ctx->pc = 0x1e5e40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x1e5e44: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1E5E44u;
    SET_GPR_U32(ctx, 31, 0x1E5E4Cu);
    ctx->pc = 0x1E5E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E44u;
            // 0x1e5e48: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E4Cu; }
        if (ctx->pc != 0x1E5E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5E4Cu; }
        if (ctx->pc != 0x1E5E4Cu) { return; }
    }
    ctx->pc = 0x1E5E4Cu;
    // 0x1e5e4c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1e5e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1e5e50: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1e5e50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1e5e54: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x1e5e54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x1e5e58: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e5e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e5e5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e5e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e5e60: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1e5e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1e5e64: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1e5e64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1e5e68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e5e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1e5e6c: 0x0  nop
    ctx->pc = 0x1e5e6cu;
    // NOP
label_1e5e70:
    // 0x1e5e70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1e5e70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e74: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e5e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e5e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e5e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5e7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e5e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5E80u;
            // 0x1e5e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E5D88u: goto label_1e5d88;
            case 0x1E5E40u: goto label_1e5e40;
            case 0x1E5E70u: goto label_1e5e70;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E5E88u;
}
