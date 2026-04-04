#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182970
// Address: 0x182970 - 0x182a10
void sub_00182970_0x182970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182970_0x182970");
#endif

    ctx->pc = 0x182970u;

    // 0x182970: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x182970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x182974: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x182974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x182978: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x182978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x18297c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x18297cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x182980: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x182980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x182984: 0xc060a0c  jal         func_182830
    ctx->pc = 0x182984u;
    SET_GPR_U32(ctx, 31, 0x18298Cu);
    ctx->pc = 0x182988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182984u;
            // 0x182988: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182830u;
    if (runtime->hasFunction(0x182830u)) {
        auto targetFn = runtime->lookupFunction(0x182830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18298Cu; }
        if (ctx->pc != 0x18298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182830_0x182830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18298Cu; }
        if (ctx->pc != 0x18298Cu) { return; }
    }
    ctx->pc = 0x18298Cu;
    // 0x18298c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x18298cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x182990: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x182990u;
    {
        const bool branch_taken_0x182990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182990u;
            // 0x182994: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182990) {
            ctx->pc = 0x1829F8u;
            goto label_1829f8;
        }
    }
    ctx->pc = 0x182998u;
    // 0x182998: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x182998u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18299c: 0x26300012  addiu       $s0, $s1, 0x12
    ctx->pc = 0x18299cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
    // 0x1829a0: 0x96270010  lhu         $a3, 0x10($s1)
    ctx->pc = 0x1829a0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1829a4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1829a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1829a8: 0x24a52d98  addiu       $a1, $a1, 0x2D98
    ctx->pc = 0x1829a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11672));
    // 0x1829ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1829acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829b0: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1829B0u;
    SET_GPR_U32(ctx, 31, 0x1829B8u);
    ctx->pc = 0x1829B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829B0u;
            // 0x1829b4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B8u; }
        if (ctx->pc != 0x1829B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829B8u; }
        if (ctx->pc != 0x1829B8u) { return; }
    }
    ctx->pc = 0x1829B8u;
    // 0x1829b8: 0x96270010  lhu         $a3, 0x10($s1)
    ctx->pc = 0x1829b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1829bc: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1829bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1829c0: 0x24a52db0  addiu       $a1, $a1, 0x2DB0
    ctx->pc = 0x1829c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11696));
    // 0x1829c4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1829c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829c8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x1829C8u;
    SET_GPR_U32(ctx, 31, 0x1829D0u);
    ctx->pc = 0x1829CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829C8u;
            // 0x1829cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829D0u; }
        if (ctx->pc != 0x1829D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829D0u; }
        if (ctx->pc != 0x1829D0u) { return; }
    }
    ctx->pc = 0x1829D0u;
    // 0x1829d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1829d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1829d4: 0x8c42c73c  lw          $v0, -0x38C4($v0)
    ctx->pc = 0x1829d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952764)));
    // 0x1829d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1829D8u;
    {
        const bool branch_taken_0x1829d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1829DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1829D8u;
            // 0x1829dc: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1829d8) {
            ctx->pc = 0x1829F8u;
            goto label_1829f8;
        }
    }
    ctx->pc = 0x1829E0u;
    // 0x1829e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1829e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1829e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1829e8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1829e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1829ec: 0xc05f9e8  jal         func_17E7A0
    ctx->pc = 0x1829ECu;
    SET_GPR_U32(ctx, 31, 0x1829F4u);
    ctx->pc = 0x1829F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1829ECu;
            // 0x1829f0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E7A0u;
    if (runtime->hasFunction(0x17E7A0u)) {
        auto targetFn = runtime->lookupFunction(0x17E7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829F4u; }
        if (ctx->pc != 0x1829F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E7A0_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1829F4u; }
        if (ctx->pc != 0x1829F4u) { return; }
    }
    ctx->pc = 0x1829F4u;
    // 0x1829f4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1829f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1829f8:
    // 0x1829f8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1829f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1829fc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1829fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x182a00: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x182a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x182a04: 0x3e00008  jr          $ra
    ctx->pc = 0x182A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182A04u;
            // 0x182a08: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1829F8u: goto label_1829f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182A0Cu;
    // 0x182a0c: 0x0  nop
    ctx->pc = 0x182a0cu;
    // NOP
}
