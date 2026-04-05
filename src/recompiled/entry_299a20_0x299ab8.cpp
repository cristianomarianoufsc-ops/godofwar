#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_299a20
// Address: 0x299a20 - 0x299ab8
void entry_299a20_0x299ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_299a20_0x299ab8");
#endif

    ctx->pc = 0x299a20u;

    // 0x299a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299a24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x299a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299a2c: 0xc0a648c  jal         func_299230
    ctx->pc = 0x299A2Cu;
    SET_GPR_U32(ctx, 31, 0x299A34u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A34u; }
        if (ctx->pc != 0x299A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A34u; }
        if (ctx->pc != 0x299A34u) { return; }
    }
    ctx->pc = 0x299A34u;
    // 0x299a34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x299a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a38: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x299a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x299a3c: 0x34421010  ori         $v0, $v0, 0x1010
    ctx->pc = 0x299a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4112);
    // 0x299a40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x299a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x299a44: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x299a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x299a48: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x299A48u;
    {
        const bool branch_taken_0x299a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x299a48) {
            ctx->pc = 0x299A68u;
            goto label_299a68;
        }
    }
    ctx->pc = 0x299A50u;
    // 0x299a50: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x299A50u;
    {
        const bool branch_taken_0x299a50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x299A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A50u;
            // 0x299a54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a50) {
            ctx->pc = 0x299AA0u;
            goto label_299aa0;
        }
    }
    ctx->pc = 0x299A58u;
    // 0x299a58: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x299A58u;
    SET_GPR_U32(ctx, 31, 0x299A60u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A60u; }
        if (ctx->pc != 0x299A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A60u; }
        if (ctx->pc != 0x299A60u) { return; }
    }
    ctx->pc = 0x299A60u;
    // 0x299a60: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x299A60u;
    {
        const bool branch_taken_0x299a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A60u;
            // 0x299a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a60) {
            ctx->pc = 0x299AA0u;
            goto label_299aa0;
        }
    }
    ctx->pc = 0x299A68u;
label_299a68:
    // 0x299a68: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x299a68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x299a6c: 0x3484f3ff  ori         $a0, $a0, 0xF3FF
    ctx->pc = 0x299a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62463);
    // 0x299a70: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x299a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x299a74: 0xc0a6628  jal         func_2998A0
    ctx->pc = 0x299A74u;
    SET_GPR_U32(ctx, 31, 0x299A7Cu);
    ctx->pc = 0x299A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299A74u;
            // 0x299a78: 0x34840080  ori         $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2998A0u;
    if (runtime->hasFunction(0x2998A0u)) {
        auto targetFn = runtime->lookupFunction(0x2998A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A7Cu; }
        if (ctx->pc != 0x299A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2998a0_0x2998b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A7Cu; }
        if (ctx->pc != 0x299A7Cu) { return; }
    }
    ctx->pc = 0x299A7Cu;
    // 0x299a7c: 0xc0a67ec  jal         func_299FB0
    ctx->pc = 0x299A7Cu;
    SET_GPR_U32(ctx, 31, 0x299A84u);
    ctx->pc = 0x299FB0u;
    if (runtime->hasFunction(0x299FB0u)) {
        auto targetFn = runtime->lookupFunction(0x299FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A84u; }
        if (ctx->pc != 0x299A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299fb0_0x29a008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A84u; }
        if (ctx->pc != 0x299A84u) { return; }
    }
    ctx->pc = 0x299A84u;
    // 0x299a84: 0xc0a66ae  jal         func_299AB8
    ctx->pc = 0x299A84u;
    SET_GPR_U32(ctx, 31, 0x299A8Cu);
    ctx->pc = 0x299A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299A84u;
            // 0x299a88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299AB8u;
    if (runtime->hasFunction(0x299AB8u)) {
        auto targetFn = runtime->lookupFunction(0x299AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A8Cu; }
        if (ctx->pc != 0x299A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299ab8_0x299c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A8Cu; }
        if (ctx->pc != 0x299A8Cu) { return; }
    }
    ctx->pc = 0x299A8Cu;
    // 0x299a8c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299A8Cu;
    {
        const bool branch_taken_0x299a8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x299A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299A8Cu;
            // 0x299a90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299a8c) {
            ctx->pc = 0x299AA0u;
            goto label_299aa0;
        }
    }
    ctx->pc = 0x299A94u;
    // 0x299a94: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x299A94u;
    SET_GPR_U32(ctx, 31, 0x299A9Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A9Cu; }
        if (ctx->pc != 0x299A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299A9Cu; }
        if (ctx->pc != 0x299A9Cu) { return; }
    }
    ctx->pc = 0x299A9Cu;
    // 0x299a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x299a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_299aa0:
    // 0x299aa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x299AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299AA8u;
            // 0x299aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299A68u: goto label_299a68;
            case 0x299AA0u: goto label_299aa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299AB0u;
    // 0x299ab0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x299ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x299ab4: 0x0  nop
    ctx->pc = 0x299ab4u;
    // NOP
}
