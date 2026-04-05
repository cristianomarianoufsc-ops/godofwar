#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172DF0
// Address: 0x172df0 - 0x173018
void sub_00172DF0_0x172df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172DF0_0x172df0");
#endif

    ctx->pc = 0x172df0u;

    // 0x172df0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x172df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x172df4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x172df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x172df8: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x172df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x172dfc: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x172dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x172e00: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x172e00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e04: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x172e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x172e08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e0c: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x172e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x172e10: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x172e10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172e14: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x172e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x172e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x172e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e1c: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x172e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x172e20: 0x24a52658  addiu       $a1, $a1, 0x2658
    ctx->pc = 0x172e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9816));
    // 0x172e24: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x172e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x172e28: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x172e28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e2c: 0x7fb70130  sq          $s7, 0x130($sp)
    ctx->pc = 0x172e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 23));
    // 0x172e30: 0x26960004  addiu       $s6, $s4, 0x4
    ctx->pc = 0x172e30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x172e34: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x172e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x172e38: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x172e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x172e3c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x172e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x172e40: 0x2697000c  addiu       $s7, $s4, 0xC
    ctx->pc = 0x172e40u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x172e44: 0xaec00004  sw          $zero, 0x4($s6)
    ctx->pc = 0x172e44u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 0));
    // 0x172e48: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x172e48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
    // 0x172e4c: 0xae80002c  sw          $zero, 0x2C($s4)
    ctx->pc = 0x172e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 0));
    // 0x172e50: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x172e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x172e54: 0xae870030  sw          $a3, 0x30($s4)
    ctx->pc = 0x172e54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 7));
    // 0x172e58: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x172E58u;
    SET_GPR_U32(ctx, 31, 0x172E60u);
    ctx->pc = 0x172E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E58u;
            // 0x172e5c: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E60u; }
        if (ctx->pc != 0x172E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E60u; }
        if (ctx->pc != 0x172E60u) { return; }
    }
    ctx->pc = 0x172E60u;
    // 0x172e60: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x172e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x172e64: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x172E64u;
    SET_GPR_U32(ctx, 31, 0x172E6Cu);
    ctx->pc = 0x172E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E64u;
            // 0x172e68: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E6Cu; }
        if (ctx->pc != 0x172E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E6Cu; }
        if (ctx->pc != 0x172E6Cu) { return; }
    }
    ctx->pc = 0x172E6Cu;
    // 0x172e6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x172e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e70: 0xc0a2644  jal         func_289910
    ctx->pc = 0x172E70u;
    SET_GPR_U32(ctx, 31, 0x172E78u);
    ctx->pc = 0x172E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E70u;
            // 0x172e74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E78u; }
        if (ctx->pc != 0x172E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E78u; }
        if (ctx->pc != 0x172E78u) { return; }
    }
    ctx->pc = 0x172E78u;
    // 0x172e78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x172e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x172e7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x172e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e84: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x172E84u;
    SET_GPR_U32(ctx, 31, 0x172E8Cu);
    ctx->pc = 0x172E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E84u;
            // 0x172e88: 0x24a52660  addiu       $a1, $a1, 0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E8Cu; }
        if (ctx->pc != 0x172E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E8Cu; }
        if (ctx->pc != 0x172E8Cu) { return; }
    }
    ctx->pc = 0x172E8Cu;
    // 0x172e8c: 0xc05d656  jal         func_175958
    ctx->pc = 0x172E8Cu;
    SET_GPR_U32(ctx, 31, 0x172E94u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E94u; }
        if (ctx->pc != 0x172E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172E94u; }
        if (ctx->pc != 0x172E94u) { return; }
    }
    ctx->pc = 0x172E94u;
    // 0x172e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x172e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172e9c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x172E9Cu;
    SET_GPR_U32(ctx, 31, 0x172EA4u);
    ctx->pc = 0x172EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172E9Cu;
            // 0x172ea0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EA4u; }
        if (ctx->pc != 0x172EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EA4u; }
        if (ctx->pc != 0x172EA4u) { return; }
    }
    ctx->pc = 0x172EA4u;
    // 0x172ea4: 0x8eb00004  lw          $s0, 0x4($s5)
    ctx->pc = 0x172ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x172ea8: 0xae900028  sw          $s0, 0x28($s4)
    ctx->pc = 0x172ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 16));
    // 0x172eac: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x172eacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x172eb0: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x172EB0u;
    SET_GPR_U32(ctx, 31, 0x172EB8u);
    ctx->pc = 0x172EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172EB0u;
            // 0x172eb4: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EB8u; }
        if (ctx->pc != 0x172EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172EB8u; }
        if (ctx->pc != 0x172EB8u) { return; }
    }
    ctx->pc = 0x172EB8u;
    // 0x172eb8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x172eb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ebc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x172EBCu;
    {
        const bool branch_taken_0x172ebc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EBCu;
            // 0x172ec0: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ebc) {
            ctx->pc = 0x172EE4u;
            goto label_172ee4;
        }
    }
    ctx->pc = 0x172EC4u;
    // 0x172ec4: 0x0  nop
    ctx->pc = 0x172ec4u;
    // NOP
label_172ec8:
    // 0x172ec8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ecc: 0xc05cd2a  jal         func_1734A8
    ctx->pc = 0x172ECCu;
    SET_GPR_U32(ctx, 31, 0x172ED4u);
    ctx->pc = 0x172ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172ECCu;
            // 0x172ed0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1734A8u;
    if (runtime->hasFunction(0x1734A8u)) {
        auto targetFn = runtime->lookupFunction(0x1734A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172ED4u; }
        if (ctx->pc != 0x172ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1734a8_0x1734c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172ED4u; }
        if (ctx->pc != 0x172ED4u) { return; }
    }
    ctx->pc = 0x172ED4u;
    // 0x172ed4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x172ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x172ed8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x172ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x172edc: 0x1642fffa  bne         $s2, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x172EDCu;
    {
        const bool branch_taken_0x172edc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x172EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EDCu;
            // 0x172ee0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172edc) {
            ctx->pc = 0x172EC8u;
            runtime->cooperativeGuestYield();
            goto label_172ec8;
        }
    }
    ctx->pc = 0x172EE4u;
label_172ee4:
    // 0x172ee4: 0xae800024  sw          $zero, 0x24($s4)
    ctx->pc = 0x172ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 0));
    // 0x172ee8: 0xae93002c  sw          $s3, 0x2C($s4)
    ctx->pc = 0x172ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 19));
    // 0x172eec: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x172eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x172ef0: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x172EF0u;
    {
        const bool branch_taken_0x172ef0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172EF0u;
            // 0x172ef4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ef0) {
            ctx->pc = 0x172F54u;
            goto label_172f54;
        }
    }
    ctx->pc = 0x172EF8u;
    // 0x172ef8: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x172ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x172efc: 0x0  nop
    ctx->pc = 0x172efcu;
    // NOP
label_172f00:
    // 0x172f00: 0x8e91002c  lw          $s1, 0x2C($s4)
    ctx->pc = 0x172f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x172f04: 0x2508018  mult        $s0, $s2, $s0
    ctx->pc = 0x172f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x172f08: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x172f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x172f0c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x172f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x172f10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x172f10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x172f14: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x172f14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x172f18: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x172f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x172f1c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x172f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x172f20: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x172f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x172f24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x172f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x172f28: 0xc05d656  jal         func_175958
    ctx->pc = 0x172F28u;
    SET_GPR_U32(ctx, 31, 0x172F30u);
    ctx->pc = 0x172F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F28u;
            // 0x172f2c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F30u; }
        if (ctx->pc != 0x172F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F30u; }
        if (ctx->pc != 0x172F30u) { return; }
    }
    ctx->pc = 0x172F30u;
    // 0x172f30: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x172f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x172f34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x172f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172f38: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x172f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x172f3c: 0xc05d6ce  jal         func_175B38
    ctx->pc = 0x172F3Cu;
    SET_GPR_U32(ctx, 31, 0x172F44u);
    ctx->pc = 0x172F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172F3Cu;
            // 0x172f40: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175B38u;
    if (runtime->hasFunction(0x175B38u)) {
        auto targetFn = runtime->lookupFunction(0x175B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F44u; }
        if (ctx->pc != 0x172F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175B38_0x175b38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172F44u; }
        if (ctx->pc != 0x172F44u) { return; }
    }
    ctx->pc = 0x172F44u;
    // 0x172f44: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x172f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x172f48: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x172f48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x172f4c: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x172F4Cu;
    {
        const bool branch_taken_0x172f4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172f4c) {
            ctx->pc = 0x172F50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172F4Cu;
            // 0x172f50: 0x2410001c  addiu       $s0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172F00u;
            runtime->cooperativeGuestYield();
            goto label_172f00;
        }
    }
    ctx->pc = 0x172F54u;
label_172f54:
    // 0x172f54: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172f58: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x172f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x172f5c: 0x8c51c388  lw          $s1, -0x3C78($v0)
    ctx->pc = 0x172f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951816)));
    // 0x172f60: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x172f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172f64: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x172f64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x172f68: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x172f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x172f6c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x172f6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x172f70: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x172f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x172f74: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x172f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x172f78: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x172f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x172f7c: 0x2463d8c8  addiu       $v1, $v1, -0x2738
    ctx->pc = 0x172f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957256));
    // 0x172f80: 0x8c53002c  lw          $s3, 0x2C($v0)
    ctx->pc = 0x172f80u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x172f84: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x172f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x172f88: 0xac760004  sw          $s6, 0x4($v1)
    ctx->pc = 0x172f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 22));
    // 0x172f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x172f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x172f90: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x172f90u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x172f94: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x172f94u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
    // 0x172f98: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x172f98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x172f9c: 0xae840034  sw          $a0, 0x34($s4)
    ctx->pc = 0x172f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 4));
    // 0x172fa0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x172fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x172fa4: 0xac51c390  sw          $s1, -0x3C70($v0)
    ctx->pc = 0x172fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294951824), GPR_U32(ctx, 17));
    // 0x172fa8: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x172fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fac: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x172facu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x172fb0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x172fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x172fb4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x172fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fb8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x172FB8u;
    SET_GPR_U32(ctx, 31, 0x172FC0u);
    ctx->pc = 0x172FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172FB8u;
            // 0x172fbc: 0x26102d60  addiu       $s0, $s0, 0x2D60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FC0u; }
        if (ctx->pc != 0x172FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FC0u; }
        if (ctx->pc != 0x172FC0u) { return; }
    }
    ctx->pc = 0x172FC0u;
    // 0x172fc0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x172fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x172fc4: 0xafb10110  sw          $s1, 0x110($sp)
    ctx->pc = 0x172fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 17));
    // 0x172fc8: 0xafb30114  sw          $s3, 0x114($sp)
    ctx->pc = 0x172fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 19));
    // 0x172fcc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x172fccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fd0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x172fd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fd4: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x172fd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x172fd8: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x172fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x172fdc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x172fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x172fe0: 0xc09b2a4  jal         func_26CA90
    ctx->pc = 0x172FE0u;
    SET_GPR_U32(ctx, 31, 0x172FE8u);
    ctx->pc = 0x172FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172FE0u;
            // 0x172fe4: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FE8u; }
        if (ctx->pc != 0x172FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172FE8u; }
        if (ctx->pc != 0x172FE8u) { return; }
    }
    ctx->pc = 0x172FE8u;
    // 0x172fe8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x172fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172fec: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x172fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x172ff0: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x172ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x172ff4: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x172ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x172ff8: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x172ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x172ffc: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x172ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x173000: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x173000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x173004: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x173004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x173008: 0x7bb70130  lq          $s7, 0x130($sp)
    ctx->pc = 0x173008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17300c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x17300cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x173010: 0x3e00008  jr          $ra
    ctx->pc = 0x173010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173010u;
            // 0x173014: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172EC8u: goto label_172ec8;
            case 0x172EE4u: goto label_172ee4;
            case 0x172F00u: goto label_172f00;
            case 0x172F54u: goto label_172f54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173018u;
}
