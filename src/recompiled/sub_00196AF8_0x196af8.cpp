#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196AF8
// Address: 0x196af8 - 0x196be8
void sub_00196AF8_0x196af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196AF8_0x196af8");
#endif

    ctx->pc = 0x196af8u;

    // 0x196af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196afc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x196afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x196b00: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x196b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x196b04: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x196b04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x196b08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196b0c: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x196b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x196b10: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x196b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x196b14: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x196b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x196b18: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x196b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x196b1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x196b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x196b20: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x196b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x196b24: 0x24a53900  addiu       $a1, $a1, 0x3900
    ctx->pc = 0x196b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14592));
    // 0x196b28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x196b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x196b2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x196b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x196b30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x196b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x196b34: 0xc061e64  jal         func_187990
    ctx->pc = 0x196B34u;
    SET_GPR_U32(ctx, 31, 0x196B3Cu);
    ctx->pc = 0x196B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196B34u;
            // 0x196b38: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B3Cu; }
        if (ctx->pc != 0x196B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B3Cu; }
        if (ctx->pc != 0x196B3Cu) { return; }
    }
    ctx->pc = 0x196B3Cu;
    // 0x196b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196b40: 0x3e00008  jr          $ra
    ctx->pc = 0x196B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B40u;
            // 0x196b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196B74u: goto label_196b74;
            case 0x196BD0u: goto label_196bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196B48u;
    // 0x196b48: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x196b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x196b4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196b4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196b50: 0x8c62c99c  lw          $v0, -0x3664($v1)
    ctx->pc = 0x196b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953372)));
    // 0x196b54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196b58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x196b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x196b5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x196B5Cu;
    {
        const bool branch_taken_0x196b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x196B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B5Cu;
            // 0x196b60: 0xac62c99c  sw          $v0, -0x3664($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196b5c) {
            ctx->pc = 0x196B74u;
            goto label_196b74;
        }
    }
    ctx->pc = 0x196B64u;
    // 0x196b64: 0xc065aac  jal         func_196AB0
    ctx->pc = 0x196B64u;
    SET_GPR_U32(ctx, 31, 0x196B6Cu);
    ctx->pc = 0x196AB0u;
    if (runtime->hasFunction(0x196AB0u)) {
        auto targetFn = runtime->lookupFunction(0x196AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B6Cu; }
        if (ctx->pc != 0x196B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196AB0_0x196ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196B6Cu; }
        if (ctx->pc != 0x196B6Cu) { return; }
    }
    ctx->pc = 0x196B6Cu;
    // 0x196b6c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196b70: 0xac40c998  sw          $zero, -0x3668($v0)
    ctx->pc = 0x196b70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953368), GPR_U32(ctx, 0));
label_196b74:
    // 0x196b74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196b78: 0x3e00008  jr          $ra
    ctx->pc = 0x196B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196B78u;
            // 0x196b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196B74u: goto label_196b74;
            case 0x196BD0u: goto label_196bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196B80u;
    // 0x196b80: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x196b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x196b84: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196b84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196b88: 0x8ca2c99c  lw          $v0, -0x3664($a1)
    ctx->pc = 0x196b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953372)));
    // 0x196b8c: 0x3c030019  lui         $v1, 0x19
    ctx->pc = 0x196b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25 << 16));
    // 0x196b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x196b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x196b94: 0x24636b48  addiu       $v1, $v1, 0x6B48
    ctx->pc = 0x196b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27464));
    // 0x196b98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196b9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196ba0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x196ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x196ba4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x196ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x196ba8: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x196ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x196bac: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x196BACu;
    {
        const bool branch_taken_0x196bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x196BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196BACu;
            // 0x196bb0: 0xaca2c99c  sw          $v0, -0x3664($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294953372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196bac) {
            ctx->pc = 0x196BD0u;
            goto label_196bd0;
        }
    }
    ctx->pc = 0x196BB4u;
    // 0x196bb4: 0xc065a74  jal         func_1969D0
    ctx->pc = 0x196BB4u;
    SET_GPR_U32(ctx, 31, 0x196BBCu);
    ctx->pc = 0x1969D0u;
    if (runtime->hasFunction(0x1969D0u)) {
        auto targetFn = runtime->lookupFunction(0x1969D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BBCu; }
        if (ctx->pc != 0x196BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969D0_0x1969d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BBCu; }
        if (ctx->pc != 0x196BBCu) { return; }
    }
    ctx->pc = 0x196BBCu;
    // 0x196bbc: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x196bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x196bc0: 0xc065906  jal         func_196418
    ctx->pc = 0x196BC0u;
    SET_GPR_U32(ctx, 31, 0x196BC8u);
    ctx->pc = 0x196BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196BC0u;
            // 0x196bc4: 0x24843910  addiu       $a0, $a0, 0x3910 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196418u;
    if (runtime->hasFunction(0x196418u)) {
        auto targetFn = runtime->lookupFunction(0x196418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BC8u; }
        if (ctx->pc != 0x196BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196418_0x196418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196BC8u; }
        if (ctx->pc != 0x196BC8u) { return; }
    }
    ctx->pc = 0x196BC8u;
    // 0x196bc8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x196bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x196bcc: 0xac40c998  sw          $zero, -0x3668($v0)
    ctx->pc = 0x196bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953368), GPR_U32(ctx, 0));
label_196bd0:
    // 0x196bd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196bd4: 0xa602002a  sh          $v0, 0x2A($s0)
    ctx->pc = 0x196bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x196bd8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x196bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196bdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196be0: 0x3e00008  jr          $ra
    ctx->pc = 0x196BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196BE0u;
            // 0x196be4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196B74u: goto label_196b74;
            case 0x196BD0u: goto label_196bd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196BE8u;
}
